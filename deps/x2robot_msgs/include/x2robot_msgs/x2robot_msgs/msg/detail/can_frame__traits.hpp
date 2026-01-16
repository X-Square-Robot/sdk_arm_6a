// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from x2robot_msgs:msg/CanFrame.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/can_frame.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME__TRAITS_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "x2robot_msgs/msg/detail/can_frame__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace x2robot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CanFrame & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: can_id
  {
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << ", ";
  }

  // member: dlc
  {
    out << "dlc: ";
    rosidl_generator_traits::value_to_yaml(msg.dlc, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: err
  {
    out << "err: ";
    rosidl_generator_traits::value_to_yaml(msg.err, out);
    out << ", ";
  }

  // member: rtr
  {
    out << "rtr: ";
    rosidl_generator_traits::value_to_yaml(msg.rtr, out);
    out << ", ";
  }

  // member: eff
  {
    out << "eff: ";
    rosidl_generator_traits::value_to_yaml(msg.eff, out);
    out << ", ";
  }

  // member: fd
  {
    out << "fd: ";
    rosidl_generator_traits::value_to_yaml(msg.fd, out);
    out << ", ";
  }

  // member: brs
  {
    out << "brs: ";
    rosidl_generator_traits::value_to_yaml(msg.brs, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CanFrame & msg,
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

  // member: can_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << "\n";
  }

  // member: dlc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dlc: ";
    rosidl_generator_traits::value_to_yaml(msg.dlc, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err: ";
    rosidl_generator_traits::value_to_yaml(msg.err, out);
    out << "\n";
  }

  // member: rtr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtr: ";
    rosidl_generator_traits::value_to_yaml(msg.rtr, out);
    out << "\n";
  }

  // member: eff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eff: ";
    rosidl_generator_traits::value_to_yaml(msg.eff, out);
    out << "\n";
  }

  // member: fd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fd: ";
    rosidl_generator_traits::value_to_yaml(msg.fd, out);
    out << "\n";
  }

  // member: brs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brs: ";
    rosidl_generator_traits::value_to_yaml(msg.brs, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CanFrame & msg, bool use_flow_style = false)
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
  const x2robot_msgs::msg::CanFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::msg::CanFrame & msg)
{
  return x2robot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::msg::CanFrame>()
{
  return "x2robot_msgs::msg::CanFrame";
}

template<>
inline const char * name<x2robot_msgs::msg::CanFrame>()
{
  return "x2robot_msgs/msg/CanFrame";
}

template<>
struct has_fixed_size<x2robot_msgs::msg::CanFrame>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<x2robot_msgs::msg::CanFrame>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<x2robot_msgs::msg::CanFrame>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME__TRAITS_HPP_
