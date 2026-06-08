// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/TaskManagerErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/task_manager_error_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__TASK_MANAGER_ERROR_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__TASK_MANAGER_ERROR_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'TASK_INIT_FAILED'.
enum
{
  protocol__msg__TaskManagerErrorEnum__TASK_INIT_FAILED = 16ul
};

/// Constant 'TASK_RUNNING_ERROR'.
/**
  * 任务运行错误
 */
enum
{
  protocol__msg__TaskManagerErrorEnum__TASK_RUNNING_ERROR = 17ul
};

/// Constant 'TASK_PAUSED_FAILED'.
/**
  * 任务暂停失败
 */
enum
{
  protocol__msg__TaskManagerErrorEnum__TASK_PAUSED_FAILED = 18ul
};

/// Constant 'TASK_RESUME_FAILED'.
/**
  * 任务继续失败
 */
enum
{
  protocol__msg__TaskManagerErrorEnum__TASK_RESUME_FAILED = 19ul
};

/// Constant 'TASK_TERMINATE_FAILED'.
/**
  * 任务终止失败
 */
enum
{
  protocol__msg__TaskManagerErrorEnum__TASK_TERMINATE_FAILED = 20ul
};

/// Constant 'TASK_SUSPEND_FAILED'.
/**
  * 任务挂起失败
 */
enum
{
  protocol__msg__TaskManagerErrorEnum__TASK_SUSPEND_FAILED = 21ul
};

/// Constant 'TASK_EXIT_SUSPEND_FAILED'.
/**
  * 任务退出挂起失败
 */
enum
{
  protocol__msg__TaskManagerErrorEnum__TASK_EXIT_SUSPEND_FAILED = 22ul
};

/// Constant 'TASK_FINISH_FAILED'.
/**
  * 任务完成后清理失败
 */
enum
{
  protocol__msg__TaskManagerErrorEnum__TASK_FINISH_FAILED = 23ul
};

/// Struct defined in msg/TaskManagerErrorEnum in the package protocol.
/**
  * Unit: TASK_MANAGER
  * 任务初始化失败
 */
typedef struct protocol__msg__TaskManagerErrorEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__TaskManagerErrorEnum;

// Struct for a sequence of protocol__msg__TaskManagerErrorEnum.
typedef struct protocol__msg__TaskManagerErrorEnum__Sequence
{
  protocol__msg__TaskManagerErrorEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__TaskManagerErrorEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__TASK_MANAGER_ERROR_ENUM__STRUCT_H_
