// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/UnitError.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/unit_error__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `exception`
#include "rosidl_runtime_c/string_functions.h"

bool
protocol__msg__UnitError__init(protocol__msg__UnitError * msg)
{
  if (!msg) {
    return false;
  }
  // error_code
  // level
  // exception
  if (!rosidl_runtime_c__String__init(&msg->exception)) {
    protocol__msg__UnitError__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__UnitError__fini(protocol__msg__UnitError * msg)
{
  if (!msg) {
    return;
  }
  // error_code
  // level
  // exception
  rosidl_runtime_c__String__fini(&msg->exception);
}

bool
protocol__msg__UnitError__are_equal(const protocol__msg__UnitError * lhs, const protocol__msg__UnitError * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // level
  if (lhs->level != rhs->level) {
    return false;
  }
  // exception
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->exception), &(rhs->exception)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__UnitError__copy(
  const protocol__msg__UnitError * input,
  protocol__msg__UnitError * output)
{
  if (!input || !output) {
    return false;
  }
  // error_code
  output->error_code = input->error_code;
  // level
  output->level = input->level;
  // exception
  if (!rosidl_runtime_c__String__copy(
      &(input->exception), &(output->exception)))
  {
    return false;
  }
  return true;
}

protocol__msg__UnitError *
protocol__msg__UnitError__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  protocol__msg__UnitError * msg = (protocol__msg__UnitError *)allocator.allocate(sizeof(protocol__msg__UnitError), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__UnitError));
  bool success = protocol__msg__UnitError__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
protocol__msg__UnitError__destroy(protocol__msg__UnitError * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    protocol__msg__UnitError__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
protocol__msg__UnitError__Sequence__init(protocol__msg__UnitError__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  protocol__msg__UnitError * data = NULL;

  if (size) {
    data = (protocol__msg__UnitError *)allocator.zero_allocate(size, sizeof(protocol__msg__UnitError), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__UnitError__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__UnitError__fini(&data[i - 1]);
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
protocol__msg__UnitError__Sequence__fini(protocol__msg__UnitError__Sequence * array)
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
      protocol__msg__UnitError__fini(&array->data[i]);
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

protocol__msg__UnitError__Sequence *
protocol__msg__UnitError__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  protocol__msg__UnitError__Sequence * array = (protocol__msg__UnitError__Sequence *)allocator.allocate(sizeof(protocol__msg__UnitError__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__UnitError__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
protocol__msg__UnitError__Sequence__destroy(protocol__msg__UnitError__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    protocol__msg__UnitError__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
protocol__msg__UnitError__Sequence__are_equal(const protocol__msg__UnitError__Sequence * lhs, const protocol__msg__UnitError__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__UnitError__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__UnitError__Sequence__copy(
  const protocol__msg__UnitError__Sequence * input,
  protocol__msg__UnitError__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__UnitError);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    protocol__msg__UnitError * data =
      (protocol__msg__UnitError *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__UnitError__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          protocol__msg__UnitError__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!protocol__msg__UnitError__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
