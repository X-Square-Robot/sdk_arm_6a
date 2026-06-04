// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/EaiUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/eai_unit_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__EAI_UNIT_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__EAI_UNIT_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'X2ROBOT_CLIENT'.
enum
{
  protocol__msg__EaiUnitEnum__X2ROBOT_CLIENT = 1
};

/// Struct defined in msg/EaiUnitEnum in the package protocol.
typedef struct protocol__msg__EaiUnitEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__EaiUnitEnum;

// Struct for a sequence of protocol__msg__EaiUnitEnum.
typedef struct protocol__msg__EaiUnitEnum__Sequence
{
  protocol__msg__EaiUnitEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__EaiUnitEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__EAI_UNIT_ENUM__STRUCT_H_
