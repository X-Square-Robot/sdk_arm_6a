// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/JointMotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/joint_motor_status.hpp"


#ifndef PROTOCOL__MSG__DETAIL__JOINT_MOTOR_STATUS__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__JOINT_MOTOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "protocol/msg/detail/joint_motor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_JointMotorStatus_all_joints_healthy
{
public:
  explicit Init_JointMotorStatus_all_joints_healthy(::protocol::msg::JointMotorStatus & msg)
  : msg_(msg)
  {}
  ::protocol::msg::JointMotorStatus all_joints_healthy(::protocol::msg::JointMotorStatus::_all_joints_healthy_type arg)
  {
    msg_.all_joints_healthy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::JointMotorStatus msg_;
};

class Init_JointMotorStatus_joint_motor_status
{
public:
  Init_JointMotorStatus_joint_motor_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointMotorStatus_all_joints_healthy joint_motor_status(::protocol::msg::JointMotorStatus::_joint_motor_status_type arg)
  {
    msg_.joint_motor_status = std::move(arg);
    return Init_JointMotorStatus_all_joints_healthy(msg_);
  }

private:
  ::protocol::msg::JointMotorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::JointMotorStatus>()
{
  return protocol::msg::builder::Init_JointMotorStatus_joint_motor_status();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__JOINT_MOTOR_STATUS__BUILDER_HPP_
