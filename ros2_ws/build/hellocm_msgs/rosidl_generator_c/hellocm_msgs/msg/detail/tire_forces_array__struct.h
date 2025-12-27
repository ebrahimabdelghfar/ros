// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hellocm_msgs:msg/TireForcesArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hellocm_msgs/msg/tire_forces_array.h"


#ifndef HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES_ARRAY__STRUCT_H_
#define HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES_ARRAY__STRUCT_H_

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
// Member 'front_left'
// Member 'front_right'
// Member 'rear_left'
// Member 'rear_right'
#include "hellocm_msgs/msg/detail/tire_forces__struct.h"

/// Struct defined in msg/TireForcesArray in the package hellocm_msgs.
/**
  * Tire Forces Array Message
  * Provides tire forces data for all four tires from CarMaker Pacejka model
 */
typedef struct hellocm_msgs__msg__TireForcesArray
{
  /// Header with timestamp
  std_msgs__msg__Header header;
  /// Individual tire forces (FL, FR, RL, RR)
  hellocm_msgs__msg__TireForces front_left;
  hellocm_msgs__msg__TireForces front_right;
  hellocm_msgs__msg__TireForces rear_left;
  hellocm_msgs__msg__TireForces rear_right;
} hellocm_msgs__msg__TireForcesArray;

// Struct for a sequence of hellocm_msgs__msg__TireForcesArray.
typedef struct hellocm_msgs__msg__TireForcesArray__Sequence
{
  hellocm_msgs__msg__TireForcesArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hellocm_msgs__msg__TireForcesArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES_ARRAY__STRUCT_H_
