// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from x2robot_msgs:msg/CanFrame.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/can_frame.h"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME__STRUCT_H_
#define X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME__STRUCT_H_

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

/// Struct defined in msg/CanFrame in the package x2robot_msgs.
typedef struct x2robot_msgs__msg__CanFrame
{
  builtin_interfaces__msg__Time stamp;
  uint32_t can_id;
  uint8_t dlc;
  uint8_t data[64];
  uint8_t err;
  uint8_t rtr;
  uint8_t eff;
  uint8_t fd;
  uint8_t brs;
} x2robot_msgs__msg__CanFrame;

// Struct for a sequence of x2robot_msgs__msg__CanFrame.
typedef struct x2robot_msgs__msg__CanFrame__Sequence
{
  x2robot_msgs__msg__CanFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__msg__CanFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // X2ROBOT_MSGS__MSG__DETAIL__CAN_FRAME__STRUCT_H_
