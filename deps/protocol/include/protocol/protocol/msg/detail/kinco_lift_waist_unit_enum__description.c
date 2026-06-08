// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/KincoLiftWaistUnitEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/kinco_lift_waist_unit_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__KincoLiftWaistUnitEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xba, 0x9c, 0xaf, 0x55, 0x57, 0x1b, 0xc5, 0x4a,
      0x5b, 0x60, 0x7f, 0x58, 0x20, 0xa7, 0x34, 0x53,
      0x60, 0xe8, 0xf5, 0x4a, 0xd0, 0xcb, 0xbe, 0x95,
      0x56, 0xf9, 0x36, 0xa1, 0x34, 0x58, 0x6c, 0x37,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__KincoLiftWaistUnitEnum__TYPE_NAME[] = "protocol/msg/KincoLiftWaistUnitEnum";

// Define type names, field names, and default values
static char protocol__msg__KincoLiftWaistUnitEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__KincoLiftWaistUnitEnum__FIELDS[] = {
  {
    {protocol__msg__KincoLiftWaistUnitEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__KincoLiftWaistUnitEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__KincoLiftWaistUnitEnum__TYPE_NAME, 35, 35},
      {protocol__msg__KincoLiftWaistUnitEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: KINCO_LIFT_WAIST\n"
  "# EX001\\xe8\\x85\\xb0\\xe9\\x83\\xa8\\xe6\\xad\\xa5\\xe7\\xa7\\x91\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe8\\x8e\\xb7\\xe5\\x8f\\x96\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 HEARTBEAT_TIMEOUT = 0x01\n"
  "# \\xe5\\x8d\\x87\\xe9\\x99\\x8d\\xe8\\x85\\xb0\\xe6\\xad\\xa3\\xe5\\xb8\\xb8\n"
  "uint32 MOTOR_NORMAL = 0x10\n"
  "# \\xe5\\x8d\\x87\\xe9\\x99\\x8d\\xe8\\x85\\xb0\\xe4\\xb8\\x8d\\xe6\\xad\\xa3\\xe5\\xb8\\xb8\n"
  "uint32 MOTOR_ABNORMAL = 0x11";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__KincoLiftWaistUnitEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__KincoLiftWaistUnitEnum__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 150, 150},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__KincoLiftWaistUnitEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__KincoLiftWaistUnitEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
