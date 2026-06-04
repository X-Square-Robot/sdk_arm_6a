// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/X2robotClientErrorEnum.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/x2robot_client_error_enum__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__X2robotClientErrorEnum__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7d, 0x07, 0x32, 0x79, 0x8e, 0x89, 0x92, 0xed,
      0x2b, 0x2c, 0xdb, 0x98, 0xd6, 0xd7, 0x9c, 0xd3,
      0x9c, 0x90, 0xd6, 0x40, 0xb9, 0x93, 0x33, 0xae,
      0x8e, 0xe9, 0x92, 0xda, 0x3f, 0x95, 0x07, 0x59,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__X2robotClientErrorEnum__TYPE_NAME[] = "protocol/msg/X2robotClientErrorEnum";

// Define type names, field names, and default values
static char protocol__msg__X2robotClientErrorEnum__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field protocol__msg__X2robotClientErrorEnum__FIELDS[] = {
  {
    {protocol__msg__X2robotClientErrorEnum__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
protocol__msg__X2robotClientErrorEnum__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__X2robotClientErrorEnum__TYPE_NAME, 35, 35},
      {protocol__msg__X2robotClientErrorEnum__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unit: X2ROBOT_CLIENT\n"
  "# \\xe6\\xa8\\xa1\\xe5\\x9e\\x8b\\xe5\\x88\\x9d\\xe5\\xa7\\x8b\\xe5\\x8c\\x96\\xe5\\x8f\\x82\\xe6\\x95\\xb0\\xe6\\x97\\xa0\\xe6\\x95\\x88\n"
  "uint32 MODEL_INFO_INVALID = 0x10\n"
  "# \\xe6\\xa8\\xa1\\xe5\\x9e\\x8b\\xe6\\x9c\\x8d\\xe5\\x8a\\xa1\\xe5\\x9c\\xb0\\xe5\\x9d\\x80\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 MODEL_ADDRESS_RESOLVE_FAILED = 0x11\n"
  "# \\xe8\\xbf\\x9e\\xe6\\x8e\\xa5\\xe6\\xa8\\xa1\\xe5\\x9e\\x8b\\xe6\\x9c\\x8d\\xe5\\x8a\\xa1\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 MODEL_SERVER_CONNECT_FAILED = 0x12\n"
  "# \\xe7\\xad\\x89\\xe5\\xbe\\x85\\xe6\\xa8\\xa1\\xe5\\x9e\\x8b\\xe6\\x9c\\x8d\\xe5\\x8a\\xa1\\xe5\\x85\\x83\\xe4\\xbf\\xa1\\xe6\\x81\\xaf\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 MODEL_SERVER_METADATA_TIMEOUT = 0x13\n"
  "# \\xe6\\xa8\\xa1\\xe5\\x9e\\x8b\\xe6\\x9c\\x8d\\xe5\\x8a\\xa1\\xe5\\x85\\x83\\xe4\\xbf\\xa1\\xe6\\x81\\xaf\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 MODEL_SERVER_METADATA_DECODE_FAILED = 0x14\n"
  "# \\xe6\\x9c\\xba\\xe5\\x99\\xa8\\xe4\\xba\\xba\\xe5\\xae\\xa2\\xe6\\x88\\xb7\\xe7\\xab\\xaf\\xe5\\x88\\x9d\\xe5\\xa7\\x8b\\xe5\\x8c\\x96\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 ROBOT_CLIENT_INIT_FAILED = 0x15\n"
  "# \\xe6\\x9c\\xba\\xe5\\x99\\xa8\\xe4\\xba\\xba\\xe5\\x9e\\x8b\\xe5\\x8f\\xb7\\xe9\\x85\\x8d\\xe7\\xbd\\xae\\xe6\\x97\\xa0\\xe6\\x95\\x88\n"
  "uint32 ROBOT_MODEL_CONFIG_INVALID = 0x16\n"
  "# \\xe4\\xb8\\x8d\\xe6\\x94\\xaf\\xe6\\x8c\\x81\\xe7\\x9a\\x84\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\n"
  "uint32 UNSUPPORTED_CONTROL_MODE = 0x17\n"
  "# \\xe5\\xbc\\x80\\xe5\\xa7\\x8b\\xe6\\x8e\\xa8\\xe7\\x90\\x86\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 INFERENCE_START_FAILED = 0x18\n"
  "# \\xe5\\x81\\x9c\\xe6\\xad\\xa2\\xe6\\x8e\\xa8\\xe7\\x90\\x86\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 INFERENCE_STOP_FAILED = 0x19\n"
  "# \\xe5\\x85\\xb3\\xe9\\x97\\xad\\xe6\\x8e\\xa8\\xe7\\x90\\x86\\xe6\\x9c\\x8d\\xe5\\x8a\\xa1\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 INFERENCE_CLOSE_FAILED = 0x1A\n"
  "# \\xe6\\x9c\\xba\\xe5\\x99\\xa8\\xe4\\xba\\xba\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe9\\x87\\x87\\xe9\\x9b\\x86\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 SENSOR_DATA_COLLECT_FAILED = 0x1B\n"
  "# \\xe6\\xa8\\xa1\\xe5\\x9e\\x8b\\xe8\\xaf\\xb7\\xe6\\xb1\\x82\\xe5\\xba\\x8f\\xe5\\x88\\x97\\xe5\\x8c\\x96\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 MODEL_REQUEST_SERIALIZE_FAILED = 0x1C\n"
  "# \\xe6\\xa8\\xa1\\xe5\\x9e\\x8b\\xe8\\xaf\\xb7\\xe6\\xb1\\x82\\xe5\\x8f\\x91\\xe9\\x80\\x81\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 MODEL_REQUEST_SEND_FAILED = 0x1D\n"
  "# \\xe7\\xad\\x89\\xe5\\xbe\\x85\\xe6\\xa8\\xa1\\xe5\\x9e\\x8b\\xe5\\x93\\x8d\\xe5\\xba\\x94\\xe8\\xb6\\x85\\xe6\\x97\\xb6\n"
  "uint32 MODEL_RESPONSE_TIMEOUT = 0x1E\n"
  "# \\xe6\\x8e\\xa5\\xe6\\x94\\xb6\\xe6\\xa8\\xa1\\xe5\\x9e\\x8b\\xe5\\x93\\x8d\\xe5\\xba\\x94\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 MODEL_RESPONSE_RECEIVE_FAILED = 0x1F\n"
  "# \\xe6\\xa8\\xa1\\xe5\\x9e\\x8b\\xe5\\x93\\x8d\\xe5\\xba\\x94\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 MODEL_RESPONSE_DECODE_FAILED = 0x20\n"
  "# \\xe6\\xa8\\xa1\\xe5\\x9e\\x8b\\xe8\\xbe\\x93\\xe5\\x87\\xba\\xe5\\xad\\x97\\xe6\\xae\\xb5\\xe6\\x97\\xa0\\xe6\\x95\\x88\n"
  "uint32 MODEL_OUTPUT_INVALID = 0x21\n"
  "# \\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\\xe4\\xb8\\x8b\\xe5\\x8f\\x91\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 ACTION_EXECUTE_FAILED = 0x22\n"
  "# \\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\\xe5\\x9d\\x97\\xe9\\x81\\xa5\\xe6\\xb5\\x8b\\xe5\\x8f\\x91\\xe5\\xb8\\x83\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 ACTION_CHUNK_PUBLISH_FAILED = 0x23\n"
  "# \\xe6\\xa8\\xa1\\xe5\\x9e\\x8b\\xe6\\x96\\x87\\xe6\\x9c\\xac\\xe8\\xbe\\x93\\xe5\\x87\\xba\\xe5\\x8f\\x91\\xe5\\xb8\\x83\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 MODEL_OUTPUT_TEXT_PUBLISH_FAILED = 0x24\n"
  "# \\xe6\\x8e\\xa8\\xe7\\x90\\x86\\xe8\\xbf\\x90\\xe8\\xa1\\x8c\\xe6\\x97\\xb6\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 INFERENCE_RUNTIME_EXCEPTION = 0x25\n"
  "# \\xe6\\x8e\\xa5\\xe7\\xae\\xa1\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe5\\x88\\x87\\xe6\\x8d\\xa2\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 REMOTE_CONTROL_STATE_FAILED = 0x26\n"
  "# \\xe8\\xb5\\x84\\xe6\\xba\\x90\\xe9\\x87\\x8a\\xe6\\x94\\xbe\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\n"
  "uint32 RESOURCE_CLEANUP_FAILED = 0x27\n"
  "# \\xe5\\xbc\\x82\\xe6\\xad\\xa5\\xe6\\x8e\\xa8\\xe7\\x90\\x86\\xe7\\xba\\xbf\\xe7\\xa8\\x8b\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint32 ASYNC_WORKER_EXCEPTION = 0x28\n"
  "# \\xe5\\xbc\\x82\\xe6\\xad\\xa5\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\\xe9\\x98\\x9f\\xe5\\x88\\x97\\xe8\\xbf\\x87\\xe6\\x9c\\x9f\n"
  "uint32 ASYNC_ACTION_QUEUE_STALE = 0x29";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__X2robotClientErrorEnum__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__X2robotClientErrorEnum__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1367, 1367},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__X2robotClientErrorEnum__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__X2robotClientErrorEnum__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
