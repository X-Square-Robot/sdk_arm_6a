// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:msg/CANopenState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/ca_nopen_state.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__CA_NOPEN_STATE__STRUCT_HPP_
#define CONTROL_MSGS__MSG__DETAIL__CA_NOPEN_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__control_msgs__msg__CANopenState __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__msg__CANopenState __declspec(deprecated)
#endif

namespace control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CANopenState_
{
  using Type = CANopenState_<ContainerAllocator>;

  explicit CANopenState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0;
      this->nmt_state = 0;
      this->dsp_402_state = 0;
      this->last_emcy_code = 0ul;
    }
  }

  explicit CANopenState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0;
      this->nmt_state = 0;
      this->dsp_402_state = 0;
      this->last_emcy_code = 0ul;
    }
  }

  // field types and members
  using _node_id_type =
    uint8_t;
  _node_id_type node_id;
  using _nmt_state_type =
    uint8_t;
  _nmt_state_type nmt_state;
  using _dsp_402_state_type =
    uint8_t;
  _dsp_402_state_type dsp_402_state;
  using _last_emcy_code_type =
    uint32_t;
  _last_emcy_code_type last_emcy_code;

  // setters for named parameter idiom
  Type & set__node_id(
    const uint8_t & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__nmt_state(
    const uint8_t & _arg)
  {
    this->nmt_state = _arg;
    return *this;
  }
  Type & set__dsp_402_state(
    const uint8_t & _arg)
  {
    this->dsp_402_state = _arg;
    return *this;
  }
  Type & set__last_emcy_code(
    const uint32_t & _arg)
  {
    this->last_emcy_code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NMT_INITIALISING =
    0u;
  static constexpr uint8_t NMT_PRE_OPERATIONAL =
    127u;
  static constexpr uint8_t NMT_OPERATIONAL =
    5u;
  static constexpr uint8_t NMT_STOPPED =
    4u;
  static constexpr uint8_t DSP402_NOT_READY_TO_SWITCH_ON =
    0u;
  static constexpr uint8_t DSP402_SWITCH_ON_DISABLED =
    1u;
  static constexpr uint8_t DSP402_READY_TO_SWITCH_ON =
    2u;
  static constexpr uint8_t DSP402_SWITCHED_ON =
    3u;
  static constexpr uint8_t DSP402_OPERATION_ENABLED =
    4u;
  static constexpr uint8_t DSP402_QUICK_STOP_ACTIVE =
    5u;
  static constexpr uint8_t DSP402_FAULT_REACTION_ACTIVE =
    6u;
  static constexpr uint8_t DSP402_FAULT =
    7u;

  // pointer types
  using RawPtr =
    control_msgs::msg::CANopenState_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::msg::CANopenState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::msg::CANopenState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::msg::CANopenState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::CANopenState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::CANopenState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::CANopenState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::CANopenState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::msg::CANopenState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::msg::CANopenState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__msg__CANopenState
    std::shared_ptr<control_msgs::msg::CANopenState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__msg__CANopenState
    std::shared_ptr<control_msgs::msg::CANopenState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CANopenState_ & other) const
  {
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->nmt_state != other.nmt_state) {
      return false;
    }
    if (this->dsp_402_state != other.dsp_402_state) {
      return false;
    }
    if (this->last_emcy_code != other.last_emcy_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const CANopenState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CANopenState_

// alias to use template instance with default allocator
using CANopenState =
  control_msgs::msg::CANopenState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CANopenState_<ContainerAllocator>::NMT_INITIALISING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CANopenState_<ContainerAllocator>::NMT_PRE_OPERATIONAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CANopenState_<ContainerAllocator>::NMT_OPERATIONAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CANopenState_<ContainerAllocator>::NMT_STOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CANopenState_<ContainerAllocator>::DSP402_NOT_READY_TO_SWITCH_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CANopenState_<ContainerAllocator>::DSP402_SWITCH_ON_DISABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CANopenState_<ContainerAllocator>::DSP402_READY_TO_SWITCH_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CANopenState_<ContainerAllocator>::DSP402_SWITCHED_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CANopenState_<ContainerAllocator>::DSP402_OPERATION_ENABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CANopenState_<ContainerAllocator>::DSP402_QUICK_STOP_ACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CANopenState_<ContainerAllocator>::DSP402_FAULT_REACTION_ACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CANopenState_<ContainerAllocator>::DSP402_FAULT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__CA_NOPEN_STATE__STRUCT_HPP_
