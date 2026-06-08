// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from x2robot_msgs:msg/EnumMotionState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/enum_motion_state.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__ENUM_MOTION_STATE__STRUCT_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__ENUM_MOTION_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__x2robot_msgs__msg__EnumMotionState __attribute__((deprecated))
#else
# define DEPRECATED__x2robot_msgs__msg__EnumMotionState __declspec(deprecated)
#endif

namespace x2robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnumMotionState_
{
  using Type = EnumMotionState_<ContainerAllocator>;

  explicit EnumMotionState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit EnumMotionState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t BAGGING =
    1u;
  static constexpr uint8_t SLACKING_OFF =
    2u;
  static constexpr uint8_t REPLAY_BAG =
    3u;

  // pointer types
  using RawPtr =
    x2robot_msgs::msg::EnumMotionState_<ContainerAllocator> *;
  using ConstRawPtr =
    const x2robot_msgs::msg::EnumMotionState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<x2robot_msgs::msg::EnumMotionState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<x2robot_msgs::msg::EnumMotionState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::EnumMotionState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::EnumMotionState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::EnumMotionState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::EnumMotionState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<x2robot_msgs::msg::EnumMotionState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<x2robot_msgs::msg::EnumMotionState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__x2robot_msgs__msg__EnumMotionState
    std::shared_ptr<x2robot_msgs::msg::EnumMotionState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__x2robot_msgs__msg__EnumMotionState
    std::shared_ptr<x2robot_msgs::msg::EnumMotionState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnumMotionState_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnumMotionState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnumMotionState_

// alias to use template instance with default allocator
using EnumMotionState =
  x2robot_msgs::msg::EnumMotionState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumMotionState_<ContainerAllocator>::BAGGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumMotionState_<ContainerAllocator>::SLACKING_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumMotionState_<ContainerAllocator>::REPLAY_BAG;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__MSG__DETAIL__ENUM_MOTION_STATE__STRUCT_HPP_
