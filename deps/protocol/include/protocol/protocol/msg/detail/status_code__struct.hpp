// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/StatusCode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/status_code.hpp"


#ifndef PROTOCOL__MSG__DETAIL__STATUS_CODE__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__STATUS_CODE__STRUCT_HPP_

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
// Member 'error_code'
#include "protocol/msg/detail/unit_error__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__StatusCode __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__StatusCode __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StatusCode_
{
  using Type = StatusCode_<ContainerAllocator>;

  explicit StatusCode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->domain = 0;
      this->unit = 0;
      this->state_code = 0;
    }
  }

  explicit StatusCode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->domain = 0;
      this->unit = 0;
      this->state_code = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _domain_type =
    uint8_t;
  _domain_type domain;
  using _unit_type =
    uint8_t;
  _unit_type unit;
  using _state_code_type =
    uint8_t;
  _state_code_type state_code;
  using _error_code_type =
    std::vector<protocol::msg::UnitError_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::UnitError_<ContainerAllocator>>>;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__domain(
    const uint8_t & _arg)
  {
    this->domain = _arg;
    return *this;
  }
  Type & set__unit(
    const uint8_t & _arg)
  {
    this->unit = _arg;
    return *this;
  }
  Type & set__state_code(
    const uint8_t & _arg)
  {
    this->state_code = _arg;
    return *this;
  }
  Type & set__error_code(
    const std::vector<protocol::msg::UnitError_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::UnitError_<ContainerAllocator>>> & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::StatusCode_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::StatusCode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::StatusCode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::StatusCode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::StatusCode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::StatusCode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::StatusCode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::StatusCode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::StatusCode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::StatusCode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__StatusCode
    std::shared_ptr<protocol::msg::StatusCode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__StatusCode
    std::shared_ptr<protocol::msg::StatusCode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StatusCode_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->domain != other.domain) {
      return false;
    }
    if (this->unit != other.unit) {
      return false;
    }
    if (this->state_code != other.state_code) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const StatusCode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StatusCode_

// alias to use template instance with default allocator
using StatusCode =
  protocol::msg::StatusCode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__STATUS_CODE__STRUCT_HPP_
