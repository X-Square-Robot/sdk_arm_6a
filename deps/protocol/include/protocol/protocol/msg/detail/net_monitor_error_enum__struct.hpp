// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/NetMonitorErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/net_monitor_error_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__NET_MONITOR_ERROR_ENUM__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__NET_MONITOR_ERROR_ENUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__protocol__msg__NetMonitorErrorEnum __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__NetMonitorErrorEnum __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NetMonitorErrorEnum_
{
  using Type = NetMonitorErrorEnum_<ContainerAllocator>;

  explicit NetMonitorErrorEnum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit NetMonitorErrorEnum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint32_t NO_NETWORK =
    17u;
  static constexpr uint32_t NO_CONNECTIVITY =
    18u;
  static constexpr uint32_t INVALID_DEFAULT_ROUTE =
    20u;
  static constexpr uint32_t NO_WIFI_SSID =
    33u;
  static constexpr uint32_t FAILED_WIFI_CONNECTION =
    34u;
  static constexpr uint32_t NO_MODEM =
    49u;
  static constexpr uint32_t NO_SIM_CARD =
    50u;
  static constexpr uint32_t NO_MODEM_SIGNAL =
    51u;
  static constexpr uint32_t FAILED_MODEM_REGISTRATION =
    52u;

  // pointer types
  using RawPtr =
    protocol::msg::NetMonitorErrorEnum_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::NetMonitorErrorEnum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::NetMonitorErrorEnum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::NetMonitorErrorEnum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::NetMonitorErrorEnum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::NetMonitorErrorEnum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::NetMonitorErrorEnum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::NetMonitorErrorEnum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::NetMonitorErrorEnum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::NetMonitorErrorEnum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__NetMonitorErrorEnum
    std::shared_ptr<protocol::msg::NetMonitorErrorEnum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__NetMonitorErrorEnum
    std::shared_ptr<protocol::msg::NetMonitorErrorEnum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NetMonitorErrorEnum_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const NetMonitorErrorEnum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NetMonitorErrorEnum_

// alias to use template instance with default allocator
using NetMonitorErrorEnum =
  protocol::msg::NetMonitorErrorEnum_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t NetMonitorErrorEnum_<ContainerAllocator>::HEARTBEAT_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t NetMonitorErrorEnum_<ContainerAllocator>::NO_NETWORK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t NetMonitorErrorEnum_<ContainerAllocator>::NO_CONNECTIVITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t NetMonitorErrorEnum_<ContainerAllocator>::INVALID_DEFAULT_ROUTE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t NetMonitorErrorEnum_<ContainerAllocator>::NO_WIFI_SSID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t NetMonitorErrorEnum_<ContainerAllocator>::FAILED_WIFI_CONNECTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t NetMonitorErrorEnum_<ContainerAllocator>::NO_MODEM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t NetMonitorErrorEnum_<ContainerAllocator>::NO_SIM_CARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t NetMonitorErrorEnum_<ContainerAllocator>::NO_MODEM_SIGNAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t NetMonitorErrorEnum_<ContainerAllocator>::FAILED_MODEM_REGISTRATION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__NET_MONITOR_ERROR_ENUM__STRUCT_HPP_
