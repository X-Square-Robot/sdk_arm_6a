// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from x2robot_msgs:msg/ServoDriveState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/servo_drive_state.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__SERVO_DRIVE_STATE__BUILDER_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__SERVO_DRIVE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "x2robot_msgs/msg/detail/servo_drive_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace x2robot_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoDriveState_current_mode
{
public:
  explicit Init_ServoDriveState_current_mode(::x2robot_msgs::msg::ServoDriveState & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::msg::ServoDriveState current_mode(::x2robot_msgs::msg::ServoDriveState::_current_mode_type arg)
  {
    msg_.current_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::msg::ServoDriveState msg_;
};

class Init_ServoDriveState_error_codes
{
public:
  explicit Init_ServoDriveState_error_codes(::x2robot_msgs::msg::ServoDriveState & msg)
  : msg_(msg)
  {}
  Init_ServoDriveState_current_mode error_codes(::x2robot_msgs::msg::ServoDriveState::_error_codes_type arg)
  {
    msg_.error_codes = std::move(arg);
    return Init_ServoDriveState_current_mode(msg_);
  }

private:
  ::x2robot_msgs::msg::ServoDriveState msg_;
};

class Init_ServoDriveState_joint_names
{
public:
  explicit Init_ServoDriveState_joint_names(::x2robot_msgs::msg::ServoDriveState & msg)
  : msg_(msg)
  {}
  Init_ServoDriveState_error_codes joint_names(::x2robot_msgs::msg::ServoDriveState::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_ServoDriveState_error_codes(msg_);
  }

private:
  ::x2robot_msgs::msg::ServoDriveState msg_;
};

class Init_ServoDriveState_stamp
{
public:
  Init_ServoDriveState_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoDriveState_joint_names stamp(::x2robot_msgs::msg::ServoDriveState::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ServoDriveState_joint_names(msg_);
  }

private:
  ::x2robot_msgs::msg::ServoDriveState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::msg::ServoDriveState>()
{
  return x2robot_msgs::msg::builder::Init_ServoDriveState_stamp();
}

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__MSG__DETAIL__SERVO_DRIVE_STATE__BUILDER_HPP_
