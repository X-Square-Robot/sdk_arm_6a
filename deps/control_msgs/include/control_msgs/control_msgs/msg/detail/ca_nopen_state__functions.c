// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/CANopenState.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/ca_nopen_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
control_msgs__msg__CANopenState__init(control_msgs__msg__CANopenState * msg)
{
  if (!msg) {
    return false;
  }
  // node_id
  // nmt_state
  // dsp_402_state
  // last_emcy_code
  return true;
}

void
control_msgs__msg__CANopenState__fini(control_msgs__msg__CANopenState * msg)
{
  if (!msg) {
    return;
  }
  // node_id
  // nmt_state
  // dsp_402_state
  // last_emcy_code
}

bool
control_msgs__msg__CANopenState__are_equal(const control_msgs__msg__CANopenState * lhs, const control_msgs__msg__CANopenState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_id
  if (lhs->node_id != rhs->node_id) {
    return false;
  }
  // nmt_state
  if (lhs->nmt_state != rhs->nmt_state) {
    return false;
  }
  // dsp_402_state
  if (lhs->dsp_402_state != rhs->dsp_402_state) {
    return false;
  }
  // last_emcy_code
  if (lhs->last_emcy_code != rhs->last_emcy_code) {
    return false;
  }
  return true;
}

bool
control_msgs__msg__CANopenState__copy(
  const control_msgs__msg__CANopenState * input,
  control_msgs__msg__CANopenState * output)
{
  if (!input || !output) {
    return false;
  }
  // node_id
  output->node_id = input->node_id;
  // nmt_state
  output->nmt_state = input->nmt_state;
  // dsp_402_state
  output->dsp_402_state = input->dsp_402_state;
  // last_emcy_code
  output->last_emcy_code = input->last_emcy_code;
  return true;
}

control_msgs__msg__CANopenState *
control_msgs__msg__CANopenState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__CANopenState * msg = (control_msgs__msg__CANopenState *)allocator.allocate(sizeof(control_msgs__msg__CANopenState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__CANopenState));
  bool success = control_msgs__msg__CANopenState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__CANopenState__destroy(control_msgs__msg__CANopenState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__msg__CANopenState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__msg__CANopenState__Sequence__init(control_msgs__msg__CANopenState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__CANopenState * data = NULL;

  if (size) {
    data = (control_msgs__msg__CANopenState *)allocator.zero_allocate(size, sizeof(control_msgs__msg__CANopenState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__CANopenState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__CANopenState__fini(&data[i - 1]);
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
control_msgs__msg__CANopenState__Sequence__fini(control_msgs__msg__CANopenState__Sequence * array)
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
      control_msgs__msg__CANopenState__fini(&array->data[i]);
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

control_msgs__msg__CANopenState__Sequence *
control_msgs__msg__CANopenState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__CANopenState__Sequence * array = (control_msgs__msg__CANopenState__Sequence *)allocator.allocate(sizeof(control_msgs__msg__CANopenState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__CANopenState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__CANopenState__Sequence__destroy(control_msgs__msg__CANopenState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__msg__CANopenState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__msg__CANopenState__Sequence__are_equal(const control_msgs__msg__CANopenState__Sequence * lhs, const control_msgs__msg__CANopenState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__msg__CANopenState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__msg__CANopenState__Sequence__copy(
  const control_msgs__msg__CANopenState__Sequence * input,
  control_msgs__msg__CANopenState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__msg__CANopenState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__msg__CANopenState * data =
      (control_msgs__msg__CANopenState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__msg__CANopenState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__msg__CANopenState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__msg__CANopenState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
