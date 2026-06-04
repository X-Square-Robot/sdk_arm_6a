// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/BodyErrorEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/body_error_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__BodyErrorEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xed, 0x97, 0x4c, 0xf7, 0x80, 0x5a, 0xcb, 0xdc,
      0x28, 0x8b, 0x6c, 0x67, 0xed, 0x9f, 0x2f, 0x10,
      0xc8, 0xff, 0xea, 0x45, 0x69, 0xc8, 0xbd, 0x98,
      0x33, 0xed, 0xac, 0xfb, 0x5e, 0x28, 0xdc, 0x7c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__BodyErrorEnum__TYPE_NAME[] = "protocol/msg/BodyErrorEnum";

// Define type names, field names, and default values
static char protocol__msg__BodyErrorEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__BodyErrorEnum__FIELDS[] = {
  {
    {protocol__msg__BodyErrorEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__BodyErrorEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__BodyErrorEnum__TYPE_NAME, 26, 26},
      {protocol__msg__BodyErrorEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: BODY\n"
  "# \\xe8\\xba\\xab\\xe4\\xbd\\x93\\xe6\\x9d\\xbf\\xe8\\x8e\\xb7\\xe5\\x8f\\x96\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 HEARTBEAT_TIMEOUT = 0x01\n"
  "# \\xe8\\xba\\xab\\xe4\\xbd\\x93\\xe6\\x9d\\xbfimu\\xe6\\x96\\xad\\xe8\\xbf\\x9e\n"
  "uint32 IMU_CONN_FAIL = 0x11";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__BodyErrorEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__BodyErrorEnum__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 96, 96},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__BodyErrorEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__BodyErrorEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
