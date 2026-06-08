// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/ErrorCodes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/error_codes.hpp"


#ifndef PROTOCOL__MSG__DETAIL__ERROR_CODES__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__ERROR_CODES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'error_codes'
#include "protocol/msg/detail/global_error__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__ErrorCodes __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__ErrorCodes __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ErrorCodes_
{
  using Type = ErrorCodes_<ContainerAllocator>;

  explicit ErrorCodes_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ErrorCodes_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _error_codes_type =
    std::vector<protocol::msg::GlobalError_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::GlobalError_<ContainerAllocator>>>;
  _error_codes_type error_codes;

  // setters for named parameter idiom
  Type & set__error_codes(
    const std::vector<protocol::msg::GlobalError_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<protocol::msg::GlobalError_<ContainerAllocator>>> & _arg)
  {
    this->error_codes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::ErrorCodes_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::ErrorCodes_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::ErrorCodes_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::ErrorCodes_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::ErrorCodes_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::ErrorCodes_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::ErrorCodes_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::ErrorCodes_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::ErrorCodes_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::ErrorCodes_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__ErrorCodes
    std::shared_ptr<protocol::msg::ErrorCodes_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__ErrorCodes
    std::shared_ptr<protocol::msg::ErrorCodes_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ErrorCodes_ & other) const
  {
    if (this->error_codes != other.error_codes) {
      return false;
    }
    return true;
  }
  bool operator!=(const ErrorCodes_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ErrorCodes_

// alias to use template instance with default allocator
using ErrorCodes =
  protocol::msg::ErrorCodes_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__ERROR_CODES__STRUCT_HPP_
