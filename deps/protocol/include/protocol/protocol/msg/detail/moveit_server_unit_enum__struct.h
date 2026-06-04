// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/MoveitServerUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/moveit_server_unit_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__MOVEIT_SERVER_UNIT_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__MOVEIT_SERVER_UNIT_ENUM__STRUCT_H_

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
  protocol__msg__MoveitServerUnitEnum__HEARTBEAT_TIMEOUT = 1ul
};

/// Constant 'SUCCESS'.
/**
  * 规划与执行成功
 */
enum
{
  protocol__msg__MoveitServerUnitEnum__SUCCESS = 16ul
};

/// Constant 'INVALID_TARGET'.
/**
  * 目标无效
 */
enum
{
  protocol__msg__MoveitServerUnitEnum__INVALID_TARGET = 17ul
};

/// Constant 'INVALID_CURRENT_POS'.
/**
  * 未成功获取当前位置
 */
enum
{
  protocol__msg__MoveitServerUnitEnum__INVALID_CURRENT_POS = 18ul
};

/// Constant 'PLANING_ACTION_NOT_READY'.
/**
  * Moveit规划服务(/move_action)未就绪
 */
enum
{
  protocol__msg__MoveitServerUnitEnum__PLANING_ACTION_NOT_READY = 19ul
};

/// Constant 'PLANING_ACTION_REJECTED'.
/**
  * 规划请求被拒绝
 */
enum
{
  protocol__msg__MoveitServerUnitEnum__PLANING_ACTION_REJECTED = 20ul
};

/// Constant 'PLANING_TIMEOUT'.
/**
  * 规划超时
 */
enum
{
  protocol__msg__MoveitServerUnitEnum__PLANING_TIMEOUT = 21ul
};

/// Constant 'PLANING_FAILED'.
/**
  * 规划失败
 */
enum
{
  protocol__msg__MoveitServerUnitEnum__PLANING_FAILED = 22ul
};

/// Constant 'EXECUTING_ACTION_NOT_READY'.
/**
  * 执行轨迹服务(/whole_body_joint_trajectory_controller/follow_joint_trajectory)未就绪
 */
enum
{
  protocol__msg__MoveitServerUnitEnum__EXECUTING_ACTION_NOT_READY = 23ul
};

/// Constant 'EXECUTING_ACTION_REJECTED'.
/**
  * 轨迹执行请求被拒绝
 */
enum
{
  protocol__msg__MoveitServerUnitEnum__EXECUTING_ACTION_REJECTED = 24ul
};

/// Constant 'EXECUTING_TIMEOUT'.
/**
  * 轨迹执行超时
 */
enum
{
  protocol__msg__MoveitServerUnitEnum__EXECUTING_TIMEOUT = 25ul
};

/// Constant 'EXECUTING_FAILED'.
/**
  * 轨迹执行失败
 */
enum
{
  protocol__msg__MoveitServerUnitEnum__EXECUTING_FAILED = 26ul
};

/// Constant 'EXCEPTION'.
/**
  * 执行过程中出现异常
 */
enum
{
  protocol__msg__MoveitServerUnitEnum__EXCEPTION = 27ul
};

/// Struct defined in msg/MoveitServerUnitEnum in the package protocol.
/**
  * Unit: MOVEIT_SERVER
  * moveit server获取状态超时
 */
typedef struct protocol__msg__MoveitServerUnitEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__MoveitServerUnitEnum;

// Struct for a sequence of protocol__msg__MoveitServerUnitEnum.
typedef struct protocol__msg__MoveitServerUnitEnum__Sequence
{
  protocol__msg__MoveitServerUnitEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__MoveitServerUnitEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MOVEIT_SERVER_UNIT_ENUM__STRUCT_H_
