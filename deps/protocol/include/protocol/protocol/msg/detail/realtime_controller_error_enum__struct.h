// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/RealtimeControllerErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/realtime_controller_error_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__REALTIME_CONTROLLER_ERROR_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__REALTIME_CONTROLLER_ERROR_ENUM__STRUCT_H_

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
  protocol__msg__RealtimeControllerErrorEnum__HEARTBEAT_TIMEOUT = 1ul
};

/// Constant 'IS_WORKING'.
/**
  * 正常工作状态
 */
enum
{
  protocol__msg__RealtimeControllerErrorEnum__IS_WORKING = 16ul
};

/// Constant 'IS_CONTROLMODECHANGED'.
/**
  * 执行器控制模式切换中
 */
enum
{
  protocol__msg__RealtimeControllerErrorEnum__IS_CONTROLMODECHANGED = 17ul
};

/// Constant 'IS_TRAJRUNNING'.
/**
  * 插值轨迹运行中
 */
enum
{
  protocol__msg__RealtimeControllerErrorEnum__IS_TRAJRUNNING = 18ul
};

/// Constant 'IS_BACKOFF'.
/**
  * 碰撞回退
 */
enum
{
  protocol__msg__RealtimeControllerErrorEnum__IS_BACKOFF = 19ul
};

/// Constant 'IS_AVOIDLIMITS'.
/**
  * 限位回退
 */
enum
{
  protocol__msg__RealtimeControllerErrorEnum__IS_AVOIDLIMITS = 20ul
};

/// Constant 'IS_SOFTSTOP'.
/**
  * 软急停，执行器下使能
 */
enum
{
  protocol__msg__RealtimeControllerErrorEnum__IS_SOFTSTOP = 21ul
};

/// Constant 'IS_ESTOPPED'.
/**
  * 硬急停，执行器下电
 */
enum
{
  protocol__msg__RealtimeControllerErrorEnum__IS_ESTOPPED = 22ul
};

/// Constant 'IS_READYFORRESETACK'.
/**
  * 执行器正常，等待启动
 */
enum
{
  protocol__msg__RealtimeControllerErrorEnum__IS_READYFORRESETACK = 23ul
};

/// Constant 'IS_INTERNALERROR'.
/**
  * 内部错误
 */
enum
{
  protocol__msg__RealtimeControllerErrorEnum__IS_INTERNALERROR = 24ul
};

/// Constant 'IS_LIFTWAISTHOMING'.
/**
  * 升降腰正在回零
 */
enum
{
  protocol__msg__RealtimeControllerErrorEnum__IS_LIFTWAISTHOMING = 25ul
};

/// Struct defined in msg/RealtimeControllerErrorEnum in the package protocol.
/**
  * Unit: REALTIME_CONTROLLER
  * 安全控制器状态获取超时
 */
typedef struct protocol__msg__RealtimeControllerErrorEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__RealtimeControllerErrorEnum;

// Struct for a sequence of protocol__msg__RealtimeControllerErrorEnum.
typedef struct protocol__msg__RealtimeControllerErrorEnum__Sequence
{
  protocol__msg__RealtimeControllerErrorEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__RealtimeControllerErrorEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__REALTIME_CONTROLLER_ERROR_ENUM__STRUCT_H_
