// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from x2robot_msgs:msg/ArmPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/arm_pose.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__ARM_POSE__TRAITS_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__ARM_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "x2robot_msgs/msg/detail/arm_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace x2robot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: gripper
  {
    out << "gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmPose & msg, bool use_flow_style = false)
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
  const x2robot_msgs::msg::ArmPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::msg::ArmPose & msg)
{
  return x2robot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::msg::ArmPose>()
{
  return "x2robot_msgs::msg::ArmPose";
}

template<>
inline const char * name<x2robot_msgs::msg::ArmPose>()
{
  return "x2robot_msgs/msg/ArmPose";
}

template<>
struct has_fixed_size<x2robot_msgs::msg::ArmPose>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<x2robot_msgs::msg::ArmPose>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<x2robot_msgs::msg::ArmPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // X2ROBOT_MSGS__MSG__DETAIL__ARM_POSE__TRAITS_HPP_
