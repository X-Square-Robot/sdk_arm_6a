// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/JointMotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/joint_motor_status.hpp"


#ifndef PROTOCOL__MSG__DETAIL__JOINT_MOTOR_STATUS__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__JOINT_MOTOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'joint_motor_status'
#include "protocol/msg/detail/motor_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__JointMotorStatus __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__JointMotorStatus __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointMotorStatus_
{
  using Type = JointMotorStatus_<ContainerAllocator>;

  explicit JointMotorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->all_joints_healthy = false;
    }
  }

  explicit JointMotorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->all_joints_healthy = false;
    }
  }

  // field types and members
  using _joint_motor_status_type =
    std::vector<protocol::msg::MotorStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::MotorStatus_<ContainerAllocator>>>;
  _joint_motor_status_type joint_motor_status;
  using _all_joints_healthy_type =
    bool;
  _all_joints_healthy_type all_joints_healthy;

  // setters for named parameter idiom
  Type & set__joint_motor_status(
    const std::vector<protocol::msg::MotorStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::MotorStatus_<ContainerAllocator>>> & _arg)
  {
    this->joint_motor_status = _arg;
    return *this;
  }
  Type & set__all_joints_healthy(
    const bool & _arg)
  {
    this->all_joints_healthy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::JointMotorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::JointMotorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::JointMotorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::JointMotorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::JointMotorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::JointMotorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::JointMotorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::JointMotorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::JointMotorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::JointMotorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__JointMotorStatus
    std::shared_ptr<protocol::msg::JointMotorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__JointMotorStatus
    std::shared_ptr<protocol::msg::JointMotorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointMotorStatus_ & other) const
  {
    if (this->joint_motor_status != other.joint_motor_status) {
      return false;
    }
    if (this->all_joints_healthy != other.all_joints_healthy) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointMotorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointMotorStatus_

// alias to use template instance with default allocator
using JointMotorStatus =
  protocol::msg::JointMotorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__JOINT_MOTOR_STATUS__STRUCT_HPP_
