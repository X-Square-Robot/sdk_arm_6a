// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/ErrorCodes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/error_codes.hpp"


#ifndef PROTOCOL__MSG__DETAIL__ERROR_CODES__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__ERROR_CODES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "protocol/msg/detail/error_codes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'error_codes'
#include "protocol/msg/detail/global_error__traits.hpp"

namespace protocol
{

namespace msg
{

inline void to_flow_style_yaml(
  const ErrorCodes & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_codes
  {
    if (msg.error_codes.size() == 0) {
      out << "error_codes: []";
    } else {
      out << "error_codes: [";
      size_t pending_items = msg.error_codes.size();
      for (auto item : msg.error_codes) {
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
  const ErrorCodes & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_codes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error_codes.size() == 0) {
      out << "error_codes: []\n";
    } else {
      out << "error_codes:\n";
      for (auto item : msg.error_codes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ErrorCodes & msg, bool use_flow_style = false)
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
  const protocol::msg::ErrorCodes & msg,
  std::ostream & out, size_t indentation = 0)
{
  protocol::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use protocol::msg::to_yaml() instead")]]
inline std::string to_yaml(const protocol::msg::ErrorCodes & msg)
{
  return protocol::msg::to_yaml(msg);
}

template<>
inline const char * data_type<protocol::msg::ErrorCodes>()
{
  return "protocol::msg::ErrorCodes";
}

template<>
inline const char * name<protocol::msg::ErrorCodes>()
{
  return "protocol/msg/ErrorCodes";
}

template<>
struct has_fixed_size<protocol::msg::ErrorCodes>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::ErrorCodes>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::ErrorCodes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__ERROR_CODES__TRAITS_HPP_
