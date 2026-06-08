// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/MonitorUnitEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/monitor_unit_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__MonitorUnitEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x75, 0x11, 0xb7, 0x1b, 0x63, 0x12, 0x0a, 0xc2,
      0xaa, 0x1f, 0xcf, 0x1d, 0x68, 0x85, 0x84, 0x65,
      0x14, 0xb4, 0x7c, 0xdc, 0xc3, 0x1b, 0xa0, 0xb3,
      0xe3, 0x4b, 0x52, 0x32, 0xd9, 0x9e, 0x1d, 0x85,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__MonitorUnitEnum__TYPE_NAME[] = "protocol/msg/MonitorUnitEnum";

// Define type names, field names, and default values
static char protocol__msg__MonitorUnitEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__MonitorUnitEnum__FIELDS[] = {
  {
    {protocol__msg__MonitorUnitEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__MonitorUnitEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__MonitorUnitEnum__TYPE_NAME, 28, 28},
      {protocol__msg__MonitorUnitEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 SYSTEM_MONITOR = 0x01\n"
  "uint8 NET_MONITOR = 0x02";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__MonitorUnitEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__MonitorUnitEnum__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 53, 53},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__MonitorUnitEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__MonitorUnitEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
