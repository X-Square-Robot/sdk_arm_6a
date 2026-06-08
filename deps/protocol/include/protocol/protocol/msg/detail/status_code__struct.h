// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/StatusCode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/status_code.h"


#ifndef PROTOCOL__MSG__DETAIL__STATUS_CODE__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__STATUS_CODE__STRUCT_H_

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
// Member 'error_code'
#include "protocol/msg/detail/unit_error__struct.h"

/// Struct defined in msg/StatusCode in the package protocol.
/**
  * status_code.msg
  * 节点定频 + 事件触发上报的状态快照
 */
typedef struct protocol__msg__StatusCode
{
  std_msgs__msg__Header header;
  /// 一级标识：系统域
  uint8_t domain;
  /// 二级标识：域内单元
  uint8_t unit;
  /// 节点生命周期状态（为异常处理模块服务，异常处理时可能会需要额外的状态知晓节点当前的状态）
  uint8_t state_code;
  /// 0 = UNINITIALIZED
  /// 1 = INITIALIZED
  /// 2 = RUNNING
  /// 3 = ERROR
  /// 4 = OFFLINE
  /// 当前节点所有仍然存在的错误，不存在可为空
  protocol__msg__UnitError__Sequence error_code;
} protocol__msg__StatusCode;

// Struct for a sequence of protocol__msg__StatusCode.
typedef struct protocol__msg__StatusCode__Sequence
{
  protocol__msg__StatusCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__StatusCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__STATUS_CODE__STRUCT_H_
