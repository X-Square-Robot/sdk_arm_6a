// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/BodyUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/body_unit_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__BODY_UNIT_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__BODY_UNIT_ENUM__STRUCT_H_

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
  protocol__msg__BodyUnitEnum__HEARTBEAT_TIMEOUT = 1ul
};

/// Constant 'IMU_CONN_FAIL'.
/**
  * 身体板imu断连
 */
enum
{
  protocol__msg__BodyUnitEnum__IMU_CONN_FAIL = 17ul
};

/// Struct defined in msg/BodyUnitEnum in the package protocol.
/**
  * Unit: BODY
  * 身体板获取状态超时
 */
typedef struct protocol__msg__BodyUnitEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__BodyUnitEnum;

// Struct for a sequence of protocol__msg__BodyUnitEnum.
typedef struct protocol__msg__BodyUnitEnum__Sequence
{
  protocol__msg__BodyUnitEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__BodyUnitEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__BODY_UNIT_ENUM__STRUCT_H_
