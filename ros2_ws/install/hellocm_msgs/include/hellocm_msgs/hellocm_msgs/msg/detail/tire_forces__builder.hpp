// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hellocm_msgs:msg/TireForces.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hellocm_msgs/msg/tire_forces.hpp"


#ifndef HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES__BUILDER_HPP_
#define HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hellocm_msgs/msg/detail/tire_forces__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hellocm_msgs
{

namespace msg
{

namespace builder
{

class Init_TireForces_angular_velocity
{
public:
  explicit Init_TireForces_angular_velocity(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  ::hellocm_msgs::msg::TireForces angular_velocity(::hellocm_msgs::msg::TireForces::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_rim_rotation_speed
{
public:
  explicit Init_TireForces_rim_rotation_speed(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  Init_TireForces_angular_velocity rim_rotation_speed(::hellocm_msgs::msg::TireForces::_rim_rotation_speed_type arg)
  {
    msg_.rim_rotation_speed = std::move(arg);
    return Init_TireForces_angular_velocity(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_on_road
{
public:
  explicit Init_TireForces_on_road(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  Init_TireForces_rim_rotation_speed on_road(::hellocm_msgs::msg::TireForces::_on_road_type arg)
  {
    msg_.on_road = std::move(arg);
    return Init_TireForces_rim_rotation_speed(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_mu_road
{
public:
  explicit Init_TireForces_mu_road(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  Init_TireForces_on_road mu_road(::hellocm_msgs::msg::TireForces::_mu_road_type arg)
  {
    msg_.mu_road = std::move(arg);
    return Init_TireForces_on_road(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_contact_point_z
{
public:
  explicit Init_TireForces_contact_point_z(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  Init_TireForces_mu_road contact_point_z(::hellocm_msgs::msg::TireForces::_contact_point_z_type arg)
  {
    msg_.contact_point_z = std::move(arg);
    return Init_TireForces_mu_road(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_contact_point_y
{
public:
  explicit Init_TireForces_contact_point_y(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  Init_TireForces_contact_point_z contact_point_y(::hellocm_msgs::msg::TireForces::_contact_point_y_type arg)
  {
    msg_.contact_point_y = std::move(arg);
    return Init_TireForces_contact_point_z(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_contact_point_x
{
public:
  explicit Init_TireForces_contact_point_x(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  Init_TireForces_contact_point_y contact_point_x(::hellocm_msgs::msg::TireForces::_contact_point_x_type arg)
  {
    msg_.contact_point_x = std::move(arg);
    return Init_TireForces_contact_point_y(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_belt_velocity
{
public:
  explicit Init_TireForces_belt_velocity(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  Init_TireForces_contact_point_x belt_velocity(::hellocm_msgs::msg::TireForces::_belt_velocity_type arg)
  {
    msg_.belt_velocity = std::move(arg);
    return Init_TireForces_contact_point_x(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_effective_radius
{
public:
  explicit Init_TireForces_effective_radius(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  Init_TireForces_belt_velocity effective_radius(::hellocm_msgs::msg::TireForces::_effective_radius_type arg)
  {
    msg_.effective_radius = std::move(arg);
    return Init_TireForces_belt_velocity(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_inclination_angle
{
public:
  explicit Init_TireForces_inclination_angle(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  Init_TireForces_effective_radius inclination_angle(::hellocm_msgs::msg::TireForces::_inclination_angle_type arg)
  {
    msg_.inclination_angle = std::move(arg);
    return Init_TireForces_effective_radius(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_turn_slip
{
public:
  explicit Init_TireForces_turn_slip(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  Init_TireForces_inclination_angle turn_slip(::hellocm_msgs::msg::TireForces::_turn_slip_type arg)
  {
    msg_.turn_slip = std::move(arg);
    return Init_TireForces_inclination_angle(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_long_slip
{
public:
  explicit Init_TireForces_long_slip(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  Init_TireForces_turn_slip long_slip(::hellocm_msgs::msg::TireForces::_long_slip_type arg)
  {
    msg_.long_slip = std::move(arg);
    return Init_TireForces_turn_slip(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_slip_angle
{
public:
  explicit Init_TireForces_slip_angle(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  Init_TireForces_long_slip slip_angle(::hellocm_msgs::msg::TireForces::_slip_angle_type arg)
  {
    msg_.slip_angle = std::move(arg);
    return Init_TireForces_long_slip(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_mz
{
public:
  explicit Init_TireForces_mz(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  Init_TireForces_slip_angle mz(::hellocm_msgs::msg::TireForces::_mz_type arg)
  {
    msg_.mz = std::move(arg);
    return Init_TireForces_slip_angle(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_my
{
public:
  explicit Init_TireForces_my(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  Init_TireForces_mz my(::hellocm_msgs::msg::TireForces::_my_type arg)
  {
    msg_.my = std::move(arg);
    return Init_TireForces_mz(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_mx
{
public:
  explicit Init_TireForces_mx(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  Init_TireForces_my mx(::hellocm_msgs::msg::TireForces::_mx_type arg)
  {
    msg_.mx = std::move(arg);
    return Init_TireForces_my(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_fz
{
public:
  explicit Init_TireForces_fz(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  Init_TireForces_mx fz(::hellocm_msgs::msg::TireForces::_fz_type arg)
  {
    msg_.fz = std::move(arg);
    return Init_TireForces_mx(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_fy
{
public:
  explicit Init_TireForces_fy(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  Init_TireForces_fz fy(::hellocm_msgs::msg::TireForces::_fy_type arg)
  {
    msg_.fy = std::move(arg);
    return Init_TireForces_fz(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_fx
{
public:
  explicit Init_TireForces_fx(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  Init_TireForces_fy fx(::hellocm_msgs::msg::TireForces::_fx_type arg)
  {
    msg_.fx = std::move(arg);
    return Init_TireForces_fy(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_tire_index
{
public:
  explicit Init_TireForces_tire_index(::hellocm_msgs::msg::TireForces & msg)
  : msg_(msg)
  {}
  Init_TireForces_fx tire_index(::hellocm_msgs::msg::TireForces::_tire_index_type arg)
  {
    msg_.tire_index = std::move(arg);
    return Init_TireForces_fx(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

class Init_TireForces_header
{
public:
  Init_TireForces_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TireForces_tire_index header(::hellocm_msgs::msg::TireForces::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TireForces_tire_index(msg_);
  }

private:
  ::hellocm_msgs::msg::TireForces msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hellocm_msgs::msg::TireForces>()
{
  return hellocm_msgs::msg::builder::Init_TireForces_header();
}

}  // namespace hellocm_msgs

#endif  // HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES__BUILDER_HPP_
