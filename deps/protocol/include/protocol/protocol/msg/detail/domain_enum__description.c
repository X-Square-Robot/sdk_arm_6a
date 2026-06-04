// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/DomainEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/domain_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__DomainEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xba, 0x26, 0xdd, 0x4d, 0xac, 0xef, 0x25, 0x9b,
      0xeb, 0x87, 0x83, 0x2e, 0xa9, 0xac, 0xdc, 0x54,
      0x34, 0xbd, 0xaf, 0xc1, 0xa3, 0xd8, 0x30, 0x96,
      0xca, 0x9a, 0x56, 0x1c, 0xb2, 0x9b, 0x9a, 0x9b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__DomainEnum__TYPE_NAME[] = "protocol/msg/DomainEnum";

// Define type names, field names, and default values
static char protocol__msg__DomainEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__DomainEnum__FIELDS[] = {
  {
    {protocol__msg__DomainEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__DomainEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__DomainEnum__TYPE_NAME, 23, 23},
      {protocol__msg__DomainEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 HAL = 0x01\n"
  "uint8 MOTION = 0x04\n"
  "uint8 MONITOR = 0x05\n"
  "uint8 APPLICATION = 0x07\n"
  "uint8 MEDIA = 0x02\n"
  "uint8 EAI = 0x06";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__DomainEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__DomainEnum__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 119, 119},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__DomainEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__DomainEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
