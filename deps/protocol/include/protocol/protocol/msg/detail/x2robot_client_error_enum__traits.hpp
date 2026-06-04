// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/X2robotClientErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/x2robot_client_error_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__X2ROBOT_CLIENT_ERROR_ENUM__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__X2ROBOT_CLIENT_ERROR_ENUM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "protocol/msg/detail/x2robot_client_error_enum__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace protocol
{

namespace msg
{

inline void to_flow_style_yaml(
  const X2robotClientErrorEnum & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const X2robotClientErrorEnum & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const X2robotClientErrorEnum & msg, bool use_flow_style = false)
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
  const protocol::msg::X2robotClientErrorEnum & msg,
  std::ostream & out, size_t indentation = 0)
{
  protocol::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use protocol::msg::to_yaml() instead")]]
inline std::string to_yaml(const protocol::msg::X2robotClientErrorEnum & msg)
{
  return protocol::msg::to_yaml(msg);
}

template<>
inline const char * data_type<protocol::msg::X2robotClientErrorEnum>()
{
  return "protocol::msg::X2robotClientErrorEnum";
}

template<>
inline const char * name<protocol::msg::X2robotClientErrorEnum>()
{
  return "protocol/msg/X2robotClientErrorEnum";
}

template<>
struct has_fixed_size<protocol::msg::X2robotClientErrorEnum>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::msg::X2robotClientErrorEnum>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::msg::X2robotClientErrorEnum>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__X2ROBOT_CLIENT_ERROR_ENUM__TRAITS_HPP_
