// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/SensorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/sensor_status.hpp"


#ifndef PROTOCOL__MSG__DETAIL__SENSOR_STATUS__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__SENSOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "protocol/msg/detail/sensor_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace protocol
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: state_code
  {
    out << "state_code: ";
    rosidl_generator_traits::value_to_yaml(msg.state_code, out);
    out << ", ";
  }

  // member: error_bit_code
  {
    out << "error_bit_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_bit_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_code: ";
    rosidl_generator_traits::value_to_yaml(msg.state_code, out);
    out << "\n";
  }

  // member: error_bit_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_bit_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_bit_code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorStatus & msg, bool use_flow_style = false)
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
  const protocol::msg::SensorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  protocol::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use protocol::msg::to_yaml() instead")]]
inline std::string to_yaml(const protocol::msg::SensorStatus & msg)
{
  return protocol::msg::to_yaml(msg);
}

template<>
inline const char * data_type<protocol::msg::SensorStatus>()
{
  return "protocol::msg::SensorStatus";
}

template<>
inline const char * name<protocol::msg::SensorStatus>()
{
  return "protocol/msg/SensorStatus";
}

template<>
struct has_fixed_size<protocol::msg::SensorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::msg::SensorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::msg::SensorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__SENSOR_STATUS__TRAITS_HPP_
