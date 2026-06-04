// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/SensorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/sensor_status.h"


#ifndef PROTOCOL__MSG__DETAIL__SENSOR_STATUS__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__SENSOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/SensorStatus in the package protocol.
typedef struct protocol__msg__SensorStatus
{
  uint8_t state_code;
  uint32_t error_bit_code;
} protocol__msg__SensorStatus;

// Struct for a sequence of protocol__msg__SensorStatus.
typedef struct protocol__msg__SensorStatus__Sequence
{
  protocol__msg__SensorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__SensorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__SENSOR_STATUS__STRUCT_H_
