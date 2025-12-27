// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cmrosutils:srv/CMRemoteControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cmrosutils/srv/cm_remote_control.h"


#ifndef CMROSUTILS__SRV__DETAIL__CM_REMOTE_CONTROL__STRUCT_H_
#define CMROSUTILS__SRV__DETAIL__CM_REMOTE_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
// Member 'msg'
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CMRemoteControl in the package cmrosutils.
typedef struct cmrosutils__srv__CMRemoteControl_Request
{
  /// general type of command
  rosidl_runtime_c__String type;
  /// message to be evaluated
  rosidl_runtime_c__String msg;
  /// additional data, e.g. command arguments, ...
  rosidl_runtime_c__String data;
} cmrosutils__srv__CMRemoteControl_Request;

// Struct for a sequence of cmrosutils__srv__CMRemoteControl_Request.
typedef struct cmrosutils__srv__CMRemoteControl_Request__Sequence
{
  cmrosutils__srv__CMRemoteControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cmrosutils__srv__CMRemoteControl_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CMRemoteControl in the package cmrosutils.
typedef struct cmrosutils__srv__CMRemoteControl_Response
{
  /// result of triggered service
  int32_t res;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String msg;
} cmrosutils__srv__CMRemoteControl_Response;

// Struct for a sequence of cmrosutils__srv__CMRemoteControl_Response.
typedef struct cmrosutils__srv__CMRemoteControl_Response__Sequence
{
  cmrosutils__srv__CMRemoteControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cmrosutils__srv__CMRemoteControl_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  cmrosutils__srv__CMRemoteControl_Event__request__MAX_SIZE = 1
};
// response
enum
{
  cmrosutils__srv__CMRemoteControl_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CMRemoteControl in the package cmrosutils.
typedef struct cmrosutils__srv__CMRemoteControl_Event
{
  service_msgs__msg__ServiceEventInfo info;
  cmrosutils__srv__CMRemoteControl_Request__Sequence request;
  cmrosutils__srv__CMRemoteControl_Response__Sequence response;
} cmrosutils__srv__CMRemoteControl_Event;

// Struct for a sequence of cmrosutils__srv__CMRemoteControl_Event.
typedef struct cmrosutils__srv__CMRemoteControl_Event__Sequence
{
  cmrosutils__srv__CMRemoteControl_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cmrosutils__srv__CMRemoteControl_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CMROSUTILS__SRV__DETAIL__CM_REMOTE_CONTROL__STRUCT_H_
