// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/MotionUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/motion_unit_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__MOTION_UNIT_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__MOTION_UNIT_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'REALTIME_CONTROLLER'.
enum
{
  protocol__msg__MotionUnitEnum__REALTIME_CONTROLLER = 1
};

/// Constant 'MOVEIT_SERVER'.
enum
{
  protocol__msg__MotionUnitEnum__MOVEIT_SERVER = 2
};

/// Constant 'LEFT_ARM'.
enum
{
  protocol__msg__MotionUnitEnum__LEFT_ARM = 17
};

/// Constant 'RIGHT_ARM'.
enum
{
  protocol__msg__MotionUnitEnum__RIGHT_ARM = 18
};

/// Constant 'LEFT_TIANJI_ARM'.
enum
{
  protocol__msg__MotionUnitEnum__LEFT_TIANJI_ARM = 19
};

/// Constant 'RIGHT_TIANJI_ARM'.
enum
{
  protocol__msg__MotionUnitEnum__RIGHT_TIANJI_ARM = 20
};

/// Constant 'LEFT_RM_GRIPPER'.
enum
{
  protocol__msg__MotionUnitEnum__LEFT_RM_GRIPPER = 81
};

/// Constant 'RIGHT_RM_GRIPPER'.
enum
{
  protocol__msg__MotionUnitEnum__RIGHT_RM_GRIPPER = 82
};

/// Constant 'TI5_WAIST'.
enum
{
  protocol__msg__MotionUnitEnum__TI5_WAIST = 178
};

/// Constant 'KINCO_LIFT_WAIST'.
enum
{
  protocol__msg__MotionUnitEnum__KINCO_LIFT_WAIST = 177
};

/// Constant 'MASTER_LEFT_ARM'.
enum
{
  protocol__msg__MotionUnitEnum__MASTER_LEFT_ARM = 33
};

/// Constant 'MASTER_RIGHT_ARM'.
enum
{
  protocol__msg__MotionUnitEnum__MASTER_RIGHT_ARM = 34
};

/// Constant 'QP_CONTROLLER'.
enum
{
  protocol__msg__MotionUnitEnum__QP_CONTROLLER = 21
};

/// Struct defined in msg/MotionUnitEnum in the package protocol.
typedef struct protocol__msg__MotionUnitEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__MotionUnitEnum;

// Struct for a sequence of protocol__msg__MotionUnitEnum.
typedef struct protocol__msg__MotionUnitEnum__Sequence
{
  protocol__msg__MotionUnitEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__MotionUnitEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MOTION_UNIT_ENUM__STRUCT_H_
