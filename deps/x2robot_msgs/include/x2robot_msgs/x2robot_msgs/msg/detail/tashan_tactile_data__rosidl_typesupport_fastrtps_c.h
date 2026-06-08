// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from x2robot_msgs:msg/TashanTactileData.idl
// generated code does not contain a copyright notice
#ifndef X2ROBOT_MSGS__MSG__DETAIL__TASHAN_TACTILE_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define X2ROBOT_MSGS__MSG__DETAIL__TASHAN_TACTILE_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "x2robot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "x2robot_msgs/msg/detail/tashan_tactile_data__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_x2robot_msgs
bool cdr_serialize_x2robot_msgs__msg__TashanTactileData(
  const x2robot_msgs__msg__TashanTactileData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_x2robot_msgs
bool cdr_deserialize_x2robot_msgs__msg__TashanTactileData(
  eprosima::fastcdr::Cdr &,
  x2robot_msgs__msg__TashanTactileData * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_x2robot_msgs
size_t get_serialized_size_x2robot_msgs__msg__TashanTactileData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_x2robot_msgs
size_t max_serialized_size_x2robot_msgs__msg__TashanTactileData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_x2robot_msgs
bool cdr_serialize_key_x2robot_msgs__msg__TashanTactileData(
  const x2robot_msgs__msg__TashanTactileData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_x2robot_msgs
size_t get_serialized_size_key_x2robot_msgs__msg__TashanTactileData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_x2robot_msgs
size_t max_serialized_size_key_x2robot_msgs__msg__TashanTactileData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_x2robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, x2robot_msgs, msg, TashanTactileData)();

#ifdef __cplusplus
}
#endif

#endif  // X2ROBOT_MSGS__MSG__DETAIL__TASHAN_TACTILE_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
