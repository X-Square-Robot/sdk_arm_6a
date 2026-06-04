// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/SpnUnitEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/spn_unit_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__SPN_UNIT_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__SPN_UNIT_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'RESERVED'.
enum
{
  protocol__msg__SpnUnitEnum__RESERVED = 0
};

/// Struct defined in msg/SpnUnitEnum in the package protocol.
/**
  * No units defined under this domain
 */
typedef struct protocol__msg__SpnUnitEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__SpnUnitEnum;

// Struct for a sequence of protocol__msg__SpnUnitEnum.
typedef struct protocol__msg__SpnUnitEnum__Sequence
{
  protocol__msg__SpnUnitEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__SpnUnitEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__SPN_UNIT_ENUM__STRUCT_H_
