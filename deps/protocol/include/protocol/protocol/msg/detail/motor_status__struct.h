// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/motor_status.h"


#ifndef PROTOCOL__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotorStatus in the package protocol.
typedef struct protocol__msg__MotorStatus
{
  uint8_t state_code;
  uint32_t error_bit_code;
} protocol__msg__MotorStatus;

// Struct for a sequence of protocol__msg__MotorStatus.
typedef struct protocol__msg__MotorStatus__Sequence
{
  protocol__msg__MotorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__MotorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
