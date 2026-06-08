// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from x2robot_msgs:msg/CanFrameBatch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/can_frame_batch.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME_BATCH__STRUCT_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME_BATCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'frames'
#include "x2robot_msgs/msg/detail/can_frame__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__x2robot_msgs__msg__CanFrameBatch __attribute__((deprecated))
#else
# define DEPRECATED__x2robot_msgs__msg__CanFrameBatch __declspec(deprecated)
#endif

namespace x2robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CanFrameBatch_
{
  using Type = CanFrameBatch_<ContainerAllocator>;

  explicit CanFrameBatch_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CanFrameBatch_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _frames_type =
    std::vector<x2robot_msgs::msg::CanFrame_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<x2robot_msgs::msg::CanFrame_<ContainerAllocator>>>;
  _frames_type frames;

  // setters for named parameter idiom
  Type & set__frames(
    const std::vector<x2robot_msgs::msg::CanFrame_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<x2robot_msgs::msg::CanFrame_<ContainerAllocator>>> & _arg)
  {
    this->frames = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    x2robot_msgs::msg::CanFrameBatch_<ContainerAllocator> *;
  using ConstRawPtr =
    const x2robot_msgs::msg::CanFrameBatch_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<x2robot_msgs::msg::CanFrameBatch_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<x2robot_msgs::msg::CanFrameBatch_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::CanFrameBatch_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::CanFrameBatch_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::CanFrameBatch_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::CanFrameBatch_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<x2robot_msgs::msg::CanFrameBatch_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<x2robot_msgs::msg::CanFrameBatch_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__x2robot_msgs__msg__CanFrameBatch
    std::shared_ptr<x2robot_msgs::msg::CanFrameBatch_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__x2robot_msgs__msg__CanFrameBatch
    std::shared_ptr<x2robot_msgs::msg::CanFrameBatch_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanFrameBatch_ & other) const
  {
    if (this->frames != other.frames) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanFrameBatch_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanFrameBatch_

// alias to use template instance with default allocator
using CanFrameBatch =
  x2robot_msgs::msg::CanFrameBatch_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME_BATCH__STRUCT_HPP_
