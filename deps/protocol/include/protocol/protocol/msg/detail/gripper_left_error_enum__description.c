// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/GripperLeftErrorEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/gripper_left_error_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__GripperLeftErrorEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x73, 0x4e, 0xb1, 0x73, 0xae, 0xf7, 0x7c, 0xf5,
      0xcb, 0x19, 0x3a, 0xd8, 0x21, 0x9f, 0xca, 0x8b,
      0x29, 0xb3, 0xf6, 0xd3, 0xf9, 0x83, 0xdb, 0x43,
      0xa9, 0x15, 0xa6, 0xfe, 0xb0, 0x8b, 0xdd, 0x28,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__GripperLeftErrorEnum__TYPE_NAME[] = "protocol/msg/GripperLeftErrorEnum";

// Define type names, field names, and default values
static char protocol__msg__GripperLeftErrorEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__GripperLeftErrorEnum__FIELDS[] = {
  {
    {protocol__msg__GripperLeftErrorEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__GripperLeftErrorEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__GripperLeftErrorEnum__TYPE_NAME, 33, 33},
      {protocol__msg__GripperLeftErrorEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: GRIPPER_LEFT\n"
  "# \\xe5\\xbf\\x83\\xe8\\xb7\\xb3\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 HEARTBEAT_TIMEOUT = 0x01\n"
  "# \\xe7\\xbc\\x96\\xe7\\xa0\\x81\\xe5\\x99\\xa8\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 GRIPPER_ENCODER_FAIL = 0x11\n"
  "# \\xe6\\x8c\\x87\\xe7\\xa4\\xba\\xe7\\x81\\xaf\\xe9\\x85\\x8d\\xe7\\xbd\\xae\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 GRIPPER_LED_FAIL = 0x12\n"
  "# \\xe6\\x8c\\x89\\xe9\\x94\\xae\\xe9\\x85\\x8d\\xe7\\xbd\\xae\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 GRIPPER_BUTTON_FAIL = 0x13\n"
  "# IMU\\xe9\\x85\\x8d\\xe7\\xbd\\xae\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 GRIPPER_IMU_FAIL = 0x14\n"
  "# \\xe8\\xa1\\xa5\\xe5\\x85\\x89\\xe7\\x81\\xaf\\xe9\\x85\\x8d\\xe7\\xbd\\xae\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 GRIPPER_FILL_LIGHT_FAIL = 0x15\n"
  "# \\xe7\\x94\\xb5\\xe6\\xb1\\xa0\\xe7\\x94\\xb5\\xe9\\x87\\x8f\\xe9\\x85\\x8d\\xe7\\xbd\\xae\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 GRIPPER_BATTERY_FAIL = 0x16\n"
  "# \\xe8\\xa7\\xa6\\xe8\\xa7\\x89\\xe4\\xbc\\xa0\\xe6\\x84\\x9f\\xe5\\x99\\xa8\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 GRIPPER_TACTILE_FAIL = 0x17";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__GripperLeftErrorEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__GripperLeftErrorEnum__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 371, 371},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__GripperLeftErrorEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__GripperLeftErrorEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
