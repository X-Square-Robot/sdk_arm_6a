// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/NetMonitorErrorEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/net_monitor_error_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__NetMonitorErrorEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe0, 0x14, 0xbc, 0x54, 0xa7, 0x6e, 0x1f, 0x1a,
      0x0c, 0xa1, 0x3f, 0x74, 0xe3, 0x88, 0x56, 0x16,
      0x54, 0x4f, 0x72, 0xbc, 0xcc, 0x1a, 0xa0, 0xf4,
      0x7b, 0x59, 0x46, 0x84, 0x20, 0xc3, 0x58, 0x9c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__NetMonitorErrorEnum__TYPE_NAME[] = "protocol/msg/NetMonitorErrorEnum";

// Define type names, field names, and default values
static char protocol__msg__NetMonitorErrorEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__NetMonitorErrorEnum__FIELDS[] = {
  {
    {protocol__msg__NetMonitorErrorEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__NetMonitorErrorEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__NetMonitorErrorEnum__TYPE_NAME, 32, 32},
      {protocol__msg__NetMonitorErrorEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: NET_MONITOR\n"
  "# \\xe7\\xbd\\x91\\xe7\\xbb\\x9c\\xe7\\x9b\\x91\\xe6\\x8e\\xa7\\xe8\\x8a\\x82\\xe7\\x82\\xb9\\xe8\\x8e\\xb7\\xe5\\x8f\\x96\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 HEARTBEAT_TIMEOUT = 0x01\n"
  "# \\xe6\\xb2\\xa1\\xe6\\x9c\\x89\\xe4\\xbb\\xbb\\xe4\\xbd\\x95\\xe7\\xbd\\x91\\xe7\\xbb\\x9c\\xe8\\xbf\\x9e\\xe6\\x8e\\xa5\n"
  "uint32 NO_NETWORK = 0x11\n"
  "# \\xe6\\x97\\xa0\\xe6\\xb3\\x95\\xe8\\xae\\xbf\\xe9\\x97\\xae\\xe5\\x85\\xac\\xe7\\xbd\\x91\n"
  "uint32 NO_CONNECTIVITY = 0x12\n"
  "# \\xe8\\xb7\\xaf\\xe7\\x94\\xb1\\xe9\\x85\\x8d\\xe7\\xbd\\xae\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "uint32 INVALID_DEFAULT_ROUTE = 0x14\n"
  "# \\xe6\\xb2\\xa1\\xe6\\x9c\\x89WIFI\\xe5\\x8f\\xaf\\xe4\\xbb\\xa5\\xe8\\xbf\\x9e\\xe6\\x8e\\xa5\n"
  "uint32 NO_WIFI_SSID = 0x21\n"
  "# \\xe8\\xbf\\x9e\\xe6\\x8e\\xa5WiFi\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 FAILED_WIFI_CONNECTION = 0x22\n"
  "# \\xe6\\xb2\\xa1\\xe6\\x9c\\x895G\\xe6\\xa8\\xa1\\xe5\\x9d\\x97\n"
  "uint32 NO_MODEM = 0x31\n"
  "# \\xe6\\xb2\\xa1\\xe6\\x9c\\x89SIM\\xe5\\x8d\\xa1\n"
  "uint32 NO_SIM_CARD = 0x32\n"
  "# \\xe6\\xb2\\xa1\\xe6\\x9c\\x89\\xe4\\xbf\\xa1\\xe5\\x8f\\xb7\\xef\\xbc\\x8c\\xe6\\xa3\\x80\\xe6\\x9f\\xa5\\xe5\\xb0\\x84\\xe9\\xa2\\x91\\xe4\\xbf\\xa1\\xe5\\x8f\\xb7\n"
  "uint32 NO_MODEM_SIGNAL = 0x33\n"
  "# \\xe5\\x9f\\xba\\xe7\\xab\\x99\\xe5\\x85\\xa5\\xe7\\xbd\\x91\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\\xef\\xbc\\x8c\\xe8\\x81\\x94\\xe7\\xb3\\xbbISP\n"
  "uint32 FAILED_MODEM_REGISTRATION = 0x34";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__NetMonitorErrorEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__NetMonitorErrorEnum__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 441, 441},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__NetMonitorErrorEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__NetMonitorErrorEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
