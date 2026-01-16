// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:msg/SteeringControllerCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/steering_controller_command.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__STEERING_CONTROLLER_COMMAND__STRUCT_HPP_
#define CONTROL_MSGS__MSG__DETAIL__STEERING_CONTROLLER_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__msg__SteeringControllerCommand __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__msg__SteeringControllerCommand __declspec(deprecated)
#endif

namespace control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SteeringControllerCommand_
{
  using Type = SteeringControllerCommand_<ContainerAllocator>;

  explicit SteeringControllerCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steering_angle = 0.0;
      this->linear_velocity = 0.0;
    }
  }

  explicit SteeringControllerCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steering_angle = 0.0;
      this->linear_velocity = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _steering_angle_type =
    double;
  _steering_angle_type steering_angle;
  using _linear_velocity_type =
    double;
  _linear_velocity_type linear_velocity;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__steering_angle(
    const double & _arg)
  {
    this->steering_angle = _arg;
    return *this;
  }
  Type & set__linear_velocity(
    const double & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::msg::SteeringControllerCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::msg::SteeringControllerCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::msg::SteeringControllerCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::msg::SteeringControllerCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::SteeringControllerCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::SteeringControllerCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::SteeringControllerCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::SteeringControllerCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::msg::SteeringControllerCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::msg::SteeringControllerCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__msg__SteeringControllerCommand
    std::shared_ptr<control_msgs::msg::SteeringControllerCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__msg__SteeringControllerCommand
    std::shared_ptr<control_msgs::msg::SteeringControllerCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SteeringControllerCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->steering_angle != other.steering_angle) {
      return false;
    }
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const SteeringControllerCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SteeringControllerCommand_

// alias to use template instance with default allocator
using SteeringControllerCommand =
  control_msgs::msg::SteeringControllerCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__STEERING_CONTROLLER_COMMAND__STRUCT_HPP_
