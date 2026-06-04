// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/X2robotClientErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/x2robot_client_error_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__X2ROBOT_CLIENT_ERROR_ENUM__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__X2ROBOT_CLIENT_ERROR_ENUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__protocol__msg__X2robotClientErrorEnum __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__X2robotClientErrorEnum __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct X2robotClientErrorEnum_
{
  using Type = X2robotClientErrorEnum_<ContainerAllocator>;

  explicit X2robotClientErrorEnum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit X2robotClientErrorEnum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint32_t MODEL_INFO_INVALID =
    16u;
  static constexpr uint32_t MODEL_ADDRESS_RESOLVE_FAILED =
    17u;
  static constexpr uint32_t MODEL_SERVER_CONNECT_FAILED =
    18u;
  static constexpr uint32_t MODEL_SERVER_METADATA_TIMEOUT =
    19u;
  static constexpr uint32_t MODEL_SERVER_METADATA_DECODE_FAILED =
    20u;
  static constexpr uint32_t ROBOT_CLIENT_INIT_FAILED =
    21u;
  static constexpr uint32_t ROBOT_MODEL_CONFIG_INVALID =
    22u;
  static constexpr uint32_t UNSUPPORTED_CONTROL_MODE =
    23u;
  static constexpr uint32_t INFERENCE_START_FAILED =
    24u;
  static constexpr uint32_t INFERENCE_STOP_FAILED =
    25u;
  static constexpr uint32_t INFERENCE_CLOSE_FAILED =
    26u;
  static constexpr uint32_t SENSOR_DATA_COLLECT_FAILED =
    27u;
  static constexpr uint32_t MODEL_REQUEST_SERIALIZE_FAILED =
    28u;
  static constexpr uint32_t MODEL_REQUEST_SEND_FAILED =
    29u;
  static constexpr uint32_t MODEL_RESPONSE_TIMEOUT =
    30u;
  static constexpr uint32_t MODEL_RESPONSE_RECEIVE_FAILED =
    31u;
  static constexpr uint32_t MODEL_RESPONSE_DECODE_FAILED =
    32u;
  static constexpr uint32_t MODEL_OUTPUT_INVALID =
    33u;
  static constexpr uint32_t ACTION_EXECUTE_FAILED =
    34u;
  static constexpr uint32_t ACTION_CHUNK_PUBLISH_FAILED =
    35u;
  static constexpr uint32_t MODEL_OUTPUT_TEXT_PUBLISH_FAILED =
    36u;
  static constexpr uint32_t INFERENCE_RUNTIME_EXCEPTION =
    37u;
  static constexpr uint32_t REMOTE_CONTROL_STATE_FAILED =
    38u;
  static constexpr uint32_t RESOURCE_CLEANUP_FAILED =
    39u;
  static constexpr uint32_t ASYNC_WORKER_EXCEPTION =
    40u;
  static constexpr uint32_t ASYNC_ACTION_QUEUE_STALE =
    41u;

  // pointer types
  using RawPtr =
    protocol::msg::X2robotClientErrorEnum_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::X2robotClientErrorEnum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::X2robotClientErrorEnum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::X2robotClientErrorEnum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::X2robotClientErrorEnum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::X2robotClientErrorEnum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::X2robotClientErrorEnum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::X2robotClientErrorEnum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::X2robotClientErrorEnum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::X2robotClientErrorEnum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__X2robotClientErrorEnum
    std::shared_ptr<protocol::msg::X2robotClientErrorEnum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__X2robotClientErrorEnum
    std::shared_ptr<protocol::msg::X2robotClientErrorEnum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const X2robotClientErrorEnum_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const X2robotClientErrorEnum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct X2robotClientErrorEnum_

// alias to use template instance with default allocator
using X2robotClientErrorEnum =
  protocol::msg::X2robotClientErrorEnum_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::MODEL_INFO_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::MODEL_ADDRESS_RESOLVE_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::MODEL_SERVER_CONNECT_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::MODEL_SERVER_METADATA_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::MODEL_SERVER_METADATA_DECODE_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::ROBOT_CLIENT_INIT_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::ROBOT_MODEL_CONFIG_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::UNSUPPORTED_CONTROL_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::INFERENCE_START_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::INFERENCE_STOP_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::INFERENCE_CLOSE_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::SENSOR_DATA_COLLECT_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::MODEL_REQUEST_SERIALIZE_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::MODEL_REQUEST_SEND_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::MODEL_RESPONSE_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::MODEL_RESPONSE_RECEIVE_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::MODEL_RESPONSE_DECODE_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::MODEL_OUTPUT_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::ACTION_EXECUTE_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::ACTION_CHUNK_PUBLISH_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::MODEL_OUTPUT_TEXT_PUBLISH_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::INFERENCE_RUNTIME_EXCEPTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::REMOTE_CONTROL_STATE_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::RESOURCE_CLEANUP_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::ASYNC_WORKER_EXCEPTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t X2robotClientErrorEnum_<ContainerAllocator>::ASYNC_ACTION_QUEUE_STALE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__X2ROBOT_CLIENT_ERROR_ENUM__STRUCT_HPP_
