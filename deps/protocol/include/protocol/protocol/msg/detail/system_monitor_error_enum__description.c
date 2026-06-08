// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/SystemMonitorErrorEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/system_monitor_error_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__SystemMonitorErrorEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x34, 0x6b, 0xa4, 0xe7, 0x29, 0xfa, 0x74, 0x99,
      0xb5, 0x44, 0x08, 0x64, 0x9b, 0xaf, 0x07, 0x8e,
      0xa8, 0x55, 0xef, 0x44, 0x51, 0x7f, 0x5f, 0xe9,
      0x95, 0x7f, 0x0d, 0xc1, 0x8f, 0x90, 0x4f, 0x0d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__SystemMonitorErrorEnum__TYPE_NAME[] = "protocol/msg/SystemMonitorErrorEnum";

// Define type names, field names, and default values
static char protocol__msg__SystemMonitorErrorEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__SystemMonitorErrorEnum__FIELDS[] = {
  {
    {protocol__msg__SystemMonitorErrorEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__SystemMonitorErrorEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__SystemMonitorErrorEnum__TYPE_NAME, 35, 35},
      {protocol__msg__SystemMonitorErrorEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: SYSTEM_MONITOR\n"
  "# \\xe7\\xb3\\xbb\\xe7\\xbb\\x9f\\xe8\\xb5\\x84\\xe6\\xba\\x90\\xe7\\x9b\\x91\\xe6\\x8e\\xa7\\xe8\\x8a\\x82\\xe7\\x82\\xb9\\xe8\\x8e\\xb7\\xe5\\x8f\\x96\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 HEARTBEAT_TIMEOUT = 0x01\n"
  "# \\xe7\\xa3\\x81\\xe7\\x9b\\x98\\xe8\\xb4\\x9f\\xe8\\xbd\\xbd\\xe8\\xbf\\x87\\xe9\\xab\\x98\n"
  "uint32 ROM_HIGH_USAGE = 0x10\n"
  "# \\xe8\\xbf\\x90\\xe5\\xad\\x98\\xe8\\xb4\\x9f\\xe8\\xbd\\xbd\\xe8\\xbf\\x87\\xe9\\xab\\x98\n"
  "uint32 RAM_HIGH_USAGE = 0x11\n"
  "# CPU\\xe8\\xbf\\x87\\xe6\\xb8\\xa9\n"
  "uint32 CPU_OVERHEAT = 0x12\n"
  "# GPU\\xe8\\xbf\\x87\\xe6\\xb8\\xa9\n"
  "uint32 GPU_OVERHEAT = 0x13";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__SystemMonitorErrorEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__SystemMonitorErrorEnum__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 218, 218},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__SystemMonitorErrorEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__SystemMonitorErrorEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
