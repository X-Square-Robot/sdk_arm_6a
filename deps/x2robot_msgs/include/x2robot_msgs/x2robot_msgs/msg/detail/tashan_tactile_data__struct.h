// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from x2robot_msgs:msg/TashanTactileData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/tashan_tactile_data.h"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__TASHAN_TACTILE_DATA__STRUCT_H_
#define X2ROBOT_MSGS__MSG__DETAIL__TASHAN_TACTILE_DATA__STRUCT_H_

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
// Member 'sensor_names'
// Member 'frame_ids'
#include "rosidl_runtime_c/string.h"
// Member 'normal_forces'
// Member 'tangential_forces'
// Member 'directions'
// Member 'capacitances'
// Member 'error_codes'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/TashanTactileData in the package x2robot_msgs.
typedef struct x2robot_msgs__msg__TashanTactileData
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String__Sequence sensor_names;
  rosidl_runtime_c__String__Sequence frame_ids;
  rosidl_runtime_c__float__Sequence normal_forces;
  rosidl_runtime_c__float__Sequence tangential_forces;
  rosidl_runtime_c__int16__Sequence directions;
  rosidl_runtime_c__uint32__Sequence capacitances;
  rosidl_runtime_c__uint8__Sequence error_codes;
} x2robot_msgs__msg__TashanTactileData;

// Struct for a sequence of x2robot_msgs__msg__TashanTactileData.
typedef struct x2robot_msgs__msg__TashanTactileData__Sequence
{
  x2robot_msgs__msg__TashanTactileData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__msg__TashanTactileData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // X2ROBOT_MSGS__MSG__DETAIL__TASHAN_TACTILE_DATA__STRUCT_H_
