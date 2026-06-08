// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/UnitError.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/unit_error.hpp"


#ifndef PROTOCOL__MSG__DETAIL__UNIT_ERROR__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__UNIT_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "protocol/msg/detail/unit_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_UnitError_exception
{
public:
  explicit Init_UnitError_exception(::protocol::msg::UnitError & msg)
  : msg_(msg)
  {}
  ::protocol::msg::UnitError exception(::protocol::msg::UnitError::_exception_type arg)
  {
    msg_.exception = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::UnitError msg_;
};

class Init_UnitError_level
{
public:
  explicit Init_UnitError_level(::protocol::msg::UnitError & msg)
  : msg_(msg)
  {}
  Init_UnitError_exception level(::protocol::msg::UnitError::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_UnitError_exception(msg_);
  }

private:
  ::protocol::msg::UnitError msg_;
};

class Init_UnitError_error_code
{
public:
  Init_UnitError_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UnitError_level error_code(::protocol::msg::UnitError::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_UnitError_level(msg_);
  }

private:
  ::protocol::msg::UnitError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::UnitError>()
{
  return protocol::msg::builder::Init_UnitError_error_code();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__UNIT_ERROR__BUILDER_HPP_
