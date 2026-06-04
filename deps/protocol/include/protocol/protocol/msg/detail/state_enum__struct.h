// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/StateEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/state_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__STATE_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__STATE_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'STATE_UNINITIALIZED'.
enum
{
  protocol__msg__StateEnum__STATE_UNINITIALIZED = 0
};

/// Constant 'STATE_INITIALIZED'.
enum
{
  protocol__msg__StateEnum__STATE_INITIALIZED = 1
};

/// Constant 'STATE_RUNNING'.
enum
{
  protocol__msg__StateEnum__STATE_RUNNING = 2
};

/// Constant 'STATE_ERROR'.
enum
{
  protocol__msg__StateEnum__STATE_ERROR = 3
};

/// Constant 'STATE_OFFLINE'.
enum
{
  protocol__msg__StateEnum__STATE_OFFLINE = 4
};

/// Struct defined in msg/StateEnum in the package protocol.
typedef struct protocol__msg__StateEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__StateEnum;

// Struct for a sequence of protocol__msg__StateEnum.
typedef struct protocol__msg__StateEnum__Sequence
{
  protocol__msg__StateEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__StateEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__STATE_ENUM__STRUCT_H_
