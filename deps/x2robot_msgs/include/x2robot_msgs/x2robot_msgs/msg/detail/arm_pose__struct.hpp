// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from x2robot_msgs:msg/ArmPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/arm_pose.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__ARM_POSE__STRUCT_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__ARM_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__x2robot_msgs__msg__ArmPose __attribute__((deprecated))
#else
# define DEPRECATED__x2robot_msgs__msg__ArmPose __declspec(deprecated)
#endif

namespace x2robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmPose_
{
  using Type = ArmPose_<ContainerAllocator>;

  explicit ArmPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper = 0.0;
    }
  }

  explicit ArmPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _gripper_type =
    double;
  _gripper_type gripper;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__gripper(
    const double & _arg)
  {
    this->gripper = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    x2robot_msgs::msg::ArmPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const x2robot_msgs::msg::ArmPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<x2robot_msgs::msg::ArmPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<x2robot_msgs::msg::ArmPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::ArmPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::ArmPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::ArmPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::ArmPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<x2robot_msgs::msg::ArmPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<x2robot_msgs::msg::ArmPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__x2robot_msgs__msg__ArmPose
    std::shared_ptr<x2robot_msgs::msg::ArmPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__x2robot_msgs__msg__ArmPose
    std::shared_ptr<x2robot_msgs::msg::ArmPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmPose_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->gripper != other.gripper) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmPose_

// alias to use template instance with default allocator
using ArmPose =
  x2robot_msgs::msg::ArmPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__MSG__DETAIL__ARM_POSE__STRUCT_HPP_
