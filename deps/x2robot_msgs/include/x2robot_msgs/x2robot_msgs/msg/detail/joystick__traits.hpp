// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from x2robot_msgs:msg/Joystick.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/joystick.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__JOYSTICK__TRAITS_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__JOYSTICK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "x2robot_msgs/msg/detail/joystick__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace x2robot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Joystick & msg,
  std::ostream & out)
{
  out << "{";
  // member: joystick_x
  {
    out << "joystick_x: ";
    rosidl_generator_traits::value_to_yaml(msg.joystick_x, out);
    out << ", ";
  }

  // member: joystick_y
  {
    out << "joystick_y: ";
    rosidl_generator_traits::value_to_yaml(msg.joystick_y, out);
    out << ", ";
  }

  // member: trigger
  {
    out << "trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger, out);
    out << ", ";
  }

  // member: joy_button
  {
    out << "joy_button: ";
    rosidl_generator_traits::value_to_yaml(msg.joy_button, out);
    out << ", ";
  }

  // member: sw1
  {
    out << "sw1: ";
    rosidl_generator_traits::value_to_yaml(msg.sw1, out);
    out << ", ";
  }

  // member: sw2
  {
    out << "sw2: ";
    rosidl_generator_traits::value_to_yaml(msg.sw2, out);
    out << ", ";
  }

  // member: sw3
  {
    out << "sw3: ";
    rosidl_generator_traits::value_to_yaml(msg.sw3, out);
    out << ", ";
  }

  // member: sw4
  {
    out << "sw4: ";
    rosidl_generator_traits::value_to_yaml(msg.sw4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Joystick & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joystick_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joystick_x: ";
    rosidl_generator_traits::value_to_yaml(msg.joystick_x, out);
    out << "\n";
  }

  // member: joystick_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joystick_y: ";
    rosidl_generator_traits::value_to_yaml(msg.joystick_y, out);
    out << "\n";
  }

  // member: trigger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trigger: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger, out);
    out << "\n";
  }

  // member: joy_button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joy_button: ";
    rosidl_generator_traits::value_to_yaml(msg.joy_button, out);
    out << "\n";
  }

  // member: sw1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sw1: ";
    rosidl_generator_traits::value_to_yaml(msg.sw1, out);
    out << "\n";
  }

  // member: sw2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sw2: ";
    rosidl_generator_traits::value_to_yaml(msg.sw2, out);
    out << "\n";
  }

  // member: sw3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sw3: ";
    rosidl_generator_traits::value_to_yaml(msg.sw3, out);
    out << "\n";
  }

  // member: sw4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sw4: ";
    rosidl_generator_traits::value_to_yaml(msg.sw4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Joystick & msg, bool use_flow_style = false)
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
  const x2robot_msgs::msg::Joystick & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::msg::Joystick & msg)
{
  return x2robot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::msg::Joystick>()
{
  return "x2robot_msgs::msg::Joystick";
}

template<>
inline const char * name<x2robot_msgs::msg::Joystick>()
{
  return "x2robot_msgs/msg/Joystick";
}

template<>
struct has_fixed_size<x2robot_msgs::msg::Joystick>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<x2robot_msgs::msg::Joystick>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<x2robot_msgs::msg::Joystick>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // X2ROBOT_MSGS__MSG__DETAIL__JOYSTICK__TRAITS_HPP_
