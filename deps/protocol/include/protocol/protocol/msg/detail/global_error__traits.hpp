// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/GlobalError.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/global_error.hpp"


#ifndef PROTOCOL__MSG__DETAIL__GLOBAL_ERROR__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__GLOBAL_ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "protocol/msg/detail/global_error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace protocol
{

namespace msg
{

inline void to_flow_style_yaml(
  const GlobalError & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: level
  {
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << ", ";
  }

  // member: exception
  {
    out << "exception: ";
    rosidl_generator_traits::value_to_yaml(msg.exception, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GlobalError & msg,
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

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << "\n";
  }

  // member: exception
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exception: ";
    rosidl_generator_traits::value_to_yaml(msg.exception, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GlobalError & msg, bool use_flow_style = false)
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
  const protocol::msg::GlobalError & msg,
  std::ostream & out, size_t indentation = 0)
{
  protocol::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use protocol::msg::to_yaml() instead")]]
inline std::string to_yaml(const protocol::msg::GlobalError & msg)
{
  return protocol::msg::to_yaml(msg);
}

template<>
inline const char * data_type<protocol::msg::GlobalError>()
{
  return "protocol::msg::GlobalError";
}

template<>
inline const char * name<protocol::msg::GlobalError>()
{
  return "protocol/msg/GlobalError";
}

template<>
struct has_fixed_size<protocol::msg::GlobalError>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::GlobalError>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::GlobalError>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__GLOBAL_ERROR__TRAITS_HPP_
