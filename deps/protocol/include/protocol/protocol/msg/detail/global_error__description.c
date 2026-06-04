// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/GlobalError.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/global_error__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__GlobalError__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe0, 0x6e, 0x1d, 0x5e, 0x95, 0x6f, 0x42, 0xd2,
      0xca, 0x90, 0xfa, 0x96, 0x43, 0x57, 0x54, 0x1e,
      0x2c, 0x02, 0x68, 0x79, 0x87, 0x95, 0x7a, 0x93,
      0x66, 0xf3, 0xf5, 0xe5, 0x27, 0xf8, 0x86, 0xb5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char protocol__msg__GlobalError__TYPE_NAME[] = "protocol/msg/GlobalError";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char protocol__msg__GlobalError__FIELD_NAME__header[] = "header";
static char protocol__msg__GlobalError__FIELD_NAME__error_code[] = "error_code";
static char protocol__msg__GlobalError__FIELD_NAME__level[] = "level";
static char protocol__msg__GlobalError__FIELD_NAME__exception[] = "exception";

static rosidl_runtime_c__type_description__Field protocol__msg__GlobalError__FIELDS[] = {
  {
    {protocol__msg__GlobalError__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {protocol__msg__GlobalError__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {protocol__msg__GlobalError__FIELD_NAME__level, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {protocol__msg__GlobalError__FIELD_NAME__exception, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription protocol__msg__GlobalError__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
protocol__msg__GlobalError__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__GlobalError__TYPE_NAME, 24, 24},
      {protocol__msg__GlobalError__FIELDS, 4, 4},
    },
    {protocol__msg__GlobalError__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# GlobalError.msg\n"
  "# \\xe7\\xb3\\xbb\\xe7\\xbb\\x9f\\xe8\\xaf\\x84\\xe4\\xbc\\xb0\\xe5\\xa4\\x84\\xe7\\x90\\x86\\xe5\\x90\\x8e\\xe7\\x9a\\x84\\xe9\\x94\\x99\\xe8\\xaf\\xaf\n"
  "std_msgs/Header header # \\xe5\\xa1\\xab\\xe5\\x86\\x99status_code\\xe9\\x87\\x8c\\xe9\\x9d\\xa2\\xe7\\x9a\\x84\\xe6\\x97\\xb6\\xe9\\x97\\xb4\\xe6\\x88\\xb3\\xe3\\x80\\x82\n"
  "uint32 error_code         # \\xe7\\xbb\\x84\\xe6\\x88\\x90\\xef\\xbc\\x9a[Domain 8bit] [Unit 8bit] [Error 16bit]\n"
  "uint8  level\n"
  "string exception # \\xe9\\x80\\x9a\\xe5\\xb8\\xb8\\xe4\\xb8\\x8d\\xe5\\xbb\\xba\\xe8\\xae\\xae\\xe5\\xa1\\x9e\\xe5\\x85\\xa5\\xe8\\xbf\\x99\\xe9\\x87\\x8c\\xef\\xbc\\x8c\\xe5\\xad\\x97\\xe7\\xac\\xa6\\xe4\\xb8\\xb2\\xe9\\x99\\x90\\xe5\\x88\\xb6\\xe5\\x9c\\xa825\\xe4\\xb8\\xaa\\xe5\\xad\\x97\\xe7\\xac\\xa6\\xe4\\xbb\\xa5\\xe5\\x86\\x85\\xe3\\x80\\x82";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__GlobalError__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__GlobalError__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 204, 204},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__GlobalError__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__GlobalError__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
