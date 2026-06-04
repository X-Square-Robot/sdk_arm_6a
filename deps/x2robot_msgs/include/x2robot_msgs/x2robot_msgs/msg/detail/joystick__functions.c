// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from x2robot_msgs:msg/Joystick.idl
// generated code does not contain a copyright notice
#include "x2robot_msgs/msg/detail/joystick__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
x2robot_msgs__msg__Joystick__init(x2robot_msgs__msg__Joystick * msg)
{
  if (!msg) {
    return false;
  }
  // joystick_x
  // joystick_y
  // trigger
  // joy_button
  // sw1
  // sw2
  // sw3
  // sw4
  return true;
}

void
x2robot_msgs__msg__Joystick__fini(x2robot_msgs__msg__Joystick * msg)
{
  if (!msg) {
    return;
  }
  // joystick_x
  // joystick_y
  // trigger
  // joy_button
  // sw1
  // sw2
  // sw3
  // sw4
}

bool
x2robot_msgs__msg__Joystick__are_equal(const x2robot_msgs__msg__Joystick * lhs, const x2robot_msgs__msg__Joystick * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joystick_x
  if (lhs->joystick_x != rhs->joystick_x) {
    return false;
  }
  // joystick_y
  if (lhs->joystick_y != rhs->joystick_y) {
    return false;
  }
  // trigger
  if (lhs->trigger != rhs->trigger) {
    return false;
  }
  // joy_button
  if (lhs->joy_button != rhs->joy_button) {
    return false;
  }
  // sw1
  if (lhs->sw1 != rhs->sw1) {
    return false;
  }
  // sw2
  if (lhs->sw2 != rhs->sw2) {
    return false;
  }
  // sw3
  if (lhs->sw3 != rhs->sw3) {
    return false;
  }
  // sw4
  if (lhs->sw4 != rhs->sw4) {
    return false;
  }
  return true;
}

bool
x2robot_msgs__msg__Joystick__copy(
  const x2robot_msgs__msg__Joystick * input,
  x2robot_msgs__msg__Joystick * output)
{
  if (!input || !output) {
    return false;
  }
  // joystick_x
  output->joystick_x = input->joystick_x;
  // joystick_y
  output->joystick_y = input->joystick_y;
  // trigger
  output->trigger = input->trigger;
  // joy_button
  output->joy_button = input->joy_button;
  // sw1
  output->sw1 = input->sw1;
  // sw2
  output->sw2 = input->sw2;
  // sw3
  output->sw3 = input->sw3;
  // sw4
  output->sw4 = input->sw4;
  return true;
}

x2robot_msgs__msg__Joystick *
x2robot_msgs__msg__Joystick__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__Joystick * msg = (x2robot_msgs__msg__Joystick *)allocator.allocate(sizeof(x2robot_msgs__msg__Joystick), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(x2robot_msgs__msg__Joystick));
  bool success = x2robot_msgs__msg__Joystick__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
x2robot_msgs__msg__Joystick__destroy(x2robot_msgs__msg__Joystick * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    x2robot_msgs__msg__Joystick__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
x2robot_msgs__msg__Joystick__Sequence__init(x2robot_msgs__msg__Joystick__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__Joystick * data = NULL;

  if (size) {
    data = (x2robot_msgs__msg__Joystick *)allocator.zero_allocate(size, sizeof(x2robot_msgs__msg__Joystick), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = x2robot_msgs__msg__Joystick__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        x2robot_msgs__msg__Joystick__fini(&data[i - 1]);
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
x2robot_msgs__msg__Joystick__Sequence__fini(x2robot_msgs__msg__Joystick__Sequence * array)
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
      x2robot_msgs__msg__Joystick__fini(&array->data[i]);
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

x2robot_msgs__msg__Joystick__Sequence *
x2robot_msgs__msg__Joystick__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__Joystick__Sequence * array = (x2robot_msgs__msg__Joystick__Sequence *)allocator.allocate(sizeof(x2robot_msgs__msg__Joystick__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = x2robot_msgs__msg__Joystick__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
x2robot_msgs__msg__Joystick__Sequence__destroy(x2robot_msgs__msg__Joystick__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    x2robot_msgs__msg__Joystick__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
x2robot_msgs__msg__Joystick__Sequence__are_equal(const x2robot_msgs__msg__Joystick__Sequence * lhs, const x2robot_msgs__msg__Joystick__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!x2robot_msgs__msg__Joystick__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
x2robot_msgs__msg__Joystick__Sequence__copy(
  const x2robot_msgs__msg__Joystick__Sequence * input,
  x2robot_msgs__msg__Joystick__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(x2robot_msgs__msg__Joystick);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    x2robot_msgs__msg__Joystick * data =
      (x2robot_msgs__msg__Joystick *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!x2robot_msgs__msg__Joystick__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          x2robot_msgs__msg__Joystick__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!x2robot_msgs__msg__Joystick__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
