// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/GlobalError.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/global_error.hpp"


#ifndef PROTOCOL__MSG__DETAIL__GLOBAL_ERROR__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__GLOBAL_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "protocol/msg/detail/global_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_GlobalError_exception
{
public:
  explicit Init_GlobalError_exception(::protocol::msg::GlobalError & msg)
  : msg_(msg)
  {}
  ::protocol::msg::GlobalError exception(::protocol::msg::GlobalError::_exception_type arg)
  {
    msg_.exception = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::GlobalError msg_;
};

class Init_GlobalError_level
{
public:
  explicit Init_GlobalError_level(::protocol::msg::GlobalError & msg)
  : msg_(msg)
  {}
  Init_GlobalError_exception level(::protocol::msg::GlobalError::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_GlobalError_exception(msg_);
  }

private:
  ::protocol::msg::GlobalError msg_;
};

class Init_GlobalError_error_code
{
public:
  explicit Init_GlobalError_error_code(::protocol::msg::GlobalError & msg)
  : msg_(msg)
  {}
  Init_GlobalError_level error_code(::protocol::msg::GlobalError::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_GlobalError_level(msg_);
  }

private:
  ::protocol::msg::GlobalError msg_;
};

class Init_GlobalError_header
{
public:
  Init_GlobalError_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GlobalError_error_code header(::protocol::msg::GlobalError::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GlobalError_error_code(msg_);
  }

private:
  ::protocol::msg::GlobalError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::GlobalError>()
{
  return protocol::msg::builder::Init_GlobalError_header();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__GLOBAL_ERROR__BUILDER_HPP_
