// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/MediaUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/media_unit_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__MEDIA_UNIT_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__MEDIA_UNIT_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'CAMERA'.
enum
{
  protocol__msg__MediaUnitEnum__CAMERA = 1
};

/// Struct defined in msg/MediaUnitEnum in the package protocol.
typedef struct protocol__msg__MediaUnitEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__MediaUnitEnum;

// Struct for a sequence of protocol__msg__MediaUnitEnum.
typedef struct protocol__msg__MediaUnitEnum__Sequence
{
  protocol__msg__MediaUnitEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__MediaUnitEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MEDIA_UNIT_ENUM__STRUCT_H_
