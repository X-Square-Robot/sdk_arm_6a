// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:msg/JointWrenchTrajectoryPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/joint_wrench_trajectory_point.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_WRENCH_TRAJECTORY_POINT__STRUCT_HPP_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_WRENCH_TRAJECTORY_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'point'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.hpp"
// Member 'wrench'
#include "control_msgs/msg/detail/wrench_framed__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__msg__JointWrenchTrajectoryPoint __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__msg__JointWrenchTrajectoryPoint __declspec(deprecated)
#endif

namespace control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointWrenchTrajectoryPoint_
{
  using Type = JointWrenchTrajectoryPoint_<ContainerAllocator>;

  explicit JointWrenchTrajectoryPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init),
    wrench(_init)
  {
    (void)_init;
  }

  explicit JointWrenchTrajectoryPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init),
    wrench(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _point_type =
    trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>;
  _point_type point;
  using _wrench_type =
    control_msgs::msg::WrenchFramed_<ContainerAllocator>;
  _wrench_type wrench;

  // setters for named parameter idiom
  Type & set__point(
    const trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__wrench(
    const control_msgs::msg::WrenchFramed_<ContainerAllocator> & _arg)
  {
    this->wrench = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::msg::JointWrenchTrajectoryPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::msg::JointWrenchTrajectoryPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::msg::JointWrenchTrajectoryPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::msg::JointWrenchTrajectoryPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::JointWrenchTrajectoryPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::JointWrenchTrajectoryPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::JointWrenchTrajectoryPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::JointWrenchTrajectoryPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::msg::JointWrenchTrajectoryPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::msg::JointWrenchTrajectoryPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__msg__JointWrenchTrajectoryPoint
    std::shared_ptr<control_msgs::msg::JointWrenchTrajectoryPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__msg__JointWrenchTrajectoryPoint
    std::shared_ptr<control_msgs::msg::JointWrenchTrajectoryPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointWrenchTrajectoryPoint_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    if (this->wrench != other.wrench) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointWrenchTrajectoryPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointWrenchTrajectoryPoint_

// alias to use template instance with default allocator
using JointWrenchTrajectoryPoint =
  control_msgs::msg::JointWrenchTrajectoryPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_WRENCH_TRAJECTORY_POINT__STRUCT_HPP_
