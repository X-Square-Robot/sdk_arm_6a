// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/GlobalError.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/global_error.h"


#ifndef PROTOCOL__MSG__DETAIL__GLOBAL_ERROR__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__GLOBAL_ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'exception'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GlobalError in the package protocol.
/**
  * GlobalError.msg
  * 系统评估处理后的错误
 */
typedef struct protocol__msg__GlobalError
{
  /// 填写status_code里面的时间戳。
  std_msgs__msg__Header header;
  /// 组成：[Domain 8bit] [Unit 8bit] [Error 16bit]
  uint32_t error_code;
  uint8_t level;
  /// 通常不建议塞入这里，字符串限制在25个字符以内。
  rosidl_runtime_c__String exception;
} protocol__msg__GlobalError;

// Struct for a sequence of protocol__msg__GlobalError.
typedef struct protocol__msg__GlobalError__Sequence
{
  protocol__msg__GlobalError * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__GlobalError__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__GLOBAL_ERROR__STRUCT_H_
