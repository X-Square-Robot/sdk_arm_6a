// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/StatusCode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/status_code.hpp"


#ifndef PROTOCOL__MSG__DETAIL__STATUS_CODE__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__STATUS_CODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "protocol/msg/detail/status_code__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'error_code'
#include "protocol/msg/detail/unit_error__traits.hpp"

namespace protocol
{

namespace msg
{

inline void to_flow_style_yaml(
  const StatusCode & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: domain
  {
    out << "domain: ";
    rosidl_generator_traits::value_to_yaml(msg.domain, out);
    out << ", ";
  }

  // member: unit
  {
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
    out << ", ";
  }

  // member: state_code
  {
    out << "state_code: ";
    rosidl_generator_traits::value_to_yaml(msg.state_code, out);
    out << ", ";
  }

  // member: error_code
  {
    if (msg.error_code.size() == 0) {
      out << "error_code: []";
    } else {
      out << "error_code: [";
      size_t pending_items = msg.error_code.size();
      for (auto item : msg.error_code) {
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
  const StatusCode & msg,
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

  // member: domain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "domain: ";
    rosidl_generator_traits::value_to_yaml(msg.domain, out);
    out << "\n";
  }

  // member: unit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
    out << "\n";
  }

  // member: state_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_code: ";
    rosidl_generator_traits::value_to_yaml(msg.state_code, out);
    out << "\n";
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error_code.size() == 0) {
      out << "error_code: []\n";
    } else {
      out << "error_code:\n";
      for (auto item : msg.error_code) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StatusCode & msg, bool use_flow_style = false)
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
  const protocol::msg::StatusCode & msg,
  std::ostream & out, size_t indentation = 0)
{
  protocol::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use protocol::msg::to_yaml() instead")]]
inline std::string to_yaml(const protocol::msg::StatusCode & msg)
{
  return protocol::msg::to_yaml(msg);
}

template<>
inline const char * data_type<protocol::msg::StatusCode>()
{
  return "protocol::msg::StatusCode";
}

template<>
inline const char * name<protocol::msg::StatusCode>()
{
  return "protocol/msg/StatusCode";
}

template<>
struct has_fixed_size<protocol::msg::StatusCode>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::StatusCode>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::StatusCode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__STATUS_CODE__TRAITS_HPP_
