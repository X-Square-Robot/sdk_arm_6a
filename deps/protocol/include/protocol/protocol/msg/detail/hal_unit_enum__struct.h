// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/HalUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/hal_unit_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__HAL_UNIT_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__HAL_UNIT_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'HAL'.
enum
{
  protocol__msg__HalUnitEnum__HAL = 1
};

/// Constant 'CHASSIS'.
enum
{
  protocol__msg__HalUnitEnum__CHASSIS = 2
};

/// Constant 'BODY'.
enum
{
  protocol__msg__HalUnitEnum__BODY = 3
};

/// Constant 'HEAD'.
enum
{
  protocol__msg__HalUnitEnum__HEAD = 4
};

/// Constant 'LIDAR'.
enum
{
  protocol__msg__HalUnitEnum__LIDAR = 5
};

/// Constant 'GRIPPER_LEFT'.
enum
{
  protocol__msg__HalUnitEnum__GRIPPER_LEFT = 6
};

/// Constant 'GRIPPER_RIGHT'.
enum
{
  protocol__msg__HalUnitEnum__GRIPPER_RIGHT = 7
};

/// Constant 'HEAD_MOUNT'.
enum
{
  protocol__msg__HalUnitEnum__HEAD_MOUNT = 8
};

/// Constant 'HEARTBEAT_TIMEOUT'.
/**
  * HAL获取状态超时
 */
enum
{
  protocol__msg__HalUnitEnum__HEARTBEAT_TIMEOUT = 1ul
};

/// Constant 'CHASSIS_CONN_FAIL'.
/**
  * 底盘板断连
 */
enum
{
  protocol__msg__HalUnitEnum__CHASSIS_CONN_FAIL = 17ul
};

/// Constant 'BODY_CONN_FAIL'.
/**
  * 身体板断连
 */
enum
{
  protocol__msg__HalUnitEnum__BODY_CONN_FAIL = 18ul
};

/// Constant 'HEAD_CONN_FAIL'.
/**
  * 头部板断连
 */
enum
{
  protocol__msg__HalUnitEnum__HEAD_CONN_FAIL = 19ul
};

/// Constant 'POWER_CONN_FAIL'.
/**
  * 电源板断连
 */
enum
{
  protocol__msg__HalUnitEnum__POWER_CONN_FAIL = 20ul
};

/// Constant 'PARSE_HEAD_VERSION_FAIL'.
/**
  * 头部板版本信息解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_HEAD_VERSION_FAIL = 32ul
};

/// Constant 'PARSE_HEAD_JOINT_FAIL'.
/**
  * 头部板云台状态数据解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_HEAD_JOINT_FAIL = 33ul
};

/// Constant 'PARSE_HEAD_IMU_FAIL'.
/**
  * 头部板IMU数据解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_HEAD_IMU_FAIL = 34ul
};

/// Constant 'PARSE_HEAD_LOG_FAIL'.
/**
  * 头部板日志数据解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_HEAD_LOG_FAIL = 35ul
};

/// Constant 'PARSE_HEAD_POWER_FAIL'.
/**
  * 头部板电源状态数据解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_HEAD_POWER_FAIL = 36ul
};

/// Constant 'PARSE_BODY_VERSION_FAIL'.
/**
  * 身体板版本信息解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_BODY_VERSION_FAIL = 37ul
};

/// Constant 'PARSE_BODY_HEAD_JOINT_FAIL'.
/**
  * 身体板云台状态数据解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_BODY_HEAD_JOINT_FAIL = 38ul
};

/// Constant 'PARSE_BODY_IMU_FAIL'.
/**
  * 身体板IMU数据解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_BODY_IMU_FAIL = 39ul
};

/// Constant 'PARSE_BODY_LOG_FAIL'.
/**
  * 身体板日志数据解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_BODY_LOG_FAIL = 40ul
};

/// Constant 'PARSE_BODY_POWER_FAIL'.
/**
  * 身体板电源系统状态数据解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_BODY_POWER_FAIL = 41ul
};

/// Constant 'PARSE_CHASSIS_VERSION_FAIL'.
/**
  * 底盘板版本信息解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_CHASSIS_VERSION_FAIL = 42ul
};

/// Constant 'PARSE_CHASSIS_POWER_FAIL'.
/**
  * 底盘板系统状态数据解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_CHASSIS_POWER_FAIL = 43ul
};

/// Constant 'PARSE_CHASSIS_TOF_FAIL'.
/**
  * 底盘板TOF传感器数据解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_CHASSIS_TOF_FAIL = 44ul
};

/// Constant 'PARSE_CHASSIS_ULTRASONIC_FAIL'.
/**
  * 底盘板超声波传感器数据解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_CHASSIS_ULTRASONIC_FAIL = 45ul
};

/// Constant 'PARSE_CHASSIS_IMU_FAIL'.
/**
  * 底盘板IMU数据解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_CHASSIS_IMU_FAIL = 46ul
};

/// Constant 'PARSE_CHASSIS_LOG_FAIL'.
/**
  * 底盘板日志数据解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_CHASSIS_LOG_FAIL = 47ul
};

/// Constant 'PARSE_CHASSIS_ROBOT_STATION_INFO_FAIL'.
/**
  * 底盘板充电桩数据解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_CHASSIS_ROBOT_STATION_INFO_FAIL = 48ul
};

/// Constant 'PARSE_CHASSIS_ODOM_FAIL'.
/**
  * 底盘板里程计Odom数据解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_CHASSIS_ODOM_FAIL = 49ul
};

/// Constant 'PARSE_BODY_TOF_FAIL'.
/**
  * 身体板TOF传感器数据解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_BODY_TOF_FAIL = 50ul
};

/// Constant 'PARSE_BODY_ULTRASONIC_FAIL'.
/**
  * 身体板超声波传感器数据解析失败
 */
enum
{
  protocol__msg__HalUnitEnum__PARSE_BODY_ULTRASONIC_FAIL = 51ul
};

/// Struct defined in msg/HalUnitEnum in the package protocol.
typedef struct protocol__msg__HalUnitEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__HalUnitEnum;

// Struct for a sequence of protocol__msg__HalUnitEnum.
typedef struct protocol__msg__HalUnitEnum__Sequence
{
  protocol__msg__HalUnitEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__HalUnitEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__HAL_UNIT_ENUM__STRUCT_H_
