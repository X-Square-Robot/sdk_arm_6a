// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/CameraErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/camera_error_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__CAMERA_ERROR_ENUM__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__CAMERA_ERROR_ENUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__protocol__msg__CameraErrorEnum __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__CameraErrorEnum __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraErrorEnum_
{
  using Type = CameraErrorEnum_<ContainerAllocator>;

  explicit CameraErrorEnum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit CameraErrorEnum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint32_t HEARTBEAT_TIMEOUT =
    1u;
  static constexpr uint32_t CAMERA_TYPE_LEFT_HAND_DISCONNECT =
    17u;
  static constexpr uint32_t CAMERA_TYPE_RIGHT_HAND_DISCONNECT =
    18u;
  static constexpr uint32_t CAMERA_TYPE_CHEST_BACK_DISCONNECT =
    19u;
  static constexpr uint32_t CAMERA_TYPE_HEAD_STEREO_DISCONNECT =
    20u;
  static constexpr uint32_t CAMERA_TYPE_SHOULDER_FISHEYE_LEFT_DISCONNECT =
    21u;
  static constexpr uint32_t CAMERA_TYPE_SHOULDER_FISHEYE_RIGHT_DISCONNECT =
    22u;
  static constexpr uint32_t CAMERA_TYPE_CHEST_FRONT_DISCONNECT =
    23u;
  static constexpr uint32_t CAMERA_TYPE_LEFT_HAND_FRAME_RATE_ABNORMAL =
    65u;
  static constexpr uint32_t CAMERA_TYPE_HEAD_FRAME_RATE_ABNORMAL =
    66u;
  static constexpr uint32_t CAMERA_TYPE_RIGHT_HAND_FRAME_RATE_ABNORMAL =
    67u;
  static constexpr uint32_t CAMERA_TYPE_CHEST_BACK_FRAME_RATE_ABNORMAL =
    68u;
  static constexpr uint32_t CAMERA_TYPE_CHASSIS_FRAME_RATE_ABNORMAL =
    69u;
  static constexpr uint32_t CAMERA_TYPE_HEAD_STEREO_FRAME_RATE_ABNORMAL =
    70u;
  static constexpr uint32_t CAMERA_TYPE_SHOULDER_FISHEYE_LEFT_FRAME_RATE_ABNORMAL =
    71u;
  static constexpr uint32_t CAMERA_TYPE_SHOULDER_FISHEYE_RIGHT_FRAME_RATE_ABNORMAL =
    72u;
  static constexpr uint32_t CAMERA_TYPE_BEV_FRAME_RATE_ABNORMAL =
    73u;
  static constexpr uint32_t CAMERA_TYPE_CHEST_FRONT_FRAME_RATE_ABNORMAL =
    74u;

  // pointer types
  using RawPtr =
    protocol::msg::CameraErrorEnum_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::CameraErrorEnum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::CameraErrorEnum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::CameraErrorEnum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::CameraErrorEnum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::CameraErrorEnum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::CameraErrorEnum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::CameraErrorEnum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::CameraErrorEnum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::CameraErrorEnum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__CameraErrorEnum
    std::shared_ptr<protocol::msg::CameraErrorEnum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__CameraErrorEnum
    std::shared_ptr<protocol::msg::CameraErrorEnum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraErrorEnum_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraErrorEnum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraErrorEnum_

// alias to use template instance with default allocator
using CameraErrorEnum =
  protocol::msg::CameraErrorEnum_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CameraErrorEnum_<ContainerAllocator>::HEARTBEAT_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CameraErrorEnum_<ContainerAllocator>::CAMERA_TYPE_LEFT_HAND_DISCONNECT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CameraErrorEnum_<ContainerAllocator>::CAMERA_TYPE_RIGHT_HAND_DISCONNECT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CameraErrorEnum_<ContainerAllocator>::CAMERA_TYPE_CHEST_BACK_DISCONNECT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CameraErrorEnum_<ContainerAllocator>::CAMERA_TYPE_HEAD_STEREO_DISCONNECT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CameraErrorEnum_<ContainerAllocator>::CAMERA_TYPE_SHOULDER_FISHEYE_LEFT_DISCONNECT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CameraErrorEnum_<ContainerAllocator>::CAMERA_TYPE_SHOULDER_FISHEYE_RIGHT_DISCONNECT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CameraErrorEnum_<ContainerAllocator>::CAMERA_TYPE_CHEST_FRONT_DISCONNECT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CameraErrorEnum_<ContainerAllocator>::CAMERA_TYPE_LEFT_HAND_FRAME_RATE_ABNORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CameraErrorEnum_<ContainerAllocator>::CAMERA_TYPE_HEAD_FRAME_RATE_ABNORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CameraErrorEnum_<ContainerAllocator>::CAMERA_TYPE_RIGHT_HAND_FRAME_RATE_ABNORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CameraErrorEnum_<ContainerAllocator>::CAMERA_TYPE_CHEST_BACK_FRAME_RATE_ABNORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CameraErrorEnum_<ContainerAllocator>::CAMERA_TYPE_CHASSIS_FRAME_RATE_ABNORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CameraErrorEnum_<ContainerAllocator>::CAMERA_TYPE_HEAD_STEREO_FRAME_RATE_ABNORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CameraErrorEnum_<ContainerAllocator>::CAMERA_TYPE_SHOULDER_FISHEYE_LEFT_FRAME_RATE_ABNORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CameraErrorEnum_<ContainerAllocator>::CAMERA_TYPE_SHOULDER_FISHEYE_RIGHT_FRAME_RATE_ABNORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CameraErrorEnum_<ContainerAllocator>::CAMERA_TYPE_BEV_FRAME_RATE_ABNORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t CameraErrorEnum_<ContainerAllocator>::CAMERA_TYPE_CHEST_FRONT_FRAME_RATE_ABNORMAL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__CAMERA_ERROR_ENUM__STRUCT_HPP_
