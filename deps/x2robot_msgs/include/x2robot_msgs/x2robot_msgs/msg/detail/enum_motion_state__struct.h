// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from x2robot_msgs:msg/EnumMotionState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/enum_motion_state.h"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__ENUM_MOTION_STATE__STRUCT_H_
#define X2ROBOT_MSGS__MSG__DETAIL__ENUM_MOTION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'BAGGING'.
enum
{
  x2robot_msgs__msg__EnumMotionState__BAGGING = 1
};

/// Constant 'SLACKING_OFF'.
enum
{
  x2robot_msgs__msg__EnumMotionState__SLACKING_OFF = 2
};

/// Constant 'REPLAY_BAG'.
enum
{
  x2robot_msgs__msg__EnumMotionState__REPLAY_BAG = 3
};

/// Struct defined in msg/EnumMotionState in the package x2robot_msgs.
typedef struct x2robot_msgs__msg__EnumMotionState
{
  uint8_t structure_needs_at_least_one_member;
} x2robot_msgs__msg__EnumMotionState;

// Struct for a sequence of x2robot_msgs__msg__EnumMotionState.
typedef struct x2robot_msgs__msg__EnumMotionState__Sequence
{
  x2robot_msgs__msg__EnumMotionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__msg__EnumMotionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // X2ROBOT_MSGS__MSG__DETAIL__ENUM_MOTION_STATE__STRUCT_H_
