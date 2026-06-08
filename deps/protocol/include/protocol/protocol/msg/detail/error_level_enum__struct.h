// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/ErrorLevelEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/error_level_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__ERROR_LEVEL_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__ERROR_LEVEL_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'LEVEL_INFO'.
enum
{
  protocol__msg__ErrorLevelEnum__LEVEL_INFO = 0
};

/// Constant 'LEVEL_WARNING'.
enum
{
  protocol__msg__ErrorLevelEnum__LEVEL_WARNING = 1
};

/// Constant 'LEVEL_ERROR'.
enum
{
  protocol__msg__ErrorLevelEnum__LEVEL_ERROR = 2
};

/// Constant 'LEVEL_FATAL'.
enum
{
  protocol__msg__ErrorLevelEnum__LEVEL_FATAL = 3
};

/// Struct defined in msg/ErrorLevelEnum in the package protocol.
typedef struct protocol__msg__ErrorLevelEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__ErrorLevelEnum;

// Struct for a sequence of protocol__msg__ErrorLevelEnum.
typedef struct protocol__msg__ErrorLevelEnum__Sequence
{
  protocol__msg__ErrorLevelEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__ErrorLevelEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__ERROR_LEVEL_ENUM__STRUCT_H_
