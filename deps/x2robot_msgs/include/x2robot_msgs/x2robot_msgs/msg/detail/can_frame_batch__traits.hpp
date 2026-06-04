// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from x2robot_msgs:msg/CanFrameBatch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/can_frame_batch.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME_BATCH__TRAITS_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME_BATCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "x2robot_msgs/msg/detail/can_frame_batch__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'frames'
#include "x2robot_msgs/msg/detail/can_frame__traits.hpp"

namespace x2robot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CanFrameBatch & msg,
  std::ostream & out)
{
  out << "{";
  // member: frames
  {
    if (msg.frames.size() == 0) {
      out << "frames: []";
    } else {
      out << "frames: [";
      size_t pending_items = msg.frames.size();
      for (auto item : msg.frames) {
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
  const CanFrameBatch & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frames
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.frames.size() == 0) {
      out << "frames: []\n";
    } else {
      out << "frames:\n";
      for (auto item : msg.frames) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CanFrameBatch & msg, bool use_flow_style = false)
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
  const x2robot_msgs::msg::CanFrameBatch & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::msg::CanFrameBatch & msg)
{
  return x2robot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::msg::CanFrameBatch>()
{
  return "x2robot_msgs::msg::CanFrameBatch";
}

template<>
inline const char * name<x2robot_msgs::msg::CanFrameBatch>()
{
  return "x2robot_msgs/msg/CanFrameBatch";
}

template<>
struct has_fixed_size<x2robot_msgs::msg::CanFrameBatch>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<x2robot_msgs::msg::CanFrameBatch>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<x2robot_msgs::msg::CanFrameBatch>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME_BATCH__TRAITS_HPP_
