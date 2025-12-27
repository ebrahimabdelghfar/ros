// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from hellocm_msgs:msg/TireForcesArray.idl
// generated code does not contain a copyright notice
#ifndef HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "hellocm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hellocm_msgs/msg/detail/tire_forces_array__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
bool cdr_serialize_hellocm_msgs__msg__TireForcesArray(
  const hellocm_msgs__msg__TireForcesArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
bool cdr_deserialize_hellocm_msgs__msg__TireForcesArray(
  eprosima::fastcdr::Cdr &,
  hellocm_msgs__msg__TireForcesArray * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
size_t get_serialized_size_hellocm_msgs__msg__TireForcesArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
size_t max_serialized_size_hellocm_msgs__msg__TireForcesArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
bool cdr_serialize_key_hellocm_msgs__msg__TireForcesArray(
  const hellocm_msgs__msg__TireForcesArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
size_t get_serialized_size_key_hellocm_msgs__msg__TireForcesArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
size_t max_serialized_size_key_hellocm_msgs__msg__TireForcesArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hellocm_msgs, msg, TireForcesArray)();

#ifdef __cplusplus
}
#endif

#endif  // HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
