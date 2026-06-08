// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/StateEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/state_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__StateEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x01, 0x33, 0x97, 0x3d, 0x90, 0x0e, 0x15, 0x60,
      0x1b, 0x3a, 0x66, 0x19, 0x59, 0x50, 0x33, 0xe9,
      0x96, 0x95, 0x2d, 0x76, 0xa7, 0x12, 0x0a, 0x32,
      0x16, 0x3b, 0x48, 0x99, 0xcd, 0x29, 0x6d, 0x63,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__StateEnum__TYPE_NAME[] = "protocol/msg/StateEnum";

// Define type names, field names, and default values
static char protocol__msg__StateEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__StateEnum__FIELDS[] = {
  {
    {protocol__msg__StateEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__StateEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__StateEnum__TYPE_NAME, 22, 22},
      {protocol__msg__StateEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 STATE_UNINITIALIZED=0\n"
  "uint8 STATE_INITIALIZED=1\n"
  "uint8 STATE_RUNNING=2\n"
  "uint8 STATE_ERROR=3\n"
  "uint8 STATE_OFFLINE=4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__StateEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__StateEnum__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 117, 117},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__StateEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__StateEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
