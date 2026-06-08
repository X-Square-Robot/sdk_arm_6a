// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/motor_status.hpp"


#ifndef PROTOCOL__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "protocol/msg/detail/motor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_MotorStatus_error_bit_code
{
public:
  explicit Init_MotorStatus_error_bit_code(::protocol::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  ::protocol::msg::MotorStatus error_bit_code(::protocol::msg::MotorStatus::_error_bit_code_type arg)
  {
    msg_.error_bit_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::MotorStatus msg_;
};

class Init_MotorStatus_state_code
{
public:
  Init_MotorStatus_state_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStatus_error_bit_code state_code(::protocol::msg::MotorStatus::_state_code_type arg)
  {
    msg_.state_code = std::move(arg);
    return Init_MotorStatus_error_bit_code(msg_);
  }

private:
  ::protocol::msg::MotorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::MotorStatus>()
{
  return protocol::msg::builder::Init_MotorStatus_state_code();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
