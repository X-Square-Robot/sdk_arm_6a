// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from x2robot_msgs:msg/RobotArmState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "x2robot_msgs/msg/detail/robot_arm_state__rosidl_typesupport_introspection_c.h"
#include "x2robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "x2robot_msgs/msg/detail/robot_arm_state__functions.h"
#include "x2robot_msgs/msg/detail/robot_arm_state__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `error_msg`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void x2robot_msgs__msg__RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  x2robot_msgs__msg__RobotArmState__init(message_memory);
}

void x2robot_msgs__msg__RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_fini_function(void * message_memory)
{
  x2robot_msgs__msg__RobotArmState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember x2robot_msgs__msg__RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_message_member_array[4] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__msg__RobotArmState, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__msg__RobotArmState, robot_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_control_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__msg__RobotArmState, current_control_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__msg__RobotArmState, error_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers x2robot_msgs__msg__RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_message_members = {
  "x2robot_msgs__msg",  // message namespace
  "RobotArmState",  // message name
  4,  // number of fields
  sizeof(x2robot_msgs__msg__RobotArmState),
  false,  // has_any_key_member_
  x2robot_msgs__msg__RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_message_member_array,  // message members
  x2robot_msgs__msg__RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_init_function,  // function to initialize message memory (memory has to be allocated)
  x2robot_msgs__msg__RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t x2robot_msgs__msg__RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_message_type_support_handle = {
  0,
  &x2robot_msgs__msg__RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_message_members,
  get_message_typesupport_handle_function,
  &x2robot_msgs__msg__RobotArmState__get_type_hash,
  &x2robot_msgs__msg__RobotArmState__get_type_description,
  &x2robot_msgs__msg__RobotArmState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_x2robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, msg, RobotArmState)() {
  x2robot_msgs__msg__RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!x2robot_msgs__msg__RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_message_type_support_handle.typesupport_identifier) {
    x2robot_msgs__msg__RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &x2robot_msgs__msg__RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
