// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from x2robot_msgs:msg/TashanTactileData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "x2robot_msgs/msg/detail/tashan_tactile_data__rosidl_typesupport_introspection_c.h"
#include "x2robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "x2robot_msgs/msg/detail/tashan_tactile_data__functions.h"
#include "x2robot_msgs/msg/detail/tashan_tactile_data__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `sensor_names`
// Member `frame_ids`
#include "rosidl_runtime_c/string_functions.h"
// Member `normal_forces`
// Member `tangential_forces`
// Member `directions`
// Member `capacitances`
// Member `error_codes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__TashanTactileData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  x2robot_msgs__msg__TashanTactileData__init(message_memory);
}

void x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__TashanTactileData_fini_function(void * message_memory)
{
  x2robot_msgs__msg__TashanTactileData__fini(message_memory);
}

size_t x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__size_function__TashanTactileData__sensor_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__sensor_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__sensor_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__fetch_function__TashanTactileData__sensor_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__sensor_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__assign_function__TashanTactileData__sensor_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__sensor_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__resize_function__TashanTactileData__sensor_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__size_function__TashanTactileData__frame_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__frame_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__frame_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__fetch_function__TashanTactileData__frame_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__frame_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__assign_function__TashanTactileData__frame_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__frame_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__resize_function__TashanTactileData__frame_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__size_function__TashanTactileData__normal_forces(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__normal_forces(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__normal_forces(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__fetch_function__TashanTactileData__normal_forces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__normal_forces(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__assign_function__TashanTactileData__normal_forces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__normal_forces(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__resize_function__TashanTactileData__normal_forces(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__size_function__TashanTactileData__tangential_forces(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__tangential_forces(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__tangential_forces(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__fetch_function__TashanTactileData__tangential_forces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__tangential_forces(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__assign_function__TashanTactileData__tangential_forces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__tangential_forces(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__resize_function__TashanTactileData__tangential_forces(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__size_function__TashanTactileData__directions(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__directions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__directions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__fetch_function__TashanTactileData__directions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__directions(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__assign_function__TashanTactileData__directions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__directions(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__resize_function__TashanTactileData__directions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__size_function__TashanTactileData__capacitances(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__capacitances(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__capacitances(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__fetch_function__TashanTactileData__capacitances(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__capacitances(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__assign_function__TashanTactileData__capacitances(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__capacitances(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__resize_function__TashanTactileData__capacitances(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__size_function__TashanTactileData__error_codes(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__error_codes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__error_codes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__fetch_function__TashanTactileData__error_codes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__error_codes(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__assign_function__TashanTactileData__error_codes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__error_codes(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__resize_function__TashanTactileData__error_codes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__TashanTactileData_message_member_array[8] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__msg__TashanTactileData, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__msg__TashanTactileData, sensor_names),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__size_function__TashanTactileData__sensor_names,  // size() function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__sensor_names,  // get_const(index) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__sensor_names,  // get(index) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__fetch_function__TashanTactileData__sensor_names,  // fetch(index, &value) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__assign_function__TashanTactileData__sensor_names,  // assign(index, value) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__resize_function__TashanTactileData__sensor_names  // resize(index) function pointer
  },
  {
    "frame_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__msg__TashanTactileData, frame_ids),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__size_function__TashanTactileData__frame_ids,  // size() function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__frame_ids,  // get_const(index) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__frame_ids,  // get(index) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__fetch_function__TashanTactileData__frame_ids,  // fetch(index, &value) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__assign_function__TashanTactileData__frame_ids,  // assign(index, value) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__resize_function__TashanTactileData__frame_ids  // resize(index) function pointer
  },
  {
    "normal_forces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__msg__TashanTactileData, normal_forces),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__size_function__TashanTactileData__normal_forces,  // size() function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__normal_forces,  // get_const(index) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__normal_forces,  // get(index) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__fetch_function__TashanTactileData__normal_forces,  // fetch(index, &value) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__assign_function__TashanTactileData__normal_forces,  // assign(index, value) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__resize_function__TashanTactileData__normal_forces  // resize(index) function pointer
  },
  {
    "tangential_forces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__msg__TashanTactileData, tangential_forces),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__size_function__TashanTactileData__tangential_forces,  // size() function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__tangential_forces,  // get_const(index) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__tangential_forces,  // get(index) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__fetch_function__TashanTactileData__tangential_forces,  // fetch(index, &value) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__assign_function__TashanTactileData__tangential_forces,  // assign(index, value) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__resize_function__TashanTactileData__tangential_forces  // resize(index) function pointer
  },
  {
    "directions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__msg__TashanTactileData, directions),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__size_function__TashanTactileData__directions,  // size() function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__directions,  // get_const(index) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__directions,  // get(index) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__fetch_function__TashanTactileData__directions,  // fetch(index, &value) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__assign_function__TashanTactileData__directions,  // assign(index, value) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__resize_function__TashanTactileData__directions  // resize(index) function pointer
  },
  {
    "capacitances",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__msg__TashanTactileData, capacitances),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__size_function__TashanTactileData__capacitances,  // size() function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__capacitances,  // get_const(index) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__capacitances,  // get(index) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__fetch_function__TashanTactileData__capacitances,  // fetch(index, &value) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__assign_function__TashanTactileData__capacitances,  // assign(index, value) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__resize_function__TashanTactileData__capacitances  // resize(index) function pointer
  },
  {
    "error_codes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(x2robot_msgs__msg__TashanTactileData, error_codes),  // bytes offset in struct
    NULL,  // default value
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__size_function__TashanTactileData__error_codes,  // size() function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_const_function__TashanTactileData__error_codes,  // get_const(index) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__get_function__TashanTactileData__error_codes,  // get(index) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__fetch_function__TashanTactileData__error_codes,  // fetch(index, &value) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__assign_function__TashanTactileData__error_codes,  // assign(index, value) function pointer
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__resize_function__TashanTactileData__error_codes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__TashanTactileData_message_members = {
  "x2robot_msgs__msg",  // message namespace
  "TashanTactileData",  // message name
  8,  // number of fields
  sizeof(x2robot_msgs__msg__TashanTactileData),
  false,  // has_any_key_member_
  x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__TashanTactileData_message_member_array,  // message members
  x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__TashanTactileData_init_function,  // function to initialize message memory (memory has to be allocated)
  x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__TashanTactileData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__TashanTactileData_message_type_support_handle = {
  0,
  &x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__TashanTactileData_message_members,
  get_message_typesupport_handle_function,
  &x2robot_msgs__msg__TashanTactileData__get_type_hash,
  &x2robot_msgs__msg__TashanTactileData__get_type_description,
  &x2robot_msgs__msg__TashanTactileData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_x2robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, x2robot_msgs, msg, TashanTactileData)() {
  x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__TashanTactileData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__TashanTactileData_message_type_support_handle.typesupport_identifier) {
    x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__TashanTactileData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &x2robot_msgs__msg__TashanTactileData__rosidl_typesupport_introspection_c__TashanTactileData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
