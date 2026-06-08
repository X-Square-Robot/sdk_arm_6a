// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/ErrorCodes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/error_codes.hpp"


#ifndef PROTOCOL__MSG__DETAIL__ERROR_CODES__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__ERROR_CODES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "protocol/msg/detail/error_codes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_ErrorCodes_error_codes
{
public:
  Init_ErrorCodes_error_codes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::msg::ErrorCodes error_codes(::protocol::msg::ErrorCodes::_error_codes_type arg)
  {
    msg_.error_codes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::ErrorCodes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::ErrorCodes>()
{
  return protocol::msg::builder::Init_ErrorCodes_error_codes();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__ERROR_CODES__BUILDER_HPP_
