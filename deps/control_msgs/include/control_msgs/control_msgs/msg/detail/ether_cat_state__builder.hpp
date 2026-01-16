// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/EtherCATState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/ether_cat_state.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__ETHER_CAT_STATE__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__ETHER_CAT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/ether_cat_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_EtherCATState_al_status_code
{
public:
  explicit Init_EtherCATState_al_status_code(::control_msgs::msg::EtherCATState & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::EtherCATState al_status_code(::control_msgs::msg::EtherCATState::_al_status_code_type arg)
  {
    msg_.al_status_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::EtherCATState msg_;
};

class Init_EtherCATState_has_error
{
public:
  explicit Init_EtherCATState_has_error(::control_msgs::msg::EtherCATState & msg)
  : msg_(msg)
  {}
  Init_EtherCATState_al_status_code has_error(::control_msgs::msg::EtherCATState::_has_error_type arg)
  {
    msg_.has_error = std::move(arg);
    return Init_EtherCATState_al_status_code(msg_);
  }

private:
  ::control_msgs::msg::EtherCATState msg_;
};

class Init_EtherCATState_al_state
{
public:
  explicit Init_EtherCATState_al_state(::control_msgs::msg::EtherCATState & msg)
  : msg_(msg)
  {}
  Init_EtherCATState_has_error al_state(::control_msgs::msg::EtherCATState::_al_state_type arg)
  {
    msg_.al_state = std::move(arg);
    return Init_EtherCATState_has_error(msg_);
  }

private:
  ::control_msgs::msg::EtherCATState msg_;
};

class Init_EtherCATState_product_code
{
public:
  explicit Init_EtherCATState_product_code(::control_msgs::msg::EtherCATState & msg)
  : msg_(msg)
  {}
  Init_EtherCATState_al_state product_code(::control_msgs::msg::EtherCATState::_product_code_type arg)
  {
    msg_.product_code = std::move(arg);
    return Init_EtherCATState_al_state(msg_);
  }

private:
  ::control_msgs::msg::EtherCATState msg_;
};

class Init_EtherCATState_vendor_id
{
public:
  explicit Init_EtherCATState_vendor_id(::control_msgs::msg::EtherCATState & msg)
  : msg_(msg)
  {}
  Init_EtherCATState_product_code vendor_id(::control_msgs::msg::EtherCATState::_vendor_id_type arg)
  {
    msg_.vendor_id = std::move(arg);
    return Init_EtherCATState_product_code(msg_);
  }

private:
  ::control_msgs::msg::EtherCATState msg_;
};

class Init_EtherCATState_slave_position
{
public:
  Init_EtherCATState_slave_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EtherCATState_vendor_id slave_position(::control_msgs::msg::EtherCATState::_slave_position_type arg)
  {
    msg_.slave_position = std::move(arg);
    return Init_EtherCATState_vendor_id(msg_);
  }

private:
  ::control_msgs::msg::EtherCATState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::EtherCATState>()
{
  return control_msgs::msg::builder::Init_EtherCATState_slave_position();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__ETHER_CAT_STATE__BUILDER_HPP_
