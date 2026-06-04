// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/RightArmUnitEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/right_arm_unit_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__RightArmUnitEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaf, 0x6e, 0xfb, 0x21, 0xfa, 0x18, 0x30, 0x3d,
      0x08, 0x6b, 0x04, 0xb1, 0x87, 0x74, 0x45, 0x34,
      0x01, 0x73, 0x97, 0x69, 0xc2, 0xc2, 0xc1, 0x87,
      0x25, 0x96, 0xea, 0x89, 0x25, 0x88, 0x93, 0x2b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__RightArmUnitEnum__TYPE_NAME[] = "protocol/msg/RightArmUnitEnum";

// Define type names, field names, and default values
static char protocol__msg__RightArmUnitEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__RightArmUnitEnum__FIELDS[] = {
  {
    {protocol__msg__RightArmUnitEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__RightArmUnitEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__RightArmUnitEnum__TYPE_NAME, 29, 29},
      {protocol__msg__RightArmUnitEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: RIGHT_ARM\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82\\xe7\\xa1\\xac\\xe4\\xbb\\xb6\\xe8\\x8e\\xb7\\xe5\\x8f\\x96\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 HEARTBEAT_TIMEOUT = 0x01\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J1\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe6\\xad\\xa3\\xe5\\xb8\\xb8\n"
  "uint32 J1_MOTOR_NORMAL = 0x10\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J1\\xe8\\xbd\\xb4\\xe8\\xbf\\x87\\xe5\\x8e\\x8b\n"
  "uint32 J1_OVER_VOLTAGE = 0x11\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J1\\xe8\\xbd\\xb4\\xe6\\xac\\xa0\\xe5\\x8e\\x8b\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 J1_UNDER_VOLTAGE = 0x12\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J1\\xe8\\xbd\\xb4\\xe8\\xbf\\x87\\xe6\\xb5\\x81\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 J1_OVER_CURRENT = 0x13\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J1 MOS\\xe7\\xae\\xa1\\xe8\\xbf\\x87\\xe7\\x83\\xad\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 J1_MOS_OVER_TEMP = 0x14\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J1\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe8\\xbf\\x87\\xe7\\x83\\xad\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 J1_MOTOR_OVER_HEAT = 0x15\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J1\\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe9\\x80\\x9a\\xe8\\xae\\xaf\\xe4\\xb8\\xa2\\xe5\\xa4\\xb1\n"
  "uint32 J1_COMMUNICATION_LOST = 0x16\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J1\\xe8\\xbd\\xb4\\xe8\\xbf\\x87\\xe8\\xbd\\xbd\n"
  "uint32 J1_OVERLOAD = 0x17\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J2\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe6\\xad\\xa3\\xe5\\xb8\\xb8\n"
  "uint32 J2_MOTOR_NORMAL = 0x20\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J2\\xe8\\xbd\\xb4\\xe8\\xbf\\x87\\xe5\\x8e\\x8b\n"
  "uint32 J2_OVER_VOLTAGE = 0x21\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J2\\xe8\\xbd\\xb4\\xe6\\xac\\xa0\\xe5\\x8e\\x8b\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 J2_UNDER_VOLTAGE = 0x22\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J2\\xe8\\xbd\\xb4\\xe8\\xbf\\x87\\xe6\\xb5\\x81\n"
  "uint32 J2_OVER_CURRENT = 0x23\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J2\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe8\\xbf\\x87\\xe7\\x83\\xad\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 J2_MOTOR_OVER_HEAT = 0x25\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J2\\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe9\\x80\\x9a\\xe8\\xae\\xaf\\xe4\\xb8\\xa2\\xe5\\xa4\\xb1\n"
  "uint32 J2_COMMUNICATION_LOST = 0x26\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J2\\xe8\\xbd\\xb4\\xe8\\xbf\\x87\\xe8\\xbd\\xbd\n"
  "uint32 J2_OVERLOAD = 0x27\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J3\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe6\\xad\\xa3\\xe5\\xb8\\xb8\n"
  "uint32 J3_MOTOR_NORMAL = 0x30\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J3\\xe8\\xbd\\xb4\\xe8\\xbf\\x87\\xe5\\x8e\\x8b\n"
  "uint32 J3_OVER_VOLTAGE = 0x31\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J3\\xe8\\xbd\\xb4\\xe6\\xac\\xa0\\xe5\\x8e\\x8b\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 J3_UNDER_VOLTAGE = 0x32\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J3\\xe8\\xbd\\xb4\\xe8\\xbf\\x87\\xe6\\xb5\\x81\n"
  "uint32 J3_OVER_CURRENT = 0x33\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J3 MOS\\xe7\\xae\\xa1\\xe8\\xbf\\x87\\xe7\\x83\\xad\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 J3_MOS_OVER_TEMP = 0x34\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J3\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe8\\xbf\\x87\\xe7\\x83\\xad\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 J3_MOTOR_OVER_HEAT = 0x35\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J3\\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe9\\x80\\x9a\\xe8\\xae\\xaf\\xe4\\xb8\\xa2\\xe5\\xa4\\xb1\n"
  "uint32 J3_COMMUNICATION_LOST = 0x36\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J3\\xe8\\xbd\\xb4\\xe8\\xbf\\x87\\xe8\\xbd\\xbd\n"
  "uint32 J3_OVERLOAD = 0x37\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J4\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe6\\xad\\xa3\\xe5\\xb8\\xb8\n"
  "uint32 J4_MOTOR_NORMAL = 0x40\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J4\\xe8\\xbd\\xb4\\xe8\\xbf\\x87\\xe5\\x8e\\x8b\n"
  "uint32 J4_OVER_VOLTAGE = 0x41\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J4\\xe8\\xbd\\xb4\\xe6\\xac\\xa0\\xe5\\x8e\\x8b\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 J4_UNDER_VOLTAGE = 0x42\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J4\\xe8\\xbd\\xb4\\xe8\\xbf\\x87\\xe6\\xb5\\x81\n"
  "uint32 J4_OVER_CURRENT = 0x43\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J4 MOS\\xe7\\xae\\xa1\\xe8\\xbf\\x87\\xe7\\x83\\xad\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 J4_MOS_OVER_TEMP = 0x44\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J4\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe8\\xbf\\x87\\xe7\\x83\\xad\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 J4_MOTOR_OVER_HEAT = 0x45\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J4\\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe9\\x80\\x9a\\xe8\\xae\\xaf\\xe4\\xb8\\xa2\\xe5\\xa4\\xb1\n"
  "uint32 J4_COMMUNICATION_LOST = 0x46\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J4\\xe8\\xbd\\xb4\\xe8\\xbf\\x87\\xe8\\xbd\\xbd\n"
  "uint32 J4_OVERLOAD = 0x47\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J5\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe6\\xad\\xa3\\xe5\\xb8\\xb8\n"
  "uint32 J5_MOTOR_NORMAL = 0x50\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J5\\xe8\\xbd\\xb4\\xe8\\xbf\\x87\\xe5\\x8e\\x8b\n"
  "uint32 J5_OVER_VOLTAGE = 0x51\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J5\\xe8\\xbd\\xb4\\xe6\\xac\\xa0\\xe5\\x8e\\x8b\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 J5_UNDER_VOLTAGE = 0x52\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J5\\xe8\\xbd\\xb4\\xe8\\xbf\\x87\\xe6\\xb5\\x81\n"
  "uint32 J5_OVER_CURRENT = 0x53\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J5 MOS\\xe7\\xae\\xa1\\xe8\\xbf\\x87\\xe7\\x83\\xad\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 J5_MOS_OVER_TEMP = 0x54\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J5\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe8\\xbf\\x87\\xe7\\x83\\xad\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 J5_MOTOR_OVER_HEAT = 0x55\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J5\\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe9\\x80\\x9a\\xe8\\xae\\xaf\\xe4\\xb8\\xa2\\xe5\\xa4\\xb1\n"
  "uint32 J5_COMMUNICATION_LOST = 0x56\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J5\\xe8\\xbd\\xb4\\xe8\\xbf\\x87\\xe8\\xbd\\xbd\n"
  "uint32 J5_OVERLOAD = 0x57\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J6\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe6\\xad\\xa3\\xe5\\xb8\\xb8\n"
  "uint32 J6_MOTOR_NORMAL = 0x60\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J6\\xe8\\xbd\\xb4\\xe8\\xbf\\x87\\xe5\\x8e\\x8b\n"
  "uint32 J6_OVER_VOLTAGE = 0x61\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J6\\xe8\\xbd\\xb4\\xe6\\xac\\xa0\\xe5\\x8e\\x8b\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 J6_UNDER_VOLTAGE = 0x62\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J6\\xe8\\xbd\\xb4\\xe8\\xbf\\x87\\xe6\\xb5\\x81\n"
  "uint32 J6_OVER_CURRENT = 0x63\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J6 MOS\\xe7\\xae\\xa1\\xe8\\xbf\\x87\\xe7\\x83\\xad\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 J6_MOS_OVER_TEMP = 0x64\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J6\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe8\\xbf\\x87\\xe7\\x83\\xad\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 J6_MOTOR_OVER_HEAT = 0x65\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J6\\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe9\\x80\\x9a\\xe8\\xae\\xaf\\xe4\\xb8\\xa2\\xe5\\xa4\\xb1\n"
  "uint32 J6_COMMUNICATION_LOST = 0x66\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J6\\xe8\\xbd\\xb4\\xe8\\xbf\\x87\\xe8\\xbd\\xbd\n"
  "uint32 J6_OVERLOAD = 0x67\n"
  "# \\xe5\\x8f\\xb3\\xe8\\x87\\x82J2 MOS\\xe7\\xae\\xa1\\xe8\\xbf\\x87\\xe7\\x83\\xad\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 J2_MOS_OVER_TEMP = 0x24";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__RightArmUnitEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__RightArmUnitEnum__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2117, 2117},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__RightArmUnitEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__RightArmUnitEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
