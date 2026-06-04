// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from x2robot_msgs:srv/TrajectoryPlanRequest.idl
// generated code does not contain a copyright notice

#include "x2robot_msgs/srv/detail/trajectory_plan_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__srv__TrajectoryPlanRequest__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x05, 0xe2, 0x9c, 0xfa, 0xb0, 0xab, 0x59, 0x09,
      0x61, 0x3a, 0x59, 0x4a, 0x21, 0x34, 0x5e, 0x4d,
      0x6e, 0x37, 0x86, 0xed, 0x0a, 0x99, 0x56, 0xc0,
      0x43, 0x24, 0x89, 0x6a, 0xb3, 0x13, 0xf5, 0x53,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__srv__TrajectoryPlanRequest_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x58, 0x53, 0xb9, 0xe7, 0xae, 0x83, 0xbd, 0xf4,
      0x15, 0xd8, 0x9a, 0x6f, 0x85, 0xa3, 0x4d, 0x19,
      0x62, 0xda, 0x8b, 0x1c, 0x07, 0xcc, 0xb9, 0x4e,
      0xaa, 0x3b, 0x0e, 0x7c, 0x0a, 0xec, 0x4a, 0x24,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__srv__TrajectoryPlanRequest_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0x92, 0x68, 0xd8, 0xad, 0x26, 0x60, 0xc3,
      0x82, 0xb6, 0x63, 0x58, 0x43, 0x6b, 0xb9, 0xf5,
      0x21, 0x1e, 0x00, 0x8b, 0xf6, 0xaa, 0xdc, 0xd9,
      0x3f, 0xe1, 0x02, 0x72, 0xed, 0x7b, 0x58, 0xa7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_x2robot_msgs
const rosidl_type_hash_t *
x2robot_msgs__srv__TrajectoryPlanRequest_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdb, 0x80, 0x69, 0xdb, 0x15, 0x25, 0x92, 0x37,
      0x36, 0x05, 0x6f, 0x06, 0xbf, 0x33, 0xb9, 0x2b,
      0x79, 0xdf, 0x1c, 0x3c, 0x53, 0x4b, 0x66, 0x2d,
      0x80, 0xb3, 0xcc, 0x22, 0x3c, 0x99, 0xff, 0x75,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/duration__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Duration__EXPECTED_HASH = {1, {
    0xe8, 0xd0, 0x09, 0xf6, 0x59, 0x81, 0x6f, 0x75,
    0x8b, 0x75, 0x33, 0x4e, 0xe1, 0xa9, 0xca, 0x5b,
    0x5c, 0x0b, 0x85, 0x98, 0x43, 0x26, 0x1f, 0x14,
    0xc7, 0xf9, 0x37, 0x34, 0x95, 0x99, 0xd9, 0x3b,
  }};
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
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
static const rosidl_type_hash_t trajectory_msgs__msg__JointTrajectory__EXPECTED_HASH = {1, {
    0x17, 0x9b, 0x33, 0xeb, 0xa5, 0x9d, 0x67, 0x6f,
    0x6d, 0x96, 0x7a, 0xc7, 0x1f, 0xe3, 0x5e, 0x7c,
    0xa2, 0xf6, 0x4b, 0x2f, 0x39, 0x28, 0xf4, 0xa0,
    0x18, 0xce, 0xc1, 0x15, 0xe2, 0x13, 0x79, 0x6e,
  }};
static const rosidl_type_hash_t trajectory_msgs__msg__JointTrajectoryPoint__EXPECTED_HASH = {1, {
    0xde, 0x89, 0x07, 0x03, 0x6d, 0x8b, 0xd4, 0x5a,
    0xac, 0x6f, 0x30, 0xcc, 0x90, 0x44, 0xa3, 0xd4,
    0xa3, 0x29, 0xc4, 0x2c, 0xbf, 0x71, 0x9a, 0xff,
    0x7d, 0x95, 0xa5, 0x84, 0xcf, 0xa5, 0x32, 0xd7,
  }};
#endif

static char x2robot_msgs__srv__TrajectoryPlanRequest__TYPE_NAME[] = "x2robot_msgs/srv/TrajectoryPlanRequest";
static char builtin_interfaces__msg__Duration__TYPE_NAME[] = "builtin_interfaces/msg/Duration";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char trajectory_msgs__msg__JointTrajectory__TYPE_NAME[] = "trajectory_msgs/msg/JointTrajectory";
static char trajectory_msgs__msg__JointTrajectoryPoint__TYPE_NAME[] = "trajectory_msgs/msg/JointTrajectoryPoint";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Event__TYPE_NAME[] = "x2robot_msgs/srv/TrajectoryPlanRequest_Event";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Request__TYPE_NAME[] = "x2robot_msgs/srv/TrajectoryPlanRequest_Request";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Response__TYPE_NAME[] = "x2robot_msgs/srv/TrajectoryPlanRequest_Response";

