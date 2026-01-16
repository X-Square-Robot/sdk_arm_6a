// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/HardwareDeviceDiagnostics.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/hardware_device_diagnostics__functions.h"

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
// Member `entries`
#include "diagnostic_msgs/msg/detail/key_value__functions.h"

bool
control_msgs__msg__HardwareDeviceDiagnostics__init(control_msgs__msg__HardwareDeviceDiagnostics * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    control_msgs__msg__HardwareDeviceDiagnostics__fini(msg);
    return false;
  }
  // device_id
  if (!rosidl_runtime_c__String__init(&msg->device_id)) {
    control_msgs__msg__HardwareDeviceDiagnostics__fini(msg);
    return false;
  }
  // entries
  if (!diagnostic_msgs__msg__KeyValue__Sequence__init(&msg->entries, 0)) {
    control_msgs__msg__HardwareDeviceDiagnostics__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__msg__HardwareDeviceDiagnostics__fini(control_msgs__msg__HardwareDeviceDiagnostics * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // device_id
  rosidl_runtime_c__String__fini(&msg->device_id);
  // entries
  diagnostic_msgs__msg__KeyValue__Sequence__fini(&msg->entries);
}

bool
control_msgs__msg__HardwareDeviceDiagnostics__are_equal(const control_msgs__msg__HardwareDeviceDiagnostics * lhs, const control_msgs__msg__HardwareDeviceDiagnostics * rhs)
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
  // entries
  if (!diagnostic_msgs__msg__KeyValue__Sequence__are_equal(
      &(lhs->entries), &(rhs->entries)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__msg__HardwareDeviceDiagnostics__copy(
  const control_msgs__msg__HardwareDeviceDiagnostics * input,
  control_msgs__msg__HardwareDeviceDiagnostics * output)
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
  // entries
  if (!diagnostic_msgs__msg__KeyValue__Sequence__copy(
      &(input->entries), &(output->entries)))
  {
    return false;
  }
  return true;
}

control_msgs__msg__HardwareDeviceDiagnostics *
control_msgs__msg__HardwareDeviceDiagnostics__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__HardwareDeviceDiagnostics * msg = (control_msgs__msg__HardwareDeviceDiagnostics *)allocator.allocate(sizeof(control_msgs__msg__HardwareDeviceDiagnostics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__HardwareDeviceDiagnostics));
  bool success = control_msgs__msg__HardwareDeviceDiagnostics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__HardwareDeviceDiagnostics__destroy(control_msgs__msg__HardwareDeviceDiagnostics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__msg__HardwareDeviceDiagnostics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__msg__HardwareDeviceDiagnostics__Sequence__init(control_msgs__msg__HardwareDeviceDiagnostics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__HardwareDeviceDiagnostics * data = NULL;

  if (size) {
    data = (control_msgs__msg__HardwareDeviceDiagnostics *)allocator.zero_allocate(size, sizeof(control_msgs__msg__HardwareDeviceDiagnostics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__HardwareDeviceDiagnostics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__HardwareDeviceDiagnostics__fini(&data[i - 1]);
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
control_msgs__msg__HardwareDeviceDiagnostics__Sequence__fini(control_msgs__msg__HardwareDeviceDiagnostics__Sequence * array)
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
      control_msgs__msg__HardwareDeviceDiagnostics__fini(&array->data[i]);
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

control_msgs__msg__HardwareDeviceDiagnostics__Sequence *
control_msgs__msg__HardwareDeviceDiagnostics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__HardwareDeviceDiagnostics__Sequence * array = (control_msgs__msg__HardwareDeviceDiagnostics__Sequence *)allocator.allocate(sizeof(control_msgs__msg__HardwareDeviceDiagnostics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__HardwareDeviceDiagnostics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__HardwareDeviceDiagnostics__Sequence__destroy(control_msgs__msg__HardwareDeviceDiagnostics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__msg__HardwareDeviceDiagnostics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__msg__HardwareDeviceDiagnostics__Sequence__are_equal(const control_msgs__msg__HardwareDeviceDiagnostics__Sequence * lhs, const control_msgs__msg__HardwareDeviceDiagnostics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__msg__HardwareDeviceDiagnostics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__msg__HardwareDeviceDiagnostics__Sequence__copy(
  const control_msgs__msg__HardwareDeviceDiagnostics__Sequence * input,
  control_msgs__msg__HardwareDeviceDiagnostics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__msg__HardwareDeviceDiagnostics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__msg__HardwareDeviceDiagnostics * data =
      (control_msgs__msg__HardwareDeviceDiagnostics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__msg__HardwareDeviceDiagnostics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__msg__HardwareDeviceDiagnostics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__msg__HardwareDeviceDiagnostics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
