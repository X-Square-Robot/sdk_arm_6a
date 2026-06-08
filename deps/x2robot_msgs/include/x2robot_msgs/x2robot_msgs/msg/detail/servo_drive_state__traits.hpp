// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from x2robot_msgs:msg/ServoDriveState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/servo_drive_state.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__SERVO_DRIVE_STATE__TRAITS_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__SERVO_DRIVE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "x2robot_msgs/msg/detail/servo_drive_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace x2robot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServoDriveState & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: joint_names
  {
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []";
    } else {
      out << "joint_names: [";
      size_t pending_items = msg.joint_names.size();
      for (auto item : msg.joint_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: error_codes
  {
    if (msg.error_codes.size() == 0) {
      out << "error_codes: []";
    } else {
      out << "error_codes: [";
      size_t pending_items = msg.error_codes.size();
      for (auto item : msg.error_codes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_mode
  {
    out << "current_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.current_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServoDriveState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []\n";
    } else {
      out << "joint_names:\n";
      for (auto item : msg.joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: error_codes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error_codes.size() == 0) {
      out << "error_codes: []\n";
    } else {
      out << "error_codes:\n";
      for (auto item : msg.error_codes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.current_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServoDriveState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace x2robot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use x2robot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const x2robot_msgs::msg::ServoDriveState & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::msg::ServoDriveState & msg)
{
  return x2robot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::msg::ServoDriveState>()
{
  return "x2robot_msgs::msg::ServoDriveState";
}

template<>
inline const char * name<x2robot_msgs::msg::ServoDriveState>()
{
  return "x2robot_msgs/msg/ServoDriveState";
}

template<>
struct has_fixed_size<x2robot_msgs::msg::ServoDriveState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<x2robot_msgs::msg::ServoDriveState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<x2robot_msgs::msg::ServoDriveState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // X2ROBOT_MSGS__MSG__DETAIL__SERVO_DRIVE_STATE__TRAITS_HPP_
