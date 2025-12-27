// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cmrosutils:srv/CMRemoteControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cmrosutils/srv/cm_remote_control.hpp"


#ifndef CMROSUTILS__SRV__DETAIL__CM_REMOTE_CONTROL__TRAITS_HPP_
#define CMROSUTILS__SRV__DETAIL__CM_REMOTE_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cmrosutils/srv/detail/cm_remote_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cmrosutils
{

namespace srv
{

inline void to_flow_style_yaml(
  const CMRemoteControl_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: msg
  {
    out << "msg: ";
    rosidl_generator_traits::value_to_yaml(msg.msg, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CMRemoteControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg: ";
    rosidl_generator_traits::value_to_yaml(msg.msg, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CMRemoteControl_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cmrosutils

namespace rosidl_generator_traits
{

[[deprecated("use cmrosutils::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cmrosutils::srv::CMRemoteControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cmrosutils::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cmrosutils::srv::to_yaml() instead")]]
inline std::string to_yaml(const cmrosutils::srv::CMRemoteControl_Request & msg)
{
  return cmrosutils::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cmrosutils::srv::CMRemoteControl_Request>()
{
  return "cmrosutils::srv::CMRemoteControl_Request";
}

template<>
inline const char * name<cmrosutils::srv::CMRemoteControl_Request>()
{
  return "cmrosutils/srv/CMRemoteControl_Request";
}

template<>
struct has_fixed_size<cmrosutils::srv::CMRemoteControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cmrosutils::srv::CMRemoteControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cmrosutils::srv::CMRemoteControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cmrosutils
{

namespace srv
{

inline void to_flow_style_yaml(
  const CMRemoteControl_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: res
  {
    out << "res: ";
    rosidl_generator_traits::value_to_yaml(msg.res, out);
    out << ", ";
  }

  // member: msg
  {
    out << "msg: ";
    rosidl_generator_traits::value_to_yaml(msg.msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CMRemoteControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: res
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "res: ";
    rosidl_generator_traits::value_to_yaml(msg.res, out);
    out << "\n";
  }

  // member: msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg: ";
    rosidl_generator_traits::value_to_yaml(msg.msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CMRemoteControl_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cmrosutils

namespace rosidl_generator_traits
{

[[deprecated("use cmrosutils::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cmrosutils::srv::CMRemoteControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cmrosutils::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cmrosutils::srv::to_yaml() instead")]]
inline std::string to_yaml(const cmrosutils::srv::CMRemoteControl_Response & msg)
{
  return cmrosutils::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cmrosutils::srv::CMRemoteControl_Response>()
{
  return "cmrosutils::srv::CMRemoteControl_Response";
}

template<>
inline const char * name<cmrosutils::srv::CMRemoteControl_Response>()
{
  return "cmrosutils/srv/CMRemoteControl_Response";
}

template<>
struct has_fixed_size<cmrosutils::srv::CMRemoteControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cmrosutils::srv::CMRemoteControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cmrosutils::srv::CMRemoteControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace cmrosutils
{

namespace srv
{

inline void to_flow_style_yaml(
  const CMRemoteControl_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CMRemoteControl_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CMRemoteControl_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cmrosutils

namespace rosidl_generator_traits
{

[[deprecated("use cmrosutils::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cmrosutils::srv::CMRemoteControl_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  cmrosutils::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cmrosutils::srv::to_yaml() instead")]]
inline std::string to_yaml(const cmrosutils::srv::CMRemoteControl_Event & msg)
{
  return cmrosutils::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cmrosutils::srv::CMRemoteControl_Event>()
{
  return "cmrosutils::srv::CMRemoteControl_Event";
}

template<>
inline const char * name<cmrosutils::srv::CMRemoteControl_Event>()
{
  return "cmrosutils/srv/CMRemoteControl_Event";
}

template<>
struct has_fixed_size<cmrosutils::srv::CMRemoteControl_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cmrosutils::srv::CMRemoteControl_Event>
  : std::integral_constant<bool, has_bounded_size<cmrosutils::srv::CMRemoteControl_Request>::value && has_bounded_size<cmrosutils::srv::CMRemoteControl_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<cmrosutils::srv::CMRemoteControl_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cmrosutils::srv::CMRemoteControl>()
{
  return "cmrosutils::srv::CMRemoteControl";
}

template<>
inline const char * name<cmrosutils::srv::CMRemoteControl>()
{
  return "cmrosutils/srv/CMRemoteControl";
}

template<>
struct has_fixed_size<cmrosutils::srv::CMRemoteControl>
  : std::integral_constant<
    bool,
    has_fixed_size<cmrosutils::srv::CMRemoteControl_Request>::value &&
    has_fixed_size<cmrosutils::srv::CMRemoteControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<cmrosutils::srv::CMRemoteControl>
  : std::integral_constant<
    bool,
    has_bounded_size<cmrosutils::srv::CMRemoteControl_Request>::value &&
    has_bounded_size<cmrosutils::srv::CMRemoteControl_Response>::value
  >
{
};

template<>
struct is_service<cmrosutils::srv::CMRemoteControl>
  : std::true_type
{
};

template<>
struct is_service_request<cmrosutils::srv::CMRemoteControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cmrosutils::srv::CMRemoteControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CMROSUTILS__SRV__DETAIL__CM_REMOTE_CONTROL__TRAITS_HPP_
