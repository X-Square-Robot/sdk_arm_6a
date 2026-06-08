// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from x2robot_msgs:msg/SerialData.idl
// generated code does not contain a copyright notice
#include "x2robot_msgs/msg/detail/serial_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `payload`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
x2robot_msgs__msg__SerialData__init(x2robot_msgs__msg__SerialData * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    x2robot_msgs__msg__SerialData__fini(msg);
    return false;
  }
  // device_id
  // cmd_id
  // payload
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->payload, 0)) {
    x2robot_msgs__msg__SerialData__fini(msg);
    return false;
  }
  return true;
}

void
x2robot_msgs__msg__SerialData__fini(x2robot_msgs__msg__SerialData * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // device_id
  // cmd_id
  // payload
  rosidl_runtime_c__uint8__Sequence__fini(&msg->payload);
}

bool
x2robot_msgs__msg__SerialData__are_equal(const x2robot_msgs__msg__SerialData * lhs, const x2robot_msgs__msg__SerialData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // device_id
  if (lhs->device_id != rhs->device_id) {
    return false;
  }
  // cmd_id
  if (lhs->cmd_id != rhs->cmd_id) {
    return false;
  }
  // payload
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->payload), &(rhs->payload)))
  {
    return false;
  }
  return true;
}

bool
x2robot_msgs__msg__SerialData__copy(
  const x2robot_msgs__msg__SerialData * input,
  x2robot_msgs__msg__SerialData * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // device_id
  output->device_id = input->device_id;
  // cmd_id
  output->cmd_id = input->cmd_id;
  // payload
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->payload), &(output->payload)))
  {
    return false;
  }
  return true;
}

x2robot_msgs__msg__SerialData *
x2robot_msgs__msg__SerialData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__SerialData * msg = (x2robot_msgs__msg__SerialData *)allocator.allocate(sizeof(x2robot_msgs__msg__SerialData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(x2robot_msgs__msg__SerialData));
  bool success = x2robot_msgs__msg__SerialData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
x2robot_msgs__msg__SerialData__destroy(x2robot_msgs__msg__SerialData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    x2robot_msgs__msg__SerialData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
x2robot_msgs__msg__SerialData__Sequence__init(x2robot_msgs__msg__SerialData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__SerialData * data = NULL;

  if (size) {
    data = (x2robot_msgs__msg__SerialData *)allocator.zero_allocate(size, sizeof(x2robot_msgs__msg__SerialData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = x2robot_msgs__msg__SerialData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        x2robot_msgs__msg__SerialData__fini(&data[i - 1]);
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
x2robot_msgs__msg__SerialData__Sequence__fini(x2robot_msgs__msg__SerialData__Sequence * array)
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
      x2robot_msgs__msg__SerialData__fini(&array->data[i]);
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

x2robot_msgs__msg__SerialData__Sequence *
x2robot_msgs__msg__SerialData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__SerialData__Sequence * array = (x2robot_msgs__msg__SerialData__Sequence *)allocator.allocate(sizeof(x2robot_msgs__msg__SerialData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = x2robot_msgs__msg__SerialData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
x2robot_msgs__msg__SerialData__Sequence__destroy(x2robot_msgs__msg__SerialData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    x2robot_msgs__msg__SerialData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
x2robot_msgs__msg__SerialData__Sequence__are_equal(const x2robot_msgs__msg__SerialData__Sequence * lhs, const x2robot_msgs__msg__SerialData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!x2robot_msgs__msg__SerialData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
x2robot_msgs__msg__SerialData__Sequence__copy(
  const x2robot_msgs__msg__SerialData__Sequence * input,
  x2robot_msgs__msg__SerialData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(x2robot_msgs__msg__SerialData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    x2robot_msgs__msg__SerialData * data =
      (x2robot_msgs__msg__SerialData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!x2robot_msgs__msg__SerialData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          x2robot_msgs__msg__SerialData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!x2robot_msgs__msg__SerialData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
