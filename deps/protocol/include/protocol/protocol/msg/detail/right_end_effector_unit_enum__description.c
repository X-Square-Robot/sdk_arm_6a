// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/RightEndEffectorUnitEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/right_end_effector_unit_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__RightEndEffectorUnitEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1d, 0x05, 0xfb, 0x24, 0xce, 0xad, 0x29, 0xd2,
      0x36, 0x4f, 0xf0, 0x7f, 0xa6, 0xcb, 0x3f, 0x0c,
      0x6d, 0xe0, 0x0c, 0x0e, 0x78, 0x74, 0x01, 0x56,
      0x12, 0x4e, 0xfe, 0xfd, 0x06, 0x9c, 0x29, 0x84,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__RightEndEffectorUnitEnum__TYPE_NAME[] = "protocol/msg/RightEndEffectorUnitEnum";

// Define type names, field names, and default values
static char protocol__msg__RightEndEffectorUnitEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__RightEndEffectorUnitEnum__FIELDS[] = {
  {
    {protocol__msg__RightEndEffectorUnitEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__RightEndEffectorUnitEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__RightEndEffectorUnitEnum__TYPE_NAME, 37, 37},
      {protocol__msg__RightEndEffectorUnitEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: RIGHT_END_EFFECTOR\n"
  "uint32 J1_OVERLOAD = 0x17\n"
  "uint32 J1_MOTOR_NORMAL = 0x10\n"
  "uint32 J1_OVER_VOLTAGE = 0x11\n"
  "uint32 J1_UNDER_VOLTAGE = 0x12\n"
  "uint32 J1_OVER_CURRENT = 0x13\n"
  "uint32 J1_MOS_OVER_TEMP = 0x14\n"
  "uint32 J1_MOTOR_OVER_HEAT = 0x15\n"
  "uint32 J1_COMMUNICATION_LOST = 0x16";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__RightEndEffectorUnitEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__RightEndEffectorUnitEnum__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 274, 274},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__RightEndEffectorUnitEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__RightEndEffectorUnitEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
