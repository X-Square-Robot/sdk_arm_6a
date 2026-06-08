// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/MoveitServerUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/moveit_server_unit_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__MOVEIT_SERVER_UNIT_ENUM__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__MOVEIT_SERVER_UNIT_ENUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__protocol__msg__MoveitServerUnitEnum __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__MoveitServerUnitEnum __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MoveitServerUnitEnum_
{
  using Type = MoveitServerUnitEnum_<ContainerAllocator>;

  explicit MoveitServerUnitEnum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit MoveitServerUnitEnum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint32_t HEARTBEAT_TIMEOUT =
    1u;
  static constexpr uint32_t SUCCESS =
    16u;
  static constexpr uint32_t INVALID_TARGET =
    17u;
  static constexpr uint32_t INVALID_CURRENT_POS =
    18u;
  static constexpr uint32_t PLANING_ACTION_NOT_READY =
    19u;
  static constexpr uint32_t PLANING_ACTION_REJECTED =
    20u;
  static constexpr uint32_t PLANING_TIMEOUT =
    21u;
  static constexpr uint32_t PLANING_FAILED =
    22u;
  static constexpr uint32_t EXECUTING_ACTION_NOT_READY =
    23u;
  static constexpr uint32_t EXECUTING_ACTION_REJECTED =
    24u;
  static constexpr uint32_t EXECUTING_TIMEOUT =
    25u;
  static constexpr uint32_t EXECUTING_FAILED =
    26u;
  static constexpr uint32_t EXCEPTION =
    27u;

  // pointer types
  using RawPtr =
    protocol::msg::MoveitServerUnitEnum_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::MoveitServerUnitEnum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::MoveitServerUnitEnum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::MoveitServerUnitEnum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MoveitServerUnitEnum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MoveitServerUnitEnum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MoveitServerUnitEnum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MoveitServerUnitEnum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::MoveitServerUnitEnum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::MoveitServerUnitEnum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__MoveitServerUnitEnum
    std::shared_ptr<protocol::msg::MoveitServerUnitEnum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__MoveitServerUnitEnum
    std::shared_ptr<protocol::msg::MoveitServerUnitEnum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveitServerUnitEnum_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveitServerUnitEnum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveitServerUnitEnum_

// alias to use template instance with default allocator
using MoveitServerUnitEnum =
  protocol::msg::MoveitServerUnitEnum_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MoveitServerUnitEnum_<ContainerAllocator>::HEARTBEAT_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MoveitServerUnitEnum_<ContainerAllocator>::SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MoveitServerUnitEnum_<ContainerAllocator>::INVALID_TARGET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MoveitServerUnitEnum_<ContainerAllocator>::INVALID_CURRENT_POS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MoveitServerUnitEnum_<ContainerAllocator>::PLANING_ACTION_NOT_READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MoveitServerUnitEnum_<ContainerAllocator>::PLANING_ACTION_REJECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MoveitServerUnitEnum_<ContainerAllocator>::PLANING_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MoveitServerUnitEnum_<ContainerAllocator>::PLANING_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MoveitServerUnitEnum_<ContainerAllocator>::EXECUTING_ACTION_NOT_READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MoveitServerUnitEnum_<ContainerAllocator>::EXECUTING_ACTION_REJECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MoveitServerUnitEnum_<ContainerAllocator>::EXECUTING_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MoveitServerUnitEnum_<ContainerAllocator>::EXECUTING_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MoveitServerUnitEnum_<ContainerAllocator>::EXCEPTION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MOVEIT_SERVER_UNIT_ENUM__STRUCT_HPP_
