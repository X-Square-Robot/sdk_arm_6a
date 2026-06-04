// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/Ti5WaistUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/ti5_waist_unit_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__TI5_WAIST_UNIT_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__TI5_WAIST_UNIT_ENUM__STRUCT_H_

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
  protocol__msg__Ti5WaistUnitEnum__HEARTBEAT_TIMEOUT = 1ul
};

/// Constant 'J1_MOTOR_NORMAL'.
enum
{
  protocol__msg__Ti5WaistUnitEnum__J1_MOTOR_NORMAL = 16ul
};

/// Constant 'J1_MOTOR_ABNORMAL'.
enum
{
  protocol__msg__Ti5WaistUnitEnum__J1_MOTOR_ABNORMAL = 17ul
};

/// Constant 'J2_MOTOR_NORMAL'.
enum
{
  protocol__msg__Ti5WaistUnitEnum__J2_MOTOR_NORMAL = 32ul
};

/// Constant 'J2_MOTOR_ABNORMAL'.
enum
{
  protocol__msg__Ti5WaistUnitEnum__J2_MOTOR_ABNORMAL = 33ul
};

/// Constant 'J3_MOTOR_NORMAL'.
enum
{
  protocol__msg__Ti5WaistUnitEnum__J3_MOTOR_NORMAL = 48ul
};

/// Constant 'J3_MOTOR_ABNORMAL'.
enum
{
  protocol__msg__Ti5WaistUnitEnum__J3_MOTOR_ABNORMAL = 49ul
};

/// Constant 'J4_MOTOR_NORMAL'.
enum
{
  protocol__msg__Ti5WaistUnitEnum__J4_MOTOR_NORMAL = 64ul
};

/// Constant 'J4_MOTOR_ABNORMAL'.
enum
{
  protocol__msg__Ti5WaistUnitEnum__J4_MOTOR_ABNORMAL = 65ul
};

/// Struct defined in msg/Ti5WaistUnitEnum in the package protocol.
/**
  * Unit: TI5_WAIST
  * 钛虎腰部电机获取状态超时
 */
typedef struct protocol__msg__Ti5WaistUnitEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__Ti5WaistUnitEnum;

// Struct for a sequence of protocol__msg__Ti5WaistUnitEnum.
typedef struct protocol__msg__Ti5WaistUnitEnum__Sequence
{
  protocol__msg__Ti5WaistUnitEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__Ti5WaistUnitEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__TI5_WAIST_UNIT_ENUM__STRUCT_H_
