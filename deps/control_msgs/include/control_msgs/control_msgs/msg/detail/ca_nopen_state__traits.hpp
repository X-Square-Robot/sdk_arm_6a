// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/CANopenState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/ca_nopen_state.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__CA_NOPEN_STATE__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__CA_NOPEN_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/msg/detail/ca_nopen_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CANopenState & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_id
  {
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << ", ";
  }

  // member: nmt_state
  {
    out << "nmt_state: ";
    rosidl_generator_traits::value_to_yaml(msg.nmt_state, out);
    out << ", ";
  }

  // member: dsp_402_state
  {
    out << "dsp_402_state: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_402_state, out);
    out << ", ";
  }

  // member: last_emcy_code
  {
    out << "last_emcy_code: ";
    rosidl_generator_traits::value_to_yaml(msg.last_emcy_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CANopenState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << "\n";
  }

  // member: nmt_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nmt_state: ";
    rosidl_generator_traits::value_to_yaml(msg.nmt_state, out);
    out << "\n";
  }

  // member: dsp_402_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_402_state: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_402_state, out);
    out << "\n";
  }

  // member: last_emcy_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_emcy_code: ";
    rosidl_generator_traits::value_to_yaml(msg.last_emcy_code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CANopenState & msg, bool use_flow_style = false)
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
  const control_msgs::msg::CANopenState & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::msg::CANopenState & msg)
{
  return control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::msg::CANopenState>()
{
  return "control_msgs::msg::CANopenState";
}

template<>
inline const char * name<control_msgs::msg::CANopenState>()
{
  return "control_msgs/msg/CANopenState";
}

template<>
struct has_fixed_size<control_msgs::msg::CANopenState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_msgs::msg::CANopenState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_msgs::msg::CANopenState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__CA_NOPEN_STATE__TRAITS_HPP_
