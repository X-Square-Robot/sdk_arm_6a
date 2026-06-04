// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from protocol:msg/StatusCode.idl
// generated code does not contain a copyright notice

#include "protocol/msg/detail/status_code__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_protocol
const rosidl_type_hash_t *
protocol__msg__StatusCode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe1, 0x2d, 0x14, 0xc3, 0x1c, 0x39, 0xf1, 0x00,
      0xa5, 0x09, 0x65, 0x92, 0x02, 0xf9, 0x9f, 0xab,
      0xcb, 0xf7, 0x19, 0x2c, 0x23, 0x2b, 0xd5, 0x27,
      0x66, 0x22, 0x22, 0xf9, 0x8e, 0x69, 0x9c, 0x9c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "protocol/msg/detail/unit_error__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t protocol__msg__UnitError__EXPECTED_HASH = {1, {
    0xaf, 0x66, 0x59, 0x73, 0xcd, 0xe8, 0x63, 0x36,
    0xef, 0x6b, 0xe8, 0xcd, 0x3b, 0xca, 0x45, 0xcb,
    0xb4, 0x62, 0xa0, 0x78, 0x91, 0x7f, 0xfa, 0xd3,
    0xd1, 0x42, 0xaa, 0xe0, 0x06, 0xf5, 0xac, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char protocol__msg__StatusCode__TYPE_NAME[] = "protocol/msg/StatusCode";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char protocol__msg__UnitError__TYPE_NAME[] = "protocol/msg/UnitError";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char protocol__msg__StatusCode__FIELD_NAME__header[] = "header";
static char protocol__msg__StatusCode__FIELD_NAME__domain[] = "domain";
static char protocol__msg__StatusCode__FIELD_NAME__unit[] = "unit";
static char protocol__msg__StatusCode__FIELD_NAME__state_code[] = "state_code";
static char protocol__msg__StatusCode__FIELD_NAME__error_code[] = "error_code";

static rosidl_runtime_c__type_description__Field protocol__msg__StatusCode__FIELDS[] = {
  {
    {protocol__msg__StatusCode__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {protocol__msg__StatusCode__FIELD_NAME__domain, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {protocol__msg__StatusCode__FIELD_NAME__unit, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {protocol__msg__StatusCode__FIELD_NAME__state_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {protocol__msg__StatusCode__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {protocol__msg__UnitError__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription protocol__msg__StatusCode__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {protocol__msg__UnitError__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
protocol__msg__StatusCode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {protocol__msg__StatusCode__TYPE_NAME, 23, 23},
      {protocol__msg__StatusCode__FIELDS, 5, 5},
    },
    {protocol__msg__StatusCode__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&protocol__msg__UnitError__EXPECTED_HASH, protocol__msg__UnitError__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = protocol__msg__UnitError__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# status_code.msg\n"
  "# \\xe8\\x8a\\x82\\xe7\\x82\\xb9\\xe5\\xae\\x9a\\xe9\\xa2\\x91 + \\xe4\\xba\\x8b\\xe4\\xbb\\xb6\\xe8\\xa7\\xa6\\xe5\\x8f\\x91\\xe4\\xb8\\x8a\\xe6\\x8a\\xa5\\xe7\\x9a\\x84\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe5\\xbf\\xab\\xe7\\x85\\xa7\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "uint8 domain           # \\xe4\\xb8\\x80\\xe7\\xba\\xa7\\xe6\\xa0\\x87\\xe8\\xaf\\x86\\xef\\xbc\\x9a\\xe7\\xb3\\xbb\\xe7\\xbb\\x9f\\xe5\\x9f\\x9f\n"
  "uint8 unit             # \\xe4\\xba\\x8c\\xe7\\xba\\xa7\\xe6\\xa0\\x87\\xe8\\xaf\\x86\\xef\\xbc\\x9a\\xe5\\x9f\\x9f\\xe5\\x86\\x85\\xe5\\x8d\\x95\\xe5\\x85\\x83\n"
  "\n"
  "uint8 state_code       # \\xe8\\x8a\\x82\\xe7\\x82\\xb9\\xe7\\x94\\x9f\\xe5\\x91\\xbd\\xe5\\x91\\xa8\\xe6\\x9c\\x9f\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xef\\xbc\\x88\\xe4\\xb8\\xba\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\\xe5\\xa4\\x84\\xe7\\x90\\x86\\xe6\\xa8\\xa1\\xe5\\x9d\\x97\\xe6\\x9c\\x8d\\xe5\\x8a\\xa1\\xef\\xbc\\x8c\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\\xe5\\xa4\\x84\\xe7\\x90\\x86\\xe6\\x97\\xb6\\xe5\\x8f\\xaf\\xe8\\x83\\xbd\\xe4\\xbc\\x9a\\xe9\\x9c\\x80\\xe8\\xa6\\x81\\xe9\\xa2\\x9d\\xe5\\xa4\\x96\\xe7\\x9a\\x84\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe7\\x9f\\xa5\\xe6\\x99\\x93\\xe8\\x8a\\x82\\xe7\\x82\\xb9\\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe7\\x9a\\x84\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xef\\xbc\\x89\n"
  "# 0 = UNINITIALIZED\n"
  "# 1 = INITIALIZED\n"
  "# 2 = RUNNING\n"
  "# 3 = ERROR\n"
  "# 4 = OFFLINE\n"
  "\n"
  "UnitError[] error_code # \\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe8\\x8a\\x82\\xe7\\x82\\xb9\\xe6\\x89\\x80\\xe6\\x9c\\x89\\xe4\\xbb\\x8d\\xe7\\x84\\xb6\\xe5\\xad\\x98\\xe5\\x9c\\xa8\\xe7\\x9a\\x84\\xe9\\x94\\x99\\xe8\\xaf\\xaf\\xef\\xbc\\x8c\\xe4\\xb8\\x8d\\xe5\\xad\\x98\\xe5\\x9c\\xa8\\xe5\\x8f\\xaf\\xe4\\xb8\\xba\\xe7\\xa9\\xba";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
protocol__msg__StatusCode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {protocol__msg__StatusCode__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 329, 329},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
protocol__msg__StatusCode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *protocol__msg__StatusCode__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *protocol__msg__UnitError__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
