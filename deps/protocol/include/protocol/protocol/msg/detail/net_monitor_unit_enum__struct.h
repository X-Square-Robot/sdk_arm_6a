// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/NetMonitorUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/net_monitor_unit_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__NET_MONITOR_UNIT_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__NET_MONITOR_UNIT_ENUM__STRUCT_H_

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
  protocol__msg__NetMonitorUnitEnum__HEARTBEAT_TIMEOUT = 1ul
};

/// Constant 'NO_NETWORK'.
/**
  * 没有任何网络连接
 */
enum
{
  protocol__msg__NetMonitorUnitEnum__NO_NETWORK = 17ul
};

/// Constant 'NO_CONNECTIVITY'.
/**
  * 无法访问公网
 */
enum
{
  protocol__msg__NetMonitorUnitEnum__NO_CONNECTIVITY = 18ul
};

/// Constant 'INVALID_DEFAULT_ROUTE'.
/**
  * 路由配置错误
 */
enum
{
  protocol__msg__NetMonitorUnitEnum__INVALID_DEFAULT_ROUTE = 20ul
};

/// Constant 'NO_WIFI_SSID'.
/**
  * 没有WIFI可以连接
 */
enum
{
  protocol__msg__NetMonitorUnitEnum__NO_WIFI_SSID = 33ul
};

/// Constant 'FAILED_WIFI_CONNECTION'.
/**
  * 连接WiFi失败
 */
enum
{
  protocol__msg__NetMonitorUnitEnum__FAILED_WIFI_CONNECTION = 34ul
};

/// Constant 'NO_MODEM'.
/**
  * 没有5G模块
 */
enum
{
  protocol__msg__NetMonitorUnitEnum__NO_MODEM = 49ul
};

/// Constant 'NO_SIM_CARD'.
/**
  * 没有SIM卡
 */
enum
{
  protocol__msg__NetMonitorUnitEnum__NO_SIM_CARD = 50ul
};

/// Constant 'NO_MODEM_SIGNAL'.
/**
  * 没有信号，检查射频信号
 */
enum
{
  protocol__msg__NetMonitorUnitEnum__NO_MODEM_SIGNAL = 51ul
};

/// Constant 'FAILED_MODEM_REGISTRATION'.
/**
  * 基站入网失败，联系ISP
 */
enum
{
  protocol__msg__NetMonitorUnitEnum__FAILED_MODEM_REGISTRATION = 52ul
};

/// Struct defined in msg/NetMonitorUnitEnum in the package protocol.
/**
  * Unit: NET_MONITOR
  * 网络监控节点获取状态超时
 */
typedef struct protocol__msg__NetMonitorUnitEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__NetMonitorUnitEnum;

// Struct for a sequence of protocol__msg__NetMonitorUnitEnum.
typedef struct protocol__msg__NetMonitorUnitEnum__Sequence
{
  protocol__msg__NetMonitorUnitEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__NetMonitorUnitEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__NET_MONITOR_UNIT_ENUM__STRUCT_H_
