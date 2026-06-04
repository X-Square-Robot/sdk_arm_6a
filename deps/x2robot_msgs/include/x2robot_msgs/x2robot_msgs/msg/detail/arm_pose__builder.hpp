// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from x2robot_msgs:msg/ArmPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/arm_pose.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__ARM_POSE__BUILDER_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__ARM_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "x2robot_msgs/msg/detail/arm_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace x2robot_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmPose_gripper
{
public:
  explicit Init_ArmPose_gripper(::x2robot_msgs::msg::ArmPose & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::msg::ArmPose gripper(::x2robot_msgs::msg::ArmPose::_gripper_type arg)
  {
    msg_.gripper = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::msg::ArmPose msg_;
};

class Init_ArmPose_pose
{
public:
  explicit Init_ArmPose_pose(::x2robot_msgs::msg::ArmPose & msg)
  : msg_(msg)
  {}
  Init_ArmPose_gripper pose(::x2robot_msgs::msg::ArmPose::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ArmPose_gripper(msg_);
  }

private:
  ::x2robot_msgs::msg::ArmPose msg_;
};

class Init_ArmPose_header
{
public:
  Init_ArmPose_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmPose_pose header(::x2robot_msgs::msg::ArmPose::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ArmPose_pose(msg_);
  }

private:
  ::x2robot_msgs::msg::ArmPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::msg::ArmPose>()
{
  return x2robot_msgs::msg::builder::Init_ArmPose_header();
}

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__MSG__DETAIL__ARM_POSE__BUILDER_HPP_
