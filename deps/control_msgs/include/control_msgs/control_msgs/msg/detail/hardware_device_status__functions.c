// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/HardwareDeviceStatus.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/hardware_device_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `device_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `hardware_status`
#include "control_msgs/msg/detail/generic_hardware_state__functions.h"
// Member `canopen_states`
#include "control_msgs/msg/detail/ca_nopen_state__functions.h"
// Member `ethercat_states`
#include "control_msgs/msg/detail/ether_cat_state__functions.h"
// Member `vda5050_states`
#include "control_msgs/msg/detail/vda5050_state__functions.h"

bool
control_msgs__msg__HardwareDeviceStatus__init(control_msgs__msg__HardwareDeviceStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    control_msgs__msg__HardwareDeviceStatus__fini(msg);
    return false;
  }
  // device_id
  if (!rosidl_runtime_c__String__init(&msg->device_id)) {
    control_msgs__msg__HardwareDeviceStatus__fini(msg);
    return false;
  }
  // hardware_status
  if (!control_msgs__msg__GenericHardwareState__Sequence__init(&msg->hardware_status, 0)) {
    control_msgs__msg__HardwareDeviceStatus__fini(msg);
    return false;
  }
  // canopen_states
  if (!control_msgs__msg__CANopenState__Sequence__init(&msg->canopen_states, 0)) {
    control_msgs__msg__HardwareDeviceStatus__fini(msg);
    return false;
  }
  // ethercat_states
  if (!control_msgs__msg__EtherCATState__Sequence__init(&msg->ethercat_states, 0)) {
    control_msgs__msg__HardwareDeviceStatus__fini(msg);
    return false;
  }
  // vda5050_states
  if (!control_msgs__msg__VDA5050State__Sequence__init(&msg->vda5050_states, 0)) {
    control_msgs__msg__HardwareDeviceStatus__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__msg__HardwareDeviceStatus__fini(control_msgs__msg__HardwareDeviceStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // device_id
  rosidl_runtime_c__String__fini(&msg->device_id);
  // hardware_status
  control_msgs__msg__GenericHardwareState__Sequence__fini(&msg->hardware_status);
  // canopen_states
  control_msgs__msg__CANopenState__Sequence__fini(&msg->canopen_states);
  // ethercat_states
  control_msgs__msg__EtherCATState__Sequence__fini(&msg->ethercat_states);
  // vda5050_states
  control_msgs__msg__VDA5050State__Sequence__fini(&msg->vda5050_states);
}

bool
control_msgs__msg__HardwareDeviceStatus__are_equal(const control_msgs__msg__HardwareDeviceStatus * lhs, const control_msgs__msg__HardwareDeviceStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // device_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->device_id), &(rhs->device_id)))
  {
    return false;
  }
  // hardware_status
  if (!control_msgs__msg__GenericHardwareState__Sequence__are_equal(
      &(lhs->hardware_status), &(rhs->hardware_status)))
  {
    return false;
  }
  // canopen_states
  if (!control_msgs__msg__CANopenState__Sequence__are_equal(
      &(lhs->canopen_states), &(rhs->canopen_states)))
  {
    return false;
  }
  // ethercat_states
  if (!control_msgs__msg__EtherCATState__Sequence__are_equal(
      &(lhs->ethercat_states), &(rhs->ethercat_states)))
  {
    return false;
  }
  // vda5050_states
  if (!control_msgs__msg__VDA5050State__Sequence__are_equal(
      &(lhs->vda5050_states), &(rhs->vda5050_states)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__msg__HardwareDeviceStatus__copy(
  const control_msgs__msg__HardwareDeviceStatus * input,
  control_msgs__msg__HardwareDeviceStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // device_id
  if (!rosidl_runtime_c__String__copy(
      &(input->device_id), &(output->device_id)))
  {
    return false;
  }
  // hardware_status
  if (!control_msgs__msg__GenericHardwareState__Sequence__copy(
      &(input->hardware_status), &(output->hardware_status)))
  {
    return false;
  }
  // canopen_states
  if (!control_msgs__msg__CANopenState__Sequence__copy(
      &(input->canopen_states), &(output->canopen_states)))
  {
    return false;
  }
  // ethercat_states
  if (!control_msgs__msg__EtherCATState__Sequence__copy(
      &(input->ethercat_states), &(output->ethercat_states)))
  {
    return false;
  }
  // vda5050_states
  if (!control_msgs__msg__VDA5050State__Sequence__copy(
      &(input->vda5050_states), &(output->vda5050_states)))
  {
    return false;
  }
  return true;
}

control_msgs__msg__HardwareDeviceStatus *
control_msgs__msg__HardwareDeviceStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__HardwareDeviceStatus * msg = (control_msgs__msg__HardwareDeviceStatus *)allocator.allocate(sizeof(control_msgs__msg__HardwareDeviceStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__HardwareDeviceStatus));
  bool success = control_msgs__msg__HardwareDeviceStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__HardwareDeviceStatus__destroy(control_msgs__msg__HardwareDeviceStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__msg__HardwareDeviceStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__msg__HardwareDeviceStatus__Sequence__init(control_msgs__msg__HardwareDeviceStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__HardwareDeviceStatus * data = NULL;

  if (size) {
    data = (control_msgs__msg__HardwareDeviceStatus *)allocator.zero_allocate(size, sizeof(control_msgs__msg__HardwareDeviceStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__HardwareDeviceStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__HardwareDeviceStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__msg__HardwareDeviceStatus__Sequence__fini(control_msgs__msg__HardwareDeviceStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__msg__HardwareDeviceStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__msg__HardwareDeviceStatus__Sequence *
control_msgs__msg__HardwareDeviceStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__HardwareDeviceStatus__Sequence * array = (control_msgs__msg__HardwareDeviceStatus__Sequence *)allocator.allocate(sizeof(control_msgs__msg__HardwareDeviceStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__HardwareDeviceStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__HardwareDeviceStatus__Sequence__destroy(control_msgs__msg__HardwareDeviceStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__msg__HardwareDeviceStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__msg__HardwareDeviceStatus__Sequence__are_equal(const control_msgs__msg__HardwareDeviceStatus__Sequence * lhs, const control_msgs__msg__HardwareDeviceStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__msg__HardwareDeviceStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__msg__HardwareDeviceStatus__Sequence__copy(
  const control_msgs__msg__HardwareDeviceStatus__Sequence * input,
  control_msgs__msg__HardwareDeviceStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__msg__HardwareDeviceStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__msg__HardwareDeviceStatus * data =
      (control_msgs__msg__HardwareDeviceStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__msg__HardwareDeviceStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__msg__HardwareDeviceStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__msg__HardwareDeviceStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
