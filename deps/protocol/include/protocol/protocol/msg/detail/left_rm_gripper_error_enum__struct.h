// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/LeftRmGripperErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/left_rm_gripper_error_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__LEFT_RM_GRIPPER_ERROR_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__LEFT_RM_GRIPPER_ERROR_ENUM__STRUCT_H_

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
  protocol__msg__LeftRmGripperErrorEnum__HEARTBEAT_TIMEOUT = 1ul
};

/// Constant 'MOTOR_NORMAL'.
/**
  * 左夹爪电机正常
 */
enum
{
  protocol__msg__LeftRmGripperErrorEnum__MOTOR_NORMAL = 16ul
};

/// Constant 'OVER_VOLTAGE'.
/**
  * 左夹爪电机过压
 */
enum
{
  protocol__msg__LeftRmGripperErrorEnum__OVER_VOLTAGE = 17ul
};

/// Constant 'UNDER_VOLTAGE'.
/**
  * 左夹爪电机欠压
 */
enum
{
  protocol__msg__LeftRmGripperErrorEnum__UNDER_VOLTAGE = 18ul
};

/// Constant 'OVER_CURRENT'.
/**
  * 左夹爪电机过流
 */
enum
{
  protocol__msg__LeftRmGripperErrorEnum__OVER_CURRENT = 19ul
};

/// Constant 'MOS_OVER_TEMP'.
/**
  * 左夹爪电机MOS过温
 */
enum
{
  protocol__msg__LeftRmGripperErrorEnum__MOS_OVER_TEMP = 20ul
};

/// Constant 'MOTOR_OVER_HEAT'.
/**
  * 左夹爪电机线圈过热
 */
enum
{
  protocol__msg__LeftRmGripperErrorEnum__MOTOR_OVER_HEAT = 21ul
};

/// Constant 'COMMUNICATION_LOST'.
/**
  * 左夹爪电机通讯丢失
 */
enum
{
  protocol__msg__LeftRmGripperErrorEnum__COMMUNICATION_LOST = 22ul
};

/// Constant 'OVERLOAD'.
/**
  * 左夹爪电机过载
 */
enum
{
  protocol__msg__LeftRmGripperErrorEnum__OVERLOAD = 23ul
};

/// Constant 'PHASE_LOSS'.
/**
  * 左夹爪电机缺相
 */
enum
{
  protocol__msg__LeftRmGripperErrorEnum__PHASE_LOSS = 24ul
};

/// Constant 'MOTOR_SHORT_CIRCUIT'.
/**
  * 左夹爪电机短路
 */
enum
{
  protocol__msg__LeftRmGripperErrorEnum__MOTOR_SHORT_CIRCUIT = 25ul
};

/// Constant 'MOTOR_STALL'.
/**
  * 左夹爪电机堵转
 */
enum
{
  protocol__msg__LeftRmGripperErrorEnum__MOTOR_STALL = 26ul
};

/// Constant 'RESET_FAULT'.
/**
  * 左夹爪电机复位故障
 */
enum
{
  protocol__msg__LeftRmGripperErrorEnum__RESET_FAULT = 27ul
};

/// Struct defined in msg/LeftRmGripperErrorEnum in the package protocol.
/**
  * Unit: LEFT_RM_GRIPPER
  * 左 RM 夹爪获取状态超时
 */
typedef struct protocol__msg__LeftRmGripperErrorEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__LeftRmGripperErrorEnum;

// Struct for a sequence of protocol__msg__LeftRmGripperErrorEnum.
typedef struct protocol__msg__LeftRmGripperErrorEnum__Sequence
{
  protocol__msg__LeftRmGripperErrorEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__LeftRmGripperErrorEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__LEFT_RM_GRIPPER_ERROR_ENUM__STRUCT_H_
