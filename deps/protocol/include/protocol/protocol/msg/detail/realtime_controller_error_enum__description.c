// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/RealtimeControllerErrorEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/realtime_controller_error_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__RealtimeControllerErrorEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf2, 0xbc, 0x9b, 0x53, 0xe3, 0x93, 0xee, 0xb5,
      0x77, 0x05, 0x5e, 0xbb, 0xc6, 0x0e, 0x6d, 0xea,
      0x66, 0xab, 0xd3, 0x6d, 0xd6, 0xfd, 0xa6, 0xf6,
      0xcd, 0xd4, 0x82, 0xdc, 0xd1, 0xea, 0x22, 0xb9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__RealtimeControllerErrorEnum__TYPE_NAME[] = "protocol/msg/RealtimeControllerErrorEnum";

// Define type names, field names, and default values
static char protocol__msg__RealtimeControllerErrorEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__RealtimeControllerErrorEnum__FIELDS[] = {
  {
    {protocol__msg__RealtimeControllerErrorEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__RealtimeControllerErrorEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__RealtimeControllerErrorEnum__TYPE_NAME, 40, 40},
      {protocol__msg__RealtimeControllerErrorEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: REALTIME_CONTROLLER\n"
  "# \\xe5\\xae\\x89\\xe5\\x85\\xa8\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\\xe5\\x99\\xa8\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe8\\x8e\\xb7\\xe5\\x8f\\x96\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 HEARTBEAT_TIMEOUT = 0x01\n"
  "# \\xe6\\xad\\xa3\\xe5\\xb8\\xb8\\xe5\\xb7\\xa5\\xe4\\xbd\\x9c\\xe7\\x8a\\xb6\\xe6\\x80\\x81\n"
  "uint32 IS_WORKING = 0x10\n"
  "# \\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe5\\x99\\xa8\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\\xe5\\x88\\x87\\xe6\\x8d\\xa2\\xe4\\xb8\\xad\n"
  "uint32 IS_CONTROLMODECHANGED = 0x11\n"
  "# \\xe6\\x8f\\x92\\xe5\\x80\\xbc\\xe8\\xbd\\xa8\\xe8\\xbf\\xb9\\xe8\\xbf\\x90\\xe8\\xa1\\x8c\\xe4\\xb8\\xad\n"
  "uint32 IS_TRAJRUNNING = 0x12\n"
  "# \\xe7\\xa2\\xb0\\xe6\\x92\\x9e\\xe5\\x9b\\x9e\\xe9\\x80\\x80\n"
  "uint32 IS_BACKOFF = 0x13\n"
  "# \\xe9\\x99\\x90\\xe4\\xbd\\x8d\\xe5\\x9b\\x9e\\xe9\\x80\\x80\n"
  "uint32 IS_AVOIDLIMITS = 0x14\n"
  "# \\xe8\\xbd\\xaf\\xe6\\x80\\xa5\\xe5\\x81\\x9c\\xef\\xbc\\x8c\\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe5\\x99\\xa8\\xe4\\xb8\\x8b\\xe4\\xbd\\xbf\\xe8\\x83\\xbd\n"
  "uint32 IS_SOFTSTOP = 0x15\n"
  "# \\xe7\\xa1\\xac\\xe6\\x80\\xa5\\xe5\\x81\\x9c\\xef\\xbc\\x8c\\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe5\\x99\\xa8\\xe4\\xb8\\x8b\\xe7\\x94\\xb5\n"
  "uint32 IS_ESTOPPED = 0x16\n"
  "# \\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe5\\x99\\xa8\\xe6\\xad\\xa3\\xe5\\xb8\\xb8\\xef\\xbc\\x8c\\xe7\\xad\\x89\\xe5\\xbe\\x85\\xe5\\x90\\xaf\\xe5\\x8a\\xa8\n"
  "uint32 IS_READYFORRESETACK = 0x17\n"
  "# \\xe5\\x86\\x85\\xe9\\x83\\xa8\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 IS_INTERNALERROR = 0x18\n"
  "# \\xe5\\x8d\\x87\\xe9\\x99\\x8d\\xe8\\x85\\xb0\\xe6\\xad\\xa3\\xe5\\x9c\\xa8\\xe5\\x9b\\x9e\\xe9\\x9b\\xb6\n"
  "uint32 IS_LIFTWAISTHOMING = 0x19";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__RealtimeControllerErrorEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__RealtimeControllerErrorEnum__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 469, 469},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__RealtimeControllerErrorEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__RealtimeControllerErrorEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
