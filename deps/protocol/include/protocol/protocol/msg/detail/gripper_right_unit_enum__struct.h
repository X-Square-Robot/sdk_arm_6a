// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/GripperRightUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/gripper_right_unit_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__GRIPPER_RIGHT_UNIT_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__GRIPPER_RIGHT_UNIT_ENUM__STRUCT_H_

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
  protocol__msg__GripperRightUnitEnum__HEARTBEAT_TIMEOUT = 1ul
};

/// Constant 'GRIPPER_ENCODER_FAIL'.
/**
  * 编码器数据解析异常
 */
enum
{
  protocol__msg__GripperRightUnitEnum__GRIPPER_ENCODER_FAIL = 17ul
};

/// Constant 'GRIPPER_LED_FAIL'.
/**
  * 指示灯配置异常
 */
enum
{
  protocol__msg__GripperRightUnitEnum__GRIPPER_LED_FAIL = 18ul
};

/// Constant 'GRIPPER_BUTTON_FAIL'.
/**
  * 按键配置异常
 */
enum
{
  protocol__msg__GripperRightUnitEnum__GRIPPER_BUTTON_FAIL = 19ul
};

/// Constant 'GRIPPER_IMU_FAIL'.
/**
  * IMU配置异常
 */
enum
{
  protocol__msg__GripperRightUnitEnum__GRIPPER_IMU_FAIL = 20ul
};

/// Constant 'GRIPPER_FILL_LIGHT_FAIL'.
/**
  * 补光灯配置异常
 */
enum
{
  protocol__msg__GripperRightUnitEnum__GRIPPER_FILL_LIGHT_FAIL = 21ul
};

/// Constant 'GRIPPER_BATTERY_FAIL'.
/**
  * 电池电量配置异常
 */
enum
{
  protocol__msg__GripperRightUnitEnum__GRIPPER_BATTERY_FAIL = 22ul
};

/// Constant 'GRIPPER_TACTILE_FAIL'.
/**
  * 触觉传感器异常
 */
enum
{
  protocol__msg__GripperRightUnitEnum__GRIPPER_TACTILE_FAIL = 23ul
};

/// Struct defined in msg/GripperRightUnitEnum in the package protocol.
/**
  * Unit: GRIPPER_RIGHT
  * 心跳超时
 */
typedef struct protocol__msg__GripperRightUnitEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__GripperRightUnitEnum;

// Struct for a sequence of protocol__msg__GripperRightUnitEnum.
typedef struct protocol__msg__GripperRightUnitEnum__Sequence
{
  protocol__msg__GripperRightUnitEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__GripperRightUnitEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__GRIPPER_RIGHT_UNIT_ENUM__STRUCT_H_
