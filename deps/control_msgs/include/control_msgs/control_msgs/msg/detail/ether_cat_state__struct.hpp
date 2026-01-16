// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:msg/EtherCATState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/ether_cat_state.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__ETHER_CAT_STATE__STRUCT_HPP_
#define CONTROL_MSGS__MSG__DETAIL__ETHER_CAT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__control_msgs__msg__EtherCATState __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__msg__EtherCATState __declspec(deprecated)
#endif

namespace control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EtherCATState_
{
  using Type = EtherCATState_<ContainerAllocator>;

  explicit EtherCATState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->slave_position = 0;
      this->vendor_id = "";
      this->product_code = "";
      this->al_state = 0;
      this->has_error = false;
      this->al_status_code = 0;
    }
  }

  explicit EtherCATState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vendor_id(_alloc),
    product_code(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->slave_position = 0;
      this->vendor_id = "";
      this->product_code = "";
      this->al_state = 0;
      this->has_error = false;
      this->al_status_code = 0;
    }
  }

  // field types and members
  using _slave_position_type =
    uint16_t;
  _slave_position_type slave_position;
  using _vendor_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _vendor_id_type vendor_id;
  using _product_code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _product_code_type product_code;
  using _al_state_type =
    uint8_t;
  _al_state_type al_state;
  using _has_error_type =
    bool;
  _has_error_type has_error;
  using _al_status_code_type =
    uint16_t;
  _al_status_code_type al_status_code;

  // setters for named parameter idiom
  Type & set__slave_position(
    const uint16_t & _arg)
  {
    this->slave_position = _arg;
    return *this;
  }
  Type & set__vendor_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->vendor_id = _arg;
    return *this;
  }
  Type & set__product_code(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->product_code = _arg;
    return *this;
  }
  Type & set__al_state(
    const uint8_t & _arg)
  {
    this->al_state = _arg;
    return *this;
  }
  Type & set__has_error(
    const bool & _arg)
  {
    this->has_error = _arg;
    return *this;
  }
  Type & set__al_status_code(
    const uint16_t & _arg)
  {
    this->al_status_code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t AL_STATE_INIT =
    1u;
  static constexpr uint8_t AL_STATE_PREOP =
    2u;
  static constexpr uint8_t AL_STATE_BOOTSTRAP =
    3u;
  static constexpr uint8_t AL_STATE_SAFEOP =
    4u;
  static constexpr uint8_t AL_STATE_OP =
    8u;

  // pointer types
  using RawPtr =
    control_msgs::msg::EtherCATState_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::msg::EtherCATState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::msg::EtherCATState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::msg::EtherCATState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::EtherCATState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::EtherCATState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::EtherCATState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::EtherCATState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::msg::EtherCATState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::msg::EtherCATState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__msg__EtherCATState
    std::shared_ptr<control_msgs::msg::EtherCATState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__msg__EtherCATState
    std::shared_ptr<control_msgs::msg::EtherCATState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EtherCATState_ & other) const
  {
    if (this->slave_position != other.slave_position) {
      return false;
    }
    if (this->vendor_id != other.vendor_id) {
      return false;
    }
    if (this->product_code != other.product_code) {
      return false;
    }
    if (this->al_state != other.al_state) {
      return false;
    }
    if (this->has_error != other.has_error) {
      return false;
    }
    if (this->al_status_code != other.al_status_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const EtherCATState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EtherCATState_

// alias to use template instance with default allocator
using EtherCATState =
  control_msgs::msg::EtherCATState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EtherCATState_<ContainerAllocator>::AL_STATE_INIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EtherCATState_<ContainerAllocator>::AL_STATE_PREOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EtherCATState_<ContainerAllocator>::AL_STATE_BOOTSTRAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EtherCATState_<ContainerAllocator>::AL_STATE_SAFEOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EtherCATState_<ContainerAllocator>::AL_STATE_OP;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__ETHER_CAT_STATE__STRUCT_HPP_
