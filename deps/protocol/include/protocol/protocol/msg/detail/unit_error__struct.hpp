// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/UnitError.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/unit_error.hpp"


#ifndef PROTOCOL__MSG__DETAIL__UNIT_ERROR__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__UNIT_ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__protocol__msg__UnitError __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__UnitError __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UnitError_
{
  using Type = UnitError_<ContainerAllocator>;

  explicit UnitError_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0;
      this->level = 0;
      this->exception = "";
    }
  }

  explicit UnitError_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : exception(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0;
      this->level = 0;
      this->exception = "";
    }
  }

  // field types and members
  using _error_code_type =
    uint8_t;
  _error_code_type error_code;
  using _level_type =
    uint8_t;
  _level_type level;
  using _exception_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _exception_type exception;

  // setters for named parameter idiom
  Type & set__error_code(
    const uint8_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__level(
    const uint8_t & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__exception(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->exception = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::UnitError_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::UnitError_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::UnitError_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::UnitError_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::UnitError_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::UnitError_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::UnitError_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::UnitError_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::UnitError_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::UnitError_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__UnitError
    std::shared_ptr<protocol::msg::UnitError_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__UnitError
    std::shared_ptr<protocol::msg::UnitError_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnitError_ & other) const
  {
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    if (this->exception != other.exception) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnitError_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnitError_

// alias to use template instance with default allocator
using UnitError =
  protocol::msg::UnitError_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__UNIT_ERROR__STRUCT_HPP_
