// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/RightTianjiArmErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/right_tianji_arm_error_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__RIGHT_TIANJI_ARM_ERROR_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__RIGHT_TIANJI_ARM_ERROR_ENUM__STRUCT_H_

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
  protocol__msg__RightTianjiArmErrorEnum__HEARTBEAT_TIMEOUT = 1ul
};

/// Constant 'J1_MOTOR_NORMAL'.
enum
{
  protocol__msg__RightTianjiArmErrorEnum__J1_MOTOR_NORMAL = 16ul
};

/// Constant 'J1_MOTOR_ABNORMAL'.
enum
{
  protocol__msg__RightTianjiArmErrorEnum__J1_MOTOR_ABNORMAL = 17ul
};

/// Constant 'J2_MOTOR_NORMAL'.
enum
{
  protocol__msg__RightTianjiArmErrorEnum__J2_MOTOR_NORMAL = 32ul
};

/// Constant 'J2_MOTOR_ABNORMAL'.
enum
{
  protocol__msg__RightTianjiArmErrorEnum__J2_MOTOR_ABNORMAL = 33ul
};

/// Constant 'J3_MOTOR_NORMAL'.
enum
{
  protocol__msg__RightTianjiArmErrorEnum__J3_MOTOR_NORMAL = 48ul
};

/// Constant 'J3_MOTOR_ABNORMAL'.
enum
{
  protocol__msg__RightTianjiArmErrorEnum__J3_MOTOR_ABNORMAL = 49ul
};

/// Constant 'J4_MOTOR_NORMAL'.
enum
{
  protocol__msg__RightTianjiArmErrorEnum__J4_MOTOR_NORMAL = 64ul
};

/// Constant 'J4_MOTOR_ABNORMAL'.
enum
{
  protocol__msg__RightTianjiArmErrorEnum__J4_MOTOR_ABNORMAL = 65ul
};

/// Constant 'J5_MOTOR_NORMAL'.
enum
{
  protocol__msg__RightTianjiArmErrorEnum__J5_MOTOR_NORMAL = 80ul
};

/// Constant 'J5_MOTOR_ABNORMAL'.
enum
{
  protocol__msg__RightTianjiArmErrorEnum__J5_MOTOR_ABNORMAL = 81ul
};

/// Constant 'J6_MOTOR_NORMAL'.
enum
{
  protocol__msg__RightTianjiArmErrorEnum__J6_MOTOR_NORMAL = 96ul
};

/// Constant 'J6_MOTOR_ABNORMAL'.
enum
{
  protocol__msg__RightTianjiArmErrorEnum__J6_MOTOR_ABNORMAL = 97ul
};

/// Constant 'J7_MOTOR_NORMAL'.
enum
{
  protocol__msg__RightTianjiArmErrorEnum__J7_MOTOR_NORMAL = 112ul
};

/// Constant 'J7_MOTOR_ABNORMAL'.
enum
{
  protocol__msg__RightTianjiArmErrorEnum__J7_MOTOR_ABNORMAL = 113ul
};

/// Struct defined in msg/RightTianjiArmErrorEnum in the package protocol.
/**
  * Unit: RIGHT_TIANJI_ARM
  * 天机右臂获取状态超时
 */
typedef struct protocol__msg__RightTianjiArmErrorEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__RightTianjiArmErrorEnum;

// Struct for a sequence of protocol__msg__RightTianjiArmErrorEnum.
typedef struct protocol__msg__RightTianjiArmErrorEnum__Sequence
{
  protocol__msg__RightTianjiArmErrorEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__RightTianjiArmErrorEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__RIGHT_TIANJI_ARM_ERROR_ENUM__STRUCT_H_
