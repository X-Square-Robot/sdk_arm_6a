// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from x2robot_msgs:msg/RobotArmState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/robot_arm_state.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__ROBOT_ARM_STATE__STRUCT_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__ROBOT_ARM_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__x2robot_msgs__msg__RobotArmState __attribute__((deprecated))
#else
# define DEPRECATED__x2robot_msgs__msg__RobotArmState __declspec(deprecated)
#endif

namespace x2robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotArmState_
{
  using Type = RobotArmState_<ContainerAllocator>;

  explicit RobotArmState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_state = 0;
      this->current_control_mode = 0;
      this->error_msg = "";
    }
  }

  explicit RobotArmState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    error_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_state = 0;
      this->current_control_mode = 0;
      this->error_msg = "";
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _robot_state_type =
    uint8_t;
  _robot_state_type robot_state;
  using _current_control_mode_type =
    uint8_t;
  _current_control_mode_type current_control_mode;
  using _error_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_msg_type error_msg;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__robot_state(
    const uint8_t & _arg)
  {
    this->robot_state = _arg;
    return *this;
  }
  Type & set__current_control_mode(
    const uint8_t & _arg)
  {
    this->current_control_mode = _arg;
    return *this;
  }
  Type & set__error_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_msg = _arg;
    return *this;
  }

  // constant declarations
  // guard against 'NO_ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(NO_ERROR)
#    pragma push_macro("NO_ERROR")
#    undef NO_ERROR
#  endif
#endif
  static constexpr uint8_t NO_ERROR =
    0u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("NO_ERROR")
#endif
  static constexpr uint8_t READY =
    1u;
  static constexpr uint8_t EMCY_STOPPED =
    2u;
  static constexpr uint8_t POWER_OFF =
    3u;
  static constexpr uint8_t NOT_ENABLED =
    4u;
  static constexpr uint8_t MOTOR_ERROR =
    5u;
  static constexpr uint8_t COMM_BUS_ERROR =
    6u;
  static constexpr uint8_t CYCLIC_POSITION_MODE =
    8u;
  static constexpr uint8_t FORCE_MODE_TORQUE_SENSOR =
    15u;

  // pointer types
  using RawPtr =
    x2robot_msgs::msg::RobotArmState_<ContainerAllocator> *;
  using ConstRawPtr =
    const x2robot_msgs::msg::RobotArmState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<x2robot_msgs::msg::RobotArmState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<x2robot_msgs::msg::RobotArmState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::RobotArmState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::RobotArmState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::RobotArmState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::RobotArmState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<x2robot_msgs::msg::RobotArmState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<x2robot_msgs::msg::RobotArmState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__x2robot_msgs__msg__RobotArmState
    std::shared_ptr<x2robot_msgs::msg::RobotArmState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__x2robot_msgs__msg__RobotArmState
    std::shared_ptr<x2robot_msgs::msg::RobotArmState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotArmState_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->robot_state != other.robot_state) {
      return false;
    }
    if (this->current_control_mode != other.current_control_mode) {
      return false;
    }
    if (this->error_msg != other.error_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotArmState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotArmState_

// alias to use template instance with default allocator
using RobotArmState =
  x2robot_msgs::msg::RobotArmState_<std::allocator<void>>;

// constant definitions
// guard against 'NO_ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(NO_ERROR)
#    pragma push_macro("NO_ERROR")
#    undef NO_ERROR
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotArmState_<ContainerAllocator>::NO_ERROR;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("NO_ERROR")
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotArmState_<ContainerAllocator>::READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotArmState_<ContainerAllocator>::EMCY_STOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotArmState_<ContainerAllocator>::POWER_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotArmState_<ContainerAllocator>::NOT_ENABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotArmState_<ContainerAllocator>::MOTOR_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotArmState_<ContainerAllocator>::COMM_BUS_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotArmState_<ContainerAllocator>::CYCLIC_POSITION_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotArmState_<ContainerAllocator>::FORCE_MODE_TORQUE_SENSOR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__MSG__DETAIL__ROBOT_ARM_STATE__STRUCT_HPP_
