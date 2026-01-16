// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/WrenchFramed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/wrench_framed.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__WRENCH_FRAMED__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__WRENCH_FRAMED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/msg/detail/wrench_framed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__traits.hpp"

namespace control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WrenchFramed & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
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
  const WrenchFramed & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
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

inline std::string to_yaml(const WrenchFramed & msg, bool use_flow_style = false)
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
  const control_msgs::msg::WrenchFramed & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::msg::WrenchFramed & msg)
{
  return control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::msg::WrenchFramed>()
{
  return "control_msgs::msg::WrenchFramed";
}

template<>
inline const char * name<control_msgs::msg::WrenchFramed>()
{
  return "control_msgs/msg/WrenchFramed";
}

template<>
struct has_fixed_size<control_msgs::msg::WrenchFramed>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::msg::WrenchFramed>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::msg::WrenchFramed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__WRENCH_FRAMED__TRAITS_HPP_