// Define type names, field names, and default values
static char x2robot_msgs__srv__TrajectoryPlanRequest__FIELD_NAME__request_message[] = "request_message";
static char x2robot_msgs__srv__TrajectoryPlanRequest__FIELD_NAME__response_message[] = "response_message";
static char x2robot_msgs__srv__TrajectoryPlanRequest__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field x2robot_msgs__srv__TrajectoryPlanRequest__FIELDS[] = {
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {x2robot_msgs__srv__TrajectoryPlanRequest_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {x2robot_msgs__srv__TrajectoryPlanRequest_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {x2robot_msgs__srv__TrajectoryPlanRequest_Event__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription x2robot_msgs__srv__TrajectoryPlanRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {trajectory_msgs__msg__JointTrajectory__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {trajectory_msgs__msg__JointTrajectoryPoint__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Event__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
x2robot_msgs__srv__TrajectoryPlanRequest__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__srv__TrajectoryPlanRequest__TYPE_NAME, 38, 38},
      {x2robot_msgs__srv__TrajectoryPlanRequest__FIELDS, 3, 3},
    },
    {x2robot_msgs__srv__TrajectoryPlanRequest__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&trajectory_msgs__msg__JointTrajectory__EXPECTED_HASH, trajectory_msgs__msg__JointTrajectory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = trajectory_msgs__msg__JointTrajectory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&trajectory_msgs__msg__JointTrajectoryPoint__EXPECTED_HASH, trajectory_msgs__msg__JointTrajectoryPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = trajectory_msgs__msg__JointTrajectoryPoint__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = x2robot_msgs__srv__TrajectoryPlanRequest_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = x2robot_msgs__srv__TrajectoryPlanRequest_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = x2robot_msgs__srv__TrajectoryPlanRequest_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__group_name[] = "group_name";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__start_state_joint_names[] = "start_state_joint_names";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__start_states[] = "start_states";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__goal_state_joint_names[] = "goal_state_joint_names";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__goal_states[] = "goal_states";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__tolerance_above[] = "tolerance_above";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__tolerance_below[] = "tolerance_below";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__num_planning_attempts[] = "num_planning_attempts";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Request__DEFAULT_VALUE__num_planning_attempts[] = "1";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__allowed_planning_time[] = "allowed_planning_time";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Request__DEFAULT_VALUE__allowed_planning_time[] = "1.0";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__max_velocity_scaling_factor[] = "max_velocity_scaling_factor";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Request__DEFAULT_VALUE__max_velocity_scaling_factor[] = "0.1";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__max_acceleration_scaling_factor[] = "max_acceleration_scaling_factor";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Request__DEFAULT_VALUE__max_acceleration_scaling_factor[] = "0.2";

static rosidl_runtime_c__type_description__Field x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELDS[] = {
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__group_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__start_state_joint_names, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__start_states, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__goal_state_joint_names, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__goal_states, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__tolerance_above, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__tolerance_below, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__num_planning_attempts, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {x2robot_msgs__srv__TrajectoryPlanRequest_Request__DEFAULT_VALUE__num_planning_attempts, 1, 1},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__allowed_planning_time, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {x2robot_msgs__srv__TrajectoryPlanRequest_Request__DEFAULT_VALUE__allowed_planning_time, 3, 3},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__max_velocity_scaling_factor, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {x2robot_msgs__srv__TrajectoryPlanRequest_Request__DEFAULT_VALUE__max_velocity_scaling_factor, 3, 3},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELD_NAME__max_acceleration_scaling_factor, 31, 31},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {x2robot_msgs__srv__TrajectoryPlanRequest_Request__DEFAULT_VALUE__max_acceleration_scaling_factor, 3, 3},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
x2robot_msgs__srv__TrajectoryPlanRequest_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__srv__TrajectoryPlanRequest_Request__TYPE_NAME, 46, 46},
      {x2robot_msgs__srv__TrajectoryPlanRequest_Request__FIELDS, 11, 11},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char x2robot_msgs__srv__TrajectoryPlanRequest_Response__FIELD_NAME__error_code[] = "error_code";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Response__FIELD_NAME__trajectory[] = "trajectory";

static rosidl_runtime_c__type_description__Field x2robot_msgs__srv__TrajectoryPlanRequest_Response__FIELDS[] = {
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Response__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Response__FIELD_NAME__trajectory, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {trajectory_msgs__msg__JointTrajectory__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription x2robot_msgs__srv__TrajectoryPlanRequest_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {trajectory_msgs__msg__JointTrajectory__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {trajectory_msgs__msg__JointTrajectoryPoint__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
x2robot_msgs__srv__TrajectoryPlanRequest_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__srv__TrajectoryPlanRequest_Response__TYPE_NAME, 47, 47},
      {x2robot_msgs__srv__TrajectoryPlanRequest_Response__FIELDS, 2, 2},
    },
    {x2robot_msgs__srv__TrajectoryPlanRequest_Response__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&trajectory_msgs__msg__JointTrajectory__EXPECTED_HASH, trajectory_msgs__msg__JointTrajectory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = trajectory_msgs__msg__JointTrajectory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&trajectory_msgs__msg__JointTrajectoryPoint__EXPECTED_HASH, trajectory_msgs__msg__JointTrajectoryPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = trajectory_msgs__msg__JointTrajectoryPoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char x2robot_msgs__srv__TrajectoryPlanRequest_Event__FIELD_NAME__info[] = "info";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Event__FIELD_NAME__request[] = "request";
static char x2robot_msgs__srv__TrajectoryPlanRequest_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field x2robot_msgs__srv__TrajectoryPlanRequest_Event__FIELDS[] = {
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {x2robot_msgs__srv__TrajectoryPlanRequest_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {x2robot_msgs__srv__TrajectoryPlanRequest_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription x2robot_msgs__srv__TrajectoryPlanRequest_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {trajectory_msgs__msg__JointTrajectory__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {trajectory_msgs__msg__JointTrajectoryPoint__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
x2robot_msgs__srv__TrajectoryPlanRequest_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {x2robot_msgs__srv__TrajectoryPlanRequest_Event__TYPE_NAME, 44, 44},
      {x2robot_msgs__srv__TrajectoryPlanRequest_Event__FIELDS, 3, 3},
    },
    {x2robot_msgs__srv__TrajectoryPlanRequest_Event__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&trajectory_msgs__msg__JointTrajectory__EXPECTED_HASH, trajectory_msgs__msg__JointTrajectory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = trajectory_msgs__msg__JointTrajectory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&trajectory_msgs__msg__JointTrajectoryPoint__EXPECTED_HASH, trajectory_msgs__msg__JointTrajectoryPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = trajectory_msgs__msg__JointTrajectoryPoint__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = x2robot_msgs__srv__TrajectoryPlanRequest_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = x2robot_msgs__srv__TrajectoryPlanRequest_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe8\\xaf\\xb7\\xe6\\xb1\\x82\n"
  "string group_name\n"
  "string[] start_state_joint_names\n"
  "float64[] start_states\n"
  "string[] goal_state_joint_names\n"
  "float64[] goal_states\n"
  "float64[] tolerance_above\n"
  "float64[] tolerance_below\n"
  "uint8 num_planning_attempts 1\n"
  "float64 allowed_planning_time 1.0\n"
  "float64 max_velocity_scaling_factor 0.1\n"
  "float64 max_acceleration_scaling_factor 0.2\n"
  "---\n"
  "# \\xe5\\x93\\x8d\\xe5\\xba\\x94\n"
  "int32 error_code\n"
  "trajectory_msgs/JointTrajectory trajectory";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__srv__TrajectoryPlanRequest__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__srv__TrajectoryPlanRequest__TYPE_NAME, 38, 38},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 402, 402},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__srv__TrajectoryPlanRequest_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Request__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__srv__TrajectoryPlanRequest_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Response__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
x2robot_msgs__srv__TrajectoryPlanRequest_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {x2robot_msgs__srv__TrajectoryPlanRequest_Event__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__srv__TrajectoryPlanRequest__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__srv__TrajectoryPlanRequest__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[5] = *trajectory_msgs__msg__JointTrajectory__get_individual_type_description_source(NULL);
    sources[6] = *trajectory_msgs__msg__JointTrajectoryPoint__get_individual_type_description_source(NULL);
    sources[7] = *x2robot_msgs__srv__TrajectoryPlanRequest_Event__get_individual_type_description_source(NULL);
    sources[8] = *x2robot_msgs__srv__TrajectoryPlanRequest_Request__get_individual_type_description_source(NULL);
    sources[9] = *x2robot_msgs__srv__TrajectoryPlanRequest_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__srv__TrajectoryPlanRequest_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__srv__TrajectoryPlanRequest_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__srv__TrajectoryPlanRequest_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__srv__TrajectoryPlanRequest_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[4] = *trajectory_msgs__msg__JointTrajectory__get_individual_type_description_source(NULL);
    sources[5] = *trajectory_msgs__msg__JointTrajectoryPoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
x2robot_msgs__srv__TrajectoryPlanRequest_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *x2robot_msgs__srv__TrajectoryPlanRequest_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[5] = *trajectory_msgs__msg__JointTrajectory__get_individual_type_description_source(NULL);
    sources[6] = *trajectory_msgs__msg__JointTrajectoryPoint__get_individual_type_description_source(NULL);
    sources[7] = *x2robot_msgs__srv__TrajectoryPlanRequest_Request__get_individual_type_description_source(NULL);
    sources[8] = *x2robot_msgs__srv__TrajectoryPlanRequest_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
