// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/hardware_status.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/hardware_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_HardwareStatus_hardware_device_states
{
public:
  explicit Init_HardwareStatus_hardware_device_states(::control_msgs::msg::HardwareStatus & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::HardwareStatus hardware_device_states(::control_msgs::msg::HardwareStatus::_hardware_device_states_type arg)
  {
    msg_.hardware_device_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::HardwareStatus msg_;
};

class Init_HardwareStatus_hardware_id
{
public:
  explicit Init_HardwareStatus_hardware_id(::control_msgs::msg::HardwareStatus & msg)
  : msg_(msg)
  {}
  Init_HardwareStatus_hardware_device_states hardware_id(::control_msgs::msg::HardwareStatus::_hardware_id_type arg)
  {
    msg_.hardware_id = std::move(arg);
    return Init_HardwareStatus_hardware_device_states(msg_);
  }

private:
  ::control_msgs::msg::HardwareStatus msg_;
};

class Init_HardwareStatus_header
{
public:
  Init_HardwareStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HardwareStatus_hardware_id header(::control_msgs::msg::HardwareStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HardwareStatus_hardware_id(msg_);
  }

private:
  ::control_msgs::msg::HardwareStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::HardwareStatus>()
{
  return control_msgs::msg::builder::Init_HardwareStatus_header();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_
