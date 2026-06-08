// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/DomainEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/domain_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__DOMAIN_ENUM__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__DOMAIN_ENUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__protocol__msg__DomainEnum __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__DomainEnum __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DomainEnum_
{
  using Type = DomainEnum_<ContainerAllocator>;

  explicit DomainEnum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit DomainEnum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t HAL =
    1u;
  static constexpr uint8_t MOTION =
    4u;
  static constexpr uint8_t MONITOR =
    5u;
  static constexpr uint8_t APPLICATION =
    7u;
  static constexpr uint8_t MEDIA =
    2u;
  static constexpr uint8_t EAI =
    6u;

  // pointer types
  using RawPtr =
    protocol::msg::DomainEnum_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::DomainEnum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::DomainEnum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::DomainEnum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::DomainEnum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::DomainEnum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::DomainEnum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::DomainEnum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::DomainEnum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::DomainEnum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__DomainEnum
    std::shared_ptr<protocol::msg::DomainEnum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__DomainEnum
    std::shared_ptr<protocol::msg::DomainEnum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DomainEnum_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const DomainEnum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DomainEnum_

// alias to use template instance with default allocator
using DomainEnum =
  protocol::msg::DomainEnum_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DomainEnum_<ContainerAllocator>::HAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DomainEnum_<ContainerAllocator>::MOTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DomainEnum_<ContainerAllocator>::MONITOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DomainEnum_<ContainerAllocator>::APPLICATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DomainEnum_<ContainerAllocator>::MEDIA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DomainEnum_<ContainerAllocator>::EAI;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__DOMAIN_ENUM__STRUCT_HPP_
