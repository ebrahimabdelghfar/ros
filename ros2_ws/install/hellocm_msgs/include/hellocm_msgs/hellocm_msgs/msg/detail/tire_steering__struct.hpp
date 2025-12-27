// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hellocm_msgs:msg/TireSteering.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hellocm_msgs/msg/tire_steering.hpp"


#ifndef HELLOCM_MSGS__MSG__DETAIL__TIRE_STEERING__STRUCT_HPP_
#define HELLOCM_MSGS__MSG__DETAIL__TIRE_STEERING__STRUCT_HPP_

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
# define DEPRECATED__hellocm_msgs__msg__TireSteering __attribute__((deprecated))
#else
# define DEPRECATED__hellocm_msgs__msg__TireSteering __declspec(deprecated)
#endif

namespace hellocm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TireSteering_
{
  using Type = TireSteering_<ContainerAllocator>;

  explicit TireSteering_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tire_angle = 0.0;
      this->front_left_angle = 0.0;
      this->front_right_angle = 0.0;
      this->pinion_angle = 0.0;
    }
  }

  explicit TireSteering_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tire_angle = 0.0;
      this->front_left_angle = 0.0;
      this->front_right_angle = 0.0;
      this->pinion_angle = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tire_angle_type =
    double;
  _tire_angle_type tire_angle;
  using _front_left_angle_type =
    double;
  _front_left_angle_type front_left_angle;
  using _front_right_angle_type =
    double;
  _front_right_angle_type front_right_angle;
  using _pinion_angle_type =
    double;
  _pinion_angle_type pinion_angle;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tire_angle(
    const double & _arg)
  {
    this->tire_angle = _arg;
    return *this;
  }
  Type & set__front_left_angle(
    const double & _arg)
  {
    this->front_left_angle = _arg;
    return *this;
  }
  Type & set__front_right_angle(
    const double & _arg)
  {
    this->front_right_angle = _arg;
    return *this;
  }
  Type & set__pinion_angle(
    const double & _arg)
  {
    this->pinion_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hellocm_msgs::msg::TireSteering_<ContainerAllocator> *;
  using ConstRawPtr =
    const hellocm_msgs::msg::TireSteering_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hellocm_msgs::msg::TireSteering_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hellocm_msgs::msg::TireSteering_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hellocm_msgs::msg::TireSteering_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hellocm_msgs::msg::TireSteering_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hellocm_msgs::msg::TireSteering_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hellocm_msgs::msg::TireSteering_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hellocm_msgs::msg::TireSteering_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hellocm_msgs::msg::TireSteering_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hellocm_msgs__msg__TireSteering
    std::shared_ptr<hellocm_msgs::msg::TireSteering_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hellocm_msgs__msg__TireSteering
    std::shared_ptr<hellocm_msgs::msg::TireSteering_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TireSteering_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tire_angle != other.tire_angle) {
      return false;
    }
    if (this->front_left_angle != other.front_left_angle) {
      return false;
    }
    if (this->front_right_angle != other.front_right_angle) {
      return false;
    }
    if (this->pinion_angle != other.pinion_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const TireSteering_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TireSteering_

// alias to use template instance with default allocator
using TireSteering =
  hellocm_msgs::msg::TireSteering_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hellocm_msgs

#endif  // HELLOCM_MSGS__MSG__DETAIL__TIRE_STEERING__STRUCT_HPP_
