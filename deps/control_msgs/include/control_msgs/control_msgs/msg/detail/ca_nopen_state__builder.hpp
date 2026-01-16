// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/CANopenState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/ca_nopen_state.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__CA_NOPEN_STATE__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__CA_NOPEN_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/ca_nopen_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_CANopenState_last_emcy_code
{
public:
  explicit Init_CANopenState_last_emcy_code(::control_msgs::msg::CANopenState & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::CANopenState last_emcy_code(::control_msgs::msg::CANopenState::_last_emcy_code_type arg)
  {
    msg_.last_emcy_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::CANopenState msg_;
};

class Init_CANopenState_dsp_402_state
{
public:
  explicit Init_CANopenState_dsp_402_state(::control_msgs::msg::CANopenState & msg)
  : msg_(msg)
  {}
  Init_CANopenState_last_emcy_code dsp_402_state(::control_msgs::msg::CANopenState::_dsp_402_state_type arg)
  {
    msg_.dsp_402_state = std::move(arg);
    return Init_CANopenState_last_emcy_code(msg_);
  }

private:
  ::control_msgs::msg::CANopenState msg_;
};

class Init_CANopenState_nmt_state
{
public:
  explicit Init_CANopenState_nmt_state(::control_msgs::msg::CANopenState & msg)
  : msg_(msg)
  {}
  Init_CANopenState_dsp_402_state nmt_state(::control_msgs::msg::CANopenState::_nmt_state_type arg)
  {
    msg_.nmt_state = std::move(arg);
    return Init_CANopenState_dsp_402_state(msg_);
  }

private:
  ::control_msgs::msg::CANopenState msg_;
};

class Init_CANopenState_node_id
{
public:
  Init_CANopenState_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CANopenState_nmt_state node_id(::control_msgs::msg::CANopenState::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_CANopenState_nmt_state(msg_);
  }

private:
  ::control_msgs::msg::CANopenState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::CANopenState>()
{
  return control_msgs::msg::builder::Init_CANopenState_node_id();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__CA_NOPEN_STATE__BUILDER_HPP_
