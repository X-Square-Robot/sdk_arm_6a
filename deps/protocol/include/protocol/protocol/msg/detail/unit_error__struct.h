// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/UnitError.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/unit_error.h"


#ifndef PROTOCOL__MSG__DETAIL__UNIT_ERROR__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__UNIT_ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'exception'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/UnitError in the package protocol.
/**
  * UnitError.msg
  * 某单元当前仍然存在的错误
 */
typedef struct protocol__msg__UnitError
{
  /// 单元定义的错误码（不含 domain/unit）
  uint8_t error_code;
  /// 0表示info 1表示warning,2表示error,3表示fatal
  uint8_t level;
  /// 一些额外的信息，通常不建议将信息塞入这里。字符串长度限制在25以内。
  rosidl_runtime_c__String exception;
} protocol__msg__UnitError;

// Struct for a sequence of protocol__msg__UnitError.
typedef struct protocol__msg__UnitError__Sequence
{
  protocol__msg__UnitError * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__UnitError__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__UNIT_ERROR__STRUCT_H_
