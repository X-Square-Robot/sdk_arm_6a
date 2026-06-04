// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/ErrorLevelEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/error_level_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__ERROR_LEVEL_ENUM__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__ERROR_LEVEL_ENUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "protocol/msg/detail/error_level_enum__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace protocol
{

namespace msg
{


}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::ErrorLevelEnum>()
{
  return ::protocol::msg::ErrorLevelEnum(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__ERROR_LEVEL_ENUM__BUILDER_HPP_
