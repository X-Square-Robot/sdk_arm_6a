// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/RightEndEffectorUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/right_end_effector_unit_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__RIGHT_END_EFFECTOR_UNIT_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__RIGHT_END_EFFECTOR_UNIT_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'J1_OVERLOAD'.
enum
{
  protocol__msg__RightEndEffectorUnitEnum__J1_OVERLOAD = 23ul
};

/// Constant 'J1_MOTOR_NORMAL'.
enum
{
  protocol__msg__RightEndEffectorUnitEnum__J1_MOTOR_NORMAL = 16ul
};

/// Constant 'J1_OVER_VOLTAGE'.
enum
{
  protocol__msg__RightEndEffectorUnitEnum__J1_OVER_VOLTAGE = 17ul
};

/// Constant 'J1_UNDER_VOLTAGE'.
enum
{
  protocol__msg__RightEndEffectorUnitEnum__J1_UNDER_VOLTAGE = 18ul
};

/// Constant 'J1_OVER_CURRENT'.
enum
{
  protocol__msg__RightEndEffectorUnitEnum__J1_OVER_CURRENT = 19ul
};

/// Constant 'J1_MOS_OVER_TEMP'.
enum
{
  protocol__msg__RightEndEffectorUnitEnum__J1_MOS_OVER_TEMP = 20ul
};

/// Constant 'J1_MOTOR_OVER_HEAT'.
enum
{
  protocol__msg__RightEndEffectorUnitEnum__J1_MOTOR_OVER_HEAT = 21ul
};

/// Constant 'J1_COMMUNICATION_LOST'.
enum
{
  protocol__msg__RightEndEffectorUnitEnum__J1_COMMUNICATION_LOST = 22ul
};

/// Struct defined in msg/RightEndEffectorUnitEnum in the package protocol.
/**
  * Unit: RIGHT_END_EFFECTOR
 */
typedef struct protocol__msg__RightEndEffectorUnitEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__RightEndEffectorUnitEnum;

// Struct for a sequence of protocol__msg__RightEndEffectorUnitEnum.
typedef struct protocol__msg__RightEndEffectorUnitEnum__Sequence
{
  protocol__msg__RightEndEffectorUnitEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__RightEndEffectorUnitEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__RIGHT_END_EFFECTOR_UNIT_ENUM__STRUCT_H_
