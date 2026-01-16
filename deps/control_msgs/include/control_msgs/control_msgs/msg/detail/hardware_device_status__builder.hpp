// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/HardwareDeviceStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/hardware_device_status.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__HARDWARE_DEVICE_STATUS__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__HARDWARE_DEVICE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/hardware_device_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_HardwareDeviceStatus_vda5050_states
{
public:
  explicit Init_HardwareDeviceStatus_vda5050_states(::control_msgs::msg::HardwareDeviceStatus & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::HardwareDeviceStatus vda5050_states(::control_msgs::msg::HardwareDeviceStatus::_vda5050_states_type arg)
  {
    msg_.vda5050_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::HardwareDeviceStatus msg_;
};

class Init_HardwareDeviceStatus_ethercat_states
{
public:
  explicit Init_HardwareDeviceStatus_ethercat_states(::control_msgs::msg::HardwareDeviceStatus & msg)
  : msg_(msg)
  {}
  Init_HardwareDeviceStatus_vda5050_states ethercat_states(::control_msgs::msg::HardwareDeviceStatus::_ethercat_states_type arg)
  {
    msg_.ethercat_states = std::move(arg);
    return Init_HardwareDeviceStatus_vda5050_states(msg_);
  }

private:
  ::control_msgs::msg::HardwareDeviceStatus msg_;
};

class Init_HardwareDeviceStatus_canopen_states
{
public:
  explicit Init_HardwareDeviceStatus_canopen_states(::control_msgs::msg::HardwareDeviceStatus & msg)
  : msg_(msg)
  {}
  Init_HardwareDeviceStatus_ethercat_states canopen_states(::control_msgs::msg::HardwareDeviceStatus::_canopen_states_type arg)
  {
    msg_.canopen_states = std::move(arg);
    return Init_HardwareDeviceStatus_ethercat_states(msg_);
  }

private:
  ::control_msgs::msg::HardwareDeviceStatus msg_;
};

class Init_HardwareDeviceStatus_hardware_status
{
public:
  explicit Init_HardwareDeviceStatus_hardware_status(::control_msgs::msg::HardwareDeviceStatus & msg)
  : msg_(msg)
  {}
  Init_HardwareDeviceStatus_canopen_states hardware_status(::control_msgs::msg::HardwareDeviceStatus::_hardware_status_type arg)
  {
    msg_.hardware_status = std::move(arg);
    return Init_HardwareDeviceStatus_canopen_states(msg_);
  }

private:
  ::control_msgs::msg::HardwareDeviceStatus msg_;
};

class Init_HardwareDeviceStatus_device_id
{
public:
  explicit Init_HardwareDeviceStatus_device_id(::control_msgs::msg::HardwareDeviceStatus & msg)
  : msg_(msg)
  {}
  Init_HardwareDeviceStatus_hardware_status device_id(::control_msgs::msg::HardwareDeviceStatus::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_HardwareDeviceStatus_hardware_status(msg_);
  }

private:
  ::control_msgs::msg::HardwareDeviceStatus msg_;
};

class Init_HardwareDeviceStatus_header
{
public:
  Init_HardwareDeviceStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HardwareDeviceStatus_device_id header(::control_msgs::msg::HardwareDeviceStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HardwareDeviceStatus_device_id(msg_);
  }

private:
  ::control_msgs::msg::HardwareDeviceStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::HardwareDeviceStatus>()
{
  return control_msgs::msg::builder::Init_HardwareDeviceStatus_header();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__HARDWARE_DEVICE_STATUS__BUILDER_HPP_
