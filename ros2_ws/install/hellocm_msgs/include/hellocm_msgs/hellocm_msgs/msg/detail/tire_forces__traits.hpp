// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hellocm_msgs:msg/TireForces.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hellocm_msgs/msg/tire_forces.hpp"


#ifndef HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES__TRAITS_HPP_
#define HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hellocm_msgs/msg/detail/tire_forces__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace hellocm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TireForces & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tire_index
  {
    out << "tire_index: ";
    rosidl_generator_traits::value_to_yaml(msg.tire_index, out);
    out << ", ";
  }

  // member: fx
  {
    out << "fx: ";
    rosidl_generator_traits::value_to_yaml(msg.fx, out);
    out << ", ";
  }

  // member: fy
  {
    out << "fy: ";
    rosidl_generator_traits::value_to_yaml(msg.fy, out);
    out << ", ";
  }

  // member: fz
  {
    out << "fz: ";
    rosidl_generator_traits::value_to_yaml(msg.fz, out);
    out << ", ";
  }

  // member: mx
  {
    out << "mx: ";
    rosidl_generator_traits::value_to_yaml(msg.mx, out);
    out << ", ";
  }

  // member: my
  {
    out << "my: ";
    rosidl_generator_traits::value_to_yaml(msg.my, out);
    out << ", ";
  }

  // member: mz
  {
    out << "mz: ";
    rosidl_generator_traits::value_to_yaml(msg.mz, out);
    out << ", ";
  }

  // member: slip_angle
  {
    out << "slip_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.slip_angle, out);
    out << ", ";
  }

  // member: long_slip
  {
    out << "long_slip: ";
    rosidl_generator_traits::value_to_yaml(msg.long_slip, out);
    out << ", ";
  }

  // member: turn_slip
  {
    out << "turn_slip: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_slip, out);
    out << ", ";
  }

  // member: inclination_angle
  {
    out << "inclination_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.inclination_angle, out);
    out << ", ";
  }

  // member: effective_radius
  {
    out << "effective_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.effective_radius, out);
    out << ", ";
  }

  // member: belt_velocity
  {
    out << "belt_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.belt_velocity, out);
    out << ", ";
  }

  // member: contact_point_x
  {
    out << "contact_point_x: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_point_x, out);
    out << ", ";
  }

  // member: contact_point_y
  {
    out << "contact_point_y: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_point_y, out);
    out << ", ";
  }

  // member: contact_point_z
  {
    out << "contact_point_z: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_point_z, out);
    out << ", ";
  }

  // member: mu_road
  {
    out << "mu_road: ";
    rosidl_generator_traits::value_to_yaml(msg.mu_road, out);
    out << ", ";
  }

  // member: on_road
  {
    out << "on_road: ";
    rosidl_generator_traits::value_to_yaml(msg.on_road, out);
    out << ", ";
  }

  // member: rim_rotation_speed
  {
    out << "rim_rotation_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.rim_rotation_speed, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TireForces & msg,
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

  // member: tire_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tire_index: ";
    rosidl_generator_traits::value_to_yaml(msg.tire_index, out);
    out << "\n";
  }

  // member: fx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fx: ";
    rosidl_generator_traits::value_to_yaml(msg.fx, out);
    out << "\n";
  }

  // member: fy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fy: ";
    rosidl_generator_traits::value_to_yaml(msg.fy, out);
    out << "\n";
  }

  // member: fz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fz: ";
    rosidl_generator_traits::value_to_yaml(msg.fz, out);
    out << "\n";
  }

  // member: mx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mx: ";
    rosidl_generator_traits::value_to_yaml(msg.mx, out);
    out << "\n";
  }

  // member: my
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "my: ";
    rosidl_generator_traits::value_to_yaml(msg.my, out);
    out << "\n";
  }

  // member: mz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mz: ";
    rosidl_generator_traits::value_to_yaml(msg.mz, out);
    out << "\n";
  }

  // member: slip_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slip_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.slip_angle, out);
    out << "\n";
  }

  // member: long_slip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "long_slip: ";
    rosidl_generator_traits::value_to_yaml(msg.long_slip, out);
    out << "\n";
  }

  // member: turn_slip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_slip: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_slip, out);
    out << "\n";
  }

  // member: inclination_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inclination_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.inclination_angle, out);
    out << "\n";
  }

  // member: effective_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "effective_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.effective_radius, out);
    out << "\n";
  }

  // member: belt_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "belt_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.belt_velocity, out);
    out << "\n";
  }

  // member: contact_point_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_point_x: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_point_x, out);
    out << "\n";
  }

  // member: contact_point_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_point_y: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_point_y, out);
    out << "\n";
  }

  // member: contact_point_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_point_z: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_point_z, out);
    out << "\n";
  }

  // member: mu_road
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mu_road: ";
    rosidl_generator_traits::value_to_yaml(msg.mu_road, out);
    out << "\n";
  }

  // member: on_road
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "on_road: ";
    rosidl_generator_traits::value_to_yaml(msg.on_road, out);
    out << "\n";
  }

  // member: rim_rotation_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rim_rotation_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.rim_rotation_speed, out);
    out << "\n";
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TireForces & msg, bool use_flow_style = false)
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
  const hellocm_msgs::msg::TireForces & msg,
  std::ostream & out, size_t indentation = 0)
{
  hellocm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hellocm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hellocm_msgs::msg::TireForces & msg)
{
  return hellocm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hellocm_msgs::msg::TireForces>()
{
  return "hellocm_msgs::msg::TireForces";
}

template<>
inline const char * name<hellocm_msgs::msg::TireForces>()
{
  return "hellocm_msgs/msg/TireForces";
}

template<>
struct has_fixed_size<hellocm_msgs::msg::TireForces>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<hellocm_msgs::msg::TireForces>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<hellocm_msgs::msg::TireForces>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES__TRAITS_HPP_
