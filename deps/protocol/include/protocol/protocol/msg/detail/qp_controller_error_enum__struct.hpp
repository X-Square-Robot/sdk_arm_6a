// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/QpControllerErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/qp_controller_error_enum.hpp"


#ifndef PROTOCOL__MSG__DETAIL__QP_CONTROLLER_ERROR_ENUM__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__QP_CONTROLLER_ERROR_ENUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__protocol__msg__QpControllerErrorEnum __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__QpControllerErrorEnum __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QpControllerErrorEnum_
{
  using Type = QpControllerErrorEnum_<ContainerAllocator>;

  explicit QpControllerErrorEnum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit QpControllerErrorEnum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint32_t CONFIG_OK =
    16u;
  static constexpr uint32_t PARAM_MISSING =
    17u;
  static constexpr uint32_t PARAM_INVALID =
    18u;
  static constexpr uint32_t URDF_PARSE_FAILED =
    19u;
  static constexpr uint32_t MODEL_BUILD_FAILED =
    20u;
  static constexpr uint32_t FRAME_NOT_FOUND =
    21u;
  static constexpr uint32_t JOINT_NOT_FOUND =
    22u;
  static constexpr uint32_t CONFIG_DIM_MISMATCH =
    23u;
  static constexpr uint32_t HW_INTERFACE_OK =
    32u;
  static constexpr uint32_t STATE_INTERFACE_MISSING =
    33u;
  static constexpr uint32_t COMMAND_INTERFACE_MISSING =
    34u;
  static constexpr uint32_t STATE_READ_NAN =
    35u;
  static constexpr uint32_t STATE_STALE =
    36u;
  static constexpr uint32_t COMMAND_WRITE_FAILED =
    37u;
  static constexpr uint32_t KINEMATICS_OK =
    48u;
  static constexpr uint32_t FK_FAILED =
    49u;
  static constexpr uint32_t JACOBIAN_FAILED =
    50u;
  static constexpr uint32_t JACOBIAN_SINGULAR =
    51u;
  static constexpr uint32_t DYNAMICS_FAILED =
    52u;
  static constexpr uint32_t NON_FINITE_MODEL_OUTPUT =
    53u;
  static constexpr uint32_t QP_OK =
    64u;
  static constexpr uint32_t QP_SETUP_FAILED =
    65u;
  static constexpr uint32_t QP_INFEASIBLE =
    66u;
  static constexpr uint32_t QP_UNBOUNDED =
    67u;
  static constexpr uint32_t QP_MAX_ITER =
    68u;
  static constexpr uint32_t QP_NUMERICAL =
    69u;
  static constexpr uint32_t QP_SOLVER_TIMEOUT =
    70u;
  static constexpr uint32_t QP_SOLUTION_NAN =
    71u;
  static constexpr uint32_t TASK_OK =
    80u;
  static constexpr uint32_t TASK_NOT_REGISTERED =
    81u;
  static constexpr uint32_t TASK_DIM_MISMATCH =
    82u;
  static constexpr uint32_t TASK_UPDATE_FAILED =
    83u;
  static constexpr uint32_t CONSTRAINT_VIOLATED =
    84u;
  static constexpr uint32_t ROLLING_CONSTRAINT_SLIP =
    85u;
  static constexpr uint32_t REFERENCE_OK =
    96u;
  static constexpr uint32_t REFERENCE_TIMEOUT =
    97u;
  static constexpr uint32_t REFERENCE_NAN =
    98u;
  static constexpr uint32_t REFERENCE_DIM_MISMATCH =
    99u;
  static constexpr uint32_t REFERENCE_JUMP =
    100u;
  static constexpr uint32_t REFERENCE_OUT_OF_WORKSPACE =
    101u;
  static constexpr uint32_t SAFETY_OK =
    112u;
  static constexpr uint32_t JOINT_POSITION_LIMIT =
    113u;
  static constexpr uint32_t JOINT_VELOCITY_LIMIT =
    114u;
  static constexpr uint32_t JOINT_TORQUE_LIMIT =
    115u;
  static constexpr uint32_t CARTESIAN_VELOCITY_LIMIT =
    116u;
  static constexpr uint32_t SELF_COLLISION_IMMINENT =
    117u;
  static constexpr uint32_t EMERGENCY_STOP =
    118u;
  static constexpr uint32_t ODOM_OK =
    128u;
  static constexpr uint32_t ODOM_JUMP_DETECTED =
    129u;
  static constexpr uint32_t FILTER_DIVERGED =
    130u;
  static constexpr uint32_t FILTER_INPUT_NAN =
    131u;
  static constexpr uint32_t TIMING_OK =
    144u;
  static constexpr uint32_t CONTROL_LOOP_OVERRUN =
    145u;
  static constexpr uint32_t PERIOD_INVALID =
    146u;
  static constexpr uint32_t CLOCK_JUMP =
    147u;

  // pointer types
  using RawPtr =
    protocol::msg::QpControllerErrorEnum_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::QpControllerErrorEnum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::QpControllerErrorEnum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::QpControllerErrorEnum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::QpControllerErrorEnum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::QpControllerErrorEnum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::QpControllerErrorEnum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::QpControllerErrorEnum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::QpControllerErrorEnum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::QpControllerErrorEnum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__QpControllerErrorEnum
    std::shared_ptr<protocol::msg::QpControllerErrorEnum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__QpControllerErrorEnum
    std::shared_ptr<protocol::msg::QpControllerErrorEnum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QpControllerErrorEnum_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const QpControllerErrorEnum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QpControllerErrorEnum_

// alias to use template instance with default allocator
using QpControllerErrorEnum =
  protocol::msg::QpControllerErrorEnum_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::HEARTBEAT_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::CONFIG_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::PARAM_MISSING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::PARAM_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::URDF_PARSE_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::MODEL_BUILD_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::FRAME_NOT_FOUND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::JOINT_NOT_FOUND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::CONFIG_DIM_MISMATCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::HW_INTERFACE_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::STATE_INTERFACE_MISSING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::COMMAND_INTERFACE_MISSING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::STATE_READ_NAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::STATE_STALE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::COMMAND_WRITE_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::KINEMATICS_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::FK_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::JACOBIAN_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::JACOBIAN_SINGULAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::DYNAMICS_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::NON_FINITE_MODEL_OUTPUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::QP_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::QP_SETUP_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::QP_INFEASIBLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::QP_UNBOUNDED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::QP_MAX_ITER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::QP_NUMERICAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::QP_SOLVER_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::QP_SOLUTION_NAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::TASK_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::TASK_NOT_REGISTERED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::TASK_DIM_MISMATCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::TASK_UPDATE_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::CONSTRAINT_VIOLATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::ROLLING_CONSTRAINT_SLIP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::REFERENCE_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::REFERENCE_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::REFERENCE_NAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::REFERENCE_DIM_MISMATCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::REFERENCE_JUMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::REFERENCE_OUT_OF_WORKSPACE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::SAFETY_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::JOINT_POSITION_LIMIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::JOINT_VELOCITY_LIMIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::JOINT_TORQUE_LIMIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::CARTESIAN_VELOCITY_LIMIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::SELF_COLLISION_IMMINENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::EMERGENCY_STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::ODOM_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::ODOM_JUMP_DETECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::FILTER_DIVERGED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::FILTER_INPUT_NAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::TIMING_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::CONTROL_LOOP_OVERRUN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::PERIOD_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t QpControllerErrorEnum_<ContainerAllocator>::CLOCK_JUMP;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__QP_CONTROLLER_ERROR_ENUM__STRUCT_HPP_
