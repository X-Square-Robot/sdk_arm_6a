// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:msg/HardwareDeviceDiagnostics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/hardware_device_diagnostics.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__HARDWARE_DEVICE_DIAGNOSTICS__STRUCT_HPP_
#define CONTROL_MSGS__MSG__DETAIL__HARDWARE_DEVICE_DIAGNOSTICS__STRUCT_HPP_

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
// Member 'entries'
#include "diagnostic_msgs/msg/detail/key_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__msg__HardwareDeviceDiagnostics __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__msg__HardwareDeviceDiagnostics __declspec(deprecated)
#endif

namespace control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HardwareDeviceDiagnostics_
{
  using Type = HardwareDeviceDiagnostics_<ContainerAllocator>;

  explicit HardwareDeviceDiagnostics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = "";
    }
  }

  explicit HardwareDeviceDiagnostics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    device_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _device_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _device_id_type device_id;
  using _entries_type =
    std::vector<diagnostic_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::KeyValue_<ContainerAllocator>>>;
  _entries_type entries;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__device_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__entries(
    const std::vector<diagnostic_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::KeyValue_<ContainerAllocator>>> & _arg)
  {
    this->entries = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::msg::HardwareDeviceDiagnostics_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::msg::HardwareDeviceDiagnostics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::msg::HardwareDeviceDiagnostics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::msg::HardwareDeviceDiagnostics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::HardwareDeviceDiagnostics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::HardwareDeviceDiagnostics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::HardwareDeviceDiagnostics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::HardwareDeviceDiagnostics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::msg::HardwareDeviceDiagnostics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::msg::HardwareDeviceDiagnostics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__msg__HardwareDeviceDiagnostics
    std::shared_ptr<control_msgs::msg::HardwareDeviceDiagnostics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__msg__HardwareDeviceDiagnostics
    std::shared_ptr<control_msgs::msg::HardwareDeviceDiagnostics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HardwareDeviceDiagnostics_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->entries != other.entries) {
      return false;
    }
    return true;
  }
  bool operator!=(const HardwareDeviceDiagnostics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HardwareDeviceDiagnostics_

// alias to use template instance with default allocator
using HardwareDeviceDiagnostics =
  control_msgs::msg::HardwareDeviceDiagnostics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__HARDWARE_DEVICE_DIAGNOSTICS__STRUCT_HPP_
