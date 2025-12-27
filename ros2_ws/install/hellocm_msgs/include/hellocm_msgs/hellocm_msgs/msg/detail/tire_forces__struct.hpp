// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hellocm_msgs:msg/TireForces.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hellocm_msgs/msg/tire_forces.hpp"


#ifndef HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES__STRUCT_HPP_
#define HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hellocm_msgs__msg__TireForces __attribute__((deprecated))
#else
# define DEPRECATED__hellocm_msgs__msg__TireForces __declspec(deprecated)
#endif

namespace hellocm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TireForces_
{
  using Type = TireForces_<ContainerAllocator>;

  explicit TireForces_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tire_index = 0;
      this->fx = 0.0;
      this->fy = 0.0;
      this->fz = 0.0;
      this->mx = 0.0;
      this->my = 0.0;
      this->mz = 0.0;
      this->slip_angle = 0.0;
      this->long_slip = 0.0;
      this->turn_slip = 0.0;
      this->inclination_angle = 0.0;
      this->effective_radius = 0.0;
      this->belt_velocity = 0.0;
      this->contact_point_x = 0.0;
      this->contact_point_y = 0.0;
      this->contact_point_z = 0.0;
      this->mu_road = 0.0;
      this->on_road = false;
      this->rim_rotation_speed = 0.0;
      this->angular_velocity = 0.0;
    }
  }

  explicit TireForces_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tire_index = 0;
      this->fx = 0.0;
      this->fy = 0.0;
      this->fz = 0.0;
      this->mx = 0.0;
      this->my = 0.0;
      this->mz = 0.0;
      this->slip_angle = 0.0;
      this->long_slip = 0.0;
      this->turn_slip = 0.0;
      this->inclination_angle = 0.0;
      this->effective_radius = 0.0;
      this->belt_velocity = 0.0;
      this->contact_point_x = 0.0;
      this->contact_point_y = 0.0;
      this->contact_point_z = 0.0;
      this->mu_road = 0.0;
      this->on_road = false;
      this->rim_rotation_speed = 0.0;
      this->angular_velocity = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tire_index_type =
    uint8_t;
  _tire_index_type tire_index;
  using _fx_type =
    double;
  _fx_type fx;
  using _fy_type =
    double;
  _fy_type fy;
  using _fz_type =
    double;
  _fz_type fz;
  using _mx_type =
    double;
  _mx_type mx;
  using _my_type =
    double;
  _my_type my;
  using _mz_type =
    double;
  _mz_type mz;
  using _slip_angle_type =
    double;
  _slip_angle_type slip_angle;
  using _long_slip_type =
    double;
  _long_slip_type long_slip;
  using _turn_slip_type =
    double;
  _turn_slip_type turn_slip;
  using _inclination_angle_type =
    double;
  _inclination_angle_type inclination_angle;
  using _effective_radius_type =
    double;
  _effective_radius_type effective_radius;
  using _belt_velocity_type =
    double;
  _belt_velocity_type belt_velocity;
  using _contact_point_x_type =
    double;
  _contact_point_x_type contact_point_x;
  using _contact_point_y_type =
    double;
  _contact_point_y_type contact_point_y;
  using _contact_point_z_type =
    double;
  _contact_point_z_type contact_point_z;
  using _mu_road_type =
    double;
  _mu_road_type mu_road;
  using _on_road_type =
    bool;
  _on_road_type on_road;
  using _rim_rotation_speed_type =
    double;
  _rim_rotation_speed_type rim_rotation_speed;
  using _angular_velocity_type =
    double;
  _angular_velocity_type angular_velocity;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tire_index(
    const uint8_t & _arg)
  {
    this->tire_index = _arg;
    return *this;
  }
  Type & set__fx(
    const double & _arg)
  {
    this->fx = _arg;
    return *this;
  }
  Type & set__fy(
    const double & _arg)
  {
    this->fy = _arg;
    return *this;
  }
  Type & set__fz(
    const double & _arg)
  {
    this->fz = _arg;
    return *this;
  }
  Type & set__mx(
    const double & _arg)
  {
    this->mx = _arg;
    return *this;
  }
  Type & set__my(
    const double & _arg)
  {
    this->my = _arg;
    return *this;
  }
  Type & set__mz(
    const double & _arg)
  {
    this->mz = _arg;
    return *this;
  }
  Type & set__slip_angle(
    const double & _arg)
  {
    this->slip_angle = _arg;
    return *this;
  }
  Type & set__long_slip(
    const double & _arg)
  {
    this->long_slip = _arg;
    return *this;
  }
  Type & set__turn_slip(
    const double & _arg)
  {
    this->turn_slip = _arg;
    return *this;
  }
  Type & set__inclination_angle(
    const double & _arg)
  {
    this->inclination_angle = _arg;
    return *this;
  }
  Type & set__effective_radius(
    const double & _arg)
  {
    this->effective_radius = _arg;
    return *this;
  }
  Type & set__belt_velocity(
    const double & _arg)
  {
    this->belt_velocity = _arg;
    return *this;
  }
  Type & set__contact_point_x(
    const double & _arg)
  {
    this->contact_point_x = _arg;
    return *this;
  }
  Type & set__contact_point_y(
    const double & _arg)
  {
    this->contact_point_y = _arg;
    return *this;
  }
  Type & set__contact_point_z(
    const double & _arg)
  {
    this->contact_point_z = _arg;
    return *this;
  }
  Type & set__mu_road(
    const double & _arg)
  {
    this->mu_road = _arg;
    return *this;
  }
  Type & set__on_road(
    const bool & _arg)
  {
    this->on_road = _arg;
    return *this;
  }
  Type & set__rim_rotation_speed(
    const double & _arg)
  {
    this->rim_rotation_speed = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const double & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hellocm_msgs::msg::TireForces_<ContainerAllocator> *;
  using ConstRawPtr =
    const hellocm_msgs::msg::TireForces_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hellocm_msgs::msg::TireForces_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hellocm_msgs::msg::TireForces_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hellocm_msgs::msg::TireForces_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hellocm_msgs::msg::TireForces_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hellocm_msgs::msg::TireForces_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hellocm_msgs::msg::TireForces_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hellocm_msgs::msg::TireForces_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hellocm_msgs::msg::TireForces_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hellocm_msgs__msg__TireForces
    std::shared_ptr<hellocm_msgs::msg::TireForces_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hellocm_msgs__msg__TireForces
    std::shared_ptr<hellocm_msgs::msg::TireForces_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TireForces_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tire_index != other.tire_index) {
      return false;
    }
    if (this->fx != other.fx) {
      return false;
    }
    if (this->fy != other.fy) {
      return false;
    }
    if (this->fz != other.fz) {
      return false;
    }
    if (this->mx != other.mx) {
      return false;
    }
    if (this->my != other.my) {
      return false;
    }
    if (this->mz != other.mz) {
      return false;
    }
    if (this->slip_angle != other.slip_angle) {
      return false;
    }
    if (this->long_slip != other.long_slip) {
      return false;
    }
    if (this->turn_slip != other.turn_slip) {
      return false;
    }
    if (this->inclination_angle != other.inclination_angle) {
      return false;
    }
    if (this->effective_radius != other.effective_radius) {
      return false;
    }
    if (this->belt_velocity != other.belt_velocity) {
      return false;
    }
    if (this->contact_point_x != other.contact_point_x) {
      return false;
    }
    if (this->contact_point_y != other.contact_point_y) {
      return false;
    }
    if (this->contact_point_z != other.contact_point_z) {
      return false;
    }
    if (this->mu_road != other.mu_road) {
      return false;
    }
    if (this->on_road != other.on_road) {
      return false;
    }
    if (this->rim_rotation_speed != other.rim_rotation_speed) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const TireForces_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TireForces_

// alias to use template instance with default allocator
using TireForces =
  hellocm_msgs::msg::TireForces_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hellocm_msgs

#endif  // HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES__STRUCT_HPP_
