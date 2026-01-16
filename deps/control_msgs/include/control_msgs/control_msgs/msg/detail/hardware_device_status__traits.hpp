// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/HardwareDeviceStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/hardware_device_status.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__HARDWARE_DEVICE_STATUS__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__HARDWARE_DEVICE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/msg/detail/hardware_device_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'hardware_status'
#include "control_msgs/msg/detail/generic_hardware_state__traits.hpp"
// Member 'canopen_states'
#include "control_msgs/msg/detail/ca_nopen_state__traits.hpp"
// Member 'ethercat_states'
#include "control_msgs/msg/detail/ether_cat_state__traits.hpp"
// Member 'vda5050_states'
#include "control_msgs/msg/detail/vda5050_state__traits.hpp"

namespace control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HardwareDeviceStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: device_id
  {
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << ", ";
  }

  // member: hardware_status
  {
    if (msg.hardware_status.size() == 0) {
      out << "hardware_status: []";
    } else {
      out << "hardware_status: [";
      size_t pending_items = msg.hardware_status.size();
      for (auto item : msg.hardware_status) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: canopen_states
  {
    if (msg.canopen_states.size() == 0) {
      out << "canopen_states: []";
    } else {
      out << "canopen_states: [";
      size_t pending_items = msg.canopen_states.size();
      for (auto item : msg.canopen_states) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ethercat_states
  {
    if (msg.ethercat_states.size() == 0) {
      out << "ethercat_states: []";
    } else {
      out << "ethercat_states: [";
      size_t pending_items = msg.ethercat_states.size();
      for (auto item : msg.ethercat_states) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vda5050_states
  {
    if (msg.vda5050_states.size() == 0) {
      out << "vda5050_states: []";
    } else {
      out << "vda5050_states: [";
      size_t pending_items = msg.vda5050_states.size();
      for (auto item : msg.vda5050_states) {
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
  const HardwareDeviceStatus & msg,
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

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: hardware_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hardware_status.size() == 0) {
      out << "hardware_status: []\n";
    } else {
      out << "hardware_status:\n";
      for (auto item : msg.hardware_status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: canopen_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.canopen_states.size() == 0) {
      out << "canopen_states: []\n";
    } else {
      out << "canopen_states:\n";
      for (auto item : msg.canopen_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: ethercat_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ethercat_states.size() == 0) {
      out << "ethercat_states: []\n";
    } else {
      out << "ethercat_states:\n";
      for (auto item : msg.ethercat_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: vda5050_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vda5050_states.size() == 0) {
      out << "vda5050_states: []\n";
    } else {
      out << "vda5050_states:\n";
      for (auto item : msg.vda5050_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HardwareDeviceStatus & msg, bool use_flow_style = false)
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
  const control_msgs::msg::HardwareDeviceStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::msg::HardwareDeviceStatus & msg)
{
  return control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::msg::HardwareDeviceStatus>()
{
  return "control_msgs::msg::HardwareDeviceStatus";
}

template<>
inline const char * name<control_msgs::msg::HardwareDeviceStatus>()
{
  return "control_msgs/msg/HardwareDeviceStatus";
}

template<>
struct has_fixed_size<control_msgs::msg::HardwareDeviceStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::msg::HardwareDeviceStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::msg::HardwareDeviceStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__HARDWARE_DEVICE_STATUS__TRAITS_HPP_
