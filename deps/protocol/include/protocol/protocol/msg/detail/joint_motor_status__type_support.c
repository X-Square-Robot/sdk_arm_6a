// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from protocol:msg/JointMotorStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "protocol/msg/detail/joint_motor_status__rosidl_typesupport_introspection_c.h"
#include "protocol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "protocol/msg/detail/joint_motor_status__functions.h"
#include "protocol/msg/detail/joint_motor_status__struct.h"


// Include directives for member types
// Member `joint_motor_status`
#include "protocol/msg/motor_status.h"
// Member `joint_motor_status`
#include "protocol/msg/detail/motor_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__JointMotorStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  protocol__msg__JointMotorStatus__init(message_memory);
}

void protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__JointMotorStatus_fini_function(void * message_memory)
{
  protocol__msg__JointMotorStatus__fini(message_memory);
}

size_t protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__size_function__JointMotorStatus__joint_motor_status(
  const void * untyped_member)
{
  const protocol__msg__MotorStatus__Sequence * member =
    (const protocol__msg__MotorStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__get_const_function__JointMotorStatus__joint_motor_status(
  const void * untyped_member, size_t index)
{
  const protocol__msg__MotorStatus__Sequence * member =
    (const protocol__msg__MotorStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__get_function__JointMotorStatus__joint_motor_status(
  void * untyped_member, size_t index)
{
  protocol__msg__MotorStatus__Sequence * member =
    (protocol__msg__MotorStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__fetch_function__JointMotorStatus__joint_motor_status(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const protocol__msg__MotorStatus * item =
    ((const protocol__msg__MotorStatus *)
    protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__get_const_function__JointMotorStatus__joint_motor_status(untyped_member, index));
  protocol__msg__MotorStatus * value =
    (protocol__msg__MotorStatus *)(untyped_value);
  *value = *item;
}

void protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__assign_function__JointMotorStatus__joint_motor_status(
  void * untyped_member, size_t index, const void * untyped_value)
{
  protocol__msg__MotorStatus * item =
    ((protocol__msg__MotorStatus *)
    protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__get_function__JointMotorStatus__joint_motor_status(untyped_member, index));
  const protocol__msg__MotorStatus * value =
    (const protocol__msg__MotorStatus *)(untyped_value);
  *item = *value;
}

bool protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__resize_function__JointMotorStatus__joint_motor_status(
  void * untyped_member, size_t size)
{
  protocol__msg__MotorStatus__Sequence * member =
    (protocol__msg__MotorStatus__Sequence *)(untyped_member);
  protocol__msg__MotorStatus__Sequence__fini(member);
  return protocol__msg__MotorStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__JointMotorStatus_message_member_array[2] = {
  {
    "joint_motor_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__JointMotorStatus, joint_motor_status),  // bytes offset in struct
    NULL,  // default value
    protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__size_function__JointMotorStatus__joint_motor_status,  // size() function pointer
    protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__get_const_function__JointMotorStatus__joint_motor_status,  // get_const(index) function pointer
    protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__get_function__JointMotorStatus__joint_motor_status,  // get(index) function pointer
    protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__fetch_function__JointMotorStatus__joint_motor_status,  // fetch(index, &value) function pointer
    protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__assign_function__JointMotorStatus__joint_motor_status,  // assign(index, value) function pointer
    protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__resize_function__JointMotorStatus__joint_motor_status  // resize(index) function pointer
  },
  {
    "all_joints_healthy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(protocol__msg__JointMotorStatus, all_joints_healthy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__JointMotorStatus_message_members = {
  "protocol__msg",  // message namespace
  "JointMotorStatus",  // message name
  2,  // number of fields
  sizeof(protocol__msg__JointMotorStatus),
  false,  // has_any_key_member_
  protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__JointMotorStatus_message_member_array,  // message members
  protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__JointMotorStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__JointMotorStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__JointMotorStatus_message_type_support_handle = {
  0,
  &protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__JointMotorStatus_message_members,
  get_message_typesupport_handle_function,
  &protocol__msg__JointMotorStatus__get_type_hash,
  &protocol__msg__JointMotorStatus__get_type_description,
  &protocol__msg__JointMotorStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_protocol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, JointMotorStatus)() {
  protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__JointMotorStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, protocol, msg, MotorStatus)();
  if (!protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__JointMotorStatus_message_type_support_handle.typesupport_identifier) {
    protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__JointMotorStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &protocol__msg__JointMotorStatus__rosidl_typesupport_introspection_c__JointMotorStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
