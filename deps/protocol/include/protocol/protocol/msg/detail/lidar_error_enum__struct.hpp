// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/LidarErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/lidar_error_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__LIDAR_ERROR_ENUM__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__LIDAR_ERROR_ENUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__protocol__msg__LidarErrorEnum __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__LidarErrorEnum __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LidarErrorEnum_
{
  using Type = LidarErrorEnum_<ContainerAllocator>;

  explicit LidarErrorEnum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit LidarErrorEnum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint32_t CONN_FAIL =
    17u;
  static constexpr uint32_t PARSE_CRC_FAIL =
    18u;

  // pointer types
  using RawPtr =
    protocol::msg::LidarErrorEnum_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::LidarErrorEnum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::LidarErrorEnum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::LidarErrorEnum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::LidarErrorEnum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::LidarErrorEnum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::LidarErrorEnum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::LidarErrorEnum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::LidarErrorEnum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::LidarErrorEnum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__LidarErrorEnum
    std::shared_ptr<protocol::msg::LidarErrorEnum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__LidarErrorEnum
    std::shared_ptr<protocol::msg::LidarErrorEnum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LidarErrorEnum_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const LidarErrorEnum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LidarErrorEnum_

// alias to use template instance with default allocator
using LidarErrorEnum =
  protocol::msg::LidarErrorEnum_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LidarErrorEnum_<ContainerAllocator>::HEARTBEAT_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LidarErrorEnum_<ContainerAllocator>::CONN_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LidarErrorEnum_<ContainerAllocator>::PARSE_CRC_FAIL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__LIDAR_ERROR_ENUM__STRUCT_HPP_
