// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from x2robot_msgs:srv/MoveitGroupStateRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/srv/moveit_group_state_request.hpp"


#ifndef X2ROBOT_MSGS__SRV__DETAIL__MOVEIT_GROUP_STATE_REQUEST__TRAITS_HPP_
#define X2ROBOT_MSGS__SRV__DETAIL__MOVEIT_GROUP_STATE_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "x2robot_msgs/srv/detail/moveit_group_state_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace x2robot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveitGroupStateRequest_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: group_state
  {
    out << "group_state: ";
    rosidl_generator_traits::value_to_yaml(msg.group_state, out);
    out << ", ";
  }

  // member: num_planning_attempts
  {
    out << "num_planning_attempts: ";
    rosidl_generator_traits::value_to_yaml(msg.num_planning_attempts, out);
    out << ", ";
  }

  // member: allowed_planning_time
  {
    out << "allowed_planning_time: ";
    rosidl_generator_traits::value_to_yaml(msg.allowed_planning_time, out);
    out << ", ";
  }

  // member: max_velocity_scaling_factor
  {
    out << "max_velocity_scaling_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity_scaling_factor, out);
    out << ", ";
  }

  // member: max_acceleration_scaling_factor
  {
    out << "max_acceleration_scaling_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration_scaling_factor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveitGroupStateRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: group_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_state: ";
    rosidl_generator_traits::value_to_yaml(msg.group_state, out);
    out << "\n";
  }

  // member: num_planning_attempts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_planning_attempts: ";
    rosidl_generator_traits::value_to_yaml(msg.num_planning_attempts, out);
    out << "\n";
  }

  // member: allowed_planning_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allowed_planning_time: ";
    rosidl_generator_traits::value_to_yaml(msg.allowed_planning_time, out);
    out << "\n";
  }

  // member: max_velocity_scaling_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_velocity_scaling_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity_scaling_factor, out);
    out << "\n";
  }

  // member: max_acceleration_scaling_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_acceleration_scaling_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration_scaling_factor, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveitGroupStateRequest_Request & msg, bool use_flow_style = false)
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
  const x2robot_msgs::srv::MoveitGroupStateRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::srv::MoveitGroupStateRequest_Request & msg)
{
  return x2robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::srv::MoveitGroupStateRequest_Request>()
{
  return "x2robot_msgs::srv::MoveitGroupStateRequest_Request";
}

template<>
inline const char * name<x2robot_msgs::srv::MoveitGroupStateRequest_Request>()
{
  return "x2robot_msgs/srv/MoveitGroupStateRequest_Request";
}

template<>
struct has_fixed_size<x2robot_msgs::srv::MoveitGroupStateRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<x2robot_msgs::srv::MoveitGroupStateRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<x2robot_msgs::srv::MoveitGroupStateRequest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace x2robot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveitGroupStateRequest_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: moveit_move_result
  {
    out << "moveit_move_result: ";
    rosidl_generator_traits::value_to_yaml(msg.moveit_move_result, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveitGroupStateRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: moveit_move_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moveit_move_result: ";
    rosidl_generator_traits::value_to_yaml(msg.moveit_move_result, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveitGroupStateRequest_Response & msg, bool use_flow_style = false)
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
  const x2robot_msgs::srv::MoveitGroupStateRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::srv::MoveitGroupStateRequest_Response & msg)
{
  return x2robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::srv::MoveitGroupStateRequest_Response>()
{
  return "x2robot_msgs::srv::MoveitGroupStateRequest_Response";
}

template<>
inline const char * name<x2robot_msgs::srv::MoveitGroupStateRequest_Response>()
{
  return "x2robot_msgs/srv/MoveitGroupStateRequest_Response";
}

template<>
struct has_fixed_size<x2robot_msgs::srv::MoveitGroupStateRequest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<x2robot_msgs::srv::MoveitGroupStateRequest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<x2robot_msgs::srv::MoveitGroupStateRequest_Response>
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
  const MoveitGroupStateRequest_Event & msg,
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
  const MoveitGroupStateRequest_Event & msg,
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

inline std::string to_yaml(const MoveitGroupStateRequest_Event & msg, bool use_flow_style = false)
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
  const x2robot_msgs::srv::MoveitGroupStateRequest_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::srv::MoveitGroupStateRequest_Event & msg)
{
  return x2robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::srv::MoveitGroupStateRequest_Event>()
{
  return "x2robot_msgs::srv::MoveitGroupStateRequest_Event";
}

template<>
inline const char * name<x2robot_msgs::srv::MoveitGroupStateRequest_Event>()
{
  return "x2robot_msgs/srv/MoveitGroupStateRequest_Event";
}

template<>
struct has_fixed_size<x2robot_msgs::srv::MoveitGroupStateRequest_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<x2robot_msgs::srv::MoveitGroupStateRequest_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<x2robot_msgs::srv::MoveitGroupStateRequest_Request>::value && has_bounded_size<x2robot_msgs::srv::MoveitGroupStateRequest_Response>::value> {};

template<>
struct is_message<x2robot_msgs::srv::MoveitGroupStateRequest_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<x2robot_msgs::srv::MoveitGroupStateRequest>()
{
  return "x2robot_msgs::srv::MoveitGroupStateRequest";
}

template<>
inline const char * name<x2robot_msgs::srv::MoveitGroupStateRequest>()
{
  return "x2robot_msgs/srv/MoveitGroupStateRequest";
}

template<>
struct has_fixed_size<x2robot_msgs::srv::MoveitGroupStateRequest>
  : std::integral_constant<
    bool,
    has_fixed_size<x2robot_msgs::srv::MoveitGroupStateRequest_Request>::value &&
    has_fixed_size<x2robot_msgs::srv::MoveitGroupStateRequest_Response>::value
  >
{
};

template<>
struct has_bounded_size<x2robot_msgs::srv::MoveitGroupStateRequest>
  : std::integral_constant<
    bool,
    has_bounded_size<x2robot_msgs::srv::MoveitGroupStateRequest_Request>::value &&
    has_bounded_size<x2robot_msgs::srv::MoveitGroupStateRequest_Response>::value
  >
{
};

template<>
struct is_service<x2robot_msgs::srv::MoveitGroupStateRequest>
  : std::true_type
{
};

template<>
struct is_service_request<x2robot_msgs::srv::MoveitGroupStateRequest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<x2robot_msgs::srv::MoveitGroupStateRequest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // X2ROBOT_MSGS__SRV__DETAIL__MOVEIT_GROUP_STATE_REQUEST__TRAITS_HPP_
