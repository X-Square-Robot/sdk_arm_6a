// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from x2robot_msgs:msg/SerialData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/serial_data.hpp"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__SERIAL_DATA__STRUCT_HPP_
#define X2ROBOT_MSGS__MSG__DETAIL__SERIAL_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__x2robot_msgs__msg__SerialData __attribute__((deprecated))
#else
# define DEPRECATED__x2robot_msgs__msg__SerialData __declspec(deprecated)
#endif

namespace x2robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SerialData_
{
  using Type = SerialData_<ContainerAllocator>;

  explicit SerialData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0;
      this->cmd_id = 0;
    }
  }

  explicit SerialData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0;
      this->cmd_id = 0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _device_id_type =
    uint8_t;
  _device_id_type device_id;
  using _cmd_id_type =
    uint8_t;
  _cmd_id_type cmd_id;
  using _payload_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _payload_type payload;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__device_id(
    const uint8_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__cmd_id(
    const uint8_t & _arg)
  {
    this->cmd_id = _arg;
    return *this;
  }
  Type & set__payload(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->payload = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    x2robot_msgs::msg::SerialData_<ContainerAllocator> *;
  using ConstRawPtr =
    const x2robot_msgs::msg::SerialData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<x2robot_msgs::msg::SerialData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<x2robot_msgs::msg::SerialData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::SerialData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::SerialData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      x2robot_msgs::msg::SerialData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<x2robot_msgs::msg::SerialData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<x2robot_msgs::msg::SerialData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<x2robot_msgs::msg::SerialData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__x2robot_msgs__msg__SerialData
    std::shared_ptr<x2robot_msgs::msg::SerialData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__x2robot_msgs__msg__SerialData
    std::shared_ptr<x2robot_msgs::msg::SerialData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SerialData_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->cmd_id != other.cmd_id) {
      return false;
    }
    if (this->payload != other.payload) {
      return false;
    }
    return true;
  }
  bool operator!=(const SerialData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SerialData_

// alias to use template instance with default allocator
using SerialData =
  x2robot_msgs::msg::SerialData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace x2robot_msgs

#endif  // X2ROBOT_MSGS__MSG__DETAIL__SERIAL_DATA__STRUCT_HPP_
