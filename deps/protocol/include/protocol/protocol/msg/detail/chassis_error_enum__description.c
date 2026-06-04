// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/ChassisErrorEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/chassis_error_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__ChassisErrorEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf3, 0x01, 0xa8, 0x73, 0x6b, 0xb7, 0x38, 0x2b,
      0x01, 0x58, 0x6b, 0x86, 0xe0, 0x70, 0xe1, 0x2a,
      0x6f, 0xc4, 0x9e, 0x56, 0x00, 0x36, 0xba, 0x54,
      0x18, 0x05, 0xa3, 0xf9, 0x5b, 0x1b, 0xe5, 0x0a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__ChassisErrorEnum__TYPE_NAME[] = "protocol/msg/ChassisErrorEnum";

// Define type names, field names, and default values
static char protocol__msg__ChassisErrorEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__ChassisErrorEnum__FIELDS[] = {
  {
    {protocol__msg__ChassisErrorEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__ChassisErrorEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__ChassisErrorEnum__TYPE_NAME, 29, 29},
      {protocol__msg__ChassisErrorEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: CHASSIS\n"
  "# \\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe8\\x8e\\xb7\\xe5\\x8f\\x96\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 HEARTBEAT_TIMEOUT = 0x01\n"
  "# \\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe6\\x9d\\xbfimu\\xe6\\x96\\xad\\xe8\\xbf\\x9e\n"
  "uint32 IMU_CONN_FAIL = 0x11";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__ChassisErrorEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__ChassisErrorEnum__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 98, 98},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__ChassisErrorEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__ChassisErrorEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
