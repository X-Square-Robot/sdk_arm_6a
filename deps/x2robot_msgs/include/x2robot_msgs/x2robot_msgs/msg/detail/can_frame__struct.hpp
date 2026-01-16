// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from x2robot_msgs:msg/CanFrame.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/can_frame.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME__STRUCT_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__x2robot_msgs__msg__CanFrame __attribute__((deprecated))
#else
# define DEPRECATED__x2robot_msgs__msg__CanFrame __declspec(deprecated)
#endif

namespace x2robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CanFrame_
{
  using Type = CanFrame_<ContainerAllocator>;

  explicit CanFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = 0ul;
      this->dlc = 0;
      std::fill<typename std::array<uint8_t, 64>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
      this->err = 0;
      this->rtr = 0;
      this->eff = 0;
      this->fd = 0;
      this->brs = 0;
    }
  }

  explicit CanFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = 0ul;
      this->dlc = 0;
      std::fill<typename std::array<uint8_t, 64>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
      this->err = 0;
      this->rtr = 0;
      this->eff = 0;
      this->fd = 0;
      this->brs = 0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _can_id_type =
    uint32_t;
  _can_id_type can_id;
  using _dlc_type =
    uint8_t;
  _dlc_type dlc;
  using _data_type =
    std::array<uint8_t, 64>;
  _data_type data;
  using _err_type =
    uint8_t;
  _err_type err;
  using _rtr_type =
    uint8_t;
  _rtr_type rtr;
  using _eff_type =
    uint8_t;
  _eff_type eff;
  using _fd_type =
    uint8_t;
  _fd_type fd;
  using _brs_type =
    uint8_t;
  _brs_type brs;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__can_id(
    const uint32_t & _arg)
  {
    this->can_id = _arg;
    return *this;
  }
  Type & set__dlc(
    const uint8_t & _arg)
  {
    this->dlc = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<uint8_t, 64> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__err(
    const uint8_t & _arg)
  {
    this->err = _arg;
    return *this;
  }
  Type & set__rtr(
    const uint8_t & _arg)
  {
    this->rtr = _arg;
    return *this;
  }
  Type & set__eff(
    const uint8_t & _arg)
  {
    this->eff = _arg;
    return *this;
  }
  Type & set__fd(
    const uint8_t & _arg)
  {
    this->fd = _arg;
    return *this;
  }
  Type & set__brs(
    const uint8_t & _arg)
  {
    this->brs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    x2robot_msgs::msg::CanFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const x2robot_msgs::msg::CanFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<x2robot_msgs::msg::CanFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<x2robot_msgs::msg::CanFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::CanFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::CanFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::CanFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::CanFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<x2robot_msgs::msg::CanFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<x2robot_msgs::msg::CanFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__x2robot_msgs__msg__CanFrame
    std::shared_ptr<x2robot_msgs::msg::CanFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__x2robot_msgs__msg__CanFrame
    std::shared_ptr<x2robot_msgs::msg::CanFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanFrame_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->can_id != other.can_id) {
      return false;
    }
    if (this->dlc != other.dlc) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->err != other.err) {
      return false;
    }
    if (this->rtr != other.rtr) {
      return false;
    }
    if (this->eff != other.eff) {
      return false;
    }
    if (this->fd != other.fd) {
      return false;
    }
    if (this->brs != other.brs) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanFrame_

// alias to use template instance with default allocator
using CanFrame =
  x2robot_msgs::msg::CanFrame_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME__STRUCT_HPP_
