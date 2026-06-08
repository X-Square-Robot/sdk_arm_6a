// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/StateEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/state_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__STATE_ENUM__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__STATE_ENUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__protocol__msg__StateEnum __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__StateEnum __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateEnum_
{
  using Type = StateEnum_<ContainerAllocator>;

  explicit StateEnum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit StateEnum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations
  static constexpr uint8_t STATE_UNINITIALIZED =
    0u;
  static constexpr uint8_t STATE_INITIALIZED =
    1u;
  static constexpr uint8_t STATE_RUNNING =
    2u;
  static constexpr uint8_t STATE_ERROR =
    3u;
  static constexpr uint8_t STATE_OFFLINE =
    4u;

  // pointer types
  using RawPtr =
    protocol::msg::StateEnum_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::StateEnum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::StateEnum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::StateEnum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::StateEnum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::StateEnum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::StateEnum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::StateEnum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::StateEnum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::StateEnum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__StateEnum
    std::shared_ptr<protocol::msg::StateEnum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__StateEnum
    std::shared_ptr<protocol::msg::StateEnum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateEnum_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateEnum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateEnum_

// alias to use template instance with default allocator
using StateEnum =
  protocol::msg::StateEnum_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateEnum_<ContainerAllocator>::STATE_UNINITIALIZED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateEnum_<ContainerAllocator>::STATE_INITIALIZED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateEnum_<ContainerAllocator>::STATE_RUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateEnum_<ContainerAllocator>::STATE_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateEnum_<ContainerAllocator>::STATE_OFFLINE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__STATE_ENUM__STRUCT_HPP_
