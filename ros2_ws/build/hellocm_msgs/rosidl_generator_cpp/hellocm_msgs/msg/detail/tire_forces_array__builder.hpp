// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hellocm_msgs:msg/TireForcesArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hellocm_msgs/msg/tire_forces_array.hpp"


#ifndef HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES_ARRAY__BUILDER_HPP_
#define HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hellocm_msgs/msg/detail/tire_forces_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hellocm_msgs
{

namespace msg
{

namespace builder
{

class Init_TireForcesArray_rear_right
{
public:
  explicit Init_TireForcesArray_rear_right(::hellocm_msgs::msg::TireForcesArray & msg)
  : msg_(msg)
  {}
  ::hellocm_msgs::msg::TireForcesArray rear_right(::hellocm_msgs::msg::TireForcesArray::_rear_right_type arg)
  {
    msg_.rear_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForcesArray msg_;
};

class Init_TireForcesArray_rear_left
{
public:
  explicit Init_TireForcesArray_rear_left(::hellocm_msgs::msg::TireForcesArray & msg)
  : msg_(msg)
  {}
  Init_TireForcesArray_rear_right rear_left(::hellocm_msgs::msg::TireForcesArray::_rear_left_type arg)
  {
    msg_.rear_left = std::move(arg);
    return Init_TireForcesArray_rear_right(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForcesArray msg_;
};

class Init_TireForcesArray_front_right
{
public:
  explicit Init_TireForcesArray_front_right(::hellocm_msgs::msg::TireForcesArray & msg)
  : msg_(msg)
  {}
  Init_TireForcesArray_rear_left front_right(::hellocm_msgs::msg::TireForcesArray::_front_right_type arg)
  {
    msg_.front_right = std::move(arg);
    return Init_TireForcesArray_rear_left(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForcesArray msg_;
};

class Init_TireForcesArray_front_left
{
public:
  explicit Init_TireForcesArray_front_left(::hellocm_msgs::msg::TireForcesArray & msg)
  : msg_(msg)
  {}
  Init_TireForcesArray_front_right front_left(::hellocm_msgs::msg::TireForcesArray::_front_left_type arg)
  {
    msg_.front_left = std::move(arg);
    return Init_TireForcesArray_front_right(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForcesArray msg_;
};

class Init_TireForcesArray_header
{
public:
  Init_TireForcesArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TireForcesArray_front_left header(::hellocm_msgs::msg::TireForcesArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TireForcesArray_front_left(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForcesArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hellocm_msgs::msg::TireForcesArray>()
{
  return hellocm_msgs::msg::builder::Init_TireForcesArray_header();
}

}  // namespace hellocm_msgs

#endif  // HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES_ARRAY__BUILDER_HPP_
