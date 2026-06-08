// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/RightRmGripperErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/right_rm_gripper_error_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__RIGHT_RM_GRIPPER_ERROR_ENUM__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__RIGHT_RM_GRIPPER_ERROR_ENUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__protocol__msg__RightRmGripperErrorEnum __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__RightRmGripperErrorEnum __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RightRmGripperErrorEnum_
{
  using Type = RightRmGripperErrorEnum_<ContainerAllocator>;

  explicit RightRmGripperErrorEnum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit RightRmGripperErrorEnum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint32_t OVER_VOLTAGE =
    17u;
  static constexpr uint32_t UNDER_VOLTAGE =
    18u;
  static constexpr uint32_t OVER_CURRENT =
    19u;
  static constexpr uint32_t MOS_OVER_TEMP =
    20u;
  static constexpr uint32_t MOTOR_OVER_HEAT =
    21u;
  static constexpr uint32_t COMMUNICATION_LOST =
    22u;
  static constexpr uint32_t OVERLOAD =
    23u;
  static constexpr uint32_t PHASE_LOSS =
    24u;
  static constexpr uint32_t MOTOR_SHORT_CIRCUIT =
    25u;
  static constexpr uint32_t MOTOR_STALL =
    26u;
  static constexpr uint32_t RESET_FAULT =
    27u;

  // pointer types
  using RawPtr =
    protocol::msg::RightRmGripperErrorEnum_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::RightRmGripperErrorEnum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::RightRmGripperErrorEnum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::RightRmGripperErrorEnum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::RightRmGripperErrorEnum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::RightRmGripperErrorEnum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::RightRmGripperErrorEnum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::RightRmGripperErrorEnum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::RightRmGripperErrorEnum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::RightRmGripperErrorEnum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__RightRmGripperErrorEnum
    std::shared_ptr<protocol::msg::RightRmGripperErrorEnum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__RightRmGripperErrorEnum
    std::shared_ptr<protocol::msg::RightRmGripperErrorEnum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RightRmGripperErrorEnum_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const RightRmGripperErrorEnum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RightRmGripperErrorEnum_

// alias to use template instance with default allocator
using RightRmGripperErrorEnum =
  protocol::msg::RightRmGripperErrorEnum_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightRmGripperErrorEnum_<ContainerAllocator>::HEARTBEAT_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightRmGripperErrorEnum_<ContainerAllocator>::J1_MOTOR_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightRmGripperErrorEnum_<ContainerAllocator>::OVER_VOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightRmGripperErrorEnum_<ContainerAllocator>::UNDER_VOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightRmGripperErrorEnum_<ContainerAllocator>::OVER_CURRENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightRmGripperErrorEnum_<ContainerAllocator>::MOS_OVER_TEMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightRmGripperErrorEnum_<ContainerAllocator>::MOTOR_OVER_HEAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightRmGripperErrorEnum_<ContainerAllocator>::COMMUNICATION_LOST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightRmGripperErrorEnum_<ContainerAllocator>::OVERLOAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightRmGripperErrorEnum_<ContainerAllocator>::PHASE_LOSS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightRmGripperErrorEnum_<ContainerAllocator>::MOTOR_SHORT_CIRCUIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightRmGripperErrorEnum_<ContainerAllocator>::MOTOR_STALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RightRmGripperErrorEnum_<ContainerAllocator>::RESET_FAULT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__RIGHT_RM_GRIPPER_ERROR_ENUM__STRUCT_HPP_
