// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/Ti5WaistUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/ti5_waist_unit_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__TI5_WAIST_UNIT_ENUM__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__TI5_WAIST_UNIT_ENUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__protocol__msg__Ti5WaistUnitEnum __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__Ti5WaistUnitEnum __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ti5WaistUnitEnum_
{
  using Type = Ti5WaistUnitEnum_<ContainerAllocator>;

  explicit Ti5WaistUnitEnum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Ti5WaistUnitEnum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint32_t J1_MOTOR_NORMAL =
    16u;
  static constexpr uint32_t J1_MOTOR_ABNORMAL =
    17u;
  static constexpr uint32_t J2_MOTOR_NORMAL =
    32u;
  static constexpr uint32_t J2_MOTOR_ABNORMAL =
    33u;
  static constexpr uint32_t J3_MOTOR_NORMAL =
    48u;
  static constexpr uint32_t J3_MOTOR_ABNORMAL =
    49u;
  static constexpr uint32_t J4_MOTOR_NORMAL =
    64u;
  static constexpr uint32_t J4_MOTOR_ABNORMAL =
    65u;

  // pointer types
  using RawPtr =
    protocol::msg::Ti5WaistUnitEnum_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::Ti5WaistUnitEnum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::Ti5WaistUnitEnum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::Ti5WaistUnitEnum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::Ti5WaistUnitEnum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::Ti5WaistUnitEnum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::Ti5WaistUnitEnum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::Ti5WaistUnitEnum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::Ti5WaistUnitEnum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::Ti5WaistUnitEnum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__Ti5WaistUnitEnum
    std::shared_ptr<protocol::msg::Ti5WaistUnitEnum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__Ti5WaistUnitEnum
    std::shared_ptr<protocol::msg::Ti5WaistUnitEnum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ti5WaistUnitEnum_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ti5WaistUnitEnum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ti5WaistUnitEnum_

// alias to use template instance with default allocator
using Ti5WaistUnitEnum =
  protocol::msg::Ti5WaistUnitEnum_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Ti5WaistUnitEnum_<ContainerAllocator>::HEARTBEAT_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Ti5WaistUnitEnum_<ContainerAllocator>::J1_MOTOR_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Ti5WaistUnitEnum_<ContainerAllocator>::J1_MOTOR_ABNORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Ti5WaistUnitEnum_<ContainerAllocator>::J2_MOTOR_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Ti5WaistUnitEnum_<ContainerAllocator>::J2_MOTOR_ABNORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Ti5WaistUnitEnum_<ContainerAllocator>::J3_MOTOR_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Ti5WaistUnitEnum_<ContainerAllocator>::J3_MOTOR_ABNORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Ti5WaistUnitEnum_<ContainerAllocator>::J4_MOTOR_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Ti5WaistUnitEnum_<ContainerAllocator>::J4_MOTOR_ABNORMAL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__TI5_WAIST_UNIT_ENUM__STRUCT_HPP_
