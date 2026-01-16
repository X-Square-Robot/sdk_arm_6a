// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/JointWrenchTrajectoryPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/joint_wrench_trajectory_point.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_WRENCH_TRAJECTORY_POINT__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_WRENCH_TRAJECTORY_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/msg/detail/joint_wrench_trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'point'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__traits.hpp"
// Member 'wrench'
#include "control_msgs/msg/detail/wrench_framed__traits.hpp"

namespace control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointWrenchTrajectoryPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: point
  {
    out << "point: ";
    to_flow_style_yaml(msg.point, out);
    out << ", ";
  }

  // member: wrench
  {
    out << "wrench: ";
    to_flow_style_yaml(msg.wrench, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointWrenchTrajectoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point:\n";
    to_block_style_yaml(msg.point, out, indentation + 2);
  }

  // member: wrench
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrench:\n";
    to_block_style_yaml(msg.wrench, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointWrenchTrajectoryPoint & msg, bool use_flow_style = false)
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

}  // namespace control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_msgs::msg::JointWrenchTrajectoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::msg::JointWrenchTrajectoryPoint & msg)
{
  return control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::msg::JointWrenchTrajectoryPoint>()
{
  return "control_msgs::msg::JointWrenchTrajectoryPoint";
}

template<>
inline const char * name<control_msgs::msg::JointWrenchTrajectoryPoint>()
{
  return "control_msgs/msg/JointWrenchTrajectoryPoint";
}

template<>
struct has_fixed_size<control_msgs::msg::JointWrenchTrajectoryPoint>
  : std::integral_constant<bool, has_fixed_size<control_msgs::msg::WrenchFramed>::value && has_fixed_size<trajectory_msgs::msg::JointTrajectoryPoint>::value> {};

template<>
struct has_bounded_size<control_msgs::msg::JointWrenchTrajectoryPoint>
  : std::integral_constant<bool, has_bounded_size<control_msgs::msg::WrenchFramed>::value && has_bounded_size<trajectory_msgs::msg::JointTrajectoryPoint>::value> {};

template<>
struct is_message<control_msgs::msg::JointWrenchTrajectoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_WRENCH_TRAJECTORY_POINT__TRAITS_HPP_
