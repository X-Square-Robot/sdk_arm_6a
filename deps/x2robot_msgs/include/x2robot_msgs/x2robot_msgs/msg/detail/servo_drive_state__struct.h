// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from x2robot_msgs:msg/ServoDriveState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/servo_drive_state.h"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__SERVO_DRIVE_STATE__STRUCT_H_
#define X2ROBOT_MSGS__MSG__DETAIL__SERVO_DRIVE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'joint_names'
#include "rosidl_runtime_c/string.h"
// Member 'error_codes'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ServoDriveState in the package x2robot_msgs.
typedef struct x2robot_msgs__msg__ServoDriveState
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String__Sequence joint_names;
  rosidl_runtime_c__uint32__Sequence error_codes;
  /// 0 for no error
  /// non-zero for primitive servo error code, only for debug
  uint8_t current_mode;
} x2robot_msgs__msg__ServoDriveState;

// Struct for a sequence of x2robot_msgs__msg__ServoDriveState.
typedef struct x2robot_msgs__msg__ServoDriveState__Sequence
{
  x2robot_msgs__msg__ServoDriveState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__msg__ServoDriveState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // X2ROBOT_MSGS__MSG__DETAIL__SERVO_DRIVE_STATE__STRUCT_H_
