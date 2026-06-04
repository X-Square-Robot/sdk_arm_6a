// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from x2robot_msgs:msg/CanFrameBatch.idl
// generated code does not contain a copyright notice
#include "x2robot_msgs/msg/detail/can_frame_batch__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `frames`
#include "x2robot_msgs/msg/detail/can_frame__functions.h"

bool
x2robot_msgs__msg__CanFrameBatch__init(x2robot_msgs__msg__CanFrameBatch * msg)
{
  if (!msg) {
    return false;
  }
  // frames
  if (!x2robot_msgs__msg__CanFrame__Sequence__init(&msg->frames, 0)) {
    x2robot_msgs__msg__CanFrameBatch__fini(msg);
    return false;
  }
  return true;
}

void
x2robot_msgs__msg__CanFrameBatch__fini(x2robot_msgs__msg__CanFrameBatch * msg)
{
  if (!msg) {
    return;
  }
  // frames
  x2robot_msgs__msg__CanFrame__Sequence__fini(&msg->frames);
}

bool
x2robot_msgs__msg__CanFrameBatch__are_equal(const x2robot_msgs__msg__CanFrameBatch * lhs, const x2robot_msgs__msg__CanFrameBatch * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frames
  if (!x2robot_msgs__msg__CanFrame__Sequence__are_equal(
      &(lhs->frames), &(rhs->frames)))
  {
    return false;
  }
  return true;
}

bool
x2robot_msgs__msg__CanFrameBatch__copy(
  const x2robot_msgs__msg__CanFrameBatch * input,
  x2robot_msgs__msg__CanFrameBatch * output)
{
  if (!input || !output) {
    return false;
  }
  // frames
  if (!x2robot_msgs__msg__CanFrame__Sequence__copy(
      &(input->frames), &(output->frames)))
  {
    return false;
  }
  return true;
}

x2robot_msgs__msg__CanFrameBatch *
x2robot_msgs__msg__CanFrameBatch__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__CanFrameBatch * msg = (x2robot_msgs__msg__CanFrameBatch *)allocator.allocate(sizeof(x2robot_msgs__msg__CanFrameBatch), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(x2robot_msgs__msg__CanFrameBatch));
  bool success = x2robot_msgs__msg__CanFrameBatch__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
x2robot_msgs__msg__CanFrameBatch__destroy(x2robot_msgs__msg__CanFrameBatch * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    x2robot_msgs__msg__CanFrameBatch__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
x2robot_msgs__msg__CanFrameBatch__Sequence__init(x2robot_msgs__msg__CanFrameBatch__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__CanFrameBatch * data = NULL;

  if (size) {
    data = (x2robot_msgs__msg__CanFrameBatch *)allocator.zero_allocate(size, sizeof(x2robot_msgs__msg__CanFrameBatch), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = x2robot_msgs__msg__CanFrameBatch__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        x2robot_msgs__msg__CanFrameBatch__fini(&data[i - 1]);
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
x2robot_msgs__msg__CanFrameBatch__Sequence__fini(x2robot_msgs__msg__CanFrameBatch__Sequence * array)
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
      x2robot_msgs__msg__CanFrameBatch__fini(&array->data[i]);
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

x2robot_msgs__msg__CanFrameBatch__Sequence *
x2robot_msgs__msg__CanFrameBatch__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__CanFrameBatch__Sequence * array = (x2robot_msgs__msg__CanFrameBatch__Sequence *)allocator.allocate(sizeof(x2robot_msgs__msg__CanFrameBatch__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = x2robot_msgs__msg__CanFrameBatch__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
x2robot_msgs__msg__CanFrameBatch__Sequence__destroy(x2robot_msgs__msg__CanFrameBatch__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    x2robot_msgs__msg__CanFrameBatch__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
x2robot_msgs__msg__CanFrameBatch__Sequence__are_equal(const x2robot_msgs__msg__CanFrameBatch__Sequence * lhs, const x2robot_msgs__msg__CanFrameBatch__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!x2robot_msgs__msg__CanFrameBatch__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
x2robot_msgs__msg__CanFrameBatch__Sequence__copy(
  const x2robot_msgs__msg__CanFrameBatch__Sequence * input,
  x2robot_msgs__msg__CanFrameBatch__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(x2robot_msgs__msg__CanFrameBatch);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    x2robot_msgs__msg__CanFrameBatch * data =
      (x2robot_msgs__msg__CanFrameBatch *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!x2robot_msgs__msg__CanFrameBatch__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          x2robot_msgs__msg__CanFrameBatch__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!x2robot_msgs__msg__CanFrameBatch__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
