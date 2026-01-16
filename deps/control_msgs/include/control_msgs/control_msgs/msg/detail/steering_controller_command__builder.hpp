// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/SteeringControllerCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/steering_controller_command.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__STEERING_CONTROLLER_COMMAND__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__STEERING_CONTROLLER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/steering_controller_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_SteeringControllerCommand_linear_velocity
{
public:
  explicit Init_SteeringControllerCommand_linear_velocity(::control_msgs::msg::SteeringControllerCommand & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::SteeringControllerCommand linear_velocity(::control_msgs::msg::SteeringControllerCommand::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::SteeringControllerCommand msg_;
};

class Init_SteeringControllerCommand_steering_angle
{
public:
  explicit Init_SteeringControllerCommand_steering_angle(::control_msgs::msg::SteeringControllerCommand & msg)
  : msg_(msg)
  {}
  Init_SteeringControllerCommand_linear_velocity steering_angle(::control_msgs::msg::SteeringControllerCommand::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return Init_SteeringControllerCommand_linear_velocity(msg_);
  }

private:
  ::control_msgs::msg::SteeringControllerCommand msg_;
};

class Init_SteeringControllerCommand_header
{
public:
  Init_SteeringControllerCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringControllerCommand_steering_angle header(::control_msgs::msg::SteeringControllerCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SteeringControllerCommand_steering_angle(msg_);
  }

private:
  ::control_msgs::msg::SteeringControllerCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::SteeringControllerCommand>()
{
  return control_msgs::msg::builder::Init_SteeringControllerCommand_header();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__STEERING_CONTROLLER_COMMAND__BUILDER_HPP_
