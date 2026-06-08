// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from x2robot_msgs:msg/Joystick.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/joystick.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__JOYSTICK__STRUCT_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__JOYSTICK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__x2robot_msgs__msg__Joystick __attribute__((deprecated))
#else
# define DEPRECATED__x2robot_msgs__msg__Joystick __declspec(deprecated)
#endif

namespace x2robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Joystick_
{
  using Type = Joystick_<ContainerAllocator>;

  explicit Joystick_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joystick_x = 0.0;
      this->joystick_y = 0.0;
      this->trigger = 0.0;
      this->joy_button = false;
      this->sw1 = false;
      this->sw2 = false;
      this->sw3 = false;
      this->sw4 = false;
    }
  }

  explicit Joystick_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joystick_x = 0.0;
      this->joystick_y = 0.0;
      this->trigger = 0.0;
      this->joy_button = false;
      this->sw1 = false;
      this->sw2 = false;
      this->sw3 = false;
      this->sw4 = false;
    }
  }

  // field types and members
  using _joystick_x_type =
    double;
  _joystick_x_type joystick_x;
  using _joystick_y_type =
    double;
  _joystick_y_type joystick_y;
  using _trigger_type =
    double;
  _trigger_type trigger;
  using _joy_button_type =
    bool;
  _joy_button_type joy_button;
  using _sw1_type =
    bool;
  _sw1_type sw1;
  using _sw2_type =
    bool;
  _sw2_type sw2;
  using _sw3_type =
    bool;
  _sw3_type sw3;
  using _sw4_type =
    bool;
  _sw4_type sw4;

  // setters for named parameter idiom
  Type & set__joystick_x(
    const double & _arg)
  {
    this->joystick_x = _arg;
    return *this;
  }
  Type & set__joystick_y(
    const double & _arg)
  {
    this->joystick_y = _arg;
    return *this;
  }
  Type & set__trigger(
    const double & _arg)
  {
    this->trigger = _arg;
    return *this;
  }
  Type & set__joy_button(
    const bool & _arg)
  {
    this->joy_button = _arg;
    return *this;
  }
  Type & set__sw1(
    const bool & _arg)
  {
    this->sw1 = _arg;
    return *this;
  }
  Type & set__sw2(
    const bool & _arg)
  {
    this->sw2 = _arg;
    return *this;
  }
  Type & set__sw3(
    const bool & _arg)
  {
    this->sw3 = _arg;
    return *this;
  }
  Type & set__sw4(
    const bool & _arg)
  {
    this->sw4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    x2robot_msgs::msg::Joystick_<ContainerAllocator> *;
  using ConstRawPtr =
    const x2robot_msgs::msg::Joystick_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<x2robot_msgs::msg::Joystick_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<x2robot_msgs::msg::Joystick_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::Joystick_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::Joystick_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::Joystick_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::Joystick_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<x2robot_msgs::msg::Joystick_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<x2robot_msgs::msg::Joystick_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__x2robot_msgs__msg__Joystick
    std::shared_ptr<x2robot_msgs::msg::Joystick_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__x2robot_msgs__msg__Joystick
    std::shared_ptr<x2robot_msgs::msg::Joystick_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Joystick_ & other) const
  {
    if (this->joystick_x != other.joystick_x) {
      return false;
    }
    if (this->joystick_y != other.joystick_y) {
      return false;
    }
    if (this->trigger != other.trigger) {
      return false;
    }
    if (this->joy_button != other.joy_button) {
      return false;
    }
    if (this->sw1 != other.sw1) {
      return false;
    }
    if (this->sw2 != other.sw2) {
      return false;
    }
    if (this->sw3 != other.sw3) {
      return false;
    }
    if (this->sw4 != other.sw4) {
      return false;
    }
    return true;
  }
  bool operator!=(const Joystick_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Joystick_

// alias to use template instance with default allocator
using Joystick =
  x2robot_msgs::msg::Joystick_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__MSG__DETAIL__JOYSTICK__STRUCT_HPP_
