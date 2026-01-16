// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:msg/HardwareDeviceStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/hardware_device_status.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__HARDWARE_DEVICE_STATUS__STRUCT_HPP_
#define CONTROL_MSGS__MSG__DETAIL__HARDWARE_DEVICE_STATUS__STRUCT_HPP_

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
// Member 'hardware_status'
#include "control_msgs/msg/detail/generic_hardware_state__struct.hpp"
// Member 'canopen_states'
#include "control_msgs/msg/detail/ca_nopen_state__struct.hpp"
// Member 'ethercat_states'
#include "control_msgs/msg/detail/ether_cat_state__struct.hpp"
// Member 'vda5050_states'
#include "control_msgs/msg/detail/vda5050_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__msg__HardwareDeviceStatus __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__msg__HardwareDeviceStatus __declspec(deprecated)
#endif

namespace control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HardwareDeviceStatus_
{
  using Type = HardwareDeviceStatus_<ContainerAllocator>;

  explicit HardwareDeviceStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = "";
    }
  }

  explicit HardwareDeviceStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  using _hardware_status_type =
    std::vector<control_msgs::msg::GenericHardwareState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::msg::GenericHardwareState_<ContainerAllocator>>>;
  _hardware_status_type hardware_status;
  using _canopen_states_type =
    std::vector<control_msgs::msg::CANopenState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::msg::CANopenState_<ContainerAllocator>>>;
  _canopen_states_type canopen_states;
  using _ethercat_states_type =
    std::vector<control_msgs::msg::EtherCATState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::msg::EtherCATState_<ContainerAllocator>>>;
  _ethercat_states_type ethercat_states;
  using _vda5050_states_type =
    std::vector<control_msgs::msg::VDA5050State_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::msg::VDA5050State_<ContainerAllocator>>>;
  _vda5050_states_type vda5050_states;

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
  Type & set__hardware_status(
    const std::vector<control_msgs::msg::GenericHardwareState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::msg::GenericHardwareState_<ContainerAllocator>>> & _arg)
  {
    this->hardware_status = _arg;
    return *this;
  }
  Type & set__canopen_states(
    const std::vector<control_msgs::msg::CANopenState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::msg::CANopenState_<ContainerAllocator>>> & _arg)
  {
    this->canopen_states = _arg;
    return *this;
  }
  Type & set__ethercat_states(
    const std::vector<control_msgs::msg::EtherCATState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::msg::EtherCATState_<ContainerAllocator>>> & _arg)
  {
    this->ethercat_states = _arg;
    return *this;
  }
  Type & set__vda5050_states(
    const std::vector<control_msgs::msg::VDA5050State_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<control_msgs::msg::VDA5050State_<ContainerAllocator>>> & _arg)
  {
    this->vda5050_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::msg::HardwareDeviceStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::msg::HardwareDeviceStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::msg::HardwareDeviceStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::msg::HardwareDeviceStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::HardwareDeviceStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::HardwareDeviceStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::HardwareDeviceStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::HardwareDeviceStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::msg::HardwareDeviceStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::msg::HardwareDeviceStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__msg__HardwareDeviceStatus
    std::shared_ptr<control_msgs::msg::HardwareDeviceStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__msg__HardwareDeviceStatus
    std::shared_ptr<control_msgs::msg::HardwareDeviceStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HardwareDeviceStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->hardware_status != other.hardware_status) {
      return false;
    }
    if (this->canopen_states != other.canopen_states) {
      return false;
    }
    if (this->ethercat_states != other.ethercat_states) {
      return false;
    }
    if (this->vda5050_states != other.vda5050_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const HardwareDeviceStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HardwareDeviceStatus_

// alias to use template instance with default allocator
using HardwareDeviceStatus =
  control_msgs::msg::HardwareDeviceStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__HARDWARE_DEVICE_STATUS__STRUCT_HPP_
