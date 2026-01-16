// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/HardwareDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/hardware_diagnostics.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__HARDWARE_DIAGNOSTICS__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__HARDWARE_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/hardware_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_HardwareDiagnostics_hardware_device_diagnostics
{
public:
  explicit Init_HardwareDiagnostics_hardware_device_diagnostics(::control_msgs::msg::HardwareDiagnostics & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::HardwareDiagnostics hardware_device_diagnostics(::control_msgs::msg::HardwareDiagnostics::_hardware_device_diagnostics_type arg)
  {
    msg_.hardware_device_diagnostics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::HardwareDiagnostics msg_;
};

class Init_HardwareDiagnostics_hardware_id
{
public:
  explicit Init_HardwareDiagnostics_hardware_id(::control_msgs::msg::HardwareDiagnostics & msg)
  : msg_(msg)
  {}
  Init_HardwareDiagnostics_hardware_device_diagnostics hardware_id(::control_msgs::msg::HardwareDiagnostics::_hardware_id_type arg)
  {
    msg_.hardware_id = std::move(arg);
    return Init_HardwareDiagnostics_hardware_device_diagnostics(msg_);
  }

private:
  ::control_msgs::msg::HardwareDiagnostics msg_;
};

class Init_HardwareDiagnostics_header
{
public:
  Init_HardwareDiagnostics_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HardwareDiagnostics_hardware_id header(::control_msgs::msg::HardwareDiagnostics::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HardwareDiagnostics_hardware_id(msg_);
  }

private:
  ::control_msgs::msg::HardwareDiagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::HardwareDiagnostics>()
{
  return control_msgs::msg::builder::Init_HardwareDiagnostics_header();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__HARDWARE_DIAGNOSTICS__BUILDER_HPP_
