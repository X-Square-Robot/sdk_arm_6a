// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from x2robot_msgs:srv/SwitchRobotControlMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/srv/switch_robot_control_mode.hpp"


#ifndef X2ROBOT_MSGS__SRV__DETAIL__SWITCH_ROBOT_CONTROL_MODE__TRAITS_HPP_
#define X2ROBOT_MSGS__SRV__DETAIL__SWITCH_ROBOT_CONTROL_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "x2robot_msgs/srv/detail/switch_robot_control_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace x2robot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SwitchRobotControlMode_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_mode
  {
    out << "target_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.target_mode, out);
    out << ", ";
  }

  // member: request_for_homing
  {
    out << "request_for_homing: ";
    rosidl_generator_traits::value_to_yaml(msg.request_for_homing, out);
    out << ", ";
  }

  // member: try_recover
  {
    out << "try_recover: ";
    rosidl_generator_traits::value_to_yaml(msg.try_recover, out);
    out << ", ";
  }

  // member: target_motion_state
  {
    out << "target_motion_state: ";
    rosidl_generator_traits::value_to_yaml(msg.target_motion_state, out);
    out << ", ";
  }

  // member: data_collection_mode
  {
    out << "data_collection_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.data_collection_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SwitchRobotControlMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.target_mode, out);
    out << "\n";
  }

  // member: request_for_homing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_for_homing: ";
    rosidl_generator_traits::value_to_yaml(msg.request_for_homing, out);
    out << "\n";
  }

  // member: try_recover
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "try_recover: ";
    rosidl_generator_traits::value_to_yaml(msg.try_recover, out);
    out << "\n";
  }

  // member: target_motion_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_motion_state: ";
    rosidl_generator_traits::value_to_yaml(msg.target_motion_state, out);
    out << "\n";
  }

  // member: data_collection_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_collection_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.data_collection_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SwitchRobotControlMode_Request & msg, bool use_flow_style = false)
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
  const x2robot_msgs::srv::SwitchRobotControlMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::srv::SwitchRobotControlMode_Request & msg)
{
  return x2robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::srv::SwitchRobotControlMode_Request>()
{
  return "x2robot_msgs::srv::SwitchRobotControlMode_Request";
}

template<>
inline const char * name<x2robot_msgs::srv::SwitchRobotControlMode_Request>()
{
  return "x2robot_msgs/srv/SwitchRobotControlMode_Request";
}

template<>
struct has_fixed_size<x2robot_msgs::srv::SwitchRobotControlMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<x2robot_msgs::srv::SwitchRobotControlMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<x2robot_msgs::srv::SwitchRobotControlMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace x2robot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SwitchRobotControlMode_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ok
  {
    out << "ok: ";
    rosidl_generator_traits::value_to_yaml(msg.ok, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SwitchRobotControlMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ok: ";
    rosidl_generator_traits::value_to_yaml(msg.ok, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SwitchRobotControlMode_Response & msg, bool use_flow_style = false)
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
  const x2robot_msgs::srv::SwitchRobotControlMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::srv::SwitchRobotControlMode_Response & msg)
{
  return x2robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::srv::SwitchRobotControlMode_Response>()
{
  return "x2robot_msgs::srv::SwitchRobotControlMode_Response";
}

template<>
inline const char * name<x2robot_msgs::srv::SwitchRobotControlMode_Response>()
{
  return "x2robot_msgs/srv/SwitchRobotControlMode_Response";
}

template<>
struct has_fixed_size<x2robot_msgs::srv::SwitchRobotControlMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<x2robot_msgs::srv::SwitchRobotControlMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<x2robot_msgs::srv::SwitchRobotControlMode_Response>
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
  const SwitchRobotControlMode_Event & msg,
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
  const SwitchRobotControlMode_Event & msg,
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

inline std::string to_yaml(const SwitchRobotControlMode_Event & msg, bool use_flow_style = false)
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
  const x2robot_msgs::srv::SwitchRobotControlMode_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::srv::SwitchRobotControlMode_Event & msg)
{
  return x2robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::srv::SwitchRobotControlMode_Event>()
{
  return "x2robot_msgs::srv::SwitchRobotControlMode_Event";
}

template<>
inline const char * name<x2robot_msgs::srv::SwitchRobotControlMode_Event>()
{
  return "x2robot_msgs/srv/SwitchRobotControlMode_Event";
}

template<>
struct has_fixed_size<x2robot_msgs::srv::SwitchRobotControlMode_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<x2robot_msgs::srv::SwitchRobotControlMode_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<x2robot_msgs::srv::SwitchRobotControlMode_Request>::value && has_bounded_size<x2robot_msgs::srv::SwitchRobotControlMode_Response>::value> {};

template<>
struct is_message<x2robot_msgs::srv::SwitchRobotControlMode_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<x2robot_msgs::srv::SwitchRobotControlMode>()
{
  return "x2robot_msgs::srv::SwitchRobotControlMode";
}

template<>
inline const char * name<x2robot_msgs::srv::SwitchRobotControlMode>()
{
  return "x2robot_msgs/srv/SwitchRobotControlMode";
}

template<>
struct has_fixed_size<x2robot_msgs::srv::SwitchRobotControlMode>
  : std::integral_constant<
    bool,
    has_fixed_size<x2robot_msgs::srv::SwitchRobotControlMode_Request>::value &&
    has_fixed_size<x2robot_msgs::srv::SwitchRobotControlMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<x2robot_msgs::srv::SwitchRobotControlMode>
  : std::integral_constant<
    bool,
    has_bounded_size<x2robot_msgs::srv::SwitchRobotControlMode_Request>::value &&
    has_bounded_size<x2robot_msgs::srv::SwitchRobotControlMode_Response>::value
  >
{
};

template<>
struct is_service<x2robot_msgs::srv::SwitchRobotControlMode>
  : std::true_type
{
};

template<>
struct is_service_request<x2robot_msgs::srv::SwitchRobotControlMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<x2robot_msgs::srv::SwitchRobotControlMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // X2ROBOT_MSGS__SRV__DETAIL__SWITCH_ROBOT_CONTROL_MODE__TRAITS_HPP_
