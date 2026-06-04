// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from x2robot_msgs:srv/HomingRequest.idl
// generated code does not contain a copyright notice

#include "x2robot_msgs/srv/detail/homing_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__srv__HomingRequest__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x37, 0xd2, 0xae, 0x32, 0x94, 0x9e, 0xe7, 0xba,
      0xc0, 0xd0, 0xfb, 0x40, 0xf3, 0x06, 0x1d, 0x0f,
      0x43, 0x5b, 0x9f, 0x89, 0x2a, 0x48, 0x35, 0x32,
      0xcd, 0xaf, 0x98, 0xb0, 0x04, 0xc2, 0xdb, 0xe3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__srv__HomingRequest_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0x23, 0x2c, 0x8a, 0x76, 0x08, 0x6c, 0xf4,
      0xd9, 0x12, 0x98, 0x6e, 0xcd, 0xd0, 0x43, 0x7d,
      0x7b, 0x26, 0xbf, 0x4f, 0x31, 0xb8, 0x6a, 0x89,
      0x99, 0x15, 0x9b, 0xbf, 0x5e, 0x87, 0x17, 0xeb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__srv__HomingRequest_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2e, 0x1c, 0x7a, 0x61, 0x4b, 0x95, 0x4e, 0x9b,
      0x39, 0x8a, 0x4f, 0xca, 0x57, 0xb6, 0x7b, 0x67,
      0x72, 0x01, 0x76, 0xf8, 0x03, 0xa0, 0xb6, 0x0d,
      0x7d, 0x77, 0x74, 0x53, 0x4c, 0x6d, 0xa3, 0x1b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__srv__HomingRequest_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4d, 0x2b, 0x03, 0xfe, 0x52, 0xf1, 0x67, 0x92,
      0x9e, 0x6b, 0x0b, 0x11, 0xc5, 0x47, 0xe2, 0xc4,
      0x2a, 0xea, 0x8a, 0x4d, 0xf4, 0xf7, 0x4a, 0xb2,
      0x75, 0x4e, 0xd8, 0xd7, 0xfc, 0xee, 0x80, 0x7f,
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

static char x2robot_msgs__srv__HomingRequest__TYPE_NAME[] = "x2robot_msgs/srv/HomingRequest";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char x2robot_msgs__srv__HomingRequest_Event__TYPE_NAME[] = "x2robot_msgs/srv/HomingRequest_Event";
static char x2robot_msgs__srv__HomingRequest_Request__TYPE_NAME[] = "x2robot_msgs/srv/HomingRequest_Request";
static char x2robot_msgs__srv__HomingRequest_Response__TYPE_NAME[] = "x2robot_msgs/srv/HomingRequest_Response";

// Define type names, field names, and default values
static char x2robot_msgs__srv__HomingRequest__FIELD_NAME__request_message[] = "request_message";
static char x2robot_msgs__srv__HomingRequest__FIELD_NAME__response_message[] = "response_message";
static char x2robot_msgs__srv__HomingRequest__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field x2robot_msgs__srv__HomingRequest__FIELDS[] = {
  {
    {x2robot_msgs__srv__HomingRequest__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {x2robot_msgs__srv__HomingRequest_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__HomingRequest__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {x2robot_msgs__srv__HomingRequest_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__HomingRequest__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {x2robot_msgs__srv__HomingRequest_Event__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription x2robot_msgs__srv__HomingRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__HomingRequest_Event__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__HomingRequest_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__HomingRequest_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
x2robot_msgs__srv__HomingRequest__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__srv__HomingRequest__TYPE_NAME, 30, 30},
      {x2robot_msgs__srv__HomingRequest__FIELDS, 3, 3},
    },
    {x2robot_msgs__srv__HomingRequest__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = x2robot_msgs__srv__HomingRequest_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = x2robot_msgs__srv__HomingRequest_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = x2robot_msgs__srv__HomingRequest_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char x2robot_msgs__srv__HomingRequest_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field x2robot_msgs__srv__HomingRequest_Request__FIELDS[] = {
  {
    {x2robot_msgs__srv__HomingRequest_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
x2robot_msgs__srv__HomingRequest_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__srv__HomingRequest_Request__TYPE_NAME, 38, 38},
      {x2robot_msgs__srv__HomingRequest_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char x2robot_msgs__srv__HomingRequest_Response__FIELD_NAME__is_succ[] = "is_succ";

static rosidl_runtime_c__type_description__Field x2robot_msgs__srv__HomingRequest_Response__FIELDS[] = {
  {
    {x2robot_msgs__srv__HomingRequest_Response__FIELD_NAME__is_succ, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
x2robot_msgs__srv__HomingRequest_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__srv__HomingRequest_Response__TYPE_NAME, 39, 39},
      {x2robot_msgs__srv__HomingRequest_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char x2robot_msgs__srv__HomingRequest_Event__FIELD_NAME__info[] = "info";
static char x2robot_msgs__srv__HomingRequest_Event__FIELD_NAME__request[] = "request";
static char x2robot_msgs__srv__HomingRequest_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field x2robot_msgs__srv__HomingRequest_Event__FIELDS[] = {
  {
    {x2robot_msgs__srv__HomingRequest_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__HomingRequest_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {x2robot_msgs__srv__HomingRequest_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__HomingRequest_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {x2robot_msgs__srv__HomingRequest_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription x2robot_msgs__srv__HomingRequest_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__HomingRequest_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__HomingRequest_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
x2robot_msgs__srv__HomingRequest_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__srv__HomingRequest_Event__TYPE_NAME, 36, 36},
      {x2robot_msgs__srv__HomingRequest_Event__FIELDS, 3, 3},
    },
    {x2robot_msgs__srv__HomingRequest_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = x2robot_msgs__srv__HomingRequest_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = x2robot_msgs__srv__HomingRequest_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "bool is_succ";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__srv__HomingRequest__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__srv__HomingRequest__TYPE_NAME, 30, 30},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 16, 16},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__srv__HomingRequest_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__srv__HomingRequest_Request__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__srv__HomingRequest_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__srv__HomingRequest_Response__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__srv__HomingRequest_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__srv__HomingRequest_Event__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__srv__HomingRequest__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__srv__HomingRequest__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *x2robot_msgs__srv__HomingRequest_Event__get_individual_type_description_source(NULL);
    sources[4] = *x2robot_msgs__srv__HomingRequest_Request__get_individual_type_description_source(NULL);
    sources[5] = *x2robot_msgs__srv__HomingRequest_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__srv__HomingRequest_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__srv__HomingRequest_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__srv__HomingRequest_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__srv__HomingRequest_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__srv__HomingRequest_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__srv__HomingRequest_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *x2robot_msgs__srv__HomingRequest_Request__get_individual_type_description_source(NULL);
    sources[4] = *x2robot_msgs__srv__HomingRequest_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
