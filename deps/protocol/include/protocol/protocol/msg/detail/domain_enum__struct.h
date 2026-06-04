// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/DomainEnum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "protocol/msg/domain_enum.h"


#ifndef PROTOCOL__MSG__DETAIL__DOMAIN_ENUM__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__DOMAIN_ENUM__STRUCT_H_

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
  protocol__msg__DomainEnum__HAL = 1
};

/// Constant 'MOTION'.
enum
{
  protocol__msg__DomainEnum__MOTION = 4
};

/// Constant 'MONITOR'.
enum
{
  protocol__msg__DomainEnum__MONITOR = 5
};

/// Constant 'APPLICATION'.
enum
{
  protocol__msg__DomainEnum__APPLICATION = 7
};

/// Constant 'MEDIA'.
enum
{
  protocol__msg__DomainEnum__MEDIA = 2
};

/// Constant 'EAI'.
enum
{
  protocol__msg__DomainEnum__EAI = 6
};

/// Struct defined in msg/DomainEnum in the package protocol.
typedef struct protocol__msg__DomainEnum
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__DomainEnum;

// Struct for a sequence of protocol__msg__DomainEnum.
typedef struct protocol__msg__DomainEnum__Sequence
{
  protocol__msg__DomainEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__DomainEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__DOMAIN_ENUM__STRUCT_H_
