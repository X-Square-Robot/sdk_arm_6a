// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/JointWrenchTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/joint_wrench_trajectory.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_WRENCH_TRAJECTORY__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_WRENCH_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/joint_wrench_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_JointWrenchTrajectory_points
{
public:
  explicit Init_JointWrenchTrajectory_points(::control_msgs::msg::JointWrenchTrajectory & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::JointWrenchTrajectory points(::control_msgs::msg::JointWrenchTrajectory::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::JointWrenchTrajectory msg_;
};

class Init_JointWrenchTrajectory_joint_names
{
public:
  explicit Init_JointWrenchTrajectory_joint_names(::control_msgs::msg::JointWrenchTrajectory & msg)
  : msg_(msg)
  {}
  Init_JointWrenchTrajectory_points joint_names(::control_msgs::msg::JointWrenchTrajectory::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_JointWrenchTrajectory_points(msg_);
  }

private:
  ::control_msgs::msg::JointWrenchTrajectory msg_;
};

class Init_JointWrenchTrajectory_header
{
public:
  Init_JointWrenchTrajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointWrenchTrajectory_joint_names header(::control_msgs::msg::JointWrenchTrajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointWrenchTrajectory_joint_names(msg_);
  }

private:
  ::control_msgs::msg::JointWrenchTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::JointWrenchTrajectory>()
{
  return control_msgs::msg::builder::Init_JointWrenchTrajectory_header();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_WRENCH_TRAJECTORY__BUILDER_HPP_
