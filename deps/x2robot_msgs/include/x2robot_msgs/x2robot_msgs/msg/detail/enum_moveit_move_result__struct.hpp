// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from x2robot_msgs:msg/EnumMoveitMoveResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/enum_moveit_move_result.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__ENUM_MOVEIT_MOVE_RESULT__STRUCT_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__ENUM_MOVEIT_MOVE_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__x2robot_msgs__msg__EnumMoveitMoveResult __attribute__((deprecated))
#else
# define DEPRECATED__x2robot_msgs__msg__EnumMoveitMoveResult __declspec(deprecated)
#endif

namespace x2robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnumMoveitMoveResult_
{
  using Type = EnumMoveitMoveResult_<ContainerAllocator>;

  explicit EnumMoveitMoveResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit EnumMoveitMoveResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t SUCCESS =
    0u;
  static constexpr uint8_t INVALID_TARGET =
    1u;
  static constexpr uint8_t INVALID_CURRENT_POS =
    2u;
  static constexpr uint8_t PLANING_ACTION_NOT_READY =
    3u;
  static constexpr uint8_t PLANING_ACTION_REJECTED =
    4u;
  static constexpr uint8_t PLANING_TIMEOUT =
    5u;
  static constexpr uint8_t PLANING_FAILED =
    6u;
  static constexpr uint8_t EXECUTING_ACTION_NOT_READY =
    7u;
  static constexpr uint8_t EXECUTING_ACTION_REJECTED =
    8u;
  static constexpr uint8_t EXECUTING_TIMEOUT =
    9u;
  static constexpr uint8_t EXECUTING_FAILED =
    10u;
  static constexpr uint8_t EXCEPTION =
    11u;

  // pointer types
  using RawPtr =
    x2robot_msgs::msg::EnumMoveitMoveResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const x2robot_msgs::msg::EnumMoveitMoveResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<x2robot_msgs::msg::EnumMoveitMoveResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<x2robot_msgs::msg::EnumMoveitMoveResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::EnumMoveitMoveResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::EnumMoveitMoveResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::EnumMoveitMoveResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::EnumMoveitMoveResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<x2robot_msgs::msg::EnumMoveitMoveResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<x2robot_msgs::msg::EnumMoveitMoveResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__x2robot_msgs__msg__EnumMoveitMoveResult
    std::shared_ptr<x2robot_msgs::msg::EnumMoveitMoveResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__x2robot_msgs__msg__EnumMoveitMoveResult
    std::shared_ptr<x2robot_msgs::msg::EnumMoveitMoveResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnumMoveitMoveResult_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnumMoveitMoveResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnumMoveitMoveResult_

// alias to use template instance with default allocator
using EnumMoveitMoveResult =
  x2robot_msgs::msg::EnumMoveitMoveResult_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumMoveitMoveResult_<ContainerAllocator>::SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumMoveitMoveResult_<ContainerAllocator>::INVALID_TARGET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumMoveitMoveResult_<ContainerAllocator>::INVALID_CURRENT_POS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumMoveitMoveResult_<ContainerAllocator>::PLANING_ACTION_NOT_READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumMoveitMoveResult_<ContainerAllocator>::PLANING_ACTION_REJECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumMoveitMoveResult_<ContainerAllocator>::PLANING_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumMoveitMoveResult_<ContainerAllocator>::PLANING_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumMoveitMoveResult_<ContainerAllocator>::EXECUTING_ACTION_NOT_READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumMoveitMoveResult_<ContainerAllocator>::EXECUTING_ACTION_REJECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumMoveitMoveResult_<ContainerAllocator>::EXECUTING_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumMoveitMoveResult_<ContainerAllocator>::EXECUTING_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumMoveitMoveResult_<ContainerAllocator>::EXCEPTION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__MSG__DETAIL__ENUM_MOVEIT_MOVE_RESULT__STRUCT_HPP_
