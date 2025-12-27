#!/usr/bin/env python3
"""
Example script to subscribe to and process Pacejka tire model ground truth data
from CarMaker simulation.

This demonstrates how to:
1. Subscribe to tire forces topic
2. Extract and process tire data
3. Calculate derived metrics (e.g., slip ratios, friction utilization)
"""

import rclpy
from rclpy.node import Node
from hellocm_msgs.msg import TireForcesArray
import math


class TireDataProcessor(Node):
    def __init__(self):
        super().__init__('tire_data_processor')
        
        self.subscription = self.create_subscription(
            TireForcesArray,
            'tire_forces',
            self.tire_callback,
            10)
        
        self.get_logger().info("Tire Data Processor Node Started")
        self.get_logger().info("Subscribing to /tire_forces topic...")
        
        # Statistics
        self.msg_count = 0
        
    def tire_callback(self, msg):
        """Process incoming tire forces data"""
        self.msg_count += 1
        
        # Print header every 100 messages (at 100Hz = every 1 second)
        if self.msg_count % 100 == 0:
            self.print_tire_summary(msg)
    
    def print_tire_summary(self, msg):
        """Print a summary of all four tires"""
        self.get_logger().info("=" * 80)
        self.get_logger().info(f"Tire Forces Summary (t={msg.header.stamp.sec}.{msg.header.stamp.nanosec:09d})")
        self.get_logger().info("=" * 80)
        
        tires = [
            ("Front Left", msg.front_left),
            ("Front Right", msg.front_right),
            ("Rear Left", msg.rear_left),
            ("Rear Right", msg.rear_right)
        ]
        
        for name, tire in tires:
            self.print_tire_data(name, tire)
        
        # Calculate total forces
        total_fx = sum(t.fx for _, t in tires)
        total_fy = sum(t.fy for _, t in tires)
        total_fz = sum(t.fz for _, t in tires)
        
        self.get_logger().info("-" * 80)
        self.get_logger().info(f"Total Vehicle Forces:")
        self.get_logger().info(f"  Longitudinal (Fx): {total_fx:8.2f} N")
        self.get_logger().info(f"  Lateral (Fy):      {total_fy:8.2f} N")
        self.get_logger().info(f"  Normal (Fz):       {total_fz:8.2f} N")
        self.get_logger().info("=" * 80)
    
    def print_tire_data(self, name, tire):
        """Print detailed data for a single tire"""
        # Calculate friction utilization
        friction_utilization = 0.0
        if tire.fz > 0:
            lateral_long_force = math.sqrt(tire.fx**2 + tire.fy**2)
            friction_utilization = lateral_long_force / (tire.mu_road * tire.fz) if tire.mu_road > 0 else 0.0
        
        # Calculate slip ratio in percentage
        slip_ratio_pct = tire.long_slip * 100.0
        slip_angle_deg = math.degrees(tire.slip_angle)
        
        self.get_logger().info(f"\n{name} (Idx: {tire.tire_index}):")
        self.get_logger().info(f"  Forces [N]:     Fx={tire.fx:7.2f}  Fy={tire.fy:7.2f}  Fz={tire.fz:7.2f}")
        self.get_logger().info(f"  Torques [Nm]:   Mx={tire.mx:7.2f}  My={tire.my:7.2f}  Mz={tire.mz:7.2f}")
        self.get_logger().info(f"  Slip Angle:     {slip_angle_deg:7.3f}° ({tire.slip_angle:7.4f} rad)")
        self.get_logger().info(f"  Long Slip:      {slip_ratio_pct:7.3f}% ({tire.long_slip:7.4f})")
        self.get_logger().info(f"  Camber:         {math.degrees(tire.inclination_angle):7.3f}°")
        self.get_logger().info(f"  μ Road:         {tire.mu_road:7.3f}")
        self.get_logger().info(f"  Friction Use:   {friction_utilization*100:7.2f}%")
        self.get_logger().info(f"  On Road:        {tire.on_road}")
        self.get_logger().info(f"  Eff. Radius:    {tire.effective_radius:7.4f} m")
    
    def calculate_vehicle_slip_angles(self, msg):
        """
        Example: Calculate average front and rear slip angles
        Useful for vehicle dynamics analysis
        """
        front_slip = (msg.front_left.slip_angle + msg.front_right.slip_angle) / 2.0
        rear_slip = (msg.rear_left.slip_angle + msg.rear_right.slip_angle) / 2.0
        
        return front_slip, rear_slip
    
    def estimate_cornering_stiffness(self, msg):
        """
        Example: Rough estimate of cornering stiffness (Cα)
        Cα ≈ Fy / α (for small angles in linear region)
        """
        tires = [msg.front_left, msg.front_right, msg.rear_left, msg.rear_right]
        
        for i, tire in enumerate(tires):
            if abs(tire.slip_angle) > 0.01:  # Avoid division by zero
                cornering_stiffness = tire.fy / tire.slip_angle
                tire_names = ["FL", "FR", "RL", "RR"]
                self.get_logger().debug(
                    f"{tire_names[i]} Cornering Stiffness: {cornering_stiffness:.1f} N/rad"
                )


def main(args=None):
    rclpy.init(args=args)
    
    node = TireDataProcessor()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
