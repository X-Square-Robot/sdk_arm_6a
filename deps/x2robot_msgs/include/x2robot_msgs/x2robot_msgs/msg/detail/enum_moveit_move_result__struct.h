// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from x2robot_msgs:msg/EnumMoveitMoveResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/enum_moveit_move_result.h"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__ENUM_MOVEIT_MOVE_RESULT__STRUCT_H_
#define X2ROBOT_MSGS__MSG__DETAIL__ENUM_MOVEIT_MOVE_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'SUCCESS'.
/**
  * 规划与执行成功
 */
enum
{
  x2robot_msgs__msg__EnumMoveitMoveResult__SUCCESS = 0
};

/// Constant 'INVALID_TARGET'.
/**
  * 目标无效
 */
enum
{
  x2robot_msgs__msg__EnumMoveitMoveResult__INVALID_TARGET = 1
};

/// Constant 'INVALID_CURRENT_POS'.
/**
  * 未成功获取当前位置
 */
enum
{
  x2robot_msgs__msg__EnumMoveitMoveResult__INVALID_CURRENT_POS = 2
};

/// Constant 'PLANING_ACTION_NOT_READY'.
/**
  * Moveit规划服务(/move_action)未就绪
 */
enum
{
  x2robot_msgs__msg__EnumMoveitMoveResult__PLANING_ACTION_NOT_READY = 3
};

/// Constant 'PLANING_ACTION_REJECTED'.
/**
  * 规划请求被拒绝
 */
enum
{
  x2robot_msgs__msg__EnumMoveitMoveResult__PLANING_ACTION_REJECTED = 4
};

/// Constant 'PLANING_TIMEOUT'.
/**
  * 规划超时
 */
enum
{
  x2robot_msgs__msg__EnumMoveitMoveResult__PLANING_TIMEOUT = 5
};

/// Constant 'PLANING_FAILED'.
/**
  * 规划失败
 */
enum
{
  x2robot_msgs__msg__EnumMoveitMoveResult__PLANING_FAILED = 6
};

/// Constant 'EXECUTING_ACTION_NOT_READY'.
/**
  * 执行轨迹服务(/whole_body_joint_trajectory_controller/follow_joint_trajectory)未就绪
 */
enum
{
  x2robot_msgs__msg__EnumMoveitMoveResult__EXECUTING_ACTION_NOT_READY = 7
};

/// Constant 'EXECUTING_ACTION_REJECTED'.
/**
  * 轨迹执行请求被拒绝
 */
enum
{
  x2robot_msgs__msg__EnumMoveitMoveResult__EXECUTING_ACTION_REJECTED = 8
};

/// Constant 'EXECUTING_TIMEOUT'.
/**
  * 轨迹执行超时
 */
enum
{
  x2robot_msgs__msg__EnumMoveitMoveResult__EXECUTING_TIMEOUT = 9
};

/// Constant 'EXECUTING_FAILED'.
/**
  * 轨迹执行失败
 */
enum
{
  x2robot_msgs__msg__EnumMoveitMoveResult__EXECUTING_FAILED = 10
};

/// Constant 'EXCEPTION'.
/**
  * 执行过程中出现异常
 */
enum
{
  x2robot_msgs__msg__EnumMoveitMoveResult__EXCEPTION = 11
};

/// Struct defined in msg/EnumMoveitMoveResult in the package x2robot_msgs.
typedef struct x2robot_msgs__msg__EnumMoveitMoveResult
{
  uint8_t structure_needs_at_least_one_member;
} x2robot_msgs__msg__EnumMoveitMoveResult;

// Struct for a sequence of x2robot_msgs__msg__EnumMoveitMoveResult.
typedef struct x2robot_msgs__msg__EnumMoveitMoveResult__Sequence
{
  x2robot_msgs__msg__EnumMoveitMoveResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__msg__EnumMoveitMoveResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // X2ROBOT_MSGS__MSG__DETAIL__ENUM_MOVEIT_MOVE_RESULT__STRUCT_H_
