// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/NetMonitorUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/net_monitor_unit_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__NET_MONITOR_UNIT_ENUM__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__NET_MONITOR_UNIT_ENUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "protocol/msg/detail/net_monitor_unit_enum__struct.hpp"
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
auto build<::protocol::msg::NetMonitorUnitEnum>()
{
  return ::protocol::msg::NetMonitorUnitEnum(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__NET_MONITOR_UNIT_ENUM__BUILDER_HPP_
