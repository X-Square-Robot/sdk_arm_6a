// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from x2robot_msgs:msg/CanFrame.idl
// generated code does not contain a copyright notice
#include "x2robot_msgs/msg/detail/can_frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
x2robot_msgs__msg__CanFrame__init(x2robot_msgs__msg__CanFrame * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    x2robot_msgs__msg__CanFrame__fini(msg);
    return false;
  }
  // can_id
  // dlc
  // data
  // err
  // rtr
  // eff
  // fd
  // brs
  return true;
}

void
x2robot_msgs__msg__CanFrame__fini(x2robot_msgs__msg__CanFrame * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // can_id
  // dlc
  // data
  // err
  // rtr
  // eff
  // fd
  // brs
}

bool
x2robot_msgs__msg__CanFrame__are_equal(const x2robot_msgs__msg__CanFrame * lhs, const x2robot_msgs__msg__CanFrame * rhs)
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
  // can_id
  if (lhs->can_id != rhs->can_id) {
    return false;
  }
  // dlc
  if (lhs->dlc != rhs->dlc) {
    return false;
  }
  // data
  for (size_t i = 0; i < 64; ++i) {
    if (lhs->data[i] != rhs->data[i]) {
      return false;
    }
  }
  // err
  if (lhs->err != rhs->err) {
    return false;
  }
  // rtr
  if (lhs->rtr != rhs->rtr) {
    return false;
  }
  // eff
  if (lhs->eff != rhs->eff) {
    return false;
  }
  // fd
  if (lhs->fd != rhs->fd) {
    return false;
  }
  // brs
  if (lhs->brs != rhs->brs) {
    return false;
  }
  return true;
}

bool
x2robot_msgs__msg__CanFrame__copy(
  const x2robot_msgs__msg__CanFrame * input,
  x2robot_msgs__msg__CanFrame * output)
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
  // can_id
  output->can_id = input->can_id;
  // dlc
  output->dlc = input->dlc;
  // data
  for (size_t i = 0; i < 64; ++i) {
    output->data[i] = input->data[i];
  }
  // err
  output->err = input->err;
  // rtr
  output->rtr = input->rtr;
  // eff
  output->eff = input->eff;
  // fd
  output->fd = input->fd;
  // brs
  output->brs = input->brs;
  return true;
}

x2robot_msgs__msg__CanFrame *
x2robot_msgs__msg__CanFrame__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__CanFrame * msg = (x2robot_msgs__msg__CanFrame *)allocator.allocate(sizeof(x2robot_msgs__msg__CanFrame), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(x2robot_msgs__msg__CanFrame));
  bool success = x2robot_msgs__msg__CanFrame__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
x2robot_msgs__msg__CanFrame__destroy(x2robot_msgs__msg__CanFrame * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    x2robot_msgs__msg__CanFrame__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
x2robot_msgs__msg__CanFrame__Sequence__init(x2robot_msgs__msg__CanFrame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__CanFrame * data = NULL;

  if (size) {
    data = (x2robot_msgs__msg__CanFrame *)allocator.zero_allocate(size, sizeof(x2robot_msgs__msg__CanFrame), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = x2robot_msgs__msg__CanFrame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        x2robot_msgs__msg__CanFrame__fini(&data[i - 1]);
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
x2robot_msgs__msg__CanFrame__Sequence__fini(x2robot_msgs__msg__CanFrame__Sequence * array)
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
      x2robot_msgs__msg__CanFrame__fini(&array->data[i]);
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

x2robot_msgs__msg__CanFrame__Sequence *
x2robot_msgs__msg__CanFrame__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__CanFrame__Sequence * array = (x2robot_msgs__msg__CanFrame__Sequence *)allocator.allocate(sizeof(x2robot_msgs__msg__CanFrame__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = x2robot_msgs__msg__CanFrame__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
x2robot_msgs__msg__CanFrame__Sequence__destroy(x2robot_msgs__msg__CanFrame__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    x2robot_msgs__msg__CanFrame__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
x2robot_msgs__msg__CanFrame__Sequence__are_equal(const x2robot_msgs__msg__CanFrame__Sequence * lhs, const x2robot_msgs__msg__CanFrame__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!x2robot_msgs__msg__CanFrame__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
x2robot_msgs__msg__CanFrame__Sequence__copy(
  const x2robot_msgs__msg__CanFrame__Sequence * input,
  x2robot_msgs__msg__CanFrame__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(x2robot_msgs__msg__CanFrame);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    x2robot_msgs__msg__CanFrame * data =
      (x2robot_msgs__msg__CanFrame *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!x2robot_msgs__msg__CanFrame__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          x2robot_msgs__msg__CanFrame__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!x2robot_msgs__msg__CanFrame__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
