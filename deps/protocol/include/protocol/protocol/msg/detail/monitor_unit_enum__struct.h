// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/MonitorUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/monitor_unit_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__MONITOR_UNIT_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__MONITOR_UNIT_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'SYSTEM_MONITOR'.
enum
{
  protocol__msg__MonitorUnitEnum__SYSTEM_MONITOR = 1
};

/// Constant 'NET_MONITOR'.
enum
{
  protocol__msg__MonitorUnitEnum__NET_MONITOR = 2
};

/// Struct defined in msg/MonitorUnitEnum in the package protocol.
typedef struct protocol__msg__MonitorUnitEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__MonitorUnitEnum;

// Struct for a sequence of protocol__msg__MonitorUnitEnum.
typedef struct protocol__msg__MonitorUnitEnum__Sequence
{
  protocol__msg__MonitorUnitEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__MonitorUnitEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MONITOR_UNIT_ENUM__STRUCT_H_
