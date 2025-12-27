// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from cmrosutils:srv/CMRemoteControl.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "cmrosutils/srv/detail/cm_remote_control__struct.h"
#include "cmrosutils/srv/detail/cm_remote_control__type_support.h"
#include "cmrosutils/srv/detail/cm_remote_control__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace cmrosutils
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CMRemoteControl_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CMRemoteControl_Request_type_support_ids_t;

static const _CMRemoteControl_Request_type_support_ids_t _CMRemoteControl_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CMRemoteControl_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CMRemoteControl_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CMRemoteControl_Request_type_support_symbol_names_t _CMRemoteControl_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cmrosutils, srv, CMRemoteControl_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmrosutils, srv, CMRemoteControl_Request)),
  }
};

typedef struct _CMRemoteControl_Request_type_support_data_t
{
  void * data[2];
} _CMRemoteControl_Request_type_support_data_t;

static _CMRemoteControl_Request_type_support_data_t _CMRemoteControl_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CMRemoteControl_Request_message_typesupport_map = {
  2,
  "cmrosutils",
  &_CMRemoteControl_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CMRemoteControl_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CMRemoteControl_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CMRemoteControl_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CMRemoteControl_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &cmrosutils__srv__CMRemoteControl_Request__get_type_hash,
  &cmrosutils__srv__CMRemoteControl_Request__get_type_description,
  &cmrosutils__srv__CMRemoteControl_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace cmrosutils

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, cmrosutils, srv, CMRemoteControl_Request)() {
  return &::cmrosutils::srv::rosidl_typesupport_c::CMRemoteControl_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cmrosutils/srv/detail/cm_remote_control__struct.h"
// already included above
// #include "cmrosutils/srv/detail/cm_remote_control__type_support.h"
// already included above
// #include "cmrosutils/srv/detail/cm_remote_control__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cmrosutils
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CMRemoteControl_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CMRemoteControl_Response_type_support_ids_t;

static const _CMRemoteControl_Response_type_support_ids_t _CMRemoteControl_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CMRemoteControl_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CMRemoteControl_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CMRemoteControl_Response_type_support_symbol_names_t _CMRemoteControl_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cmrosutils, srv, CMRemoteControl_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmrosutils, srv, CMRemoteControl_Response)),
  }
};

typedef struct _CMRemoteControl_Response_type_support_data_t
{
  void * data[2];
} _CMRemoteControl_Response_type_support_data_t;

static _CMRemoteControl_Response_type_support_data_t _CMRemoteControl_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CMRemoteControl_Response_message_typesupport_map = {
  2,
  "cmrosutils",
  &_CMRemoteControl_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CMRemoteControl_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CMRemoteControl_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CMRemoteControl_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CMRemoteControl_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &cmrosutils__srv__CMRemoteControl_Response__get_type_hash,
  &cmrosutils__srv__CMRemoteControl_Response__get_type_description,
  &cmrosutils__srv__CMRemoteControl_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace cmrosutils

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, cmrosutils, srv, CMRemoteControl_Response)() {
  return &::cmrosutils::srv::rosidl_typesupport_c::CMRemoteControl_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cmrosutils/srv/detail/cm_remote_control__struct.h"
// already included above
// #include "cmrosutils/srv/detail/cm_remote_control__type_support.h"
// already included above
// #include "cmrosutils/srv/detail/cm_remote_control__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cmrosutils
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CMRemoteControl_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CMRemoteControl_Event_type_support_ids_t;

static const _CMRemoteControl_Event_type_support_ids_t _CMRemoteControl_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CMRemoteControl_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CMRemoteControl_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CMRemoteControl_Event_type_support_symbol_names_t _CMRemoteControl_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cmrosutils, srv, CMRemoteControl_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmrosutils, srv, CMRemoteControl_Event)),
  }
};

typedef struct _CMRemoteControl_Event_type_support_data_t
{
  void * data[2];
} _CMRemoteControl_Event_type_support_data_t;

static _CMRemoteControl_Event_type_support_data_t _CMRemoteControl_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CMRemoteControl_Event_message_typesupport_map = {
  2,
  "cmrosutils",
  &_CMRemoteControl_Event_message_typesupport_ids.typesupport_identifier[0],
  &_CMRemoteControl_Event_message_typesupport_symbol_names.symbol_name[0],
  &_CMRemoteControl_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CMRemoteControl_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CMRemoteControl_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &cmrosutils__srv__CMRemoteControl_Event__get_type_hash,
  &cmrosutils__srv__CMRemoteControl_Event__get_type_description,
  &cmrosutils__srv__CMRemoteControl_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace cmrosutils

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, cmrosutils, srv, CMRemoteControl_Event)() {
  return &::cmrosutils::srv::rosidl_typesupport_c::CMRemoteControl_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cmrosutils/srv/detail/cm_remote_control__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace cmrosutils
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _CMRemoteControl_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CMRemoteControl_type_support_ids_t;

static const _CMRemoteControl_type_support_ids_t _CMRemoteControl_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CMRemoteControl_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CMRemoteControl_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CMRemoteControl_type_support_symbol_names_t _CMRemoteControl_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cmrosutils, srv, CMRemoteControl)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cmrosutils, srv, CMRemoteControl)),
  }
};

typedef struct _CMRemoteControl_type_support_data_t
{
  void * data[2];
} _CMRemoteControl_type_support_data_t;

static _CMRemoteControl_type_support_data_t _CMRemoteControl_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CMRemoteControl_service_typesupport_map = {
  2,
  "cmrosutils",
  &_CMRemoteControl_service_typesupport_ids.typesupport_identifier[0],
  &_CMRemoteControl_service_typesupport_symbol_names.symbol_name[0],
  &_CMRemoteControl_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CMRemoteControl_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CMRemoteControl_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &CMRemoteControl_Request_message_type_support_handle,
  &CMRemoteControl_Response_message_type_support_handle,
  &CMRemoteControl_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    cmrosutils,
    srv,
    CMRemoteControl
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    cmrosutils,
    srv,
    CMRemoteControl
  ),
  &cmrosutils__srv__CMRemoteControl__get_type_hash,
  &cmrosutils__srv__CMRemoteControl__get_type_description,
  &cmrosutils__srv__CMRemoteControl__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace cmrosutils

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, cmrosutils, srv, CMRemoteControl)() {
  return &::cmrosutils::srv::rosidl_typesupport_c::CMRemoteControl_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
