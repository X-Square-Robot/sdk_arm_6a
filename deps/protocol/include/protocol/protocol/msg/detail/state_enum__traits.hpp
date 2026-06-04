// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/StateEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/state_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__STATE_ENUM__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__STATE_ENUM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "protocol/msg/detail/state_enum__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace protocol
{

namespace msg
{

inline void to_flow_style_yaml(
  const StateEnum & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StateEnum & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StateEnum & msg, bool use_flow_style = false)
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
  const protocol::msg::StateEnum & msg,
  std::ostream & out, size_t indentation = 0)
{
  protocol::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use protocol::msg::to_yaml() instead")]]
inline std::string to_yaml(const protocol::msg::StateEnum & msg)
{
  return protocol::msg::to_yaml(msg);
}

template<>
inline const char * data_type<protocol::msg::StateEnum>()
{
  return "protocol::msg::StateEnum";
}

template<>
inline const char * name<protocol::msg::StateEnum>()
{
  return "protocol/msg/StateEnum";
}

template<>
struct has_fixed_size<protocol::msg::StateEnum>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::msg::StateEnum>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::msg::StateEnum>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__STATE_ENUM__TRAITS_HPP_
