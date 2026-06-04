// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/MasterLeftArmUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/master_left_arm_unit_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__MASTER_LEFT_ARM_UNIT_ENUM__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__MASTER_LEFT_ARM_UNIT_ENUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "protocol/msg/detail/master_left_arm_unit_enum__struct.hpp"
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
auto build<::protocol::msg::MasterLeftArmUnitEnum>()
{
  return ::protocol::msg::MasterLeftArmUnitEnum(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MASTER_LEFT_ARM_UNIT_ENUM__BUILDER_HPP_
