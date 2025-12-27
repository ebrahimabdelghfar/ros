// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hellocm_msgs:msg/TireSteering.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hellocm_msgs/msg/tire_steering.hpp"


#ifndef HELLOCM_MSGS__MSG__DETAIL__TIRE_STEERING__BUILDER_HPP_
#define HELLOCM_MSGS__MSG__DETAIL__TIRE_STEERING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hellocm_msgs/msg/detail/tire_steering__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hellocm_msgs
{

namespace msg
{

namespace builder
{

class Init_TireSteering_pinion_angle
{
public:
  explicit Init_TireSteering_pinion_angle(::hellocm_msgs::msg::TireSteering & msg)
  : msg_(msg)
  {}
  ::hellocm_msgs::msg::TireSteering pinion_angle(::hellocm_msgs::msg::TireSteering::_pinion_angle_type arg)
  {
    msg_.pinion_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hellocm_msgs::msg::TireSteering msg_;
};

class Init_TireSteering_front_right_angle
{
public:
  explicit Init_TireSteering_front_right_angle(::hellocm_msgs::msg::TireSteering & msg)
  : msg_(msg)
  {}
  Init_TireSteering_pinion_angle front_right_angle(::hellocm_msgs::msg::TireSteering::_front_right_angle_type arg)
  {
    msg_.front_right_angle = std::move(arg);
    return Init_TireSteering_pinion_angle(msg_);
  }

private:
  ::hellocm_msgs::msg::TireSteering msg_;
};

class Init_TireSteering_front_left_angle
{
public:
  explicit Init_TireSteering_front_left_angle(::hellocm_msgs::msg::TireSteering & msg)
  : msg_(msg)
  {}
  Init_TireSteering_front_right_angle front_left_angle(::hellocm_msgs::msg::TireSteering::_front_left_angle_type arg)
  {
    msg_.front_left_angle = std::move(arg);
    return Init_TireSteering_front_right_angle(msg_);
  }

private:
  ::hellocm_msgs::msg::TireSteering msg_;
};

class Init_TireSteering_tire_angle
{
public:
  explicit Init_TireSteering_tire_angle(::hellocm_msgs::msg::TireSteering & msg)
  : msg_(msg)
  {}
  Init_TireSteering_front_left_angle tire_angle(::hellocm_msgs::msg::TireSteering::_tire_angle_type arg)
  {
    msg_.tire_angle = std::move(arg);
    return Init_TireSteering_front_left_angle(msg_);
  }

private:
  ::hellocm_msgs::msg::TireSteering msg_;
};

class Init_TireSteering_header
{
public:
  Init_TireSteering_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TireSteering_tire_angle header(::hellocm_msgs::msg::TireSteering::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TireSteering_tire_angle(msg_);
  }

private:
  ::hellocm_msgs::msg::TireSteering msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hellocm_msgs::msg::TireSteering>()
{
  return hellocm_msgs::msg::builder::Init_TireSteering_header();
}

}  // namespace hellocm_msgs

#endif  // HELLOCM_MSGS__MSG__DETAIL__TIRE_STEERING__BUILDER_HPP_
