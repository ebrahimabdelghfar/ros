// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hellocm_msgs:msg/TireForcesArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hellocm_msgs/msg/tire_forces_array.hpp"


#ifndef HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES_ARRAY__TRAITS_HPP_
#define HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hellocm_msgs/msg/detail/tire_forces_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'front_left'
// Member 'front_right'
// Member 'rear_left'
// Member 'rear_right'
#include "hellocm_msgs/msg/detail/tire_forces__traits.hpp"

namespace hellocm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TireForcesArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: front_left
  {
    out << "front_left: ";
    to_flow_style_yaml(msg.front_left, out);
    out << ", ";
  }

  // member: front_right
  {
    out << "front_right: ";
    to_flow_style_yaml(msg.front_right, out);
    out << ", ";
  }

  // member: rear_left
  {
    out << "rear_left: ";
    to_flow_style_yaml(msg.rear_left, out);
    out << ", ";
  }

  // member: rear_right
  {
    out << "rear_right: ";
    to_flow_style_yaml(msg.rear_right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TireForcesArray & msg,
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

  // member: front_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_left:\n";
    to_block_style_yaml(msg.front_left, out, indentation + 2);
  }

  // member: front_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_right:\n";
    to_block_style_yaml(msg.front_right, out, indentation + 2);
  }

  // member: rear_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_left:\n";
    to_block_style_yaml(msg.rear_left, out, indentation + 2);
  }

  // member: rear_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_right:\n";
    to_block_style_yaml(msg.rear_right, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TireForcesArray & msg, bool use_flow_style = false)
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
  const hellocm_msgs::msg::TireForcesArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  hellocm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hellocm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hellocm_msgs::msg::TireForcesArray & msg)
{
  return hellocm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hellocm_msgs::msg::TireForcesArray>()
{
  return "hellocm_msgs::msg::TireForcesArray";
}

template<>
inline const char * name<hellocm_msgs::msg::TireForcesArray>()
{
  return "hellocm_msgs/msg/TireForcesArray";
}

template<>
struct has_fixed_size<hellocm_msgs::msg::TireForcesArray>
  : std::integral_constant<bool, has_fixed_size<hellocm_msgs::msg::TireForces>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<hellocm_msgs::msg::TireForcesArray>
  : std::integral_constant<bool, has_bounded_size<hellocm_msgs::msg::TireForces>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<hellocm_msgs::msg::TireForcesArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES_ARRAY__TRAITS_HPP_
