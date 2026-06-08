// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/JointMotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/joint_motor_status.hpp"


#ifndef PROTOCOL__MSG__DETAIL__JOINT_MOTOR_STATUS__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__JOINT_MOTOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "protocol/msg/detail/joint_motor_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'joint_motor_status'
#include "protocol/msg/detail/motor_status__traits.hpp"

namespace protocol
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointMotorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_motor_status
  {
    if (msg.joint_motor_status.size() == 0) {
      out << "joint_motor_status: []";
    } else {
      out << "joint_motor_status: [";
      size_t pending_items = msg.joint_motor_status.size();
      for (auto item : msg.joint_motor_status) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: all_joints_healthy
  {
    out << "all_joints_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.all_joints_healthy, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointMotorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_motor_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_motor_status.size() == 0) {
      out << "joint_motor_status: []\n";
    } else {
      out << "joint_motor_status:\n";
      for (auto item : msg.joint_motor_status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: all_joints_healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_joints_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.all_joints_healthy, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointMotorStatus & msg, bool use_flow_style = false)
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

}  // namespace protocol

namespace rosidl_generator_traits
{

[[deprecated("use protocol::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const protocol::msg::JointMotorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  protocol::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use protocol::msg::to_yaml() instead")]]
inline std::string to_yaml(const protocol::msg::JointMotorStatus & msg)
{
  return protocol::msg::to_yaml(msg);
}

template<>
inline const char * data_type<protocol::msg::JointMotorStatus>()
{
  return "protocol::msg::JointMotorStatus";
}

template<>
inline const char * name<protocol::msg::JointMotorStatus>()
{
  return "protocol/msg/JointMotorStatus";
}

template<>
struct has_fixed_size<protocol::msg::JointMotorStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::JointMotorStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::JointMotorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__JOINT_MOTOR_STATUS__TRAITS_HPP_
