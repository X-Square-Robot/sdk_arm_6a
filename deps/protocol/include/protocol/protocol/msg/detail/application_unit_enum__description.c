// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/ApplicationUnitEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/application_unit_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__ApplicationUnitEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0xb5, 0x75, 0xfe, 0xc2, 0x8d, 0x67, 0xd5,
      0x81, 0x9e, 0x34, 0xca, 0x70, 0x34, 0x63, 0xeb,
      0xd1, 0xf5, 0xd5, 0xa0, 0x53, 0x28, 0x87, 0x86,
      0xcd, 0xad, 0xc9, 0x69, 0x4e, 0x62, 0x1e, 0xaf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__ApplicationUnitEnum__TYPE_NAME[] = "protocol/msg/ApplicationUnitEnum";

// Define type names, field names, and default values
static char protocol__msg__ApplicationUnitEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__ApplicationUnitEnum__FIELDS[] = {
  {
    {protocol__msg__ApplicationUnitEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__ApplicationUnitEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__ApplicationUnitEnum__TYPE_NAME, 32, 32},
      {protocol__msg__ApplicationUnitEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 TASK_MANAGER = 0x01\n"
  "uint8 RECORDER = 0x02";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__ApplicationUnitEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__ApplicationUnitEnum__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 48, 48},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__ApplicationUnitEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__ApplicationUnitEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
