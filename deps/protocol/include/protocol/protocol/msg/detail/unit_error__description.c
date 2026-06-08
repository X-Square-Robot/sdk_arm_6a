// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/UnitError.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/unit_error__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__UnitError__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaf, 0x66, 0x59, 0x73, 0xcd, 0xe8, 0x63, 0x36,
      0xef, 0x6b, 0xe8, 0xcd, 0x3b, 0xca, 0x45, 0xcb,
      0xb4, 0x62, 0xa0, 0x78, 0x91, 0x7f, 0xfa, 0xd3,
      0xd1, 0x42, 0xaa, 0xe0, 0x06, 0xf5, 0xac, 0x97,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__UnitError__TYPE_NAME[] = "protocol/msg/UnitError";

// Define type names, field names, and default values
static char protocol__msg__UnitError__FIELD_NAME__error_code[] = "error_code";
static char protocol__msg__UnitError__FIELD_NAME__level[] = "level";
static char protocol__msg__UnitError__FIELD_NAME__exception[] = "exception";

static rosidl_runtime_c__type_description__Field protocol__msg__UnitError__FIELDS[] = {
  {
    {protocol__msg__UnitError__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {protocol__msg__UnitError__FIELD_NAME__level, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {protocol__msg__UnitError__FIELD_NAME__exception, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
protocol__msg__UnitError__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__UnitError__TYPE_NAME, 22, 22},
      {protocol__msg__UnitError__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# UnitError.msg\n"
  "# \\xe6\\x9f\\x90\\xe5\\x8d\\x95\\xe5\\x85\\x83\\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe4\\xbb\\x8d\\xe7\\x84\\xb6\\xe5\\xad\\x98\\xe5\\x9c\\xa8\\xe7\\x9a\\x84\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "\n"
  "uint8 error_code         # \\xe5\\x8d\\x95\\xe5\\x85\\x83\\xe5\\xae\\x9a\\xe4\\xb9\\x89\\xe7\\x9a\\x84\\xe9\\x94\\x99\\xe8\\xaf\\xaf\\xe7\\xa0\\x81\\xef\\xbc\\x88\\xe4\\xb8\\x8d\\xe5\\x90\\xab domain/unit\\xef\\xbc\\x89\n"
  "uint8 level           # 0\\xe8\\xa1\\xa8\\xe7\\xa4\\xbainfo 1\\xe8\\xa1\\xa8\\xe7\\xa4\\xbawarning,2\\xe8\\xa1\\xa8\\xe7\\xa4\\xbaerror,3\\xe8\\xa1\\xa8\\xe7\\xa4\\xbafatal\n"
  "\n"
  "string exception # \\xe4\\xb8\\x80\\xe4\\xba\\x9b\\xe9\\xa2\\x9d\\xe5\\xa4\\x96\\xe7\\x9a\\x84\\xe4\\xbf\\xa1\\xe6\\x81\\xaf\\xef\\xbc\\x8c\\xe9\\x80\\x9a\\xe5\\xb8\\xb8\\xe4\\xb8\\x8d\\xe5\\xbb\\xba\\xe8\\xae\\xae\\xe5\\xb0\\x86\\xe4\\xbf\\xa1\\xe6\\x81\\xaf\\xe5\\xa1\\x9e\\xe5\\x85\\xa5\\xe8\\xbf\\x99\\xe9\\x87\\x8c\\xe3\\x80\\x82\\xe5\\xad\\x97\\xe7\\xac\\xa6\\xe4\\xb8\\xb2\\xe9\\x95\\xbf\\xe5\\xba\\xa6\\xe9\\x99\\x90\\xe5\\x88\\xb6\\xe5\\x9c\\xa825\\xe4\\xbb\\xa5\\xe5\\x86\\x85\\xe3\\x80\\x82";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__UnitError__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__UnitError__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 199, 199},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__UnitError__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__UnitError__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
