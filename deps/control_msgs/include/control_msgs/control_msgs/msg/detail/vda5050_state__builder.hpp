// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/VDA5050State.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/vda5050_state.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__VDA5050_STATE__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__VDA5050_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/vda5050_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_VDA5050State_error_description
{
public:
  explicit Init_VDA5050State_error_description(::control_msgs::msg::VDA5050State & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::VDA5050State error_description(::control_msgs::msg::VDA5050State::_error_description_type arg)
  {
    msg_.error_description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::VDA5050State msg_;
};

class Init_VDA5050State_error_type
{
public:
  explicit Init_VDA5050State_error_type(::control_msgs::msg::VDA5050State & msg)
  : msg_(msg)
  {}
  Init_VDA5050State_error_description error_type(::control_msgs::msg::VDA5050State::_error_type_type arg)
  {
    msg_.error_type = std::move(arg);
    return Init_VDA5050State_error_description(msg_);
  }

private:
  ::control_msgs::msg::VDA5050State msg_;
};

class Init_VDA5050State_operating_mode
{
public:
  explicit Init_VDA5050State_operating_mode(::control_msgs::msg::VDA5050State & msg)
  : msg_(msg)
  {}
  Init_VDA5050State_error_type operating_mode(::control_msgs::msg::VDA5050State::_operating_mode_type arg)
  {
    msg_.operating_mode = std::move(arg);
    return Init_VDA5050State_error_type(msg_);
  }

private:
  ::control_msgs::msg::VDA5050State msg_;
};

class Init_VDA5050State_battery_charge
{
public:
  explicit Init_VDA5050State_battery_charge(::control_msgs::msg::VDA5050State & msg)
  : msg_(msg)
  {}
  Init_VDA5050State_operating_mode battery_charge(::control_msgs::msg::VDA5050State::_battery_charge_type arg)
  {
    msg_.battery_charge = std::move(arg);
    return Init_VDA5050State_operating_mode(msg_);
  }

private:
  ::control_msgs::msg::VDA5050State msg_;
};

class Init_VDA5050State_driving
{
public:
  explicit Init_VDA5050State_driving(::control_msgs::msg::VDA5050State & msg)
  : msg_(msg)
  {}
  Init_VDA5050State_battery_charge driving(::control_msgs::msg::VDA5050State::_driving_type arg)
  {
    msg_.driving = std::move(arg);
    return Init_VDA5050State_battery_charge(msg_);
  }

private:
  ::control_msgs::msg::VDA5050State msg_;
};

class Init_VDA5050State_last_node_id
{
public:
  explicit Init_VDA5050State_last_node_id(::control_msgs::msg::VDA5050State & msg)
  : msg_(msg)
  {}
  Init_VDA5050State_driving last_node_id(::control_msgs::msg::VDA5050State::_last_node_id_type arg)
  {
    msg_.last_node_id = std::move(arg);
    return Init_VDA5050State_driving(msg_);
  }

private:
  ::control_msgs::msg::VDA5050State msg_;
};

class Init_VDA5050State_action_status
{
public:
  explicit Init_VDA5050State_action_status(::control_msgs::msg::VDA5050State & msg)
  : msg_(msg)
  {}
  Init_VDA5050State_last_node_id action_status(::control_msgs::msg::VDA5050State::_action_status_type arg)
  {
    msg_.action_status = std::move(arg);
    return Init_VDA5050State_last_node_id(msg_);
  }

private:
  ::control_msgs::msg::VDA5050State msg_;
};

class Init_VDA5050State_order_id
{
public:
  Init_VDA5050State_order_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VDA5050State_action_status order_id(::control_msgs::msg::VDA5050State::_order_id_type arg)
  {
    msg_.order_id = std::move(arg);
    return Init_VDA5050State_action_status(msg_);
  }

private:
  ::control_msgs::msg::VDA5050State msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::VDA5050State>()
{
  return control_msgs::msg::builder::Init_VDA5050State_order_id();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__VDA5050_STATE__BUILDER_HPP_
