// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from x2robot_msgs:msg/TashanTactileData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/tashan_tactile_data.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__TASHAN_TACTILE_DATA__TRAITS_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__TASHAN_TACTILE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "x2robot_msgs/msg/detail/tashan_tactile_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace x2robot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TashanTactileData & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: sensor_names
  {
    if (msg.sensor_names.size() == 0) {
      out << "sensor_names: []";
    } else {
      out << "sensor_names: [";
      size_t pending_items = msg.sensor_names.size();
      for (auto item : msg.sensor_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: frame_ids
  {
    if (msg.frame_ids.size() == 0) {
      out << "frame_ids: []";
    } else {
      out << "frame_ids: [";
      size_t pending_items = msg.frame_ids.size();
      for (auto item : msg.frame_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: normal_forces
  {
    if (msg.normal_forces.size() == 0) {
      out << "normal_forces: []";
    } else {
      out << "normal_forces: [";
      size_t pending_items = msg.normal_forces.size();
      for (auto item : msg.normal_forces) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tangential_forces
  {
    if (msg.tangential_forces.size() == 0) {
      out << "tangential_forces: []";
    } else {
      out << "tangential_forces: [";
      size_t pending_items = msg.tangential_forces.size();
      for (auto item : msg.tangential_forces) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: directions
  {
    if (msg.directions.size() == 0) {
      out << "directions: []";
    } else {
      out << "directions: [";
      size_t pending_items = msg.directions.size();
      for (auto item : msg.directions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: capacitances
  {
    if (msg.capacitances.size() == 0) {
      out << "capacitances: []";
    } else {
      out << "capacitances: [";
      size_t pending_items = msg.capacitances.size();
      for (auto item : msg.capacitances) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: error_codes
  {
    if (msg.error_codes.size() == 0) {
      out << "error_codes: []";
    } else {
      out << "error_codes: [";
      size_t pending_items = msg.error_codes.size();
      for (auto item : msg.error_codes) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const TashanTactileData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: sensor_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensor_names.size() == 0) {
      out << "sensor_names: []\n";
    } else {
      out << "sensor_names:\n";
      for (auto item : msg.sensor_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: frame_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.frame_ids.size() == 0) {
      out << "frame_ids: []\n";
    } else {
      out << "frame_ids:\n";
      for (auto item : msg.frame_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: normal_forces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.normal_forces.size() == 0) {
      out << "normal_forces: []\n";
    } else {
      out << "normal_forces:\n";
      for (auto item : msg.normal_forces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tangential_forces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tangential_forces.size() == 0) {
      out << "tangential_forces: []\n";
    } else {
      out << "tangential_forces:\n";
      for (auto item : msg.tangential_forces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: directions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.directions.size() == 0) {
      out << "directions: []\n";
    } else {
      out << "directions:\n";
      for (auto item : msg.directions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: capacitances
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.capacitances.size() == 0) {
      out << "capacitances: []\n";
    } else {
      out << "capacitances:\n";
      for (auto item : msg.capacitances) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

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
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TashanTactileData & msg, bool use_flow_style = false)
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

}  // namespace x2robot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use x2robot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const x2robot_msgs::msg::TashanTactileData & msg,
  std::ostream & out, size_t indentation = 0)
{
  x2robot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use x2robot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const x2robot_msgs::msg::TashanTactileData & msg)
{
  return x2robot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<x2robot_msgs::msg::TashanTactileData>()
{
  return "x2robot_msgs::msg::TashanTactileData";
}

template<>
inline const char * name<x2robot_msgs::msg::TashanTactileData>()
{
  return "x2robot_msgs/msg/TashanTactileData";
}

template<>
struct has_fixed_size<x2robot_msgs::msg::TashanTactileData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<x2robot_msgs::msg::TashanTactileData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<x2robot_msgs::msg::TashanTactileData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // X2ROBOT_MSGS__MSG__DETAIL__TASHAN_TACTILE_DATA__TRAITS_HPP_
