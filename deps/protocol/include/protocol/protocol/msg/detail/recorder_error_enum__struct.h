// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/RecorderErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/recorder_error_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__RECORDER_ERROR_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__RECORDER_ERROR_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'TOPIC_FREQ_LOW'.
enum
{
  protocol__msg__RecorderErrorEnum__TOPIC_FREQ_LOW = 1ul
};

/// Constant 'TOPIC_NO_DATA'.
/**
  * 完全无数据
 */
enum
{
  protocol__msg__RecorderErrorEnum__TOPIC_NO_DATA = 2ul
};

/// Constant 'RECORD_BLOCKED_COMPRESSING'.
/**
  * 无法开始录制：正在打包
 */
enum
{
  protocol__msg__RecorderErrorEnum__RECORD_BLOCKED_COMPRESSING = 3ul
};

/// Constant 'RECORD_BLOCKED_UPLOADING'.
/**
  * 无法开始录制：正在上传
 */
enum
{
  protocol__msg__RecorderErrorEnum__RECORD_BLOCKED_UPLOADING = 4ul
};

/// Constant 'RECORDING_TIME_TOO_LONG'.
/**
  * 录制时间过长
 */
enum
{
  protocol__msg__RecorderErrorEnum__RECORDING_TIME_TOO_LONG = 5ul
};

/// Constant 'DISK_SPACE_LOW_WARNING'.
/**
  * 磁盘空间不足
 */
enum
{
  protocol__msg__RecorderErrorEnum__DISK_SPACE_LOW_WARNING = 6ul
};

/// Constant 'DISK_SPACE_CRITICALLY_LOW'.
/**
  * 磁盘空间严重不足
 */
enum
{
  protocol__msg__RecorderErrorEnum__DISK_SPACE_CRITICALLY_LOW = 7ul
};

/// Struct defined in msg/RecorderErrorEnum in the package protocol.
/**
  * Unit: RECORDER
  * topic频率过低
 */
typedef struct protocol__msg__RecorderErrorEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__RecorderErrorEnum;

// Struct for a sequence of protocol__msg__RecorderErrorEnum.
typedef struct protocol__msg__RecorderErrorEnum__Sequence
{
  protocol__msg__RecorderErrorEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__RecorderErrorEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__RECORDER_ERROR_ENUM__STRUCT_H_
