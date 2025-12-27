// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hellocm_msgs:msg/TireSteering.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hellocm_msgs/msg/tire_steering.hpp"


#ifndef HELLOCM_MSGS__MSG__DETAIL__TIRE_STEERING__TRAITS_HPP_
#define HELLOCM_MSGS__MSG__DETAIL__TIRE_STEERING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hellocm_msgs/msg/detail/tire_steering__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace hellocm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TireSteering & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tire_angle
  {
    out << "tire_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.tire_angle, out);
    out << ", ";
  }

  // member: front_left_angle
  {
    out << "front_left_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left_angle, out);
    out << ", ";
  }

  // member: front_right_angle
  {
    out << "front_right_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right_angle, out);
    out << ", ";
  }

  // member: pinion_angle
  {
    out << "pinion_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.pinion_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TireSteering & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: tire_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tire_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.tire_angle, out);
    out << "\n";
  }

  // member: front_left_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_left_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left_angle, out);
    out << "\n";
  }

  // member: front_right_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_right_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right_angle, out);
    out << "\n";
  }

  // member: pinion_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pinion_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.pinion_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TireSteering & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace hellocm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hellocm_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hellocm_msgs::msg::TireSteering & msg,
  std::ostream & out, size_t indentation = 0)
{
  hellocm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hellocm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hellocm_msgs::msg::TireSteering & msg)
{
  return hellocm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hellocm_msgs::msg::TireSteering>()
{
  return "hellocm_msgs::msg::TireSteering";
}

template<>
inline const char * name<hellocm_msgs::msg::TireSteering>()
{
  return "hellocm_msgs/msg/TireSteering";
}

template<>
struct has_fixed_size<hellocm_msgs::msg::TireSteering>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<hellocm_msgs::msg::TireSteering>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<hellocm_msgs::msg::TireSteering>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HELLOCM_MSGS__MSG__DETAIL__TIRE_STEERING__TRAITS_HPP_
