// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/LidarErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/lidar_error_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__LIDAR_ERROR_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__LIDAR_ERROR_ENUM__STRUCT_H_

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
  protocol__msg__LidarErrorEnum__HEARTBEAT_TIMEOUT = 1ul
};

/// Constant 'CONN_FAIL'.
/**
  * 连接失败
 */
enum
{
  protocol__msg__LidarErrorEnum__CONN_FAIL = 17ul
};

/// Constant 'PARSE_CRC_FAIL'.
/**
  * 解析校验失败
 */
enum
{
  protocol__msg__LidarErrorEnum__PARSE_CRC_FAIL = 18ul
};

/// Struct defined in msg/LidarErrorEnum in the package protocol.
/**
  * Unit: LIDAR
  * 雷达获取状态超时
 */
typedef struct protocol__msg__LidarErrorEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__LidarErrorEnum;

// Struct for a sequence of protocol__msg__LidarErrorEnum.
typedef struct protocol__msg__LidarErrorEnum__Sequence
{
  protocol__msg__LidarErrorEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__LidarErrorEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__LIDAR_ERROR_ENUM__STRUCT_H_
