// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/JointWrenchTrajectoryPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/joint_wrench_trajectory_point.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_WRENCH_TRAJECTORY_POINT__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_WRENCH_TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/joint_wrench_trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_JointWrenchTrajectoryPoint_wrench
{
public:
  explicit Init_JointWrenchTrajectoryPoint_wrench(::control_msgs::msg::JointWrenchTrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::JointWrenchTrajectoryPoint wrench(::control_msgs::msg::JointWrenchTrajectoryPoint::_wrench_type arg)
  {
    msg_.wrench = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::JointWrenchTrajectoryPoint msg_;
};

class Init_JointWrenchTrajectoryPoint_point
{
public:
  Init_JointWrenchTrajectoryPoint_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointWrenchTrajectoryPoint_wrench point(::control_msgs::msg::JointWrenchTrajectoryPoint::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_JointWrenchTrajectoryPoint_wrench(msg_);
  }

private:
  ::control_msgs::msg::JointWrenchTrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::JointWrenchTrajectoryPoint>()
{
  return control_msgs::msg::builder::Init_JointWrenchTrajectoryPoint_point();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_WRENCH_TRAJECTORY_POINT__BUILDER_HPP_
