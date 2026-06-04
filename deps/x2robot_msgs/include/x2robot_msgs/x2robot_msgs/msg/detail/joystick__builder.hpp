// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from x2robot_msgs:msg/Joystick.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/joystick.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__JOYSTICK__BUILDER_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__JOYSTICK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "x2robot_msgs/msg/detail/joystick__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace x2robot_msgs
{

namespace msg
{

namespace builder
{

class Init_Joystick_sw4
{
public:
  explicit Init_Joystick_sw4(::x2robot_msgs::msg::Joystick & msg)
  : msg_(msg)
  {}
  ::x2robot_msgs::msg::Joystick sw4(::x2robot_msgs::msg::Joystick::_sw4_type arg)
  {
    msg_.sw4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::x2robot_msgs::msg::Joystick msg_;
};

class Init_Joystick_sw3
{
public:
  explicit Init_Joystick_sw3(::x2robot_msgs::msg::Joystick & msg)
  : msg_(msg)
  {}
  Init_Joystick_sw4 sw3(::x2robot_msgs::msg::Joystick::_sw3_type arg)
  {
    msg_.sw3 = std::move(arg);
    return Init_Joystick_sw4(msg_);
  }

private:
  ::x2robot_msgs::msg::Joystick msg_;
};

class Init_Joystick_sw2
{
public:
  explicit Init_Joystick_sw2(::x2robot_msgs::msg::Joystick & msg)
  : msg_(msg)
  {}
  Init_Joystick_sw3 sw2(::x2robot_msgs::msg::Joystick::_sw2_type arg)
  {
    msg_.sw2 = std::move(arg);
    return Init_Joystick_sw3(msg_);
  }

private:
  ::x2robot_msgs::msg::Joystick msg_;
};

class Init_Joystick_sw1
{
public:
  explicit Init_Joystick_sw1(::x2robot_msgs::msg::Joystick & msg)
  : msg_(msg)
  {}
  Init_Joystick_sw2 sw1(::x2robot_msgs::msg::Joystick::_sw1_type arg)
  {
    msg_.sw1 = std::move(arg);
    return Init_Joystick_sw2(msg_);
  }

private:
  ::x2robot_msgs::msg::Joystick msg_;
};

class Init_Joystick_joy_button
{
public:
  explicit Init_Joystick_joy_button(::x2robot_msgs::msg::Joystick & msg)
  : msg_(msg)
  {}
  Init_Joystick_sw1 joy_button(::x2robot_msgs::msg::Joystick::_joy_button_type arg)
  {
    msg_.joy_button = std::move(arg);
    return Init_Joystick_sw1(msg_);
  }

private:
  ::x2robot_msgs::msg::Joystick msg_;
};

class Init_Joystick_trigger
{
public:
  explicit Init_Joystick_trigger(::x2robot_msgs::msg::Joystick & msg)
  : msg_(msg)
  {}
  Init_Joystick_joy_button trigger(::x2robot_msgs::msg::Joystick::_trigger_type arg)
  {
    msg_.trigger = std::move(arg);
    return Init_Joystick_joy_button(msg_);
  }

private:
  ::x2robot_msgs::msg::Joystick msg_;
};

class Init_Joystick_joystick_y
{
public:
  explicit Init_Joystick_joystick_y(::x2robot_msgs::msg::Joystick & msg)
  : msg_(msg)
  {}
  Init_Joystick_trigger joystick_y(::x2robot_msgs::msg::Joystick::_joystick_y_type arg)
  {
    msg_.joystick_y = std::move(arg);
    return Init_Joystick_trigger(msg_);
  }

private:
  ::x2robot_msgs::msg::Joystick msg_;
};

class Init_Joystick_joystick_x
{
public:
  Init_Joystick_joystick_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Joystick_joystick_y joystick_x(::x2robot_msgs::msg::Joystick::_joystick_x_type arg)
  {
    msg_.joystick_x = std::move(arg);
    return Init_Joystick_joystick_y(msg_);
  }

private:
  ::x2robot_msgs::msg::Joystick msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::x2robot_msgs::msg::Joystick>()
{
  return x2robot_msgs::msg::builder::Init_Joystick_joystick_x();
}

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__MSG__DETAIL__JOYSTICK__BUILDER_HPP_
