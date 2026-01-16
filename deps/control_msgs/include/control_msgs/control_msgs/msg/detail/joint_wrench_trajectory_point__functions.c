// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/JointWrenchTrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/joint_wrench_trajectory_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `point`
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"
// Member `wrench`
#include "control_msgs/msg/detail/wrench_framed__functions.h"

bool
control_msgs__msg__JointWrenchTrajectoryPoint__init(control_msgs__msg__JointWrenchTrajectoryPoint * msg)
{
  if (!msg) {
    return false;
  }
  // point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->point)) {
    control_msgs__msg__JointWrenchTrajectoryPoint__fini(msg);
    return false;
  }
  // wrench
  if (!control_msgs__msg__WrenchFramed__init(&msg->wrench)) {
    control_msgs__msg__JointWrenchTrajectoryPoint__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__msg__JointWrenchTrajectoryPoint__fini(control_msgs__msg__JointWrenchTrajectoryPoint * msg)
{
  if (!msg) {
    return;
  }
  // point
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->point);
  // wrench
  control_msgs__msg__WrenchFramed__fini(&msg->wrench);
}

bool
control_msgs__msg__JointWrenchTrajectoryPoint__are_equal(const control_msgs__msg__JointWrenchTrajectoryPoint * lhs, const control_msgs__msg__JointWrenchTrajectoryPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__are_equal(
      &(lhs->point), &(rhs->point)))
  {
    return false;
  }
  // wrench
  if (!control_msgs__msg__WrenchFramed__are_equal(
      &(lhs->wrench), &(rhs->wrench)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__msg__JointWrenchTrajectoryPoint__copy(
  const control_msgs__msg__JointWrenchTrajectoryPoint * input,
  control_msgs__msg__JointWrenchTrajectoryPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__copy(
      &(input->point), &(output->point)))
  {
    return false;
  }
  // wrench
  if (!control_msgs__msg__WrenchFramed__copy(
      &(input->wrench), &(output->wrench)))
  {
    return false;
  }
  return true;
}

control_msgs__msg__JointWrenchTrajectoryPoint *
control_msgs__msg__JointWrenchTrajectoryPoint__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__JointWrenchTrajectoryPoint * msg = (control_msgs__msg__JointWrenchTrajectoryPoint *)allocator.allocate(sizeof(control_msgs__msg__JointWrenchTrajectoryPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__JointWrenchTrajectoryPoint));
  bool success = control_msgs__msg__JointWrenchTrajectoryPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__JointWrenchTrajectoryPoint__destroy(control_msgs__msg__JointWrenchTrajectoryPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__msg__JointWrenchTrajectoryPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__msg__JointWrenchTrajectoryPoint__Sequence__init(control_msgs__msg__JointWrenchTrajectoryPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__JointWrenchTrajectoryPoint * data = NULL;

  if (size) {
    data = (control_msgs__msg__JointWrenchTrajectoryPoint *)allocator.zero_allocate(size, sizeof(control_msgs__msg__JointWrenchTrajectoryPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__JointWrenchTrajectoryPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__JointWrenchTrajectoryPoint__fini(&data[i - 1]);
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
control_msgs__msg__JointWrenchTrajectoryPoint__Sequence__fini(control_msgs__msg__JointWrenchTrajectoryPoint__Sequence * array)
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
      control_msgs__msg__JointWrenchTrajectoryPoint__fini(&array->data[i]);
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

control_msgs__msg__JointWrenchTrajectoryPoint__Sequence *
control_msgs__msg__JointWrenchTrajectoryPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__JointWrenchTrajectoryPoint__Sequence * array = (control_msgs__msg__JointWrenchTrajectoryPoint__Sequence *)allocator.allocate(sizeof(control_msgs__msg__JointWrenchTrajectoryPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__JointWrenchTrajectoryPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__JointWrenchTrajectoryPoint__Sequence__destroy(control_msgs__msg__JointWrenchTrajectoryPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__msg__JointWrenchTrajectoryPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__msg__JointWrenchTrajectoryPoint__Sequence__are_equal(const control_msgs__msg__JointWrenchTrajectoryPoint__Sequence * lhs, const control_msgs__msg__JointWrenchTrajectoryPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__msg__JointWrenchTrajectoryPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__msg__JointWrenchTrajectoryPoint__Sequence__copy(
  const control_msgs__msg__JointWrenchTrajectoryPoint__Sequence * input,
  control_msgs__msg__JointWrenchTrajectoryPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__msg__JointWrenchTrajectoryPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__msg__JointWrenchTrajectoryPoint * data =
      (control_msgs__msg__JointWrenchTrajectoryPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__msg__JointWrenchTrajectoryPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__msg__JointWrenchTrajectoryPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__msg__JointWrenchTrajectoryPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
