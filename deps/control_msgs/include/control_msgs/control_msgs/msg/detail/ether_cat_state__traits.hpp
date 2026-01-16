// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/EtherCATState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/ether_cat_state.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__ETHER_CAT_STATE__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__ETHER_CAT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/msg/detail/ether_cat_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EtherCATState & msg,
  std::ostream & out)
{
  out << "{";
  // member: slave_position
  {
    out << "slave_position: ";
    rosidl_generator_traits::value_to_yaml(msg.slave_position, out);
    out << ", ";
  }

  // member: vendor_id
  {
    out << "vendor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.vendor_id, out);
    out << ", ";
  }

  // member: product_code
  {
    out << "product_code: ";
    rosidl_generator_traits::value_to_yaml(msg.product_code, out);
    out << ", ";
  }

  // member: al_state
  {
    out << "al_state: ";
    rosidl_generator_traits::value_to_yaml(msg.al_state, out);
    out << ", ";
  }

  // member: has_error
  {
    out << "has_error: ";
    rosidl_generator_traits::value_to_yaml(msg.has_error, out);
    out << ", ";
  }

  // member: al_status_code
  {
    out << "al_status_code: ";
    rosidl_generator_traits::value_to_yaml(msg.al_status_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EtherCATState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: slave_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slave_position: ";
    rosidl_generator_traits::value_to_yaml(msg.slave_position, out);
    out << "\n";
  }

  // member: vendor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vendor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.vendor_id, out);
    out << "\n";
  }

  // member: product_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "product_code: ";
    rosidl_generator_traits::value_to_yaml(msg.product_code, out);
    out << "\n";
  }

  // member: al_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "al_state: ";
    rosidl_generator_traits::value_to_yaml(msg.al_state, out);
    out << "\n";
  }

  // member: has_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_error: ";
    rosidl_generator_traits::value_to_yaml(msg.has_error, out);
    out << "\n";
  }

  // member: al_status_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "al_status_code: ";
    rosidl_generator_traits::value_to_yaml(msg.al_status_code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EtherCATState & msg, bool use_flow_style = false)
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
  const control_msgs::msg::EtherCATState & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::msg::EtherCATState & msg)
{
  return control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::msg::EtherCATState>()
{
  return "control_msgs::msg::EtherCATState";
}

template<>
inline const char * name<control_msgs::msg::EtherCATState>()
{
  return "control_msgs/msg/EtherCATState";
}

template<>
struct has_fixed_size<control_msgs::msg::EtherCATState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::msg::EtherCATState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::msg::EtherCATState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__ETHER_CAT_STATE__TRAITS_HPP_
