// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/SystemMonitorUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/system_monitor_unit_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__SYSTEM_MONITOR_UNIT_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__SYSTEM_MONITOR_UNIT_ENUM__STRUCT_H_

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
  protocol__msg__SystemMonitorUnitEnum__HEARTBEAT_TIMEOUT = 1ul
};

/// Constant 'ROM_HIGH_USAGE'.
/**
  * 磁盘负载过高
 */
enum
{
  protocol__msg__SystemMonitorUnitEnum__ROM_HIGH_USAGE = 16ul
};

/// Constant 'RAM_HIGH_USAGE'.
/**
  * 运存负载过高
 */
enum
{
  protocol__msg__SystemMonitorUnitEnum__RAM_HIGH_USAGE = 17ul
};

/// Constant 'CPU_OVERHEAT'.
/**
  * CPU过温
 */
enum
{
  protocol__msg__SystemMonitorUnitEnum__CPU_OVERHEAT = 18ul
};

/// Constant 'GPU_OVERHEAT'.
/**
  * GPU过温
 */
enum
{
  protocol__msg__SystemMonitorUnitEnum__GPU_OVERHEAT = 19ul
};

/// Struct defined in msg/SystemMonitorUnitEnum in the package protocol.
/**
  * Unit: SYSTEM_MONITOR
  * 系统资源监控节点获取状态超时
 */
typedef struct protocol__msg__SystemMonitorUnitEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__SystemMonitorUnitEnum;

// Struct for a sequence of protocol__msg__SystemMonitorUnitEnum.
typedef struct protocol__msg__SystemMonitorUnitEnum__Sequence
{
  protocol__msg__SystemMonitorUnitEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__SystemMonitorUnitEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__SYSTEM_MONITOR_UNIT_ENUM__STRUCT_H_
