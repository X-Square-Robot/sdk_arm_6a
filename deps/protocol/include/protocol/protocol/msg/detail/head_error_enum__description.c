// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/HeadErrorEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/head_error_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__HeadErrorEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x92, 0x28, 0xaf, 0x32, 0xa0, 0x13, 0x51, 0xac,
      0x83, 0x80, 0x4d, 0x7d, 0xd3, 0x9d, 0xe9, 0xbd,
      0x97, 0xe6, 0x17, 0x5d, 0xef, 0x4b, 0x8b, 0x18,
      0x71, 0xb9, 0x02, 0x19, 0xe1, 0xf8, 0x33, 0x60,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__HeadErrorEnum__TYPE_NAME[] = "protocol/msg/HeadErrorEnum";

// Define type names, field names, and default values
static char protocol__msg__HeadErrorEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__HeadErrorEnum__FIELDS[] = {
  {
    {protocol__msg__HeadErrorEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__HeadErrorEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__HeadErrorEnum__TYPE_NAME, 26, 26},
      {protocol__msg__HeadErrorEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: HEAD\n"
  "# \\xe5\\xa4\\xb4\\xe9\\x83\\xa8\\xe8\\x8e\\xb7\\xe5\\x8f\\x96\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 HEARTBEAT_TIMEOUT = 0x01\n"
  "# \\xe5\\xa4\\xb4\\xe9\\x83\\xa8\\xe6\\x9d\\xbfimu\\xe6\\x96\\xad\\xe8\\xbf\\x9e\n"
  "uint32 IMU_CONN_FAIL = 0x11";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__HeadErrorEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__HeadErrorEnum__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 95, 95},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__HeadErrorEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__HeadErrorEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
