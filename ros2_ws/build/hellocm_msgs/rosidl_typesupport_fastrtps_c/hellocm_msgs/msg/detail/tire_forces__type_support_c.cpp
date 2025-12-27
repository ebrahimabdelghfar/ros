// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hellocm_msgs:msg/TireForces.idl
// generated code does not contain a copyright notice
#include "hellocm_msgs/msg/detail/tire_forces__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hellocm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hellocm_msgs/msg/detail/tire_forces__struct.h"
#include "hellocm_msgs/msg/detail/tire_forces__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hellocm_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hellocm_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hellocm_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hellocm_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hellocm_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hellocm_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hellocm_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hellocm_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _TireForces__ros_msg_type = hellocm_msgs__msg__TireForces;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
bool cdr_serialize_hellocm_msgs__msg__TireForces(
  const hellocm_msgs__msg__TireForces * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: tire_index
  {
    cdr << ros_message->tire_index;
  }

  // Field name: fx
  {
    cdr << ros_message->fx;
  }

  // Field name: fy
  {
    cdr << ros_message->fy;
  }

  // Field name: fz
  {
    cdr << ros_message->fz;
  }

  // Field name: mx
  {
    cdr << ros_message->mx;
  }

  // Field name: my
  {
    cdr << ros_message->my;
  }

  // Field name: mz
  {
    cdr << ros_message->mz;
  }

  // Field name: slip_angle
  {
    cdr << ros_message->slip_angle;
  }

  // Field name: long_slip
  {
    cdr << ros_message->long_slip;
  }

  // Field name: turn_slip
  {
    cdr << ros_message->turn_slip;
  }

  // Field name: inclination_angle
  {
    cdr << ros_message->inclination_angle;
  }

  // Field name: effective_radius
  {
    cdr << ros_message->effective_radius;
  }

  // Field name: belt_velocity
  {
    cdr << ros_message->belt_velocity;
  }

  // Field name: contact_point_x
  {
    cdr << ros_message->contact_point_x;
  }

  // Field name: contact_point_y
  {
    cdr << ros_message->contact_point_y;
  }

  // Field name: contact_point_z
  {
    cdr << ros_message->contact_point_z;
  }

  // Field name: mu_road
  {
    cdr << ros_message->mu_road;
  }

  // Field name: on_road
  {
    cdr << (ros_message->on_road ? true : false);
  }

  // Field name: rim_rotation_speed
  {
    cdr << ros_message->rim_rotation_speed;
  }

  // Field name: angular_velocity
  {
    cdr << ros_message->angular_velocity;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
bool cdr_deserialize_hellocm_msgs__msg__TireForces(
  eprosima::fastcdr::Cdr & cdr,
  hellocm_msgs__msg__TireForces * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: tire_index
  {
    cdr >> ros_message->tire_index;
  }

  // Field name: fx
  {
    cdr >> ros_message->fx;
  }

  // Field name: fy
  {
    cdr >> ros_message->fy;
  }

  // Field name: fz
  {
    cdr >> ros_message->fz;
  }

  // Field name: mx
  {
    cdr >> ros_message->mx;
  }

  // Field name: my
  {
    cdr >> ros_message->my;
  }

  // Field name: mz
  {
    cdr >> ros_message->mz;
  }

  // Field name: slip_angle
  {
    cdr >> ros_message->slip_angle;
  }

  // Field name: long_slip
  {
    cdr >> ros_message->long_slip;
  }

  // Field name: turn_slip
  {
    cdr >> ros_message->turn_slip;
  }

  // Field name: inclination_angle
  {
    cdr >> ros_message->inclination_angle;
  }

  // Field name: effective_radius
  {
    cdr >> ros_message->effective_radius;
  }

  // Field name: belt_velocity
  {
    cdr >> ros_message->belt_velocity;
  }

  // Field name: contact_point_x
  {
    cdr >> ros_message->contact_point_x;
  }

  // Field name: contact_point_y
  {
    cdr >> ros_message->contact_point_y;
  }

  // Field name: contact_point_z
  {
    cdr >> ros_message->contact_point_z;
  }

  // Field name: mu_road
  {
    cdr >> ros_message->mu_road;
  }

  // Field name: on_road
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->on_road = tmp ? true : false;
  }

  // Field name: rim_rotation_speed
  {
    cdr >> ros_message->rim_rotation_speed;
  }

  // Field name: angular_velocity
  {
    cdr >> ros_message->angular_velocity;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
size_t get_serialized_size_hellocm_msgs__msg__TireForces(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TireForces__ros_msg_type * ros_message = static_cast<const _TireForces__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: tire_index
  {
    size_t item_size = sizeof(ros_message->tire_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fx
  {
    size_t item_size = sizeof(ros_message->fx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fy
  {
    size_t item_size = sizeof(ros_message->fy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fz
  {
    size_t item_size = sizeof(ros_message->fz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mx
  {
    size_t item_size = sizeof(ros_message->mx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: my
  {
    size_t item_size = sizeof(ros_message->my);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mz
  {
    size_t item_size = sizeof(ros_message->mz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: slip_angle
  {
    size_t item_size = sizeof(ros_message->slip_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: long_slip
  {
    size_t item_size = sizeof(ros_message->long_slip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: turn_slip
  {
    size_t item_size = sizeof(ros_message->turn_slip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: inclination_angle
  {
    size_t item_size = sizeof(ros_message->inclination_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: effective_radius
  {
    size_t item_size = sizeof(ros_message->effective_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: belt_velocity
  {
    size_t item_size = sizeof(ros_message->belt_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contact_point_x
  {
    size_t item_size = sizeof(ros_message->contact_point_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contact_point_y
  {
    size_t item_size = sizeof(ros_message->contact_point_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contact_point_z
  {
    size_t item_size = sizeof(ros_message->contact_point_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mu_road
  {
    size_t item_size = sizeof(ros_message->mu_road);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: on_road
  {
    size_t item_size = sizeof(ros_message->on_road);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rim_rotation_speed
  {
    size_t item_size = sizeof(ros_message->rim_rotation_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: angular_velocity
  {
    size_t item_size = sizeof(ros_message->angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
size_t max_serialized_size_hellocm_msgs__msg__TireForces(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tire_index
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fx
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: fy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: fz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: mx
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: my
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: mz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: slip_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: long_slip
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: turn_slip
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: inclination_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: effective_radius
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: belt_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: contact_point_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: contact_point_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: contact_point_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: mu_road
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: on_road
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: rim_rotation_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: angular_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hellocm_msgs__msg__TireForces;
    is_plain =
      (
      offsetof(DataType, angular_velocity) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
bool cdr_serialize_key_hellocm_msgs__msg__TireForces(
  const hellocm_msgs__msg__TireForces * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: tire_index
  {
    cdr << ros_message->tire_index;
  }

  // Field name: fx
  {
    cdr << ros_message->fx;
  }

  // Field name: fy
  {
    cdr << ros_message->fy;
  }

  // Field name: fz
  {
    cdr << ros_message->fz;
  }

  // Field name: mx
  {
    cdr << ros_message->mx;
  }

  // Field name: my
  {
    cdr << ros_message->my;
  }

  // Field name: mz
  {
    cdr << ros_message->mz;
  }

  // Field name: slip_angle
  {
    cdr << ros_message->slip_angle;
  }

  // Field name: long_slip
  {
    cdr << ros_message->long_slip;
  }

  // Field name: turn_slip
  {
    cdr << ros_message->turn_slip;
  }

  // Field name: inclination_angle
  {
    cdr << ros_message->inclination_angle;
  }

  // Field name: effective_radius
  {
    cdr << ros_message->effective_radius;
  }

  // Field name: belt_velocity
  {
    cdr << ros_message->belt_velocity;
  }

  // Field name: contact_point_x
  {
    cdr << ros_message->contact_point_x;
  }

  // Field name: contact_point_y
  {
    cdr << ros_message->contact_point_y;
  }

  // Field name: contact_point_z
  {
    cdr << ros_message->contact_point_z;
  }

  // Field name: mu_road
  {
    cdr << ros_message->mu_road;
  }

  // Field name: on_road
  {
    cdr << (ros_message->on_road ? true : false);
  }

  // Field name: rim_rotation_speed
  {
    cdr << ros_message->rim_rotation_speed;
  }

  // Field name: angular_velocity
  {
    cdr << ros_message->angular_velocity;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
size_t get_serialized_size_key_hellocm_msgs__msg__TireForces(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TireForces__ros_msg_type * ros_message = static_cast<const _TireForces__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: tire_index
  {
    size_t item_size = sizeof(ros_message->tire_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fx
  {
    size_t item_size = sizeof(ros_message->fx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fy
  {
    size_t item_size = sizeof(ros_message->fy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fz
  {
    size_t item_size = sizeof(ros_message->fz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mx
  {
    size_t item_size = sizeof(ros_message->mx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: my
  {
    size_t item_size = sizeof(ros_message->my);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mz
  {
    size_t item_size = sizeof(ros_message->mz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: slip_angle
  {
    size_t item_size = sizeof(ros_message->slip_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: long_slip
  {
    size_t item_size = sizeof(ros_message->long_slip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: turn_slip
  {
    size_t item_size = sizeof(ros_message->turn_slip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: inclination_angle
  {
    size_t item_size = sizeof(ros_message->inclination_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: effective_radius
  {
    size_t item_size = sizeof(ros_message->effective_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: belt_velocity
  {
    size_t item_size = sizeof(ros_message->belt_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contact_point_x
  {
    size_t item_size = sizeof(ros_message->contact_point_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contact_point_y
  {
    size_t item_size = sizeof(ros_message->contact_point_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contact_point_z
  {
    size_t item_size = sizeof(ros_message->contact_point_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mu_road
  {
    size_t item_size = sizeof(ros_message->mu_road);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: on_road
  {
    size_t item_size = sizeof(ros_message->on_road);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rim_rotation_speed
  {
    size_t item_size = sizeof(ros_message->rim_rotation_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: angular_velocity
  {
    size_t item_size = sizeof(ros_message->angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
size_t max_serialized_size_key_hellocm_msgs__msg__TireForces(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tire_index
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fx
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: fy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: fz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: mx
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: my
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: mz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: slip_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: long_slip
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: turn_slip
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: inclination_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: effective_radius
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: belt_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: contact_point_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: contact_point_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: contact_point_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: mu_road
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: on_road
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: rim_rotation_speed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: angular_velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hellocm_msgs__msg__TireForces;
    is_plain =
      (
      offsetof(DataType, angular_velocity) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TireForces__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const hellocm_msgs__msg__TireForces * ros_message = static_cast<const hellocm_msgs__msg__TireForces *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_hellocm_msgs__msg__TireForces(ros_message, cdr);
}

static bool _TireForces__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  hellocm_msgs__msg__TireForces * ros_message = static_cast<hellocm_msgs__msg__TireForces *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_hellocm_msgs__msg__TireForces(cdr, ros_message);
}

static uint32_t _TireForces__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hellocm_msgs__msg__TireForces(
      untyped_ros_message, 0));
}

static size_t _TireForces__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_hellocm_msgs__msg__TireForces(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TireForces = {
  "hellocm_msgs::msg",
  "TireForces",
  _TireForces__cdr_serialize,
  _TireForces__cdr_deserialize,
  _TireForces__get_serialized_size,
  _TireForces__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TireForces__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TireForces,
  get_message_typesupport_handle_function,
  &hellocm_msgs__msg__TireForces__get_type_hash,
  &hellocm_msgs__msg__TireForces__get_type_description,
  &hellocm_msgs__msg__TireForces__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hellocm_msgs, msg, TireForces)() {
  return &_TireForces__type_support;
}

#if defined(__cplusplus)
}
#endif
