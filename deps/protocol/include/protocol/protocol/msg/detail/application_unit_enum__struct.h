// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/ApplicationUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/application_unit_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__APPLICATION_UNIT_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__APPLICATION_UNIT_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'TASK_MANAGER'.
enum
{
  protocol__msg__ApplicationUnitEnum__TASK_MANAGER = 1
};

/// Constant 'RECORDER'.
enum
{
  protocol__msg__ApplicationUnitEnum__RECORDER = 2
};

/// Struct defined in msg/ApplicationUnitEnum in the package protocol.
typedef struct protocol__msg__ApplicationUnitEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__ApplicationUnitEnum;

// Struct for a sequence of protocol__msg__ApplicationUnitEnum.
typedef struct protocol__msg__ApplicationUnitEnum__Sequence
{
  protocol__msg__ApplicationUnitEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__ApplicationUnitEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__APPLICATION_UNIT_ENUM__STRUCT_H_
