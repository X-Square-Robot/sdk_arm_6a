// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/HalUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/hal_unit_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__HAL_UNIT_ENUM__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__HAL_UNIT_ENUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__protocol__msg__HalUnitEnum __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__HalUnitEnum __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HalUnitEnum_
{
  using Type = HalUnitEnum_<ContainerAllocator>;

  explicit HalUnitEnum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit HalUnitEnum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t CHASSIS =
    2u;
  static constexpr uint8_t BODY =
    3u;
  static constexpr uint8_t HEAD =
    4u;
  static constexpr uint8_t LIDAR =
    5u;
  static constexpr uint8_t GRIPPER_LEFT =
    6u;
  static constexpr uint8_t GRIPPER_RIGHT =
    7u;
  static constexpr uint8_t HEAD_MOUNT =
    8u;
  static constexpr uint32_t HEARTBEAT_TIMEOUT =
    1u;
  static constexpr uint32_t CHASSIS_CONN_FAIL =
    17u;
  static constexpr uint32_t BODY_CONN_FAIL =
    18u;
  static constexpr uint32_t HEAD_CONN_FAIL =
    19u;
  static constexpr uint32_t POWER_CONN_FAIL =
    20u;
  static constexpr uint32_t PARSE_HEAD_VERSION_FAIL =
    32u;
  static constexpr uint32_t PARSE_HEAD_JOINT_FAIL =
    33u;
  static constexpr uint32_t PARSE_HEAD_IMU_FAIL =
    34u;
  static constexpr uint32_t PARSE_HEAD_LOG_FAIL =
    35u;
  static constexpr uint32_t PARSE_HEAD_POWER_FAIL =
    36u;
  static constexpr uint32_t PARSE_BODY_VERSION_FAIL =
    37u;
  static constexpr uint32_t PARSE_BODY_HEAD_JOINT_FAIL =
    38u;
  static constexpr uint32_t PARSE_BODY_IMU_FAIL =
    39u;
  static constexpr uint32_t PARSE_BODY_LOG_FAIL =
    40u;
  static constexpr uint32_t PARSE_BODY_POWER_FAIL =
    41u;
  static constexpr uint32_t PARSE_CHASSIS_VERSION_FAIL =
    42u;
  static constexpr uint32_t PARSE_CHASSIS_POWER_FAIL =
    43u;
  static constexpr uint32_t PARSE_CHASSIS_TOF_FAIL =
    44u;
  static constexpr uint32_t PARSE_CHASSIS_ULTRASONIC_FAIL =
    45u;
  static constexpr uint32_t PARSE_CHASSIS_IMU_FAIL =
    46u;
  static constexpr uint32_t PARSE_CHASSIS_LOG_FAIL =
    47u;
  static constexpr uint32_t PARSE_CHASSIS_ROBOT_STATION_INFO_FAIL =
    48u;
  static constexpr uint32_t PARSE_CHASSIS_ODOM_FAIL =
    49u;
  static constexpr uint32_t PARSE_BODY_TOF_FAIL =
    50u;
  static constexpr uint32_t PARSE_BODY_ULTRASONIC_FAIL =
    51u;

  // pointer types
  using RawPtr =
    protocol::msg::HalUnitEnum_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::HalUnitEnum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::HalUnitEnum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::HalUnitEnum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::HalUnitEnum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::HalUnitEnum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::HalUnitEnum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::HalUnitEnum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::HalUnitEnum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::HalUnitEnum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__HalUnitEnum
    std::shared_ptr<protocol::msg::HalUnitEnum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__HalUnitEnum
    std::shared_ptr<protocol::msg::HalUnitEnum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HalUnitEnum_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const HalUnitEnum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HalUnitEnum_

// alias to use template instance with default allocator
using HalUnitEnum =
  protocol::msg::HalUnitEnum_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HalUnitEnum_<ContainerAllocator>::HAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HalUnitEnum_<ContainerAllocator>::CHASSIS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HalUnitEnum_<ContainerAllocator>::BODY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HalUnitEnum_<ContainerAllocator>::HEAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HalUnitEnum_<ContainerAllocator>::LIDAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HalUnitEnum_<ContainerAllocator>::GRIPPER_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HalUnitEnum_<ContainerAllocator>::GRIPPER_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HalUnitEnum_<ContainerAllocator>::HEAD_MOUNT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::HEARTBEAT_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::CHASSIS_CONN_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::BODY_CONN_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::HEAD_CONN_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::POWER_CONN_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_HEAD_VERSION_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_HEAD_JOINT_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_HEAD_IMU_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_HEAD_LOG_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_HEAD_POWER_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_BODY_VERSION_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_BODY_HEAD_JOINT_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_BODY_IMU_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_BODY_LOG_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_BODY_POWER_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_CHASSIS_VERSION_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_CHASSIS_POWER_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_CHASSIS_TOF_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_CHASSIS_ULTRASONIC_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_CHASSIS_IMU_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_CHASSIS_LOG_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_CHASSIS_ROBOT_STATION_INFO_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_CHASSIS_ODOM_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_BODY_TOF_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t HalUnitEnum_<ContainerAllocator>::PARSE_BODY_ULTRASONIC_FAIL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__HAL_UNIT_ENUM__STRUCT_HPP_
