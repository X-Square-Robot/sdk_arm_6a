// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/HeadMountUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/head_mount_unit_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__HEAD_MOUNT_UNIT_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__HEAD_MOUNT_UNIT_ENUM__STRUCT_H_

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
  protocol__msg__HeadMountUnitEnum__HEARTBEAT_TIMEOUT = 1ul
};

/// Constant 'HEAD_LED_FAIL'.
/**
  * 指示灯配置异常
 */
enum
{
  protocol__msg__HeadMountUnitEnum__HEAD_LED_FAIL = 17ul
};

/// Constant 'GRIPPER_BUTTON_FAIL'.
/**
  * 按键配置异常
 */
enum
{
  protocol__msg__HeadMountUnitEnum__GRIPPER_BUTTON_FAIL = 18ul
};

/// Constant 'GRIPPER_IMU_FAIL'.
/**
  * IMU配置异常
 */
enum
{
  protocol__msg__HeadMountUnitEnum__GRIPPER_IMU_FAIL = 19ul
};

/// Constant 'HEAD_IMU_FAIL'.
/**
  * IMU配置异常
 */
enum
{
  protocol__msg__HeadMountUnitEnum__HEAD_IMU_FAIL = 21ul
};

/// Constant 'HEAD_BATTERY_FAIL'.
/**
  * 电池配置异常
 */
enum
{
  protocol__msg__HeadMountUnitEnum__HEAD_BATTERY_FAIL = 20ul
};

/// Struct defined in msg/HeadMountUnitEnum in the package protocol.
/**
  * Unit: HEAD_MOUNT
  * 心跳超时
 */
typedef struct protocol__msg__HeadMountUnitEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__HeadMountUnitEnum;

// Struct for a sequence of protocol__msg__HeadMountUnitEnum.
typedef struct protocol__msg__HeadMountUnitEnum__Sequence
{
  protocol__msg__HeadMountUnitEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__HeadMountUnitEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__HEAD_MOUNT_UNIT_ENUM__STRUCT_H_
