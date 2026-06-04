// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/SensorStatus.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/sensor_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__SensorStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x37, 0x07, 0x50, 0xee, 0x94, 0xf7, 0x3c, 0x90,
      0x77, 0x78, 0xd5, 0x06, 0xe9, 0x72, 0xa9, 0x98,
      0x5b, 0xd8, 0x00, 0xf9, 0x9a, 0x93, 0xac, 0x2f,
      0x47, 0xa9, 0x56, 0x71, 0xf3, 0x44, 0x5b, 0xe8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char protocol__msg__SensorStatus__TYPE_NAME[] = "protocol/msg/SensorStatus";

// Define type names, field names, and default values
static char protocol__msg__SensorStatus__FIELD_NAME__state_code[] = "state_code";
static char protocol__msg__SensorStatus__FIELD_NAME__error_bit_code[] = "error_bit_code";

static rosidl_runtime_c__type_description__Field protocol__msg__SensorStatus__FIELDS[] = {
  {
    {protocol__msg__SensorStatus__FIELD_NAME__state_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {protocol__msg__SensorStatus__FIELD_NAME__error_bit_code, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
protocol__msg__SensorStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__SensorStatus__TYPE_NAME, 25, 25},
      {protocol__msg__SensorStatus__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 state_code\n"
  "uint32 error_bit_code\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__SensorStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__SensorStatus__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 40, 40},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__SensorStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__SensorStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
