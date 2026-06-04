// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/Ti5WaistUnitEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/ti5_waist_unit_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__Ti5WaistUnitEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe0, 0x28, 0xaf, 0xfb, 0x9c, 0x1e, 0xfd, 0x7a,
      0x46, 0x8d, 0xd2, 0xd0, 0x49, 0x25, 0x71, 0x3e,
      0xca, 0xd2, 0xc6, 0xf2, 0x84, 0xf5, 0x7b, 0x79,
      0x13, 0x3a, 0xa9, 0xf9, 0x4a, 0xce, 0xaa, 0xf3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__Ti5WaistUnitEnum__TYPE_NAME[] = "protocol/msg/Ti5WaistUnitEnum";

// Define type names, field names, and default values
static char protocol__msg__Ti5WaistUnitEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__Ti5WaistUnitEnum__FIELDS[] = {
  {
    {protocol__msg__Ti5WaistUnitEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
protocol__msg__Ti5WaistUnitEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__Ti5WaistUnitEnum__TYPE_NAME, 29, 29},
      {protocol__msg__Ti5WaistUnitEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: TI5_WAIST\n"
  "# \\xe9\\x92\\x9b\\xe8\\x99\\x8e\\xe8\\x85\\xb0\\xe9\\x83\\xa8\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe8\\x8e\\xb7\\xe5\\x8f\\x96\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 HEARTBEAT_TIMEOUT = 0x01\n"
  "uint32 J1_MOTOR_NORMAL = 0x10\n"
  "uint32 J1_MOTOR_ABNORMAL = 0x11\n"
  "uint32 J2_MOTOR_NORMAL = 0x20\n"
  "uint32 J2_MOTOR_ABNORMAL = 0x21\n"
  "uint32 J3_MOTOR_NORMAL = 0x30\n"
  "uint32 J3_MOTOR_ABNORMAL = 0x31\n"
  "uint32 J4_MOTOR_NORMAL = 0x40\n"
  "uint32 J4_MOTOR_ABNORMAL = 0x41";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__Ti5WaistUnitEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__Ti5WaistUnitEnum__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 313, 313},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__Ti5WaistUnitEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__Ti5WaistUnitEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
