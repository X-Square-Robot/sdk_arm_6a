// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/RealtimeControllerErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/realtime_controller_error_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__REALTIME_CONTROLLER_ERROR_ENUM__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__REALTIME_CONTROLLER_ERROR_ENUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__protocol__msg__RealtimeControllerErrorEnum __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__RealtimeControllerErrorEnum __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RealtimeControllerErrorEnum_
{
  using Type = RealtimeControllerErrorEnum_<ContainerAllocator>;

  explicit RealtimeControllerErrorEnum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit RealtimeControllerErrorEnum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint32_t IS_WORKING =
    16u;
  static constexpr uint32_t IS_CONTROLMODECHANGED =
    17u;
  static constexpr uint32_t IS_TRAJRUNNING =
    18u;
  static constexpr uint32_t IS_BACKOFF =
    19u;
  static constexpr uint32_t IS_AVOIDLIMITS =
    20u;
  static constexpr uint32_t IS_SOFTSTOP =
    21u;
  static constexpr uint32_t IS_ESTOPPED =
    22u;
  static constexpr uint32_t IS_READYFORRESETACK =
    23u;
  static constexpr uint32_t IS_INTERNALERROR =
    24u;
  static constexpr uint32_t IS_LIFTWAISTHOMING =
    25u;

  // pointer types
  using RawPtr =
    protocol::msg::RealtimeControllerErrorEnum_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::RealtimeControllerErrorEnum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::RealtimeControllerErrorEnum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::RealtimeControllerErrorEnum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::RealtimeControllerErrorEnum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::RealtimeControllerErrorEnum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::RealtimeControllerErrorEnum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::RealtimeControllerErrorEnum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::RealtimeControllerErrorEnum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::RealtimeControllerErrorEnum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__RealtimeControllerErrorEnum
    std::shared_ptr<protocol::msg::RealtimeControllerErrorEnum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__RealtimeControllerErrorEnum
    std::shared_ptr<protocol::msg::RealtimeControllerErrorEnum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RealtimeControllerErrorEnum_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const RealtimeControllerErrorEnum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RealtimeControllerErrorEnum_

// alias to use template instance with default allocator
using RealtimeControllerErrorEnum =
  protocol::msg::RealtimeControllerErrorEnum_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RealtimeControllerErrorEnum_<ContainerAllocator>::HEARTBEAT_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RealtimeControllerErrorEnum_<ContainerAllocator>::IS_WORKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RealtimeControllerErrorEnum_<ContainerAllocator>::IS_CONTROLMODECHANGED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RealtimeControllerErrorEnum_<ContainerAllocator>::IS_TRAJRUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RealtimeControllerErrorEnum_<ContainerAllocator>::IS_BACKOFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RealtimeControllerErrorEnum_<ContainerAllocator>::IS_AVOIDLIMITS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RealtimeControllerErrorEnum_<ContainerAllocator>::IS_SOFTSTOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RealtimeControllerErrorEnum_<ContainerAllocator>::IS_ESTOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RealtimeControllerErrorEnum_<ContainerAllocator>::IS_READYFORRESETACK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RealtimeControllerErrorEnum_<ContainerAllocator>::IS_INTERNALERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RealtimeControllerErrorEnum_<ContainerAllocator>::IS_LIFTWAISTHOMING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__REALTIME_CONTROLLER_ERROR_ENUM__STRUCT_HPP_
