// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from x2robot_msgs:msg/SerialData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/serial_data.h"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__SERIAL_DATA__STRUCT_H_
#define X2ROBOT_MSGS__MSG__DETAIL__SERIAL_DATA__STRUCT_H_

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
// Member 'payload'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SerialData in the package x2robot_msgs.
typedef struct x2robot_msgs__msg__SerialData
{
  builtin_interfaces__msg__Time stamp;
  uint8_t device_id;
  uint8_t cmd_id;
  rosidl_runtime_c__uint8__Sequence payload;
} x2robot_msgs__msg__SerialData;

// Struct for a sequence of x2robot_msgs__msg__SerialData.
typedef struct x2robot_msgs__msg__SerialData__Sequence
{
  x2robot_msgs__msg__SerialData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__msg__SerialData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // X2ROBOT_MSGS__MSG__DETAIL__SERIAL_DATA__STRUCT_H_
