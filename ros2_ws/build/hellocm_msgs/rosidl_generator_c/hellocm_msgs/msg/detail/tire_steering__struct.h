// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hellocm_msgs:msg/TireSteering.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hellocm_msgs/msg/tire_steering.h"


#ifndef HELLOCM_MSGS__MSG__DETAIL__TIRE_STEERING__STRUCT_H_
#define HELLOCM_MSGS__MSG__DETAIL__TIRE_STEERING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/TireSteering in the package hellocm_msgs.
/**
  * Tire Steering Angle Message
  * Provides actual tire/wheel steering angles from CarMaker simulation
 */
typedef struct hellocm_msgs__msg__TireSteering
{
  /// Header with timestamp
  std_msgs__msg__Header header;
  /// Mean front tire steering angle
  /// This represents the actual wheel steering angle, not the pinion angle
  /// Positive = left turn, Negative = right turn
  double tire_angle;
  /// Individual wheel steering angles
  /// Front left wheel steering angle
  double front_left_angle;
  /// Front right wheel steering angle
  double front_right_angle;
  /// Steering pinion angle for reference
  /// This is the angle at the steering pinion (input to steering rack)
  double pinion_angle;
} hellocm_msgs__msg__TireSteering;

// Struct for a sequence of hellocm_msgs__msg__TireSteering.
typedef struct hellocm_msgs__msg__TireSteering__Sequence
{
  hellocm_msgs__msg__TireSteering * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hellocm_msgs__msg__TireSteering__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HELLOCM_MSGS__MSG__DETAIL__TIRE_STEERING__STRUCT_H_
