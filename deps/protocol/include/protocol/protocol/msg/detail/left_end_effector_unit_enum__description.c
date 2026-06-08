// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/LeftEndEffectorUnitEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/left_end_effector_unit_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__LeftEndEffectorUnitEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0x75, 0x76, 0x67, 0xfb, 0x1c, 0x06, 0xd5,
      0xa7, 0xf9, 0xa1, 0x63, 0xe8, 0xea, 0xb6, 0x1b,
      0x68, 0xa8, 0xb7, 0xe6, 0xd3, 0xf1, 0x74, 0x81,
      0xb5, 0x41, 0xa4, 0x7e, 0xd3, 0x2d, 0x52, 0x85,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__LeftEndEffectorUnitEnum__TYPE_NAME[] = "protocol/msg/LeftEndEffectorUnitEnum";

// Define type names, field names, and default values
static char protocol__msg__LeftEndEffectorUnitEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__LeftEndEffectorUnitEnum__FIELDS[] = {
  {
    {protocol__msg__LeftEndEffectorUnitEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__LeftEndEffectorUnitEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__LeftEndEffectorUnitEnum__TYPE_NAME, 36, 36},
      {protocol__msg__LeftEndEffectorUnitEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: LEFT_END_EFFECTOR\n"
  "uint32 J1_MOTOR_NORMAL = 0x10\n"
  "uint32 J1_OVER_VOLTAGE = 0x11\n"
  "uint32 J1_UNDER_VOLTAGE = 0x12\n"
  "uint32 J1_OVER_CURRENT = 0x13\n"
  "uint32 J1_MOS_OVER_TEMP = 0x14\n"
  "uint32 J1_MOTOR_OVER_HEAT = 0x15\n"
  "uint32 J1_COMMUNICATION_LOST = 0x16\n"
  "uint32 J1_OVERLOAD = 0x17";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__LeftEndEffectorUnitEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__LeftEndEffectorUnitEnum__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 273, 273},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__LeftEndEffectorUnitEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__LeftEndEffectorUnitEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
