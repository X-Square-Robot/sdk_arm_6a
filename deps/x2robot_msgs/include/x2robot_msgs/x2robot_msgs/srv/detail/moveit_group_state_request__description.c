// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from x2robot_msgs:srv/MoveitGroupStateRequest.idl
// generated code does not contain a copyright notice

#include "x2robot_msgs/srv/detail/moveit_group_state_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__srv__MoveitGroupStateRequest__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4b, 0x54, 0x39, 0xb5, 0xe0, 0x5c, 0xad, 0x6c,
      0xa1, 0xf7, 0x37, 0x02, 0x6c, 0x69, 0x9c, 0x65,
      0x20, 0xd3, 0xee, 0xdb, 0x63, 0xa7, 0x84, 0x73,
      0x9c, 0xac, 0xf5, 0x42, 0x64, 0xf1, 0x3b, 0xed,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__srv__MoveitGroupStateRequest_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc7, 0xbb, 0x89, 0x48, 0xb2, 0x9b, 0xf6, 0x80,
      0xed, 0xd9, 0x42, 0x8c, 0x13, 0x51, 0x47, 0xf0,
      0x4d, 0x14, 0x66, 0x5c, 0xaf, 0xbc, 0xfe, 0x7c,
      0x57, 0x2d, 0xd5, 0xb9, 0x67, 0x8c, 0x57, 0x4c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__srv__MoveitGroupStateRequest_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x60, 0x17, 0xc2, 0x0a, 0xb8, 0x85, 0xd7, 0xb8,
      0x08, 0xef, 0xc0, 0xb9, 0x19, 0x3a, 0x8a, 0x38,
      0xce, 0x94, 0xe2, 0x6b, 0x7d, 0xf3, 0x22, 0xd4,
      0xa1, 0x95, 0x23, 0x1f, 0x88, 0xa2, 0x06, 0x87,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__srv__MoveitGroupStateRequest_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe8, 0xf9, 0xfa, 0x23, 0xea, 0xeb, 0xb7, 0xcf,
      0x45, 0x41, 0x7f, 0x78, 0x2b, 0xf0, 0xce, 0xb6,
      0x34, 0x20, 0x9f, 0x8e, 0x30, 0x82, 0xe0, 0x97,
      0x56, 0xf0, 0x19, 0x8b, 0x30, 0xf8, 0x28, 0x15,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char x2robot_msgs__srv__MoveitGroupStateRequest__TYPE_NAME[] = "x2robot_msgs/srv/MoveitGroupStateRequest";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char x2robot_msgs__srv__MoveitGroupStateRequest_Event__TYPE_NAME[] = "x2robot_msgs/srv/MoveitGroupStateRequest_Event";
static char x2robot_msgs__srv__MoveitGroupStateRequest_Request__TYPE_NAME[] = "x2robot_msgs/srv/MoveitGroupStateRequest_Request";
static char x2robot_msgs__srv__MoveitGroupStateRequest_Response__TYPE_NAME[] = "x2robot_msgs/srv/MoveitGroupStateRequest_Response";

