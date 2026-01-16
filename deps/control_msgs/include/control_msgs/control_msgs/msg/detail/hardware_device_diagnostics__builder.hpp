// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/HardwareDeviceDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/hardware_device_diagnostics.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__HARDWARE_DEVICE_DIAGNOSTICS__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__HARDWARE_DEVICE_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/hardware_device_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_HardwareDeviceDiagnostics_entries
{
public:
  explicit Init_HardwareDeviceDiagnostics_entries(::control_msgs::msg::HardwareDeviceDiagnostics & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::HardwareDeviceDiagnostics entries(::control_msgs::msg::HardwareDeviceDiagnostics::_entries_type arg)
  {
    msg_.entries = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::HardwareDeviceDiagnostics msg_;
};

class Init_HardwareDeviceDiagnostics_device_id
{
public:
  explicit Init_HardwareDeviceDiagnostics_device_id(::control_msgs::msg::HardwareDeviceDiagnostics & msg)
  : msg_(msg)
  {}
  Init_HardwareDeviceDiagnostics_entries device_id(::control_msgs::msg::HardwareDeviceDiagnostics::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_HardwareDeviceDiagnostics_entries(msg_);
  }

private:
  ::control_msgs::msg::HardwareDeviceDiagnostics msg_;
};

class Init_HardwareDeviceDiagnostics_header
{
public:
  Init_HardwareDeviceDiagnostics_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HardwareDeviceDiagnostics_device_id header(::control_msgs::msg::HardwareDeviceDiagnostics::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HardwareDeviceDiagnostics_device_id(msg_);
  }

private:
  ::control_msgs::msg::HardwareDeviceDiagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::HardwareDeviceDiagnostics>()
{
  return control_msgs::msg::builder::Init_HardwareDeviceDiagnostics_header();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__HARDWARE_DEVICE_DIAGNOSTICS__BUILDER_HPP_
