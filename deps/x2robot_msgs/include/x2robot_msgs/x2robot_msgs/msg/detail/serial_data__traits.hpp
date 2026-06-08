// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from x2robot_msgs:msg/SerialData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/serial_data.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__SERIAL_DATA__TRAITS_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__SERIAL_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "x2robot_msgs/msg/detail/serial_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace x2robot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SerialData & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: device_id
  {
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << ", ";
  }

  // member: cmd_id
  {
    out << "cmd_id: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_id, out);
    out << ", ";
  }

  // member: payload
  {
    if (msg.payload.size() == 0) {
      out << "payload: []";
    } else {
      out << "payload: [";
      size_t pending_items = msg.payload.size();
      for (auto item : msg.payload) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const SerialData & msg,
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

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: cmd_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_id: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_id, out);
    out << "\n";
  }

  // member: payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.payload.size() == 0) {
      out << "payload: []\n";
    } else {
      out << "payload:\n";
      for (auto item : msg.payload) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SerialData & msg, bool use_flow_style = false)
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
  const x2robot_msgs::msg::SerialData & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::msg::SerialData & msg)
{
  return x2robot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::msg::SerialData>()
{
  return "x2robot_msgs::msg::SerialData";
}

template<>
inline const char * name<x2robot_msgs::msg::SerialData>()
{
  return "x2robot_msgs/msg/SerialData";
}

template<>
struct has_fixed_size<x2robot_msgs::msg::SerialData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<x2robot_msgs::msg::SerialData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<x2robot_msgs::msg::SerialData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // X2ROBOT_MSGS__MSG__DETAIL__SERIAL_DATA__TRAITS_HPP_
