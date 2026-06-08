// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/RealtimeControllerErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/realtime_controller_error_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__REALTIME_CONTROLLER_ERROR_ENUM__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__REALTIME_CONTROLLER_ERROR_ENUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "protocol/msg/detail/realtime_controller_error_enum__struct.hpp"
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
auto build<::protocol::msg::RealtimeControllerErrorEnum>()
{
  return ::protocol::msg::RealtimeControllerErrorEnum(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__REALTIME_CONTROLLER_ERROR_ENUM__BUILDER_HPP_
