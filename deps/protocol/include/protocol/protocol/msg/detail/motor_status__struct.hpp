// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/motor_status.hpp"


#ifndef PROTOCOL__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__protocol__msg__MotorStatus __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__MotorStatus __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorStatus_
{
  using Type = MotorStatus_<ContainerAllocator>;

  explicit MotorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_code = 0;
      this->error_bit_code = 0ul;
    }
  }

  explicit MotorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_code = 0;
      this->error_bit_code = 0ul;
    }
  }

  // field types and members
  using _state_code_type =
    uint8_t;
  _state_code_type state_code;
  using _error_bit_code_type =
    uint32_t;
  _error_bit_code_type error_bit_code;

  // setters for named parameter idiom
  Type & set__state_code(
    const uint8_t & _arg)
  {
    this->state_code = _arg;
    return *this;
  }
  Type & set__error_bit_code(
    const uint32_t & _arg)
  {
    this->error_bit_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::MotorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::MotorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::MotorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::MotorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MotorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MotorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::MotorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::MotorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__MotorStatus
    std::shared_ptr<protocol::msg::MotorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__MotorStatus
    std::shared_ptr<protocol::msg::MotorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorStatus_ & other) const
  {
    if (this->state_code != other.state_code) {
      return false;
    }
    if (this->error_bit_code != other.error_bit_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorStatus_

// alias to use template instance with default allocator
using MotorStatus =
  protocol::msg::MotorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
