// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from x2robot_msgs:msg/EnumControllerMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/enum_controller_mode.h"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__ENUM_CONTROLLER_MODE__STRUCT_H_
#define X2ROBOT_MSGS__MSG__DETAIL__ENUM_CONTROLLER_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'IDLE'.
enum
{
  x2robot_msgs__msg__EnumControllerMode__IDLE = 1
};

/// Constant 'SWITHCING'.
enum
{
  x2robot_msgs__msg__EnumControllerMode__SWITHCING = 255
};

/// Constant 'DATA_COLLECT'.
enum
{
  x2robot_msgs__msg__EnumControllerMode__DATA_COLLECT = 2
};

/// Constant 'REPLAY'.
enum
{
  x2robot_msgs__msg__EnumControllerMode__REPLAY = 3
};

/// Constant 'INFERENCE'.
enum
{
  x2robot_msgs__msg__EnumControllerMode__INFERENCE = 4
};

/// Struct defined in msg/EnumControllerMode in the package x2robot_msgs.
typedef struct x2robot_msgs__msg__EnumControllerMode
{
  uint8_t structure_needs_at_least_one_member;
} x2robot_msgs__msg__EnumControllerMode;

// Struct for a sequence of x2robot_msgs__msg__EnumControllerMode.
typedef struct x2robot_msgs__msg__EnumControllerMode__Sequence
{
  x2robot_msgs__msg__EnumControllerMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__msg__EnumControllerMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // X2ROBOT_MSGS__MSG__DETAIL__ENUM_CONTROLLER_MODE__STRUCT_H_
