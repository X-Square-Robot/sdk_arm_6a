// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/motor_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__MotorStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x01, 0x6a, 0xa7, 0x27, 0x0a, 0x66, 0xfe, 0x78,
      0xf1, 0xe2, 0xfe, 0x8e, 0x10, 0x5d, 0x43, 0x89,
      0xe4, 0x89, 0x26, 0x14, 0x21, 0x93, 0x22, 0xf6,
      0x41, 0x1d, 0xd1, 0xb8, 0xff, 0xf2, 0x86, 0xfa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__MotorStatus__TYPE_NAME[] = "protocol/msg/MotorStatus";

// Define type names, field names, and default values
static char protocol__msg__MotorStatus__FIELD_NAME__state_code[] = "state_code";
static char protocol__msg__MotorStatus__FIELD_NAME__error_bit_code[] = "error_bit_code";

static rosidl_runtime_c__type_description__Field protocol__msg__MotorStatus__FIELDS[] = {
  {
    {protocol__msg__MotorStatus__FIELD_NAME__state_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {protocol__msg__MotorStatus__FIELD_NAME__error_bit_code, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
protocol__msg__MotorStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__MotorStatus__TYPE_NAME, 24, 24},
      {protocol__msg__MotorStatus__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 state_code\n"
  "uint32 error_bit_code";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__MotorStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__MotorStatus__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 38, 38},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__MotorStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__MotorStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
