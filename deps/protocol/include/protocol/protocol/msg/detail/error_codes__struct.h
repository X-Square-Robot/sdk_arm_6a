// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/ErrorCodes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/error_codes.h"


#ifndef PROTOCOL__MSG__DETAIL__ERROR_CODES__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__ERROR_CODES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'error_codes'
#include "protocol/msg/detail/global_error__struct.h"

/// Struct defined in msg/ErrorCodes in the package protocol.
/**
  * ErrorCodes.msg
  * 系统级错误状态（对外唯一错误协议）
 */
typedef struct protocol__msg__ErrorCodes
{
  /// 系统当前存在的错误
  protocol__msg__GlobalError__Sequence error_codes;
} protocol__msg__ErrorCodes;

// Struct for a sequence of protocol__msg__ErrorCodes.
typedef struct protocol__msg__ErrorCodes__Sequence
{
  protocol__msg__ErrorCodes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__ErrorCodes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__ERROR_CODES__STRUCT_H_
