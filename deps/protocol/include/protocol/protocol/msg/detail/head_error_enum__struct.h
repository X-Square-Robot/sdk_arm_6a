// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/HeadErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/head_error_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__HEAD_ERROR_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__HEAD_ERROR_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'HEARTBEAT_TIMEOUT'.
enum
{
  protocol__msg__HeadErrorEnum__HEARTBEAT_TIMEOUT = 1ul
};

/// Constant 'IMU_CONN_FAIL'.
/**
  * 头部板imu断连
 */
enum
{
  protocol__msg__HeadErrorEnum__IMU_CONN_FAIL = 17ul
};

/// Struct defined in msg/HeadErrorEnum in the package protocol.
/**
  * Unit: HEAD
  * 头部获取状态超时
 */
typedef struct protocol__msg__HeadErrorEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__HeadErrorEnum;

// Struct for a sequence of protocol__msg__HeadErrorEnum.
typedef struct protocol__msg__HeadErrorEnum__Sequence
{
  protocol__msg__HeadErrorEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__HeadErrorEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__HEAD_ERROR_ENUM__STRUCT_H_
