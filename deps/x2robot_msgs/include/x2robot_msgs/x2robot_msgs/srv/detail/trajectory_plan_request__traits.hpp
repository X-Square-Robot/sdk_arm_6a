// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from x2robot_msgs:srv/TrajectoryPlanRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/srv/trajectory_plan_request.hpp"


#ifndef X2ROBOT_MSGS__SRV__DETAIL__TRAJECTORY_PLAN_REQUEST__TRAITS_HPP_
#define X2ROBOT_MSGS__SRV__DETAIL__TRAJECTORY_PLAN_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "x2robot_msgs/srv/detail/trajectory_plan_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace x2robot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TrajectoryPlanRequest_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: group_name
  {
    out << "group_name: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name, out);
    out << ", ";
  }

  // member: start_state_joint_names
  {
    if (msg.start_state_joint_names.size() == 0) {
      out << "start_state_joint_names: []";
    } else {
      out << "start_state_joint_names: [";
      size_t pending_items = msg.start_state_joint_names.size();
      for (auto item : msg.start_state_joint_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: start_states
  {
    if (msg.start_states.size() == 0) {
      out << "start_states: []";
    } else {
      out << "start_states: [";
      size_t pending_items = msg.start_states.size();
      for (auto item : msg.start_states) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: goal_state_joint_names
  {
    if (msg.goal_state_joint_names.size() == 0) {
      out << "goal_state_joint_names: []";
    } else {
      out << "goal_state_joint_names: [";
      size_t pending_items = msg.goal_state_joint_names.size();
      for (auto item : msg.goal_state_joint_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: goal_states
  {
    if (msg.goal_states.size() == 0) {
      out << "goal_states: []";
    } else {
      out << "goal_states: [";
      size_t pending_items = msg.goal_states.size();
      for (auto item : msg.goal_states) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tolerance_above
  {
    if (msg.tolerance_above.size() == 0) {
      out << "tolerance_above: []";
    } else {
      out << "tolerance_above: [";
      size_t pending_items = msg.tolerance_above.size();
      for (auto item : msg.tolerance_above) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tolerance_below
  {
    if (msg.tolerance_below.size() == 0) {
      out << "tolerance_below: []";
    } else {
      out << "tolerance_below: [";
      size_t pending_items = msg.tolerance_below.size();
      for (auto item : msg.tolerance_below) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const TrajectoryPlanRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: group_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_name: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name, out);
    out << "\n";
  }

  // member: start_state_joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.start_state_joint_names.size() == 0) {
      out << "start_state_joint_names: []\n";
    } else {
      out << "start_state_joint_names:\n";
      for (auto item : msg.start_state_joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: start_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.start_states.size() == 0) {
      out << "start_states: []\n";
    } else {
      out << "start_states:\n";
      for (auto item : msg.start_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: goal_state_joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal_state_joint_names.size() == 0) {
      out << "goal_state_joint_names: []\n";
    } else {
      out << "goal_state_joint_names:\n";
      for (auto item : msg.goal_state_joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: goal_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal_states.size() == 0) {
      out << "goal_states: []\n";
    } else {
      out << "goal_states:\n";
      for (auto item : msg.goal_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tolerance_above
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tolerance_above.size() == 0) {
      out << "tolerance_above: []\n";
    } else {
      out << "tolerance_above:\n";
      for (auto item : msg.tolerance_above) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tolerance_below
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tolerance_below.size() == 0) {
      out << "tolerance_below: []\n";
    } else {
      out << "tolerance_below:\n";
      for (auto item : msg.tolerance_below) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const TrajectoryPlanRequest_Request & msg, bool use_flow_style = false)
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
  const x2robot_msgs::srv::TrajectoryPlanRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::srv::TrajectoryPlanRequest_Request & msg)
{
  return x2robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::srv::TrajectoryPlanRequest_Request>()
{
  return "x2robot_msgs::srv::TrajectoryPlanRequest_Request";
}

template<>
inline const char * name<x2robot_msgs::srv::TrajectoryPlanRequest_Request>()
{
  return "x2robot_msgs/srv/TrajectoryPlanRequest_Request";
}

template<>
struct has_fixed_size<x2robot_msgs::srv::TrajectoryPlanRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<x2robot_msgs::srv::TrajectoryPlanRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<x2robot_msgs::srv::TrajectoryPlanRequest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"

namespace x2robot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TrajectoryPlanRequest_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: trajectory
  {
    out << "trajectory: ";
    to_flow_style_yaml(msg.trajectory, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryPlanRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory:\n";
    to_block_style_yaml(msg.trajectory, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryPlanRequest_Response & msg, bool use_flow_style = false)
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
  const x2robot_msgs::srv::TrajectoryPlanRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::srv::TrajectoryPlanRequest_Response & msg)
{
  return x2robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::srv::TrajectoryPlanRequest_Response>()
{
  return "x2robot_msgs::srv::TrajectoryPlanRequest_Response";
}

template<>
inline const char * name<x2robot_msgs::srv::TrajectoryPlanRequest_Response>()
{
  return "x2robot_msgs/srv/TrajectoryPlanRequest_Response";
}

template<>
struct has_fixed_size<x2robot_msgs::srv::TrajectoryPlanRequest_Response>
  : std::integral_constant<bool, has_fixed_size<trajectory_msgs::msg::JointTrajectory>::value> {};

template<>
struct has_bounded_size<x2robot_msgs::srv::TrajectoryPlanRequest_Response>
  : std::integral_constant<bool, has_bounded_size<trajectory_msgs::msg::JointTrajectory>::value> {};

template<>
struct is_message<x2robot_msgs::srv::TrajectoryPlanRequest_Response>
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
  const TrajectoryPlanRequest_Event & msg,
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
  const TrajectoryPlanRequest_Event & msg,
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

inline std::string to_yaml(const TrajectoryPlanRequest_Event & msg, bool use_flow_style = false)
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
  const x2robot_msgs::srv::TrajectoryPlanRequest_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::srv::TrajectoryPlanRequest_Event & msg)
{
  return x2robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::srv::TrajectoryPlanRequest_Event>()
{
  return "x2robot_msgs::srv::TrajectoryPlanRequest_Event";
}

template<>
inline const char * name<x2robot_msgs::srv::TrajectoryPlanRequest_Event>()
{
  return "x2robot_msgs/srv/TrajectoryPlanRequest_Event";
}

template<>
struct has_fixed_size<x2robot_msgs::srv::TrajectoryPlanRequest_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<x2robot_msgs::srv::TrajectoryPlanRequest_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<x2robot_msgs::srv::TrajectoryPlanRequest_Request>::value && has_bounded_size<x2robot_msgs::srv::TrajectoryPlanRequest_Response>::value> {};

template<>
struct is_message<x2robot_msgs::srv::TrajectoryPlanRequest_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<x2robot_msgs::srv::TrajectoryPlanRequest>()
{
  return "x2robot_msgs::srv::TrajectoryPlanRequest";
}

template<>
inline const char * name<x2robot_msgs::srv::TrajectoryPlanRequest>()
{
  return "x2robot_msgs/srv/TrajectoryPlanRequest";
}

template<>
struct has_fixed_size<x2robot_msgs::srv::TrajectoryPlanRequest>
  : std::integral_constant<
    bool,
    has_fixed_size<x2robot_msgs::srv::TrajectoryPlanRequest_Request>::value &&
    has_fixed_size<x2robot_msgs::srv::TrajectoryPlanRequest_Response>::value
  >
{
};

template<>
struct has_bounded_size<x2robot_msgs::srv::TrajectoryPlanRequest>
  : std::integral_constant<
    bool,
    has_bounded_size<x2robot_msgs::srv::TrajectoryPlanRequest_Request>::value &&
    has_bounded_size<x2robot_msgs::srv::TrajectoryPlanRequest_Response>::value
  >
{
};

template<>
struct is_service<x2robot_msgs::srv::TrajectoryPlanRequest>
  : std::true_type
{
};

template<>
struct is_service_request<x2robot_msgs::srv::TrajectoryPlanRequest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<x2robot_msgs::srv::TrajectoryPlanRequest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // X2ROBOT_MSGS__SRV__DETAIL__TRAJECTORY_PLAN_REQUEST__TRAITS_HPP_
