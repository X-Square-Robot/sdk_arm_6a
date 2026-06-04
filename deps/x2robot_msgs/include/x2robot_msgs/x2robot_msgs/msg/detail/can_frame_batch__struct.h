// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from x2robot_msgs:msg/CanFrameBatch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/can_frame_batch.h"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME_BATCH__STRUCT_H_
#define X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME_BATCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'frames'
#include "x2robot_msgs/msg/detail/can_frame__struct.h"

/// Struct defined in msg/CanFrameBatch in the package x2robot_msgs.
typedef struct x2robot_msgs__msg__CanFrameBatch
{
  x2robot_msgs__msg__CanFrame__Sequence frames;
} x2robot_msgs__msg__CanFrameBatch;

// Struct for a sequence of x2robot_msgs__msg__CanFrameBatch.
typedef struct x2robot_msgs__msg__CanFrameBatch__Sequence
{
  x2robot_msgs__msg__CanFrameBatch * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__msg__CanFrameBatch__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME_BATCH__STRUCT_H_
