// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:msg/WrenchFramed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/wrench_framed.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__WRENCH_FRAMED__STRUCT_HPP_
#define CONTROL_MSGS__MSG__DETAIL__WRENCH_FRAMED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__msg__WrenchFramed __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__msg__WrenchFramed __declspec(deprecated)
#endif

namespace control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WrenchFramed_
{
  using Type = WrenchFramed_<ContainerAllocator>;

  explicit WrenchFramed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wrench(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
    }
  }

  explicit WrenchFramed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_id(_alloc),
    wrench(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
    }
  }

  // field types and members
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _wrench_type =
    geometry_msgs::msg::Wrench_<ContainerAllocator>;
  _wrench_type wrench;

  // setters for named parameter idiom
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__wrench(
    const geometry_msgs::msg::Wrench_<ContainerAllocator> & _arg)
  {
    this->wrench = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::msg::WrenchFramed_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::msg::WrenchFramed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::msg::WrenchFramed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::msg::WrenchFramed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::WrenchFramed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::WrenchFramed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::WrenchFramed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::WrenchFramed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::msg::WrenchFramed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::msg::WrenchFramed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__msg__WrenchFramed
    std::shared_ptr<control_msgs::msg::WrenchFramed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__msg__WrenchFramed
    std::shared_ptr<control_msgs::msg::WrenchFramed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WrenchFramed_ & other) const
  {
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->wrench != other.wrench) {
      return false;
    }
    return true;
  }
  bool operator!=(const WrenchFramed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WrenchFramed_

// alias to use template instance with default allocator
using WrenchFramed =
  control_msgs::msg::WrenchFramed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__WRENCH_FRAMED__STRUCT_HPP_
