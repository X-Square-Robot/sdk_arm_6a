// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/TaskManagerUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/task_manager_unit_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__TASK_MANAGER_UNIT_ENUM__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__TASK_MANAGER_UNIT_ENUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__protocol__msg__TaskManagerUnitEnum __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__TaskManagerUnitEnum __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskManagerUnitEnum_
{
  using Type = TaskManagerUnitEnum_<ContainerAllocator>;

  explicit TaskManagerUnitEnum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TaskManagerUnitEnum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations
  static constexpr uint32_t TASK_INIT_FAILED =
    16u;
  static constexpr uint32_t TASK_RUNNING_ERROR =
    17u;
  static constexpr uint32_t TASK_PAUSED_FAILED =
    18u;
  static constexpr uint32_t TASK_RESUME_FAILED =
    19u;
  static constexpr uint32_t TASK_TERMINATE_FAILED =
    20u;
  static constexpr uint32_t TASK_SUSPEND_FAILED =
    21u;
  static constexpr uint32_t TASK_EXIT_SUSPEND_FAILED =
    22u;
  static constexpr uint32_t TASK_FINISH_FAILED =
    23u;

  // pointer types
  using RawPtr =
    protocol::msg::TaskManagerUnitEnum_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::TaskManagerUnitEnum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::TaskManagerUnitEnum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::TaskManagerUnitEnum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::TaskManagerUnitEnum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::TaskManagerUnitEnum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::TaskManagerUnitEnum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::TaskManagerUnitEnum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::TaskManagerUnitEnum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::TaskManagerUnitEnum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__TaskManagerUnitEnum
    std::shared_ptr<protocol::msg::TaskManagerUnitEnum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__TaskManagerUnitEnum
    std::shared_ptr<protocol::msg::TaskManagerUnitEnum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskManagerUnitEnum_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskManagerUnitEnum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskManagerUnitEnum_

// alias to use template instance with default allocator
using TaskManagerUnitEnum =
  protocol::msg::TaskManagerUnitEnum_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskManagerUnitEnum_<ContainerAllocator>::TASK_INIT_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskManagerUnitEnum_<ContainerAllocator>::TASK_RUNNING_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskManagerUnitEnum_<ContainerAllocator>::TASK_PAUSED_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskManagerUnitEnum_<ContainerAllocator>::TASK_RESUME_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskManagerUnitEnum_<ContainerAllocator>::TASK_TERMINATE_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskManagerUnitEnum_<ContainerAllocator>::TASK_SUSPEND_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskManagerUnitEnum_<ContainerAllocator>::TASK_EXIT_SUSPEND_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TaskManagerUnitEnum_<ContainerAllocator>::TASK_FINISH_FAILED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__TASK_MANAGER_UNIT_ENUM__STRUCT_HPP_
