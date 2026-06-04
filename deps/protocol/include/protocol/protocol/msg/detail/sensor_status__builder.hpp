// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/SensorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/sensor_status.hpp"


#ifndef PROTOCOL__MSG__DETAIL__SENSOR_STATUS__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__SENSOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "protocol/msg/detail/sensor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_SensorStatus_error_bit_code
{
public:
  explicit Init_SensorStatus_error_bit_code(::protocol::msg::SensorStatus & msg)
  : msg_(msg)
  {}
  ::protocol::msg::SensorStatus error_bit_code(::protocol::msg::SensorStatus::_error_bit_code_type arg)
  {
    msg_.error_bit_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::SensorStatus msg_;
};

class Init_SensorStatus_state_code
{
public:
  Init_SensorStatus_state_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorStatus_error_bit_code state_code(::protocol::msg::SensorStatus::_state_code_type arg)
  {
    msg_.state_code = std::move(arg);
    return Init_SensorStatus_error_bit_code(msg_);
  }

private:
  ::protocol::msg::SensorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::SensorStatus>()
{
  return protocol::msg::builder::Init_SensorStatus_state_code();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__SENSOR_STATUS__BUILDER_HPP_
