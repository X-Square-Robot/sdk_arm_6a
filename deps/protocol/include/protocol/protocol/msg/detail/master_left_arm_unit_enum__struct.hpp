// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/MasterLeftArmUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/master_left_arm_unit_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__MASTER_LEFT_ARM_UNIT_ENUM__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__MASTER_LEFT_ARM_UNIT_ENUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__protocol__msg__MasterLeftArmUnitEnum __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__MasterLeftArmUnitEnum __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MasterLeftArmUnitEnum_
{
  using Type = MasterLeftArmUnitEnum_<ContainerAllocator>;

  explicit MasterLeftArmUnitEnum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit MasterLeftArmUnitEnum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint32_t J1_OVERLOAD =
    23u;
  static constexpr uint32_t J2_MOTOR_NORMAL =
    32u;
  static constexpr uint32_t J2_OVER_VOLTAGE =
    33u;
  static constexpr uint32_t J2_UNDER_VOLTAGE =
    34u;
  static constexpr uint32_t J2_OVER_CURRENT =
    35u;
  static constexpr uint32_t J2_MOS_OVER_TEMP =
    36u;
  static constexpr uint32_t J2_MOTOR_OVER_HEAT =
    37u;
  static constexpr uint32_t J2_COMMUNICATION_LOST =
    38u;
  static constexpr uint32_t J2_OVERLOAD =
    39u;
  static constexpr uint32_t J3_MOTOR_NORMAL =
    48u;
  static constexpr uint32_t J3_OVER_VOLTAGE =
    49u;
  static constexpr uint32_t J3_UNDER_VOLTAGE =
    50u;
  static constexpr uint32_t J3_OVER_CURRENT =
    51u;
  static constexpr uint32_t J3_MOS_OVER_TEMP =
    52u;
  static constexpr uint32_t J3_MOTOR_OVER_HEAT =
    53u;
  static constexpr uint32_t J3_COMMUNICATION_LOST =
    54u;
  static constexpr uint32_t J3_OVERLOAD =
    55u;
  static constexpr uint32_t J4_MOTOR_NORMAL =
    64u;
  static constexpr uint32_t J4_OVER_VOLTAGE =
    65u;
  static constexpr uint32_t J4_UNDER_VOLTAGE =
    66u;
  static constexpr uint32_t J4_OVER_CURRENT =
    67u;
  static constexpr uint32_t J4_MOS_OVER_TEMP =
    68u;
  static constexpr uint32_t J4_MOTOR_OVER_HEAT =
    69u;
  static constexpr uint32_t J4_COMMUNICATION_LOST =
    70u;
  static constexpr uint32_t J4_OVERLOAD =
    71u;
  static constexpr uint32_t J5_MOTOR_NORMAL =
    80u;
  static constexpr uint32_t J5_OVER_VOLTAGE =
    81u;
  static constexpr uint32_t J5_UNDER_VOLTAGE =
    82u;
  static constexpr uint32_t J5_OVER_CURRENT =
    83u;
  static constexpr uint32_t J5_MOS_OVER_TEMP =
    84u;
  static constexpr uint32_t J5_MOTOR_OVER_HEAT =
    85u;
  static constexpr uint32_t J5_COMMUNICATION_LOST =
    86u;
  static constexpr uint32_t J5_OVERLOAD =
    87u;
  static constexpr uint32_t J6_MOTOR_NORMAL =
    96u;
  static constexpr uint32_t J6_OVER_VOLTAGE =
    97u;
  static constexpr uint32_t J6_UNDER_VOLTAGE =
    98u;
  static constexpr uint32_t J6_OVER_CURRENT =
    99u;
  static constexpr uint32_t J6_MOS_OVER_TEMP =
    100u;
  static constexpr uint32_t J6_MOTOR_OVER_HEAT =
    101u;
  static constexpr uint32_t J6_COMMUNICATION_LOST =
    102u;
  static constexpr uint32_t J6_OVERLOAD =
    103u;

  // pointer types
  using RawPtr =
    protocol::msg::MasterLeftArmUnitEnum_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::MasterLeftArmUnitEnum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::MasterLeftArmUnitEnum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::MasterLeftArmUnitEnum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MasterLeftArmUnitEnum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MasterLeftArmUnitEnum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::MasterLeftArmUnitEnum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::MasterLeftArmUnitEnum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::MasterLeftArmUnitEnum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::MasterLeftArmUnitEnum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__MasterLeftArmUnitEnum
    std::shared_ptr<protocol::msg::MasterLeftArmUnitEnum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__MasterLeftArmUnitEnum
    std::shared_ptr<protocol::msg::MasterLeftArmUnitEnum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MasterLeftArmUnitEnum_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const MasterLeftArmUnitEnum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MasterLeftArmUnitEnum_

// alias to use template instance with default allocator
using MasterLeftArmUnitEnum =
  protocol::msg::MasterLeftArmUnitEnum_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::HEARTBEAT_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J1_MOTOR_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J1_OVER_VOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J1_UNDER_VOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J1_OVER_CURRENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J1_MOS_OVER_TEMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J1_MOTOR_OVER_HEAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J1_COMMUNICATION_LOST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J1_OVERLOAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J2_MOTOR_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J2_OVER_VOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J2_UNDER_VOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J2_OVER_CURRENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J2_MOS_OVER_TEMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J2_MOTOR_OVER_HEAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J2_COMMUNICATION_LOST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J2_OVERLOAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J3_MOTOR_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J3_OVER_VOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J3_UNDER_VOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J3_OVER_CURRENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J3_MOS_OVER_TEMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J3_MOTOR_OVER_HEAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J3_COMMUNICATION_LOST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J3_OVERLOAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J4_MOTOR_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J4_OVER_VOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J4_UNDER_VOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J4_OVER_CURRENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J4_MOS_OVER_TEMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J4_MOTOR_OVER_HEAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J4_COMMUNICATION_LOST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J4_OVERLOAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J5_MOTOR_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J5_OVER_VOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J5_UNDER_VOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J5_OVER_CURRENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J5_MOS_OVER_TEMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J5_MOTOR_OVER_HEAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J5_COMMUNICATION_LOST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J5_OVERLOAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J6_MOTOR_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J6_OVER_VOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J6_UNDER_VOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J6_OVER_CURRENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J6_MOS_OVER_TEMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J6_MOTOR_OVER_HEAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J6_COMMUNICATION_LOST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MasterLeftArmUnitEnum_<ContainerAllocator>::J6_OVERLOAD;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MASTER_LEFT_ARM_UNIT_ENUM__STRUCT_HPP_
