// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/StatusCode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/status_code.hpp"


#ifndef PROTOCOL__MSG__DETAIL__STATUS_CODE__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__STATUS_CODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "protocol/msg/detail/status_code__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_StatusCode_error_code
{
public:
  explicit Init_StatusCode_error_code(::protocol::msg::StatusCode & msg)
  : msg_(msg)
  {}
  ::protocol::msg::StatusCode error_code(::protocol::msg::StatusCode::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::StatusCode msg_;
};

class Init_StatusCode_state_code
{
public:
  explicit Init_StatusCode_state_code(::protocol::msg::StatusCode & msg)
  : msg_(msg)
  {}
  Init_StatusCode_error_code state_code(::protocol::msg::StatusCode::_state_code_type arg)
  {
    msg_.state_code = std::move(arg);
    return Init_StatusCode_error_code(msg_);
  }

private:
  ::protocol::msg::StatusCode msg_;
};

class Init_StatusCode_unit
{
public:
  explicit Init_StatusCode_unit(::protocol::msg::StatusCode & msg)
  : msg_(msg)
  {}
  Init_StatusCode_state_code unit(::protocol::msg::StatusCode::_unit_type arg)
  {
    msg_.unit = std::move(arg);
    return Init_StatusCode_state_code(msg_);
  }

private:
  ::protocol::msg::StatusCode msg_;
};

class Init_StatusCode_domain
{
public:
  explicit Init_StatusCode_domain(::protocol::msg::StatusCode & msg)
  : msg_(msg)
  {}
  Init_StatusCode_unit domain(::protocol::msg::StatusCode::_domain_type arg)
  {
    msg_.domain = std::move(arg);
    return Init_StatusCode_unit(msg_);
  }

private:
  ::protocol::msg::StatusCode msg_;
};

class Init_StatusCode_header
{
public:
  Init_StatusCode_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StatusCode_domain header(::protocol::msg::StatusCode::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StatusCode_domain(msg_);
  }

private:
  ::protocol::msg::StatusCode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::StatusCode>()
{
  return protocol::msg::builder::Init_StatusCode_header();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__STATUS_CODE__BUILDER_HPP_
