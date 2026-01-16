// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from x2robot_msgs:msg/CanFrame.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/can_frame.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME__BUILDER_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "x2robot_msgs/msg/detail/can_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace x2robot_msgs
{

namespace msg
{

namespace builder
{

class Init_CanFrame_brs
{
public:
  explicit Init_CanFrame_brs(::x2robot_msgs::msg::CanFrame & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::msg::CanFrame brs(::x2robot_msgs::msg::CanFrame::_brs_type arg)
  {
    msg_.brs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::msg::CanFrame msg_;
};

class Init_CanFrame_fd
{
public:
  explicit Init_CanFrame_fd(::x2robot_msgs::msg::CanFrame & msg)
  : msg_(msg)
  {}
  Init_CanFrame_brs fd(::x2robot_msgs::msg::CanFrame::_fd_type arg)
  {
    msg_.fd = std::move(arg);
    return Init_CanFrame_brs(msg_);
  }

private:
  ::x2robot_msgs::msg::CanFrame msg_;
};

class Init_CanFrame_eff
{
public:
  explicit Init_CanFrame_eff(::x2robot_msgs::msg::CanFrame & msg)
  : msg_(msg)
  {}
  Init_CanFrame_fd eff(::x2robot_msgs::msg::CanFrame::_eff_type arg)
  {
    msg_.eff = std::move(arg);
    return Init_CanFrame_fd(msg_);
  }

private:
  ::x2robot_msgs::msg::CanFrame msg_;
};

class Init_CanFrame_rtr
{
public:
  explicit Init_CanFrame_rtr(::x2robot_msgs::msg::CanFrame & msg)
  : msg_(msg)
  {}
  Init_CanFrame_eff rtr(::x2robot_msgs::msg::CanFrame::_rtr_type arg)
  {
    msg_.rtr = std::move(arg);
    return Init_CanFrame_eff(msg_);
  }

private:
  ::x2robot_msgs::msg::CanFrame msg_;
};

class Init_CanFrame_err
{
public:
  explicit Init_CanFrame_err(::x2robot_msgs::msg::CanFrame & msg)
  : msg_(msg)
  {}
  Init_CanFrame_rtr err(::x2robot_msgs::msg::CanFrame::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_CanFrame_rtr(msg_);
  }

private:
  ::x2robot_msgs::msg::CanFrame msg_;
};

class Init_CanFrame_data
{
public:
  explicit Init_CanFrame_data(::x2robot_msgs::msg::CanFrame & msg)
  : msg_(msg)
  {}
  Init_CanFrame_err data(::x2robot_msgs::msg::CanFrame::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_CanFrame_err(msg_);
  }

private:
  ::x2robot_msgs::msg::CanFrame msg_;
};

class Init_CanFrame_dlc
{
public:
  explicit Init_CanFrame_dlc(::x2robot_msgs::msg::CanFrame & msg)
  : msg_(msg)
  {}
  Init_CanFrame_data dlc(::x2robot_msgs::msg::CanFrame::_dlc_type arg)
  {
    msg_.dlc = std::move(arg);
    return Init_CanFrame_data(msg_);
  }

private:
  ::x2robot_msgs::msg::CanFrame msg_;
};

class Init_CanFrame_can_id
{
public:
  explicit Init_CanFrame_can_id(::x2robot_msgs::msg::CanFrame & msg)
  : msg_(msg)
  {}
  Init_CanFrame_dlc can_id(::x2robot_msgs::msg::CanFrame::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return Init_CanFrame_dlc(msg_);
  }

private:
  ::x2robot_msgs::msg::CanFrame msg_;
};

class Init_CanFrame_stamp
{
public:
  Init_CanFrame_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanFrame_can_id stamp(::x2robot_msgs::msg::CanFrame::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_CanFrame_can_id(msg_);
  }

private:
  ::x2robot_msgs::msg::CanFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::msg::CanFrame>()
{
  return x2robot_msgs::msg::builder::Init_CanFrame_stamp();
}

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME__BUILDER_HPP_
