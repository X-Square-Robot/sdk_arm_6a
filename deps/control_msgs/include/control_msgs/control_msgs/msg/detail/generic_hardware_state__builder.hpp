// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/GenericHardwareState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/generic_hardware_state.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__GENERIC_HARDWARE_STATE__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__GENERIC_HARDWARE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/generic_hardware_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_GenericHardwareState_state_details
{
public:
  explicit Init_GenericHardwareState_state_details(::control_msgs::msg::GenericHardwareState & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::GenericHardwareState state_details(::control_msgs::msg::GenericHardwareState::_state_details_type arg)
  {
    msg_.state_details = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::GenericHardwareState msg_;
};

class Init_GenericHardwareState_firmware_version
{
public:
  explicit Init_GenericHardwareState_firmware_version(::control_msgs::msg::GenericHardwareState & msg)
  : msg_(msg)
  {}
  Init_GenericHardwareState_state_details firmware_version(::control_msgs::msg::GenericHardwareState::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return Init_GenericHardwareState_state_details(msg_);
  }

private:
  ::control_msgs::msg::GenericHardwareState msg_;
};

class Init_GenericHardwareState_model
{
public:
  explicit Init_GenericHardwareState_model(::control_msgs::msg::GenericHardwareState & msg)
  : msg_(msg)
  {}
  Init_GenericHardwareState_firmware_version model(::control_msgs::msg::GenericHardwareState::_model_type arg)
  {
    msg_.model = std::move(arg);
    return Init_GenericHardwareState_firmware_version(msg_);
  }

private:
  ::control_msgs::msg::GenericHardwareState msg_;
};

class Init_GenericHardwareState_manufacturer
{
public:
  explicit Init_GenericHardwareState_manufacturer(::control_msgs::msg::GenericHardwareState & msg)
  : msg_(msg)
  {}
  Init_GenericHardwareState_model manufacturer(::control_msgs::msg::GenericHardwareState::_manufacturer_type arg)
  {
    msg_.manufacturer = std::move(arg);
    return Init_GenericHardwareState_model(msg_);
  }

private:
  ::control_msgs::msg::GenericHardwareState msg_;
};

class Init_GenericHardwareState_connectivity_status
{
public:
  explicit Init_GenericHardwareState_connectivity_status(::control_msgs::msg::GenericHardwareState & msg)
  : msg_(msg)
  {}
  Init_GenericHardwareState_manufacturer connectivity_status(::control_msgs::msg::GenericHardwareState::_connectivity_status_type arg)
  {
    msg_.connectivity_status = std::move(arg);
    return Init_GenericHardwareState_manufacturer(msg_);
  }

private:
  ::control_msgs::msg::GenericHardwareState msg_;
};

class Init_GenericHardwareState_power_state
{
public:
  explicit Init_GenericHardwareState_power_state(::control_msgs::msg::GenericHardwareState & msg)
  : msg_(msg)
  {}
  Init_GenericHardwareState_connectivity_status power_state(::control_msgs::msg::GenericHardwareState::_power_state_type arg)
  {
    msg_.power_state = std::move(arg);
    return Init_GenericHardwareState_connectivity_status(msg_);
  }

private:
  ::control_msgs::msg::GenericHardwareState msg_;
};

class Init_GenericHardwareState_operational_mode
{
public:
  explicit Init_GenericHardwareState_operational_mode(::control_msgs::msg::GenericHardwareState & msg)
  : msg_(msg)
  {}
  Init_GenericHardwareState_power_state operational_mode(::control_msgs::msg::GenericHardwareState::_operational_mode_type arg)
  {
    msg_.operational_mode = std::move(arg);
    return Init_GenericHardwareState_power_state(msg_);
  }

private:
  ::control_msgs::msg::GenericHardwareState msg_;
};

class Init_GenericHardwareState_error_domain
{
public:
  explicit Init_GenericHardwareState_error_domain(::control_msgs::msg::GenericHardwareState & msg)
  : msg_(msg)
  {}
  Init_GenericHardwareState_operational_mode error_domain(::control_msgs::msg::GenericHardwareState::_error_domain_type arg)
  {
    msg_.error_domain = std::move(arg);
    return Init_GenericHardwareState_operational_mode(msg_);
  }

private:
  ::control_msgs::msg::GenericHardwareState msg_;
};

class Init_GenericHardwareState_health_status
{
public:
  Init_GenericHardwareState_health_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenericHardwareState_error_domain health_status(::control_msgs::msg::GenericHardwareState::_health_status_type arg)
  {
    msg_.health_status = std::move(arg);
    return Init_GenericHardwareState_error_domain(msg_);
  }

private:
  ::control_msgs::msg::GenericHardwareState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::GenericHardwareState>()
{
  return control_msgs::msg::builder::Init_GenericHardwareState_health_status();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__GENERIC_HARDWARE_STATE__BUILDER_HPP_
