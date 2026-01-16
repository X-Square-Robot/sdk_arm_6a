// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/PidState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/pid_state.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__PID_STATE__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__PID_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/pid_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_PidState_output
{
public:
  explicit Init_PidState_output(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::PidState output(::control_msgs::msg::PidState::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_d_gain
{
public:
  explicit Init_PidState_d_gain(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  Init_PidState_output d_gain(::control_msgs::msg::PidState::_d_gain_type arg)
  {
    msg_.d_gain = std::move(arg);
    return Init_PidState_output(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_i_gain
{
public:
  explicit Init_PidState_i_gain(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  Init_PidState_d_gain i_gain(::control_msgs::msg::PidState::_i_gain_type arg)
  {
    msg_.i_gain = std::move(arg);
    return Init_PidState_d_gain(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_p_gain
{
public:
  explicit Init_PidState_p_gain(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  Init_PidState_i_gain p_gain(::control_msgs::msg::PidState::_p_gain_type arg)
  {
    msg_.p_gain = std::move(arg);
    return Init_PidState_i_gain(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_i_term
{
public:
  explicit Init_PidState_i_term(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  Init_PidState_p_gain i_term(::control_msgs::msg::PidState::_i_term_type arg)
  {
    msg_.i_term = std::move(arg);
    return Init_PidState_p_gain(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_error_dot
{
public:
  explicit Init_PidState_error_dot(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  Init_PidState_i_term error_dot(::control_msgs::msg::PidState::_error_dot_type arg)
  {
    msg_.error_dot = std::move(arg);
    return Init_PidState_i_term(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_error
{
public:
  explicit Init_PidState_error(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  Init_PidState_error_dot error(::control_msgs::msg::PidState::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_PidState_error_dot(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_timestep
{
public:
  explicit Init_PidState_timestep(::control_msgs::msg::PidState & msg)
  : msg_(msg)
  {}
  Init_PidState_error timestep(::control_msgs::msg::PidState::_timestep_type arg)
  {
    msg_.timestep = std::move(arg);
    return Init_PidState_error(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

class Init_PidState_header
{
public:
  Init_PidState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PidState_timestep header(::control_msgs::msg::PidState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PidState_timestep(msg_);
  }

private:
  ::control_msgs::msg::PidState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::PidState>()
{
  return control_msgs::msg::builder::Init_PidState_header();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__PID_STATE__BUILDER_HPP_
