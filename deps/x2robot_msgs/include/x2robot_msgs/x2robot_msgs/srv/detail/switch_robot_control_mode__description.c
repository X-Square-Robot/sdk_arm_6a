// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from x2robot_msgs:srv/SwitchRobotControlMode.idl
// generated code does not contain a copyright notice

#include "x2robot_msgs/srv/detail/switch_robot_control_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__srv__SwitchRobotControlMode__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8d, 0xa7, 0xbd, 0xef, 0x8d, 0xaa, 0x48, 0xf0,
      0xcb, 0x54, 0xae, 0x6c, 0xc3, 0xe6, 0xb3, 0x39,
      0x84, 0x1f, 0x0a, 0x87, 0x3a, 0x35, 0x67, 0xc5,
      0x64, 0x05, 0x0b, 0xe0, 0x55, 0xb0, 0x94, 0x26,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__srv__SwitchRobotControlMode_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5a, 0x24, 0x98, 0xd5, 0xe5, 0x59, 0xd6, 0x2b,
      0x68, 0x69, 0xb0, 0x57, 0xaf, 0x5b, 0x34, 0x6e,
      0x06, 0x0d, 0x7d, 0x59, 0x2d, 0x4a, 0xcf, 0x6e,
      0xcd, 0x56, 0x49, 0x55, 0xd7, 0x44, 0xe3, 0xa5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__srv__SwitchRobotControlMode_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xad, 0x08, 0x56, 0x06, 0xcf, 0x7d, 0x07, 0xfb,
      0x35, 0x83, 0xfd, 0xf8, 0x53, 0x6a, 0x23, 0x7a,
      0x70, 0x83, 0xfa, 0x6a, 0x73, 0xb2, 0xba, 0x40,
      0x61, 0x29, 0xd7, 0xc5, 0x78, 0xd2, 0xf7, 0x58,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__srv__SwitchRobotControlMode_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x93, 0xa4, 0xd5, 0x15, 0x51, 0xef, 0xfb, 0xa4,
      0x5b, 0x97, 0x1c, 0x3a, 0x29, 0x7b, 0xb0, 0xe4,
      0x02, 0xd7, 0x90, 0xf8, 0xbf, 0xd2, 0x16, 0x56,
      0xdf, 0x9d, 0xc7, 0xa3, 0x02, 0xe6, 0x54, 0xc8,
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

static char x2robot_msgs__srv__SwitchRobotControlMode__TYPE_NAME[] = "x2robot_msgs/srv/SwitchRobotControlMode";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char x2robot_msgs__srv__SwitchRobotControlMode_Event__TYPE_NAME[] = "x2robot_msgs/srv/SwitchRobotControlMode_Event";
static char x2robot_msgs__srv__SwitchRobotControlMode_Request__TYPE_NAME[] = "x2robot_msgs/srv/SwitchRobotControlMode_Request";
static char x2robot_msgs__srv__SwitchRobotControlMode_Response__TYPE_NAME[] = "x2robot_msgs/srv/SwitchRobotControlMode_Response";

