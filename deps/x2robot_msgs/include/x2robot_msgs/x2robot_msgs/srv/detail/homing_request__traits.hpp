// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from x2robot_msgs:srv/HomingRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/srv/homing_request.hpp"


#ifndef X2ROBOT_MSGS__SRV__DETAIL__HOMING_REQUEST__TRAITS_HPP_
#define X2ROBOT_MSGS__SRV__DETAIL__HOMING_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "x2robot_msgs/srv/detail/homing_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace x2robot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const HomingRequest_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HomingRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HomingRequest_Request & msg, bool use_flow_style = false)
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

}  // namespace x2robot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use x2robot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const x2robot_msgs::srv::HomingRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::srv::HomingRequest_Request & msg)
{
  return x2robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::srv::HomingRequest_Request>()
{
  return "x2robot_msgs::srv::HomingRequest_Request";
}

template<>
inline const char * name<x2robot_msgs::srv::HomingRequest_Request>()
{
  return "x2robot_msgs/srv/HomingRequest_Request";
}

template<>
struct has_fixed_size<x2robot_msgs::srv::HomingRequest_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<x2robot_msgs::srv::HomingRequest_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<x2robot_msgs::srv::HomingRequest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace x2robot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const HomingRequest_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_succ
  {
    out << "is_succ: ";
    rosidl_generator_traits::value_to_yaml(msg.is_succ, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HomingRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_succ
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_succ: ";
    rosidl_generator_traits::value_to_yaml(msg.is_succ, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HomingRequest_Response & msg, bool use_flow_style = false)
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

}  // namespace x2robot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use x2robot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const x2robot_msgs::srv::HomingRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::srv::HomingRequest_Response & msg)
{
  return x2robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::srv::HomingRequest_Response>()
{
  return "x2robot_msgs::srv::HomingRequest_Response";
}

template<>
inline const char * name<x2robot_msgs::srv::HomingRequest_Response>()
{
  return "x2robot_msgs/srv/HomingRequest_Response";
}

template<>
struct has_fixed_size<x2robot_msgs::srv::HomingRequest_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<x2robot_msgs::srv::HomingRequest_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<x2robot_msgs::srv::HomingRequest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace x2robot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const HomingRequest_Event & msg,
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
  const HomingRequest_Event & msg,
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

inline std::string to_yaml(const HomingRequest_Event & msg, bool use_flow_style = false)
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

}  // namespace x2robot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use x2robot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const x2robot_msgs::srv::HomingRequest_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::srv::HomingRequest_Event & msg)
{
  return x2robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::srv::HomingRequest_Event>()
{
  return "x2robot_msgs::srv::HomingRequest_Event";
}

template<>
inline const char * name<x2robot_msgs::srv::HomingRequest_Event>()
{
  return "x2robot_msgs/srv/HomingRequest_Event";
}

template<>
struct has_fixed_size<x2robot_msgs::srv::HomingRequest_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<x2robot_msgs::srv::HomingRequest_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<x2robot_msgs::srv::HomingRequest_Request>::value && has_bounded_size<x2robot_msgs::srv::HomingRequest_Response>::value> {};

template<>
struct is_message<x2robot_msgs::srv::HomingRequest_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<x2robot_msgs::srv::HomingRequest>()
{
  return "x2robot_msgs::srv::HomingRequest";
}

template<>
inline const char * name<x2robot_msgs::srv::HomingRequest>()
{
  return "x2robot_msgs/srv/HomingRequest";
}

template<>
struct has_fixed_size<x2robot_msgs::srv::HomingRequest>
  : std::integral_constant<
    bool,
    has_fixed_size<x2robot_msgs::srv::HomingRequest_Request>::value &&
    has_fixed_size<x2robot_msgs::srv::HomingRequest_Response>::value
  >
{
};

template<>
struct has_bounded_size<x2robot_msgs::srv::HomingRequest>
  : std::integral_constant<
    bool,
    has_bounded_size<x2robot_msgs::srv::HomingRequest_Request>::value &&
    has_bounded_size<x2robot_msgs::srv::HomingRequest_Response>::value
  >
{
};

template<>
struct is_service<x2robot_msgs::srv::HomingRequest>
  : std::true_type
{
};

template<>
struct is_service_request<x2robot_msgs::srv::HomingRequest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<x2robot_msgs::srv::HomingRequest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // X2ROBOT_MSGS__SRV__DETAIL__HOMING_REQUEST__TRAITS_HPP_
