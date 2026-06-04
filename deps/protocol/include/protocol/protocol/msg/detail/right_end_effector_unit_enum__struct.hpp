// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/RightEndEffectorUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/right_end_effector_unit_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__RIGHT_END_EFFECTOR_UNIT_ENUM__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__RIGHT_END_EFFECTOR_UNIT_ENUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__protocol__msg__RightEndEffectorUnitEnum __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__RightEndEffectorUnitEnum __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RightEndEffectorUnitEnum_
{
  using Type = RightEndEffectorUnitEnum_<ContainerAllocator>;

  explicit RightEndEffectorUnitEnum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit RightEndEffectorUnitEnum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint32_t J1_OVERLOAD =
    23u;
  static constexpr uint32_t J1_MOTOR_NORMAL =
    16u;
  static constexpr uint32_t J1_OVER_VOLTAGE =
    17u;
  static constexpr uint32_t J1_UNDER_VOLTAGE =
    18u;
  static constexpr uint32_t J1_OVER_CURRENT =
    19u;
  static constexpr uint32_t J1_MOS_OVER_TEMP =
    20u;
  static constexpr uint32_t J1_MOTOR_OVER_HEAT =
    21u;
  static constexpr uint32_t J1_COMMUNICATION_LOST =
    22u;

  // pointer types
  using RawPtr =
    protocol::msg::RightEndEffectorUnitEnum_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::RightEndEffectorUnitEnum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::RightEndEffectorUnitEnum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::RightEndEffectorUnitEnum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::RightEndEffectorUnitEnum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::RightEndEffectorUnitEnum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::RightEndEffectorUnitEnum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::RightEndEffectorUnitEnum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::RightEndEffectorUnitEnum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::RightEndEffectorUnitEnum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__RightEndEffectorUnitEnum
    std::shared_ptr<protocol::msg::RightEndEffectorUnitEnum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__RightEndEffectorUnitEnum
    std::shared_ptr<protocol::msg::RightEndEffectorUnitEnum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RightEndEffectorUnitEnum_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const RightEndEffectorUnitEnum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RightEndEffectorUnitEnum_

// alias to use template instance with default allocator
using RightEndEffectorUnitEnum =
  protocol::msg::RightEndEffectorUnitEnum_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightEndEffectorUnitEnum_<ContainerAllocator>::J1_OVERLOAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightEndEffectorUnitEnum_<ContainerAllocator>::J1_MOTOR_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightEndEffectorUnitEnum_<ContainerAllocator>::J1_OVER_VOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightEndEffectorUnitEnum_<ContainerAllocator>::J1_UNDER_VOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightEndEffectorUnitEnum_<ContainerAllocator>::J1_OVER_CURRENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightEndEffectorUnitEnum_<ContainerAllocator>::J1_MOS_OVER_TEMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightEndEffectorUnitEnum_<ContainerAllocator>::J1_MOTOR_OVER_HEAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightEndEffectorUnitEnum_<ContainerAllocator>::J1_COMMUNICATION_LOST;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__RIGHT_END_EFFECTOR_UNIT_ENUM__STRUCT_HPP_
