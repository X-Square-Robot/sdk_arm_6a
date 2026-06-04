// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from x2robot_msgs:msg/EnumControllerMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/enum_controller_mode.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__ENUM_CONTROLLER_MODE__STRUCT_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__ENUM_CONTROLLER_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__x2robot_msgs__msg__EnumControllerMode __attribute__((deprecated))
#else
# define DEPRECATED__x2robot_msgs__msg__EnumControllerMode __declspec(deprecated)
#endif

namespace x2robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnumControllerMode_
{
  using Type = EnumControllerMode_<ContainerAllocator>;

  explicit EnumControllerMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit EnumControllerMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t IDLE =
    1u;
  static constexpr uint8_t SWITHCING =
    255u;
  static constexpr uint8_t DATA_COLLECT =
    2u;
  static constexpr uint8_t REPLAY =
    3u;
  static constexpr uint8_t INFERENCE =
    4u;

  // pointer types
  using RawPtr =
    x2robot_msgs::msg::EnumControllerMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const x2robot_msgs::msg::EnumControllerMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<x2robot_msgs::msg::EnumControllerMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<x2robot_msgs::msg::EnumControllerMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::EnumControllerMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::EnumControllerMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::EnumControllerMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::EnumControllerMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<x2robot_msgs::msg::EnumControllerMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<x2robot_msgs::msg::EnumControllerMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__x2robot_msgs__msg__EnumControllerMode
    std::shared_ptr<x2robot_msgs::msg::EnumControllerMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__x2robot_msgs__msg__EnumControllerMode
    std::shared_ptr<x2robot_msgs::msg::EnumControllerMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnumControllerMode_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnumControllerMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnumControllerMode_

// alias to use template instance with default allocator
using EnumControllerMode =
  x2robot_msgs::msg::EnumControllerMode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumControllerMode_<ContainerAllocator>::IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumControllerMode_<ContainerAllocator>::SWITHCING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumControllerMode_<ContainerAllocator>::DATA_COLLECT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumControllerMode_<ContainerAllocator>::REPLAY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumControllerMode_<ContainerAllocator>::INFERENCE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__MSG__DETAIL__ENUM_CONTROLLER_MODE__STRUCT_HPP_
