// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from x2robot_msgs:msg/RobotArmState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/robot_arm_state.h"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__ROBOT_ARM_STATE__STRUCT_H_
#define X2ROBOT_MSGS__MSG__DETAIL__ROBOT_ARM_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'NO_ERROR'.
enum
{
  x2robot_msgs__msg__RobotArmState__NO_ERROR = 0
};

/// Constant 'READY'.
enum
{
  x2robot_msgs__msg__RobotArmState__READY = 1
};

/// Constant 'EMCY_STOPPED'.
enum
{
  x2robot_msgs__msg__RobotArmState__EMCY_STOPPED = 2
};

/// Constant 'POWER_OFF'.
enum
{
  x2robot_msgs__msg__RobotArmState__POWER_OFF = 3
};

/// Constant 'NOT_ENABLED'.
enum
{
  x2robot_msgs__msg__RobotArmState__NOT_ENABLED = 4
};

/// Constant 'MOTOR_ERROR'.
enum
{
  x2robot_msgs__msg__RobotArmState__MOTOR_ERROR = 5
};

/// Constant 'COMM_BUS_ERROR'.
enum
{
  x2robot_msgs__msg__RobotArmState__COMM_BUS_ERROR = 6
};

/// Constant 'CYCLIC_POSITION_MODE'.
enum
{
  x2robot_msgs__msg__RobotArmState__CYCLIC_POSITION_MODE = 8
};

/// Constant 'FORCE_MODE_TORQUE_SENSOR'.
enum
{
  x2robot_msgs__msg__RobotArmState__FORCE_MODE_TORQUE_SENSOR = 15
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'error_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RobotArmState in the package x2robot_msgs.
typedef struct x2robot_msgs__msg__RobotArmState
{
  builtin_interfaces__msg__Time stamp;
  uint8_t robot_state;
  uint8_t current_control_mode;
  rosidl_runtime_c__String error_msg;
} x2robot_msgs__msg__RobotArmState;

// Struct for a sequence of x2robot_msgs__msg__RobotArmState.
typedef struct x2robot_msgs__msg__RobotArmState__Sequence
{
  x2robot_msgs__msg__RobotArmState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__msg__RobotArmState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // X2ROBOT_MSGS__MSG__DETAIL__ROBOT_ARM_STATE__STRUCT_H_