// Define type names, field names, and default values
static char x2robot_msgs__srv__SwitchRobotControlMode__FIELD_NAME__request_message[] = "request_message";
static char x2robot_msgs__srv__SwitchRobotControlMode__FIELD_NAME__response_message[] = "response_message";
static char x2robot_msgs__srv__SwitchRobotControlMode__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field x2robot_msgs__srv__SwitchRobotControlMode__FIELDS[] = {
  {
    {x2robot_msgs__srv__SwitchRobotControlMode__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {x2robot_msgs__srv__SwitchRobotControlMode_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__SwitchRobotControlMode__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {x2robot_msgs__srv__SwitchRobotControlMode_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__SwitchRobotControlMode__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {x2robot_msgs__srv__SwitchRobotControlMode_Event__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription x2robot_msgs__srv__SwitchRobotControlMode__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__SwitchRobotControlMode_Event__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__SwitchRobotControlMode_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__SwitchRobotControlMode_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
x2robot_msgs__srv__SwitchRobotControlMode__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__srv__SwitchRobotControlMode__TYPE_NAME, 39, 39},
      {x2robot_msgs__srv__SwitchRobotControlMode__FIELDS, 3, 3},
    },
    {x2robot_msgs__srv__SwitchRobotControlMode__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = x2robot_msgs__srv__SwitchRobotControlMode_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = x2robot_msgs__srv__SwitchRobotControlMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = x2robot_msgs__srv__SwitchRobotControlMode_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char x2robot_msgs__srv__SwitchRobotControlMode_Request__FIELD_NAME__target_mode[] = "target_mode";
static char x2robot_msgs__srv__SwitchRobotControlMode_Request__FIELD_NAME__request_for_homing[] = "request_for_homing";
static char x2robot_msgs__srv__SwitchRobotControlMode_Request__FIELD_NAME__try_recover[] = "try_recover";
static char x2robot_msgs__srv__SwitchRobotControlMode_Request__FIELD_NAME__target_motion_state[] = "target_motion_state";
static char x2robot_msgs__srv__SwitchRobotControlMode_Request__FIELD_NAME__data_collection_mode[] = "data_collection_mode";

static rosidl_runtime_c__type_description__Field x2robot_msgs__srv__SwitchRobotControlMode_Request__FIELDS[] = {
  {
    {x2robot_msgs__srv__SwitchRobotControlMode_Request__FIELD_NAME__target_mode, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__SwitchRobotControlMode_Request__FIELD_NAME__request_for_homing, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__SwitchRobotControlMode_Request__FIELD_NAME__try_recover, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__SwitchRobotControlMode_Request__FIELD_NAME__target_motion_state, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__SwitchRobotControlMode_Request__FIELD_NAME__data_collection_mode, 20, 20},
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
x2robot_msgs__srv__SwitchRobotControlMode_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__srv__SwitchRobotControlMode_Request__TYPE_NAME, 47, 47},
      {x2robot_msgs__srv__SwitchRobotControlMode_Request__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char x2robot_msgs__srv__SwitchRobotControlMode_Response__FIELD_NAME__ok[] = "ok";

static rosidl_runtime_c__type_description__Field x2robot_msgs__srv__SwitchRobotControlMode_Response__FIELDS[] = {
  {
    {x2robot_msgs__srv__SwitchRobotControlMode_Response__FIELD_NAME__ok, 2, 2},
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
x2robot_msgs__srv__SwitchRobotControlMode_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__srv__SwitchRobotControlMode_Response__TYPE_NAME, 48, 48},
      {x2robot_msgs__srv__SwitchRobotControlMode_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char x2robot_msgs__srv__SwitchRobotControlMode_Event__FIELD_NAME__info[] = "info";
static char x2robot_msgs__srv__SwitchRobotControlMode_Event__FIELD_NAME__request[] = "request";
static char x2robot_msgs__srv__SwitchRobotControlMode_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field x2robot_msgs__srv__SwitchRobotControlMode_Event__FIELDS[] = {
  {
    {x2robot_msgs__srv__SwitchRobotControlMode_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__SwitchRobotControlMode_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {x2robot_msgs__srv__SwitchRobotControlMode_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__SwitchRobotControlMode_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {x2robot_msgs__srv__SwitchRobotControlMode_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription x2robot_msgs__srv__SwitchRobotControlMode_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__SwitchRobotControlMode_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__SwitchRobotControlMode_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
x2robot_msgs__srv__SwitchRobotControlMode_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__srv__SwitchRobotControlMode_Event__TYPE_NAME, 45, 45},
      {x2robot_msgs__srv__SwitchRobotControlMode_Event__FIELDS, 3, 3},
    },
    {x2robot_msgs__srv__SwitchRobotControlMode_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = x2robot_msgs__srv__SwitchRobotControlMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = x2robot_msgs__srv__SwitchRobotControlMode_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 target_mode\n"
  "bool request_for_homing\n"
  "bool try_recover\n"
  "uint8 target_motion_state\n"
  "uint8 data_collection_mode\n"
  "---\n"
  "bool ok";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__srv__SwitchRobotControlMode__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__srv__SwitchRobotControlMode__TYPE_NAME, 39, 39},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 124, 124},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__srv__SwitchRobotControlMode_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__srv__SwitchRobotControlMode_Request__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__srv__SwitchRobotControlMode_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__srv__SwitchRobotControlMode_Response__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__srv__SwitchRobotControlMode_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__srv__SwitchRobotControlMode_Event__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__srv__SwitchRobotControlMode__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__srv__SwitchRobotControlMode__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *x2robot_msgs__srv__SwitchRobotControlMode_Event__get_individual_type_description_source(NULL);
    sources[4] = *x2robot_msgs__srv__SwitchRobotControlMode_Request__get_individual_type_description_source(NULL);
    sources[5] = *x2robot_msgs__srv__SwitchRobotControlMode_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__srv__SwitchRobotControlMode_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__srv__SwitchRobotControlMode_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__srv__SwitchRobotControlMode_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__srv__SwitchRobotControlMode_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__srv__SwitchRobotControlMode_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__srv__SwitchRobotControlMode_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *x2robot_msgs__srv__SwitchRobotControlMode_Request__get_individual_type_description_source(NULL);
    sources[4] = *x2robot_msgs__srv__SwitchRobotControlMode_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
