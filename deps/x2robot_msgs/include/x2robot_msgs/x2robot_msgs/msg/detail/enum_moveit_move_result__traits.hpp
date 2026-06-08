// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from x2robot_msgs:msg/EnumMoveitMoveResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/enum_moveit_move_result.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__ENUM_MOVEIT_MOVE_RESULT__TRAITS_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__ENUM_MOVEIT_MOVE_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "x2robot_msgs/msg/detail/enum_moveit_move_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace x2robot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnumMoveitMoveResult & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EnumMoveitMoveResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnumMoveitMoveResult & msg, bool use_flow_style = false)
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
  const x2robot_msgs::msg::EnumMoveitMoveResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::msg::EnumMoveitMoveResult & msg)
{
  return x2robot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::msg::EnumMoveitMoveResult>()
{
  return "x2robot_msgs::msg::EnumMoveitMoveResult";
}

template<>
inline const char * name<x2robot_msgs::msg::EnumMoveitMoveResult>()
{
  return "x2robot_msgs/msg/EnumMoveitMoveResult";
}

template<>
struct has_fixed_size<x2robot_msgs::msg::EnumMoveitMoveResult>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<x2robot_msgs::msg::EnumMoveitMoveResult>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<x2robot_msgs::msg::EnumMoveitMoveResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // X2ROBOT_MSGS__MSG__DETAIL__ENUM_MOVEIT_MOVE_RESULT__TRAITS_HPP_
