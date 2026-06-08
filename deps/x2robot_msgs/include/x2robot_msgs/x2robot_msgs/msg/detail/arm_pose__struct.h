// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from x2robot_msgs:msg/ArmPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/arm_pose.h"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__ARM_POSE__STRUCT_H_
#define X2ROBOT_MSGS__MSG__DETAIL__ARM_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/ArmPose in the package x2robot_msgs.
typedef struct x2robot_msgs__msg__ArmPose
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose pose;
  double gripper;
} x2robot_msgs__msg__ArmPose;

// Struct for a sequence of x2robot_msgs__msg__ArmPose.
typedef struct x2robot_msgs__msg__ArmPose__Sequence
{
  x2robot_msgs__msg__ArmPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__msg__ArmPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // X2ROBOT_MSGS__MSG__DETAIL__ARM_POSE__STRUCT_H_
