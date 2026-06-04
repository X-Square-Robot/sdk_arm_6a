// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/RecorderErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/recorder_error_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__RECORDER_ERROR_ENUM__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__RECORDER_ERROR_ENUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__protocol__msg__RecorderErrorEnum __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__RecorderErrorEnum __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RecorderErrorEnum_
{
  using Type = RecorderErrorEnum_<ContainerAllocator>;

  explicit RecorderErrorEnum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit RecorderErrorEnum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint32_t TOPIC_FREQ_LOW =
    1u;
  static constexpr uint32_t TOPIC_NO_DATA =
    2u;
  static constexpr uint32_t RECORD_BLOCKED_COMPRESSING =
    3u;
  static constexpr uint32_t RECORD_BLOCKED_UPLOADING =
    4u;
  static constexpr uint32_t RECORDING_TIME_TOO_LONG =
    5u;
  static constexpr uint32_t DISK_SPACE_LOW_WARNING =
    6u;
  static constexpr uint32_t DISK_SPACE_CRITICALLY_LOW =
    7u;

  // pointer types
  using RawPtr =
    protocol::msg::RecorderErrorEnum_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::RecorderErrorEnum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::RecorderErrorEnum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::RecorderErrorEnum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::RecorderErrorEnum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::RecorderErrorEnum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::RecorderErrorEnum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::RecorderErrorEnum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::RecorderErrorEnum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::RecorderErrorEnum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__RecorderErrorEnum
    std::shared_ptr<protocol::msg::RecorderErrorEnum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__RecorderErrorEnum
    std::shared_ptr<protocol::msg::RecorderErrorEnum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecorderErrorEnum_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecorderErrorEnum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecorderErrorEnum_

// alias to use template instance with default allocator
using RecorderErrorEnum =
  protocol::msg::RecorderErrorEnum_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RecorderErrorEnum_<ContainerAllocator>::TOPIC_FREQ_LOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RecorderErrorEnum_<ContainerAllocator>::TOPIC_NO_DATA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RecorderErrorEnum_<ContainerAllocator>::RECORD_BLOCKED_COMPRESSING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RecorderErrorEnum_<ContainerAllocator>::RECORD_BLOCKED_UPLOADING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RecorderErrorEnum_<ContainerAllocator>::RECORDING_TIME_TOO_LONG;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RecorderErrorEnum_<ContainerAllocator>::DISK_SPACE_LOW_WARNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RecorderErrorEnum_<ContainerAllocator>::DISK_SPACE_CRITICALLY_LOW;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__RECORDER_ERROR_ENUM__STRUCT_HPP_