// Define type names, field names, and default values
static char x2robot_msgs__srv__MoveitGroupStateRequest__FIELD_NAME__request_message[] = "request_message";
static char x2robot_msgs__srv__MoveitGroupStateRequest__FIELD_NAME__response_message[] = "response_message";
static char x2robot_msgs__srv__MoveitGroupStateRequest__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field x2robot_msgs__srv__MoveitGroupStateRequest__FIELDS[] = {
  {
    {x2robot_msgs__srv__MoveitGroupStateRequest__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {x2robot_msgs__srv__MoveitGroupStateRequest_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__MoveitGroupStateRequest__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {x2robot_msgs__srv__MoveitGroupStateRequest_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__MoveitGroupStateRequest__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {x2robot_msgs__srv__MoveitGroupStateRequest_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription x2robot_msgs__srv__MoveitGroupStateRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__MoveitGroupStateRequest_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__MoveitGroupStateRequest_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__MoveitGroupStateRequest_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
x2robot_msgs__srv__MoveitGroupStateRequest__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__srv__MoveitGroupStateRequest__TYPE_NAME, 40, 40},
      {x2robot_msgs__srv__MoveitGroupStateRequest__FIELDS, 3, 3},
    },
    {x2robot_msgs__srv__MoveitGroupStateRequest__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = x2robot_msgs__srv__MoveitGroupStateRequest_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = x2robot_msgs__srv__MoveitGroupStateRequest_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = x2robot_msgs__srv__MoveitGroupStateRequest_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char x2robot_msgs__srv__MoveitGroupStateRequest_Request__FIELD_NAME__group_state[] = "group_state";
static char x2robot_msgs__srv__MoveitGroupStateRequest_Request__FIELD_NAME__num_planning_attempts[] = "num_planning_attempts";
static char x2robot_msgs__srv__MoveitGroupStateRequest_Request__DEFAULT_VALUE__num_planning_attempts[] = "1";
static char x2robot_msgs__srv__MoveitGroupStateRequest_Request__FIELD_NAME__allowed_planning_time[] = "allowed_planning_time";
static char x2robot_msgs__srv__MoveitGroupStateRequest_Request__DEFAULT_VALUE__allowed_planning_time[] = "1.0";
static char x2robot_msgs__srv__MoveitGroupStateRequest_Request__FIELD_NAME__max_velocity_scaling_factor[] = "max_velocity_scaling_factor";
static char x2robot_msgs__srv__MoveitGroupStateRequest_Request__DEFAULT_VALUE__max_velocity_scaling_factor[] = "0.1";
static char x2robot_msgs__srv__MoveitGroupStateRequest_Request__FIELD_NAME__max_acceleration_scaling_factor[] = "max_acceleration_scaling_factor";
static char x2robot_msgs__srv__MoveitGroupStateRequest_Request__DEFAULT_VALUE__max_acceleration_scaling_factor[] = "0.2";

static rosidl_runtime_c__type_description__Field x2robot_msgs__srv__MoveitGroupStateRequest_Request__FIELDS[] = {
  {
    {x2robot_msgs__srv__MoveitGroupStateRequest_Request__FIELD_NAME__group_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__MoveitGroupStateRequest_Request__FIELD_NAME__num_planning_attempts, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {x2robot_msgs__srv__MoveitGroupStateRequest_Request__DEFAULT_VALUE__num_planning_attempts, 1, 1},
  },
  {
    {x2robot_msgs__srv__MoveitGroupStateRequest_Request__FIELD_NAME__allowed_planning_time, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {x2robot_msgs__srv__MoveitGroupStateRequest_Request__DEFAULT_VALUE__allowed_planning_time, 3, 3},
  },
  {
    {x2robot_msgs__srv__MoveitGroupStateRequest_Request__FIELD_NAME__max_velocity_scaling_factor, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {x2robot_msgs__srv__MoveitGroupStateRequest_Request__DEFAULT_VALUE__max_velocity_scaling_factor, 3, 3},
  },
  {
    {x2robot_msgs__srv__MoveitGroupStateRequest_Request__FIELD_NAME__max_acceleration_scaling_factor, 31, 31},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {x2robot_msgs__srv__MoveitGroupStateRequest_Request__DEFAULT_VALUE__max_acceleration_scaling_factor, 3, 3},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
x2robot_msgs__srv__MoveitGroupStateRequest_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__srv__MoveitGroupStateRequest_Request__TYPE_NAME, 48, 48},
      {x2robot_msgs__srv__MoveitGroupStateRequest_Request__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char x2robot_msgs__srv__MoveitGroupStateRequest_Response__FIELD_NAME__moveit_move_result[] = "moveit_move_result";
static char x2robot_msgs__srv__MoveitGroupStateRequest_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field x2robot_msgs__srv__MoveitGroupStateRequest_Response__FIELDS[] = {
  {
    {x2robot_msgs__srv__MoveitGroupStateRequest_Response__FIELD_NAME__moveit_move_result, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__MoveitGroupStateRequest_Response__FIELD_NAME__message, 7, 7},
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
x2robot_msgs__srv__MoveitGroupStateRequest_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__srv__MoveitGroupStateRequest_Response__TYPE_NAME, 49, 49},
      {x2robot_msgs__srv__MoveitGroupStateRequest_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char x2robot_msgs__srv__MoveitGroupStateRequest_Event__FIELD_NAME__info[] = "info";
static char x2robot_msgs__srv__MoveitGroupStateRequest_Event__FIELD_NAME__request[] = "request";
static char x2robot_msgs__srv__MoveitGroupStateRequest_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field x2robot_msgs__srv__MoveitGroupStateRequest_Event__FIELDS[] = {
  {
    {x2robot_msgs__srv__MoveitGroupStateRequest_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__MoveitGroupStateRequest_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {x2robot_msgs__srv__MoveitGroupStateRequest_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__MoveitGroupStateRequest_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {x2robot_msgs__srv__MoveitGroupStateRequest_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription x2robot_msgs__srv__MoveitGroupStateRequest_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__MoveitGroupStateRequest_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__MoveitGroupStateRequest_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
x2robot_msgs__srv__MoveitGroupStateRequest_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__srv__MoveitGroupStateRequest_Event__TYPE_NAME, 46, 46},
      {x2robot_msgs__srv__MoveitGroupStateRequest_Event__FIELDS, 3, 3},
    },
    {x2robot_msgs__srv__MoveitGroupStateRequest_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = x2robot_msgs__srv__MoveitGroupStateRequest_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = x2robot_msgs__srv__MoveitGroupStateRequest_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe8\\xaf\\xb7\\xe6\\xb1\\x82\n"
  "string group_state\n"
  "uint8 num_planning_attempts 1\n"
  "float64 allowed_planning_time 1.0\n"
  "float64 max_velocity_scaling_factor 0.1\n"
  "float64 max_acceleration_scaling_factor 0.2\n"
  "---\n"
  "# \\xe5\\x93\\x8d\\xe5\\xba\\x94\n"
  "uint8 moveit_move_result   # \\xe6\\x9f\\xa5\\xe8\\xaf\\xa2x2robot_msgs.msg.EnumMoveitMoveResult\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__srv__MoveitGroupStateRequest__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__srv__MoveitGroupStateRequest__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 265, 265},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__srv__MoveitGroupStateRequest_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__srv__MoveitGroupStateRequest_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__srv__MoveitGroupStateRequest_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__srv__MoveitGroupStateRequest_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__srv__MoveitGroupStateRequest_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__srv__MoveitGroupStateRequest_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__srv__MoveitGroupStateRequest__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__srv__MoveitGroupStateRequest__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *x2robot_msgs__srv__MoveitGroupStateRequest_Event__get_individual_type_description_source(NULL);
    sources[4] = *x2robot_msgs__srv__MoveitGroupStateRequest_Request__get_individual_type_description_source(NULL);
    sources[5] = *x2robot_msgs__srv__MoveitGroupStateRequest_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__srv__MoveitGroupStateRequest_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__srv__MoveitGroupStateRequest_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__srv__MoveitGroupStateRequest_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__srv__MoveitGroupStateRequest_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__srv__MoveitGroupStateRequest_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__srv__MoveitGroupStateRequest_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *x2robot_msgs__srv__MoveitGroupStateRequest_Request__get_individual_type_description_source(NULL);
    sources[4] = *x2robot_msgs__srv__MoveitGroupStateRequest_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
