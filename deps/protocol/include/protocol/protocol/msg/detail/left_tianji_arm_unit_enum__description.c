// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/LeftTianjiArmUnitEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/left_tianji_arm_unit_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__LeftTianjiArmUnitEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa8, 0x47, 0x09, 0x50, 0x4e, 0x81, 0x4b, 0x28,
      0x4c, 0xc7, 0x92, 0xa6, 0xd2, 0xbc, 0x0d, 0x8a,
      0xb0, 0x28, 0x64, 0xdf, 0xcf, 0xe1, 0xa4, 0xde,
      0x06, 0x81, 0x53, 0xef, 0x03, 0x4f, 0xe5, 0xbd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__LeftTianjiArmUnitEnum__TYPE_NAME[] = "protocol/msg/LeftTianjiArmUnitEnum";

// Define type names, field names, and default values
static char protocol__msg__LeftTianjiArmUnitEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__LeftTianjiArmUnitEnum__FIELDS[] = {
  {
    {protocol__msg__LeftTianjiArmUnitEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__LeftTianjiArmUnitEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__LeftTianjiArmUnitEnum__TYPE_NAME, 34, 34},
      {protocol__msg__LeftTianjiArmUnitEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: LEFT_TIANJI_ARM\n"
  "# \\xe5\\xa4\\xa9\\xe6\\x9c\\xba\\xe5\\xb7\\xa6\\xe8\\x87\\x82\\xe8\\x8e\\xb7\\xe5\\x8f\\x96\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 HEARTBEAT_TIMEOUT = 0x01\n"
  "uint32 J1_MOTOR_NORMAL = 0x10\n"
  "uint32 J1_MOTOR_ABNORMAL = 0x11\n"
  "uint32 J2_MOTOR_NORMAL = 0x20\n"
  "uint32 J2_MOTOR_ABNORMAL = 0x21\n"
  "uint32 J3_MOTOR_NORMAL = 0x30\n"
  "uint32 J3_MOTOR_ABNORMAL = 0x31\n"
  "uint32 J4_MOTOR_NORMAL = 0x40\n"
  "uint32 J4_MOTOR_ABNORMAL = 0x41\n"
  "uint32 J5_MOTOR_NORMAL = 0x50\n"
  "uint32 J5_MOTOR_ABNORMAL = 0x51\n"
  "uint32 J6_MOTOR_NORMAL = 0x60\n"
  "uint32 J6_MOTOR_ABNORMAL = 0x61\n"
  "uint32 J7_MOTOR_NORMAL = 0x70\n"
  "uint32 J7_MOTOR_ABNORMAL = 0x71";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__LeftTianjiArmUnitEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__LeftTianjiArmUnitEnum__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 503, 503},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__LeftTianjiArmUnitEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__LeftTianjiArmUnitEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
