// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/MasterLeftArmErrorEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/master_left_arm_error_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__MASTER_LEFT_ARM_ERROR_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__MASTER_LEFT_ARM_ERROR_ENUM__STRUCT_H_

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
  protocol__msg__MasterLeftArmErrorEnum__HEARTBEAT_TIMEOUT = 1ul
};

/// Constant 'J1_MOTOR_NORMAL'.
/**
  * 左主臂J1电机正常
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J1_MOTOR_NORMAL = 16ul
};

/// Constant 'J1_OVER_VOLTAGE'.
/**
  * 左主臂J1轴过压
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J1_OVER_VOLTAGE = 17ul
};

/// Constant 'J1_UNDER_VOLTAGE'.
/**
  * 左主臂J1轴欠压
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J1_UNDER_VOLTAGE = 18ul
};

/// Constant 'J1_OVER_CURRENT'.
/**
  * 左主臂J1过流
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J1_OVER_CURRENT = 19ul
};

/// Constant 'J1_MOS_OVER_TEMP'.
/**
  * 左主臂J1 MOS过热
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J1_MOS_OVER_TEMP = 20ul
};

/// Constant 'J1_MOTOR_OVER_HEAT'.
/**
  * 左主臂J1电机过热
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J1_MOTOR_OVER_HEAT = 21ul
};

/// Constant 'J1_COMMUNICATION_LOST'.
/**
  * 左主臂J1通讯丢失
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J1_COMMUNICATION_LOST = 22ul
};

/// Constant 'J1_OVERLOAD'.
/**
  * 左主臂J1过载
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J1_OVERLOAD = 23ul
};

/// Constant 'J2_MOTOR_NORMAL'.
/**
  * 左主臂J2电机正常
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J2_MOTOR_NORMAL = 32ul
};

/// Constant 'J2_OVER_VOLTAGE'.
/**
  * 左主臂J2轴过压
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J2_OVER_VOLTAGE = 33ul
};

/// Constant 'J2_UNDER_VOLTAGE'.
/**
  * 左主臂J2轴欠压
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J2_UNDER_VOLTAGE = 34ul
};

/// Constant 'J2_OVER_CURRENT'.
/**
  * 左主臂J2过流
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J2_OVER_CURRENT = 35ul
};

/// Constant 'J2_MOS_OVER_TEMP'.
/**
  * 左主臂J2 MOS过热
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J2_MOS_OVER_TEMP = 36ul
};

/// Constant 'J2_MOTOR_OVER_HEAT'.
/**
  * 左主臂J2电机过热
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J2_MOTOR_OVER_HEAT = 37ul
};

/// Constant 'J2_COMMUNICATION_LOST'.
/**
  * 左主臂J2通讯丢失
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J2_COMMUNICATION_LOST = 38ul
};

/// Constant 'J2_OVERLOAD'.
/**
  * 左主臂J2过载
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J2_OVERLOAD = 39ul
};

/// Constant 'J3_MOTOR_NORMAL'.
/**
  * 左主臂J3电机正常
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J3_MOTOR_NORMAL = 48ul
};

/// Constant 'J3_OVER_VOLTAGE'.
/**
  * 左主臂J3轴过压
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J3_OVER_VOLTAGE = 49ul
};

/// Constant 'J3_UNDER_VOLTAGE'.
/**
  * 左主臂J3轴欠压
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J3_UNDER_VOLTAGE = 50ul
};

/// Constant 'J3_OVER_CURRENT'.
/**
  * 左主臂J3过流
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J3_OVER_CURRENT = 51ul
};

/// Constant 'J3_MOS_OVER_TEMP'.
/**
  * 左主臂J3 MOS过热
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J3_MOS_OVER_TEMP = 52ul
};

/// Constant 'J3_MOTOR_OVER_HEAT'.
/**
  * 左主臂J3电机过热
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J3_MOTOR_OVER_HEAT = 53ul
};

/// Constant 'J3_COMMUNICATION_LOST'.
/**
  * 左主臂J3通讯丢失
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J3_COMMUNICATION_LOST = 54ul
};

/// Constant 'J3_OVERLOAD'.
/**
  * 左主臂J3过载
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J3_OVERLOAD = 55ul
};

/// Constant 'J4_MOTOR_NORMAL'.
/**
  * 左主臂J4电机正常
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J4_MOTOR_NORMAL = 64ul
};

/// Constant 'J4_OVER_VOLTAGE'.
/**
  * 左主臂J4轴过压
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J4_OVER_VOLTAGE = 65ul
};

/// Constant 'J4_UNDER_VOLTAGE'.
/**
  * 左主臂J4轴欠压
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J4_UNDER_VOLTAGE = 66ul
};

/// Constant 'J4_OVER_CURRENT'.
/**
  * 左主臂J4过流
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J4_OVER_CURRENT = 67ul
};

/// Constant 'J4_MOS_OVER_TEMP'.
/**
  * 左主臂J4 MOS过热
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J4_MOS_OVER_TEMP = 68ul
};

/// Constant 'J4_MOTOR_OVER_HEAT'.
/**
  * 左主臂J4电机过热
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J4_MOTOR_OVER_HEAT = 69ul
};

/// Constant 'J4_COMMUNICATION_LOST'.
/**
  * 左主臂J4通讯丢失
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J4_COMMUNICATION_LOST = 70ul
};

/// Constant 'J4_OVERLOAD'.
/**
  * 左主臂J4过载
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J4_OVERLOAD = 71ul
};

/// Constant 'J5_MOTOR_NORMAL'.
/**
  * 左主臂J5电机正常
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J5_MOTOR_NORMAL = 80ul
};

/// Constant 'J5_OVER_VOLTAGE'.
/**
  * 左主臂J5轴过压
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J5_OVER_VOLTAGE = 81ul
};

/// Constant 'J5_UNDER_VOLTAGE'.
/**
  * 左主臂J5轴欠压
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J5_UNDER_VOLTAGE = 82ul
};

/// Constant 'J5_OVER_CURRENT'.
/**
  * 左主臂J5过流
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J5_OVER_CURRENT = 83ul
};

/// Constant 'J5_MOS_OVER_TEMP'.
/**
  * 左主臂J5 MOS过热
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J5_MOS_OVER_TEMP = 84ul
};

/// Constant 'J5_MOTOR_OVER_HEAT'.
/**
  * 左主臂J5电机过热
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J5_MOTOR_OVER_HEAT = 85ul
};

/// Constant 'J5_COMMUNICATION_LOST'.
/**
  * 左主臂J5通讯丢失
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J5_COMMUNICATION_LOST = 86ul
};

/// Constant 'J5_OVERLOAD'.
/**
  * 左主臂J5过载
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J5_OVERLOAD = 87ul
};

/// Constant 'J6_MOTOR_NORMAL'.
/**
  * 左主臂J6电机正常
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J6_MOTOR_NORMAL = 96ul
};

/// Constant 'J6_OVER_VOLTAGE'.
/**
  * 左主臂J6轴过压
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J6_OVER_VOLTAGE = 97ul
};

/// Constant 'J6_UNDER_VOLTAGE'.
/**
  * 左主臂J6轴欠压
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J6_UNDER_VOLTAGE = 98ul
};

/// Constant 'J6_OVER_CURRENT'.
/**
  * 左主臂J6过流
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J6_OVER_CURRENT = 99ul
};

/// Constant 'J6_MOS_OVER_TEMP'.
/**
  * 左主臂J6 MOS过热
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J6_MOS_OVER_TEMP = 100ul
};

/// Constant 'J6_MOTOR_OVER_HEAT'.
/**
  * 左主臂J6电机过热
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J6_MOTOR_OVER_HEAT = 101ul
};

/// Constant 'J6_COMMUNICATION_LOST'.
/**
  * 左主臂J6通讯丢失
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J6_COMMUNICATION_LOST = 102ul
};

/// Constant 'J6_OVERLOAD'.
/**
  * 左主臂J6过载
 */
enum
{
  protocol__msg__MasterLeftArmErrorEnum__J6_OVERLOAD = 103ul
};

/// Struct defined in msg/MasterLeftArmErrorEnum in the package protocol.
/**
  * Unit: MASTER_LEFT_ARM
  * 左主臂电机获取状态超时
 */
typedef struct protocol__msg__MasterLeftArmErrorEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__MasterLeftArmErrorEnum;

// Struct for a sequence of protocol__msg__MasterLeftArmErrorEnum.
typedef struct protocol__msg__MasterLeftArmErrorEnum__Sequence
{
  protocol__msg__MasterLeftArmErrorEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__MasterLeftArmErrorEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MASTER_LEFT_ARM_ERROR_ENUM__STRUCT_H_
