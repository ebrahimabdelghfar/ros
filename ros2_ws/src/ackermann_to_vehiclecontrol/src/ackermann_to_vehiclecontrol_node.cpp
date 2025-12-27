/**
 * @file ackermann_to_vehiclecontrol_node.cpp
 * @brief ROS2 node that converts AckermannDriveStamped messages to VehicleControl messages
 */

#include <rclcpp/rclcpp.hpp>
#include <ackermann_msgs/msg/ackermann_drive_stamped.hpp>
#include <vehiclecontrol_msgs/msg/vehicle_control.hpp>
#include <cmath>

class AckermannToVehicleControlNode : public rclcpp::Node
{
public:
    AckermannToVehicleControlNode()
        : Node("ackermann_to_vehiclecontrol_node")
    {
        // Declare parameters with default values
        this->declare_parameter<std::string>("input_topic", "/ackermann_cmd");
        this->declare_parameter<std::string>("output_topic", "/vehicle_control");
        this->declare_parameter<double>("max_speed", 20.0);  // m/s for normalizing gas/brake
        this->declare_parameter<double>("max_steering_angle", 30.0);  // rad

        // Get parameters
        std::string input_topic = this->get_parameter("input_topic").as_string();
        std::string output_topic = this->get_parameter("output_topic").as_string();
        max_speed_ = this->get_parameter("max_speed").as_double();
        max_steering_angle_ = this->get_parameter("max_steering_angle").as_double();

        // Create subscriber
        ackermann_sub_ = this->create_subscription<ackermann_msgs::msg::AckermannDriveStamped>(
            input_topic,
            1,
            std::bind(&AckermannToVehicleControlNode::ackermannCallback, this, std::placeholders::_1));

        // Create publisher
        vehicle_control_pub_ = this->create_publisher<vehiclecontrol_msgs::msg::VehicleControl>(
            output_topic,
            1);

        RCLCPP_INFO(this->get_logger(), "Ackermann to VehicleControl node initialized");
        RCLCPP_INFO(this->get_logger(), "Subscribing to: %s", input_topic.c_str());
        RCLCPP_INFO(this->get_logger(), "Publishing to: %s", output_topic.c_str());
    }

private:
    void ackermannCallback(const ackermann_msgs::msg::AckermannDriveStamped::SharedPtr msg)
    {
        auto vehicle_control_msg = vehiclecontrol_msgs::msg::VehicleControl();

        // Enable vehicle control
        vehicle_control_msg.use_vc = true;

        // Set gear selector to Drive
        vehicle_control_msg.selector_ctrl = 1;  // Drive

        // Convert speed to gas/brake
        double speed = msg->drive.speed;
        if (speed >= 0.0) {
            // Forward motion: apply gas
            vehicle_control_msg.gas = std::min(speed / max_speed_, 1.0);
            vehicle_control_msg.brake = 0.0;
        } else {
            // If negative speed, could be braking or reverse
            // Here we interpret it as braking
            vehicle_control_msg.gas = 0.0;
            vehicle_control_msg.brake = std::min(std::abs(speed) / max_speed_, 1.0);
        }

        // Convert steering angle
        // Clamp steering angle to max range
        double steering_angle = std::max(-max_steering_angle_, 
                                         std::min(max_steering_angle_, 
                                                  static_cast<double>(msg->drive.steering_angle)));
        vehicle_control_msg.steer_ang = steering_angle;

        // Set steering angle velocity if available
        vehicle_control_msg.steer_ang_vel = msg->drive.steering_angle_velocity;

        // Set steering angle acceleration (not directly available in Ackermann, set to 0)
        vehicle_control_msg.steer_ang_acc = 0.0;

        // Publish the converted message
        vehicle_control_pub_->publish(vehicle_control_msg);
    }

    rclcpp::Subscription<ackermann_msgs::msg::AckermannDriveStamped>::SharedPtr ackermann_sub_;
    rclcpp::Publisher<vehiclecontrol_msgs::msg::VehicleControl>::SharedPtr vehicle_control_pub_;
    double max_speed_;
    double max_steering_angle_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<AckermannToVehicleControlNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
