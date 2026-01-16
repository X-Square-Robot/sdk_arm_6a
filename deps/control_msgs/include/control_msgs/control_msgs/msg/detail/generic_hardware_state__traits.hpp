// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/GenericHardwareState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/generic_hardware_state.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__GENERIC_HARDWARE_STATE__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__GENERIC_HARDWARE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/msg/detail/generic_hardware_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'state_details'
#include "diagnostic_msgs/msg/detail/key_value__traits.hpp"

namespace control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GenericHardwareState & msg,
  std::ostream & out)
{
  out << "{";
  // member: health_status
  {
    out << "health_status: ";
    rosidl_generator_traits::value_to_yaml(msg.health_status, out);
    out << ", ";
  }

  // member: error_domain
  {
    if (msg.error_domain.size() == 0) {
      out << "error_domain: []";
    } else {
      out << "error_domain: [";
      size_t pending_items = msg.error_domain.size();
      for (auto item : msg.error_domain) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: operational_mode
  {
    out << "operational_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.operational_mode, out);
    out << ", ";
  }

  // member: power_state
  {
    out << "power_state: ";
    rosidl_generator_traits::value_to_yaml(msg.power_state, out);
    out << ", ";
  }

  // member: connectivity_status
  {
    out << "connectivity_status: ";
    rosidl_generator_traits::value_to_yaml(msg.connectivity_status, out);
    out << ", ";
  }

  // member: manufacturer
  {
    out << "manufacturer: ";
    rosidl_generator_traits::value_to_yaml(msg.manufacturer, out);
    out << ", ";
  }

  // member: model
  {
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << ", ";
  }

  // member: firmware_version
  {
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << ", ";
  }

  // member: state_details
  {
    if (msg.state_details.size() == 0) {
      out << "state_details: []";
    } else {
      out << "state_details: [";
      size_t pending_items = msg.state_details.size();
      for (auto item : msg.state_details) {
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
  const GenericHardwareState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: health_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health_status: ";
    rosidl_generator_traits::value_to_yaml(msg.health_status, out);
    out << "\n";
  }

  // member: error_domain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error_domain.size() == 0) {
      out << "error_domain: []\n";
    } else {
      out << "error_domain:\n";
      for (auto item : msg.error_domain) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: operational_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operational_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.operational_mode, out);
    out << "\n";
  }

  // member: power_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_state: ";
    rosidl_generator_traits::value_to_yaml(msg.power_state, out);
    out << "\n";
  }

  // member: connectivity_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connectivity_status: ";
    rosidl_generator_traits::value_to_yaml(msg.connectivity_status, out);
    out << "\n";
  }

  // member: manufacturer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manufacturer: ";
    rosidl_generator_traits::value_to_yaml(msg.manufacturer, out);
    out << "\n";
  }

  // member: model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << "\n";
  }

  // member: firmware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << "\n";
  }

  // member: state_details
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state_details.size() == 0) {
      out << "state_details: []\n";
    } else {
      out << "state_details:\n";
      for (auto item : msg.state_details) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenericHardwareState & msg, bool use_flow_style = false)
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
  const control_msgs::msg::GenericHardwareState & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::msg::GenericHardwareState & msg)
{
  return control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::msg::GenericHardwareState>()
{
  return "control_msgs::msg::GenericHardwareState";
}

template<>
inline const char * name<control_msgs::msg::GenericHardwareState>()
{
  return "control_msgs/msg/GenericHardwareState";
}

template<>
struct has_fixed_size<control_msgs::msg::GenericHardwareState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::msg::GenericHardwareState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::msg::GenericHardwareState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__GENERIC_HARDWARE_STATE__TRAITS_HPP_
