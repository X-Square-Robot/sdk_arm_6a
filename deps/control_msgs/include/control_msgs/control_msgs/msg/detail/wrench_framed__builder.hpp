// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/WrenchFramed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/wrench_framed.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__WRENCH_FRAMED__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__WRENCH_FRAMED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/wrench_framed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_WrenchFramed_wrench
{
public:
  explicit Init_WrenchFramed_wrench(::control_msgs::msg::WrenchFramed & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::WrenchFramed wrench(::control_msgs::msg::WrenchFramed::_wrench_type arg)
  {
    msg_.wrench = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::WrenchFramed msg_;
};

class Init_WrenchFramed_frame_id
{
public:
  Init_WrenchFramed_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WrenchFramed_wrench frame_id(::control_msgs::msg::WrenchFramed::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_WrenchFramed_wrench(msg_);
  }

private:
  ::control_msgs::msg::WrenchFramed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::WrenchFramed>()
{
  return control_msgs::msg::builder::Init_WrenchFramed_frame_id();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__WRENCH_FRAMED__BUILDER_HPP_
