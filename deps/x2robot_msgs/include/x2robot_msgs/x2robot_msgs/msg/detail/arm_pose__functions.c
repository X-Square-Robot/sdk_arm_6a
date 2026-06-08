// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from x2robot_msgs:msg/ArmPose.idl
// generated code does not contain a copyright notice
#include "x2robot_msgs/msg/detail/arm_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
x2robot_msgs__msg__ArmPose__init(x2robot_msgs__msg__ArmPose * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    x2robot_msgs__msg__ArmPose__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    x2robot_msgs__msg__ArmPose__fini(msg);
    return false;
  }
  // gripper
  return true;
}

void
x2robot_msgs__msg__ArmPose__fini(x2robot_msgs__msg__ArmPose * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // gripper
}

bool
x2robot_msgs__msg__ArmPose__are_equal(const x2robot_msgs__msg__ArmPose * lhs, const x2robot_msgs__msg__ArmPose * rhs)
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
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // gripper
  if (lhs->gripper != rhs->gripper) {
    return false;
  }
  return true;
}

bool
x2robot_msgs__msg__ArmPose__copy(
  const x2robot_msgs__msg__ArmPose * input,
  x2robot_msgs__msg__ArmPose * output)
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
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // gripper
  output->gripper = input->gripper;
  return true;
}

x2robot_msgs__msg__ArmPose *
x2robot_msgs__msg__ArmPose__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__ArmPose * msg = (x2robot_msgs__msg__ArmPose *)allocator.allocate(sizeof(x2robot_msgs__msg__ArmPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(x2robot_msgs__msg__ArmPose));
  bool success = x2robot_msgs__msg__ArmPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
x2robot_msgs__msg__ArmPose__destroy(x2robot_msgs__msg__ArmPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    x2robot_msgs__msg__ArmPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
x2robot_msgs__msg__ArmPose__Sequence__init(x2robot_msgs__msg__ArmPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__ArmPose * data = NULL;

  if (size) {
    data = (x2robot_msgs__msg__ArmPose *)allocator.zero_allocate(size, sizeof(x2robot_msgs__msg__ArmPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = x2robot_msgs__msg__ArmPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        x2robot_msgs__msg__ArmPose__fini(&data[i - 1]);
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
x2robot_msgs__msg__ArmPose__Sequence__fini(x2robot_msgs__msg__ArmPose__Sequence * array)
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
      x2robot_msgs__msg__ArmPose__fini(&array->data[i]);
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

x2robot_msgs__msg__ArmPose__Sequence *
x2robot_msgs__msg__ArmPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__ArmPose__Sequence * array = (x2robot_msgs__msg__ArmPose__Sequence *)allocator.allocate(sizeof(x2robot_msgs__msg__ArmPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = x2robot_msgs__msg__ArmPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
x2robot_msgs__msg__ArmPose__Sequence__destroy(x2robot_msgs__msg__ArmPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    x2robot_msgs__msg__ArmPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
x2robot_msgs__msg__ArmPose__Sequence__are_equal(const x2robot_msgs__msg__ArmPose__Sequence * lhs, const x2robot_msgs__msg__ArmPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!x2robot_msgs__msg__ArmPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
x2robot_msgs__msg__ArmPose__Sequence__copy(
  const x2robot_msgs__msg__ArmPose__Sequence * input,
  x2robot_msgs__msg__ArmPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(x2robot_msgs__msg__ArmPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    x2robot_msgs__msg__ArmPose * data =
      (x2robot_msgs__msg__ArmPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!x2robot_msgs__msg__ArmPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          x2robot_msgs__msg__ArmPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!x2robot_msgs__msg__ArmPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
