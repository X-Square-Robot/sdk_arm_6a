// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/MoveitServerUnitEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/moveit_server_unit_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__MoveitServerUnitEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x57, 0x83, 0x9b, 0x29, 0xce, 0x86, 0x0e, 0x41,
      0x40, 0x48, 0xc4, 0x61, 0x3c, 0x86, 0xaf, 0x54,
      0xf2, 0x18, 0x6c, 0x07, 0x9c, 0x8b, 0x9f, 0xe9,
      0x06, 0x69, 0x4d, 0x4a, 0x9a, 0x58, 0x6f, 0x89,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__MoveitServerUnitEnum__TYPE_NAME[] = "protocol/msg/MoveitServerUnitEnum";

// Define type names, field names, and default values
static char protocol__msg__MoveitServerUnitEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__MoveitServerUnitEnum__FIELDS[] = {
  {
    {protocol__msg__MoveitServerUnitEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__MoveitServerUnitEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__MoveitServerUnitEnum__TYPE_NAME, 33, 33},
      {protocol__msg__MoveitServerUnitEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: MOVEIT_SERVER\n"
  "# moveit server\\xe8\\x8e\\xb7\\xe5\\x8f\\x96\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 HEARTBEAT_TIMEOUT = 0x01\n"
  "# \\xe8\\xa7\\x84\\xe5\\x88\\x92\\xe4\\xb8\\x8e\\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe6\\x88\\x90\\xe5\\x8a\\x9f\n"
  "uint32 SUCCESS = 0x10\n"
  "# \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe6\\x97\\xa0\\xe6\\x95\\x88\n"
  "uint32 INVALID_TARGET = 0x11\n"
  "# \\xe6\\x9c\\xaa\\xe6\\x88\\x90\\xe5\\x8a\\x9f\\xe8\\x8e\\xb7\\xe5\\x8f\\x96\\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe4\\xbd\\x8d\\xe7\\xbd\\xae\n"
  "uint32 INVALID_CURRENT_POS = 0x12\n"
  "# Moveit\\xe8\\xa7\\x84\\xe5\\x88\\x92\\xe6\\x9c\\x8d\\xe5\\x8a\\xa1(/move_action)\\xe6\\x9c\\xaa\\xe5\\xb0\\xb1\\xe7\\xbb\\xaa\n"
  "uint32 PLANING_ACTION_NOT_READY = 0x13\n"
  "# \\xe8\\xa7\\x84\\xe5\\x88\\x92\\xe8\\xaf\\xb7\\xe6\\xb1\\x82\\xe8\\xa2\\xab\\xe6\\x8b\\x92\\xe7\\xbb\\x9d\n"
  "uint32 PLANING_ACTION_REJECTED = 0x14\n"
  "# \\xe8\\xa7\\x84\\xe5\\x88\\x92\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 PLANING_TIMEOUT = 0x15\n"
  "# \\xe8\\xa7\\x84\\xe5\\x88\\x92\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 PLANING_FAILED = 0x16\n"
  "# \\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe8\\xbd\\xa8\\xe8\\xbf\\xb9\\xe6\\x9c\\x8d\\xe5\\x8a\\xa1(/whole_body_joint_trajectory_controller/follow_joint_trajectory)\\xe6\\x9c\\xaa\\xe5\\xb0\\xb1\\xe7\\xbb\\xaa\n"
  "uint32 EXECUTING_ACTION_NOT_READY = 0x17\n"
  "# \\xe8\\xbd\\xa8\\xe8\\xbf\\xb9\\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe8\\xaf\\xb7\\xe6\\xb1\\x82\\xe8\\xa2\\xab\\xe6\\x8b\\x92\\xe7\\xbb\\x9d\n"
  "uint32 EXECUTING_ACTION_REJECTED = 0x18\n"
  "# \\xe8\\xbd\\xa8\\xe8\\xbf\\xb9\\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 EXECUTING_TIMEOUT = 0x19\n"
  "# \\xe8\\xbd\\xa8\\xe8\\xbf\\xb9\\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 EXECUTING_FAILED = 0x1A\n"
  "# \\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe8\\xbf\\x87\\xe7\\xa8\\x8b\\xe4\\xb8\\xad\\xe5\\x87\\xba\\xe7\\x8e\\xb0\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 EXCEPTION = 0x1B";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__MoveitServerUnitEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__MoveitServerUnitEnum__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 667, 667},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__MoveitServerUnitEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__MoveitServerUnitEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
