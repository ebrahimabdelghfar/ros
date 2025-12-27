// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hellocm_msgs:msg/TireForcesArray.idl
// generated code does not contain a copyright notice
#include "hellocm_msgs/msg/detail/tire_forces_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hellocm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hellocm_msgs/msg/detail/tire_forces_array__struct.h"
#include "hellocm_msgs/msg/detail/tire_forces_array__functions.h"
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

#include "hellocm_msgs/msg/detail/tire_forces__functions.h"  // front_left, front_right, rear_left, rear_right
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

bool cdr_serialize_hellocm_msgs__msg__TireForces(
  const hellocm_msgs__msg__TireForces * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_hellocm_msgs__msg__TireForces(
  eprosima::fastcdr::Cdr & cdr,
  hellocm_msgs__msg__TireForces * ros_message);

size_t get_serialized_size_hellocm_msgs__msg__TireForces(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_hellocm_msgs__msg__TireForces(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_hellocm_msgs__msg__TireForces(
  const hellocm_msgs__msg__TireForces * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_hellocm_msgs__msg__TireForces(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_hellocm_msgs__msg__TireForces(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hellocm_msgs, msg, TireForces)();

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


using _TireForcesArray__ros_msg_type = hellocm_msgs__msg__TireForcesArray;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
bool cdr_serialize_hellocm_msgs__msg__TireForcesArray(
  const hellocm_msgs__msg__TireForcesArray * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: front_left
  {
    cdr_serialize_hellocm_msgs__msg__TireForces(
      &ros_message->front_left, cdr);
  }

  // Field name: front_right
  {
    cdr_serialize_hellocm_msgs__msg__TireForces(
      &ros_message->front_right, cdr);
  }

  // Field name: rear_left
  {
    cdr_serialize_hellocm_msgs__msg__TireForces(
      &ros_message->rear_left, cdr);
  }

  // Field name: rear_right
  {
    cdr_serialize_hellocm_msgs__msg__TireForces(
      &ros_message->rear_right, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
bool cdr_deserialize_hellocm_msgs__msg__TireForcesArray(
  eprosima::fastcdr::Cdr & cdr,
  hellocm_msgs__msg__TireForcesArray * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: front_left
  {
    cdr_deserialize_hellocm_msgs__msg__TireForces(cdr, &ros_message->front_left);
  }

  // Field name: front_right
  {
    cdr_deserialize_hellocm_msgs__msg__TireForces(cdr, &ros_message->front_right);
  }

  // Field name: rear_left
  {
    cdr_deserialize_hellocm_msgs__msg__TireForces(cdr, &ros_message->rear_left);
  }

  // Field name: rear_right
  {
    cdr_deserialize_hellocm_msgs__msg__TireForces(cdr, &ros_message->rear_right);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
size_t get_serialized_size_hellocm_msgs__msg__TireForcesArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TireForcesArray__ros_msg_type * ros_message = static_cast<const _TireForcesArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: front_left
  current_alignment += get_serialized_size_hellocm_msgs__msg__TireForces(
    &(ros_message->front_left), current_alignment);

  // Field name: front_right
  current_alignment += get_serialized_size_hellocm_msgs__msg__TireForces(
    &(ros_message->front_right), current_alignment);

  // Field name: rear_left
  current_alignment += get_serialized_size_hellocm_msgs__msg__TireForces(
    &(ros_message->rear_left), current_alignment);

  // Field name: rear_right
  current_alignment += get_serialized_size_hellocm_msgs__msg__TireForces(
    &(ros_message->rear_right), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
size_t max_serialized_size_hellocm_msgs__msg__TireForcesArray(
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

  // Field name: front_left
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_hellocm_msgs__msg__TireForces(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: front_right
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_hellocm_msgs__msg__TireForces(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: rear_left
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_hellocm_msgs__msg__TireForces(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: rear_right
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_hellocm_msgs__msg__TireForces(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hellocm_msgs__msg__TireForcesArray;
    is_plain =
      (
      offsetof(DataType, rear_right) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
bool cdr_serialize_key_hellocm_msgs__msg__TireForcesArray(
  const hellocm_msgs__msg__TireForcesArray * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: front_left
  {
    cdr_serialize_key_hellocm_msgs__msg__TireForces(
      &ros_message->front_left, cdr);
  }

  // Field name: front_right
  {
    cdr_serialize_key_hellocm_msgs__msg__TireForces(
      &ros_message->front_right, cdr);
  }

  // Field name: rear_left
  {
    cdr_serialize_key_hellocm_msgs__msg__TireForces(
      &ros_message->rear_left, cdr);
  }

  // Field name: rear_right
  {
    cdr_serialize_key_hellocm_msgs__msg__TireForces(
      &ros_message->rear_right, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
size_t get_serialized_size_key_hellocm_msgs__msg__TireForcesArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TireForcesArray__ros_msg_type * ros_message = static_cast<const _TireForcesArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: front_left
  current_alignment += get_serialized_size_key_hellocm_msgs__msg__TireForces(
    &(ros_message->front_left), current_alignment);

  // Field name: front_right
  current_alignment += get_serialized_size_key_hellocm_msgs__msg__TireForces(
    &(ros_message->front_right), current_alignment);

  // Field name: rear_left
  current_alignment += get_serialized_size_key_hellocm_msgs__msg__TireForces(
    &(ros_message->rear_left), current_alignment);

  // Field name: rear_right
  current_alignment += get_serialized_size_key_hellocm_msgs__msg__TireForces(
    &(ros_message->rear_right), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hellocm_msgs
size_t max_serialized_size_key_hellocm_msgs__msg__TireForcesArray(
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

  // Field name: front_left
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_hellocm_msgs__msg__TireForces(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: front_right
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_hellocm_msgs__msg__TireForces(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: rear_left
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_hellocm_msgs__msg__TireForces(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: rear_right
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_hellocm_msgs__msg__TireForces(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hellocm_msgs__msg__TireForcesArray;
    is_plain =
      (
      offsetof(DataType, rear_right) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TireForcesArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const hellocm_msgs__msg__TireForcesArray * ros_message = static_cast<const hellocm_msgs__msg__TireForcesArray *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_hellocm_msgs__msg__TireForcesArray(ros_message, cdr);
}

static bool _TireForcesArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  hellocm_msgs__msg__TireForcesArray * ros_message = static_cast<hellocm_msgs__msg__TireForcesArray *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_hellocm_msgs__msg__TireForcesArray(cdr, ros_message);
}

static uint32_t _TireForcesArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hellocm_msgs__msg__TireForcesArray(
      untyped_ros_message, 0));
}

static size_t _TireForcesArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_hellocm_msgs__msg__TireForcesArray(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TireForcesArray = {
  "hellocm_msgs::msg",
  "TireForcesArray",
  _TireForcesArray__cdr_serialize,
  _TireForcesArray__cdr_deserialize,
  _TireForcesArray__get_serialized_size,
  _TireForcesArray__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TireForcesArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TireForcesArray,
  get_message_typesupport_handle_function,
  &hellocm_msgs__msg__TireForcesArray__get_type_hash,
  &hellocm_msgs__msg__TireForcesArray__get_type_description,
  &hellocm_msgs__msg__TireForcesArray__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hellocm_msgs, msg, TireForcesArray)() {
  return &_TireForcesArray__type_support;
}

#if defined(__cplusplus)
}
#endif
