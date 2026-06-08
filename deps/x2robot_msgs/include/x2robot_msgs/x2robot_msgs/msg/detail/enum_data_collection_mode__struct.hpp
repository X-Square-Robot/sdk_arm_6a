// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from x2robot_msgs:msg/EnumDataCollectionMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/enum_data_collection_mode.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__ENUM_DATA_COLLECTION_MODE__STRUCT_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__ENUM_DATA_COLLECTION_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__x2robot_msgs__msg__EnumDataCollectionMode __attribute__((deprecated))
#else
# define DEPRECATED__x2robot_msgs__msg__EnumDataCollectionMode __declspec(deprecated)
#endif

namespace x2robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnumDataCollectionMode_
{
  using Type = EnumDataCollectionMode_<ContainerAllocator>;

  explicit EnumDataCollectionMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit EnumDataCollectionMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t TRACKER_TRIGGER =
    1u;
  static constexpr uint8_t EXOSKELETON_ARM_TRIGGER =
    2u;

  // pointer types
  using RawPtr =
    x2robot_msgs::msg::EnumDataCollectionMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const x2robot_msgs::msg::EnumDataCollectionMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<x2robot_msgs::msg::EnumDataCollectionMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<x2robot_msgs::msg::EnumDataCollectionMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::EnumDataCollectionMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::EnumDataCollectionMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::EnumDataCollectionMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::EnumDataCollectionMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<x2robot_msgs::msg::EnumDataCollectionMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<x2robot_msgs::msg::EnumDataCollectionMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__x2robot_msgs__msg__EnumDataCollectionMode
    std::shared_ptr<x2robot_msgs::msg::EnumDataCollectionMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__x2robot_msgs__msg__EnumDataCollectionMode
    std::shared_ptr<x2robot_msgs::msg::EnumDataCollectionMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnumDataCollectionMode_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnumDataCollectionMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnumDataCollectionMode_

// alias to use template instance with default allocator
using EnumDataCollectionMode =
  x2robot_msgs::msg::EnumDataCollectionMode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumDataCollectionMode_<ContainerAllocator>::TRACKER_TRIGGER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EnumDataCollectionMode_<ContainerAllocator>::EXOSKELETON_ARM_TRIGGER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__MSG__DETAIL__ENUM_DATA_COLLECTION_MODE__STRUCT_HPP_
