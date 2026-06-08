// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/KincoLiftWaistErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/kinco_lift_waist_error_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__KINCO_LIFT_WAIST_ERROR_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__KINCO_LIFT_WAIST_ERROR_ENUM__STRUCT_H_

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
  protocol__msg__KincoLiftWaistErrorEnum__HEARTBEAT_TIMEOUT = 1ul
};

/// Constant 'MOTOR_NORMAL'.
/**
  * 升降腰正常
 */
enum
{
  protocol__msg__KincoLiftWaistErrorEnum__MOTOR_NORMAL = 16ul
};

/// Constant 'MOTOR_ABNORMAL'.
/**
  * 升降腰不正常
 */
enum
{
  protocol__msg__KincoLiftWaistErrorEnum__MOTOR_ABNORMAL = 17ul
};

/// Struct defined in msg/KincoLiftWaistErrorEnum in the package protocol.
/**
  * Unit: KINCO_LIFT_WAIST
  * EX001腰部步科电机获取状态超时
 */
typedef struct protocol__msg__KincoLiftWaistErrorEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__KincoLiftWaistErrorEnum;

// Struct for a sequence of protocol__msg__KincoLiftWaistErrorEnum.
typedef struct protocol__msg__KincoLiftWaistErrorEnum__Sequence
{
  protocol__msg__KincoLiftWaistErrorEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__KincoLiftWaistErrorEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__KINCO_LIFT_WAIST_ERROR_ENUM__STRUCT_H_
