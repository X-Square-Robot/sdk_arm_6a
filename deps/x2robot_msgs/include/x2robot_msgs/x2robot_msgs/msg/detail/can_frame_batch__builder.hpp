// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from x2robot_msgs:msg/CanFrameBatch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/can_frame_batch.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME_BATCH__BUILDER_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME_BATCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "x2robot_msgs/msg/detail/can_frame_batch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace x2robot_msgs
{

namespace msg
{

namespace builder
{

class Init_CanFrameBatch_frames
{
public:
  Init_CanFrameBatch_frames()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::x2robot_msgs::msg::CanFrameBatch frames(::x2robot_msgs::msg::CanFrameBatch::_frames_type arg)
  {
    msg_.frames = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::msg::CanFrameBatch msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::msg::CanFrameBatch>()
{
  return x2robot_msgs::msg::builder::Init_CanFrameBatch_frames();
}

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME_BATCH__BUILDER_HPP_
