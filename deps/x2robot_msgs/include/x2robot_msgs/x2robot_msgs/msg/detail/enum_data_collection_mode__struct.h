// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from x2robot_msgs:msg/EnumDataCollectionMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "x2robot_msgs/msg/enum_data_collection_mode.h"


#ifndef X2ROBOT_MSGS__MSG__DETAIL__ENUM_DATA_COLLECTION_MODE__STRUCT_H_
#define X2ROBOT_MSGS__MSG__DETAIL__ENUM_DATA_COLLECTION_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'TRACKER_TRIGGER'.
enum
{
  x2robot_msgs__msg__EnumDataCollectionMode__TRACKER_TRIGGER = 1
};

/// Constant 'EXOSKELETON_ARM_TRIGGER'.
enum
{
  x2robot_msgs__msg__EnumDataCollectionMode__EXOSKELETON_ARM_TRIGGER = 2
};

/// Struct defined in msg/EnumDataCollectionMode in the package x2robot_msgs.
typedef struct x2robot_msgs__msg__EnumDataCollectionMode
{
  uint8_t structure_needs_at_least_one_member;
} x2robot_msgs__msg__EnumDataCollectionMode;

// Struct for a sequence of x2robot_msgs__msg__EnumDataCollectionMode.
typedef struct x2robot_msgs__msg__EnumDataCollectionMode__Sequence
{
  x2robot_msgs__msg__EnumDataCollectionMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} x2robot_msgs__msg__EnumDataCollectionMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // X2ROBOT_MSGS__MSG__DETAIL__ENUM_DATA_COLLECTION_MODE__STRUCT_H_
