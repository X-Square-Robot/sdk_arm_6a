// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from x2robot_msgs:msg/RobotArmState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/robot_arm_state.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__ROBOT_ARM_STATE__BUILDER_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__ROBOT_ARM_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "x2robot_msgs/msg/detail/robot_arm_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace x2robot_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotArmState_error_msg
{
public:
  explicit Init_RobotArmState_error_msg(::x2robot_msgs::msg::RobotArmState & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::msg::RobotArmState error_msg(::x2robot_msgs::msg::RobotArmState::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::msg::RobotArmState msg_;
};

class Init_RobotArmState_current_control_mode
{
public:
  explicit Init_RobotArmState_current_control_mode(::x2robot_msgs::msg::RobotArmState & msg)
  : msg_(msg)
  {}
  Init_RobotArmState_error_msg current_control_mode(::x2robot_msgs::msg::RobotArmState::_current_control_mode_type arg)
  {
    msg_.current_control_mode = std::move(arg);
    return Init_RobotArmState_error_msg(msg_);
  }

private:
  ::x2robot_msgs::msg::RobotArmState msg_;
};

class Init_RobotArmState_robot_state
{
public:
  explicit Init_RobotArmState_robot_state(::x2robot_msgs::msg::RobotArmState & msg)
  : msg_(msg)
  {}
  Init_RobotArmState_current_control_mode robot_state(::x2robot_msgs::msg::RobotArmState::_robot_state_type arg)
  {
    msg_.robot_state = std::move(arg);
    return Init_RobotArmState_current_control_mode(msg_);
  }

private:
  ::x2robot_msgs::msg::RobotArmState msg_;
};

class Init_RobotArmState_stamp
{
public:
  Init_RobotArmState_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotArmState_robot_state stamp(::x2robot_msgs::msg::RobotArmState::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_RobotArmState_robot_state(msg_);
  }

private:
  ::x2robot_msgs::msg::RobotArmState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::msg::RobotArmState>()
{
  return x2robot_msgs::msg::builder::Init_RobotArmState_stamp();
}

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__MSG__DETAIL__ROBOT_ARM_STATE__BUILDER_HPP_
