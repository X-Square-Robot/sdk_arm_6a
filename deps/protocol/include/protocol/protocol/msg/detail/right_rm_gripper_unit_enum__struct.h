// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/RightRmGripperUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/right_rm_gripper_unit_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__RIGHT_RM_GRIPPER_UNIT_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__RIGHT_RM_GRIPPER_UNIT_ENUM__STRUCT_H_

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
  protocol__msg__RightRmGripperUnitEnum__HEARTBEAT_TIMEOUT = 1ul
};

/// Constant 'J1_MOTOR_NORMAL'.
/**
  * 右夹爪电机正常
 */
enum
{
  protocol__msg__RightRmGripperUnitEnum__J1_MOTOR_NORMAL = 16ul
};

/// Constant 'OVER_VOLTAGE'.
/**
  * 右夹爪电机过压
 */
enum
{
  protocol__msg__RightRmGripperUnitEnum__OVER_VOLTAGE = 17ul
};

/// Constant 'UNDER_VOLTAGE'.
/**
  * 右夹爪电机欠压
 */
enum
{
  protocol__msg__RightRmGripperUnitEnum__UNDER_VOLTAGE = 18ul
};

/// Constant 'OVER_CURRENT'.
/**
  * 右夹爪电机过流
 */
enum
{
  protocol__msg__RightRmGripperUnitEnum__OVER_CURRENT = 19ul
};

/// Constant 'MOS_OVER_TEMP'.
/**
  * 右夹爪电机MOS过温
 */
enum
{
  protocol__msg__RightRmGripperUnitEnum__MOS_OVER_TEMP = 20ul
};

/// Constant 'MOTOR_OVER_HEAT'.
/**
  * 右夹爪电机线圈过热
 */
enum
{
  protocol__msg__RightRmGripperUnitEnum__MOTOR_OVER_HEAT = 21ul
};

/// Constant 'COMMUNICATION_LOST'.
/**
  * 右夹爪电机通讯丢失
 */
enum
{
  protocol__msg__RightRmGripperUnitEnum__COMMUNICATION_LOST = 22ul
};

/// Constant 'OVERLOAD'.
/**
  * 右夹爪电机过载
 */
enum
{
  protocol__msg__RightRmGripperUnitEnum__OVERLOAD = 23ul
};

/// Constant 'PHASE_LOSS'.
/**
  * 右夹爪电机缺相
 */
enum
{
  protocol__msg__RightRmGripperUnitEnum__PHASE_LOSS = 24ul
};

/// Constant 'MOTOR_SHORT_CIRCUIT'.
/**
  * 右夹爪电机短路
 */
enum
{
  protocol__msg__RightRmGripperUnitEnum__MOTOR_SHORT_CIRCUIT = 25ul
};

/// Constant 'MOTOR_STALL'.
/**
  * 右夹爪电机堵转
 */
enum
{
  protocol__msg__RightRmGripperUnitEnum__MOTOR_STALL = 26ul
};

/// Constant 'RESET_FAULT'.
/**
  * 右夹爪电机复位故障
 */
enum
{
  protocol__msg__RightRmGripperUnitEnum__RESET_FAULT = 27ul
};

/// Struct defined in msg/RightRmGripperUnitEnum in the package protocol.
/**
  * Unit: RIGHT_RM_GRIPPER
  * 右 RM 夹爪获取状态超时
 */
typedef struct protocol__msg__RightRmGripperUnitEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__RightRmGripperUnitEnum;

// Struct for a sequence of protocol__msg__RightRmGripperUnitEnum.
typedef struct protocol__msg__RightRmGripperUnitEnum__Sequence
{
  protocol__msg__RightRmGripperUnitEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__RightRmGripperUnitEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__RIGHT_RM_GRIPPER_UNIT_ENUM__STRUCT_H_
