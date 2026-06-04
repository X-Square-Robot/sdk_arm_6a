// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/ErrorLevelEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/error_level_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__ErrorLevelEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x27, 0xd8, 0xdb, 0xb1, 0xe4, 0x73, 0xb6, 0xcc,
      0x90, 0x8e, 0xf8, 0x03, 0x71, 0xb0, 0x4d, 0xec,
      0x31, 0x2f, 0x36, 0x4e, 0x04, 0xdd, 0x02, 0xc8,
      0xb0, 0xae, 0x8c, 0x65, 0xb8, 0xb6, 0x6e, 0x72,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__ErrorLevelEnum__TYPE_NAME[] = "protocol/msg/ErrorLevelEnum";

// Define type names, field names, and default values
static char protocol__msg__ErrorLevelEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__ErrorLevelEnum__FIELDS[] = {
  {
    {protocol__msg__ErrorLevelEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__ErrorLevelEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__ErrorLevelEnum__TYPE_NAME, 27, 27},
      {protocol__msg__ErrorLevelEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 LEVEL_INFO=0\n"
  "uint8 LEVEL_WARNING=1\n"
  "uint8 LEVEL_ERROR=2\n"
  "uint8 LEVEL_FATAL=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__ErrorLevelEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__ErrorLevelEnum__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 80, 80},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__ErrorLevelEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__ErrorLevelEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
