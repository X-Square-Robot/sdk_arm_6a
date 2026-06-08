// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from x2robot_msgs:msg/Joystick.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/joystick.h"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__JOYSTICK__STRUCT_H_
#define X2ROBOT_MSGS__MSG__DETAIL__JOYSTICK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Joystick in the package x2robot_msgs.
/**
  * 摇杆x轴 [-1, 1]
 */
typedef struct x2robot_msgs__msg__Joystick
{
  double joystick_x;
  /// 摇杆y轴 [-1, 1]
  double joystick_y;
  /// 扳机 [0, 1]
  double trigger;
  /// 按钮 True为按下
  bool joy_button;
  bool sw1;
  bool sw2;
  bool sw3;
  bool sw4;
} x2robot_msgs__msg__Joystick;

// Struct for a sequence of x2robot_msgs__msg__Joystick.
typedef struct x2robot_msgs__msg__Joystick__Sequence
{
  x2robot_msgs__msg__Joystick * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__msg__Joystick__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // X2ROBOT_MSGS__MSG__DETAIL__JOYSTICK__STRUCT_H_
