// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hellocm_msgs:msg/TireForcesArray.idl
// generated code does not contain a copyright notice
#include "hellocm_msgs/msg/detail/tire_forces_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hellocm_msgs/msg/detail/tire_forces_array__functions.h"
#include "hellocm_msgs/msg/detail/tire_forces_array__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_key_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace hellocm_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const hellocm_msgs::msg::TireForces &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  hellocm_msgs::msg::TireForces &);
size_t get_serialized_size(
  const hellocm_msgs::msg::TireForces &,
  size_t current_alignment);
size_t
max_serialized_size_TireForces(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const hellocm_msgs::msg::TireForces &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const hellocm_msgs::msg::TireForces &,
  size_t current_alignment);
size_t
max_serialized_size_key_TireForces(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace hellocm_msgs

// functions for hellocm_msgs::msg::TireForces already declared above

// functions for hellocm_msgs::msg::TireForces already declared above

// functions for hellocm_msgs::msg::TireForces already declared above


namespace hellocm_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hellocm_msgs
cdr_serialize(
  const hellocm_msgs::msg::TireForcesArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);

  // Member: front_left
  hellocm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.front_left,
    cdr);

  // Member: front_right
  hellocm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.front_right,
    cdr);

  // Member: rear_left
  hellocm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rear_left,
    cdr);

  // Member: rear_right
  hellocm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rear_right,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hellocm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hellocm_msgs::msg::TireForcesArray & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: front_left
  hellocm_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.front_left);

  // Member: front_right
  hellocm_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.front_right);

  // Member: rear_left
  hellocm_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rear_left);

  // Member: rear_right
  hellocm_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rear_right);

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hellocm_msgs
get_serialized_size(
  const hellocm_msgs::msg::TireForcesArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);

  // Member: front_left
  current_alignment +=
    hellocm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.front_left, current_alignment);

  // Member: front_right
  current_alignment +=
    hellocm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.front_right, current_alignment);

  // Member: rear_left
  current_alignment +=
    hellocm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rear_left, current_alignment);

  // Member: rear_right
  current_alignment +=
    hellocm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rear_right, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hellocm_msgs
max_serialized_size_TireForcesArray(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: front_left
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        hellocm_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TireForces(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: front_right
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        hellocm_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TireForces(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: rear_left
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        hellocm_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TireForces(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: rear_right
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        hellocm_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TireForces(
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
    using DataType = hellocm_msgs::msg::TireForcesArray;
    is_plain =
      (
      offsetof(DataType, rear_right) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hellocm_msgs
cdr_serialize_key(
  const hellocm_msgs::msg::TireForcesArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.header,
    cdr);

  // Member: front_left
  hellocm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.front_left,
    cdr);

  // Member: front_right
  hellocm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.front_right,
    cdr);

  // Member: rear_left
  hellocm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.rear_left,
    cdr);

  // Member: rear_right
  hellocm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.rear_right,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hellocm_msgs
get_serialized_size_key(
  const hellocm_msgs::msg::TireForcesArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.header, current_alignment);

  // Member: front_left
  current_alignment +=
    hellocm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.front_left, current_alignment);

  // Member: front_right
  current_alignment +=
    hellocm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.front_right, current_alignment);

  // Member: rear_left
  current_alignment +=
    hellocm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.rear_left, current_alignment);

  // Member: rear_right
  current_alignment +=
    hellocm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.rear_right, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hellocm_msgs
max_serialized_size_key_TireForcesArray(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: front_left
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        hellocm_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_TireForces(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: front_right
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        hellocm_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_TireForces(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: rear_left
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        hellocm_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_TireForces(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: rear_right
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        hellocm_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_TireForces(
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
    using DataType = hellocm_msgs::msg::TireForcesArray;
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
  auto typed_message =
    static_cast<const hellocm_msgs::msg::TireForcesArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TireForcesArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hellocm_msgs::msg::TireForcesArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TireForcesArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hellocm_msgs::msg::TireForcesArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TireForcesArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TireForcesArray(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TireForcesArray__callbacks = {
  "hellocm_msgs::msg",
  "TireForcesArray",
  _TireForcesArray__cdr_serialize,
  _TireForcesArray__cdr_deserialize,
  _TireForcesArray__get_serialized_size,
  _TireForcesArray__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TireForcesArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TireForcesArray__callbacks,
  get_message_typesupport_handle_function,
  &hellocm_msgs__msg__TireForcesArray__get_type_hash,
  &hellocm_msgs__msg__TireForcesArray__get_type_description,
  &hellocm_msgs__msg__TireForcesArray__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace hellocm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hellocm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hellocm_msgs::msg::TireForcesArray>()
{
  return &hellocm_msgs::msg::typesupport_fastrtps_cpp::_TireForcesArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hellocm_msgs, msg, TireForcesArray)() {
  return &hellocm_msgs::msg::typesupport_fastrtps_cpp::_TireForcesArray__handle;
}

#ifdef __cplusplus
}
#endif
