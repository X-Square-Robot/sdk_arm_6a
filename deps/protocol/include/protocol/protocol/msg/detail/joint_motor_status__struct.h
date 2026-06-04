// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/JointMotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/joint_motor_status.h"


#ifndef PROTOCOL__MSG__DETAIL__JOINT_MOTOR_STATUS__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__JOINT_MOTOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'joint_motor_status'
#include "protocol/msg/detail/motor_status__struct.h"

/// Struct defined in msg/JointMotorStatus in the package protocol.
/**
  * joint_motor_status 索引规则
  * 头部：没有特殊说明情况下，默认使用[pitch,yaw]的顺序。若三个自由度使用[roll,pitch,yaw]的顺序，严格按照rpy的顺序来。
  * 机械臂：一定是从肩膀开始数从 0 ~ n
  * 升降关节：只有一个电机
 */
typedef struct protocol__msg__JointMotorStatus
{
  protocol__msg__MotorStatus__Sequence joint_motor_status;
  bool all_joints_healthy;
} protocol__msg__JointMotorStatus;

// Struct for a sequence of protocol__msg__JointMotorStatus.
typedef struct protocol__msg__JointMotorStatus__Sequence
{
  protocol__msg__JointMotorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__JointMotorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__JOINT_MOTOR_STATUS__STRUCT_H_
