// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from x2robot_msgs:msg/TashanTactileData.idl
// generated code does not contain a copyright notice
#include "x2robot_msgs/msg/detail/tashan_tactile_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `sensor_names`
// Member `frame_ids`
#include "rosidl_runtime_c/string_functions.h"
// Member `normal_forces`
// Member `tangential_forces`
// Member `directions`
// Member `capacitances`
// Member `error_codes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
x2robot_msgs__msg__TashanTactileData__init(x2robot_msgs__msg__TashanTactileData * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    x2robot_msgs__msg__TashanTactileData__fini(msg);
    return false;
  }
  // sensor_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->sensor_names, 0)) {
    x2robot_msgs__msg__TashanTactileData__fini(msg);
    return false;
  }
  // frame_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->frame_ids, 0)) {
    x2robot_msgs__msg__TashanTactileData__fini(msg);
    return false;
  }
  // normal_forces
  if (!rosidl_runtime_c__float__Sequence__init(&msg->normal_forces, 0)) {
    x2robot_msgs__msg__TashanTactileData__fini(msg);
    return false;
  }
  // tangential_forces
  if (!rosidl_runtime_c__float__Sequence__init(&msg->tangential_forces, 0)) {
    x2robot_msgs__msg__TashanTactileData__fini(msg);
    return false;
  }
  // directions
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->directions, 0)) {
    x2robot_msgs__msg__TashanTactileData__fini(msg);
    return false;
  }
  // capacitances
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->capacitances, 0)) {
    x2robot_msgs__msg__TashanTactileData__fini(msg);
    return false;
  }
  // error_codes
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->error_codes, 0)) {
    x2robot_msgs__msg__TashanTactileData__fini(msg);
    return false;
  }
  return true;
}

void
x2robot_msgs__msg__TashanTactileData__fini(x2robot_msgs__msg__TashanTactileData * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // sensor_names
  rosidl_runtime_c__String__Sequence__fini(&msg->sensor_names);
  // frame_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->frame_ids);
  // normal_forces
  rosidl_runtime_c__float__Sequence__fini(&msg->normal_forces);
  // tangential_forces
  rosidl_runtime_c__float__Sequence__fini(&msg->tangential_forces);
  // directions
  rosidl_runtime_c__int16__Sequence__fini(&msg->directions);
  // capacitances
  rosidl_runtime_c__uint32__Sequence__fini(&msg->capacitances);
  // error_codes
  rosidl_runtime_c__uint8__Sequence__fini(&msg->error_codes);
}

bool
x2robot_msgs__msg__TashanTactileData__are_equal(const x2robot_msgs__msg__TashanTactileData * lhs, const x2robot_msgs__msg__TashanTactileData * rhs)
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
  // sensor_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->sensor_names), &(rhs->sensor_names)))
  {
    return false;
  }
  // frame_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->frame_ids), &(rhs->frame_ids)))
  {
    return false;
  }
  // normal_forces
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->normal_forces), &(rhs->normal_forces)))
  {
    return false;
  }
  // tangential_forces
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->tangential_forces), &(rhs->tangential_forces)))
  {
    return false;
  }
  // directions
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->directions), &(rhs->directions)))
  {
    return false;
  }
  // capacitances
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->capacitances), &(rhs->capacitances)))
  {
    return false;
  }
  // error_codes
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->error_codes), &(rhs->error_codes)))
  {
    return false;
  }
  return true;
}

bool
x2robot_msgs__msg__TashanTactileData__copy(
  const x2robot_msgs__msg__TashanTactileData * input,
  x2robot_msgs__msg__TashanTactileData * output)
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
  // sensor_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->sensor_names), &(output->sensor_names)))
  {
    return false;
  }
  // frame_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->frame_ids), &(output->frame_ids)))
  {
    return false;
  }
  // normal_forces
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->normal_forces), &(output->normal_forces)))
  {
    return false;
  }
  // tangential_forces
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->tangential_forces), &(output->tangential_forces)))
  {
    return false;
  }
  // directions
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->directions), &(output->directions)))
  {
    return false;
  }
  // capacitances
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->capacitances), &(output->capacitances)))
  {
    return false;
  }
  // error_codes
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->error_codes), &(output->error_codes)))
  {
    return false;
  }
  return true;
}

x2robot_msgs__msg__TashanTactileData *
x2robot_msgs__msg__TashanTactileData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__TashanTactileData * msg = (x2robot_msgs__msg__TashanTactileData *)allocator.allocate(sizeof(x2robot_msgs__msg__TashanTactileData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(x2robot_msgs__msg__TashanTactileData));
  bool success = x2robot_msgs__msg__TashanTactileData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
x2robot_msgs__msg__TashanTactileData__destroy(x2robot_msgs__msg__TashanTactileData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    x2robot_msgs__msg__TashanTactileData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
x2robot_msgs__msg__TashanTactileData__Sequence__init(x2robot_msgs__msg__TashanTactileData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__TashanTactileData * data = NULL;

  if (size) {
    data = (x2robot_msgs__msg__TashanTactileData *)allocator.zero_allocate(size, sizeof(x2robot_msgs__msg__TashanTactileData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = x2robot_msgs__msg__TashanTactileData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        x2robot_msgs__msg__TashanTactileData__fini(&data[i - 1]);
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
x2robot_msgs__msg__TashanTactileData__Sequence__fini(x2robot_msgs__msg__TashanTactileData__Sequence * array)
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
      x2robot_msgs__msg__TashanTactileData__fini(&array->data[i]);
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

x2robot_msgs__msg__TashanTactileData__Sequence *
x2robot_msgs__msg__TashanTactileData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  x2robot_msgs__msg__TashanTactileData__Sequence * array = (x2robot_msgs__msg__TashanTactileData__Sequence *)allocator.allocate(sizeof(x2robot_msgs__msg__TashanTactileData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = x2robot_msgs__msg__TashanTactileData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
x2robot_msgs__msg__TashanTactileData__Sequence__destroy(x2robot_msgs__msg__TashanTactileData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    x2robot_msgs__msg__TashanTactileData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
x2robot_msgs__msg__TashanTactileData__Sequence__are_equal(const x2robot_msgs__msg__TashanTactileData__Sequence * lhs, const x2robot_msgs__msg__TashanTactileData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!x2robot_msgs__msg__TashanTactileData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
x2robot_msgs__msg__TashanTactileData__Sequence__copy(
  const x2robot_msgs__msg__TashanTactileData__Sequence * input,
  x2robot_msgs__msg__TashanTactileData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(x2robot_msgs__msg__TashanTactileData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    x2robot_msgs__msg__TashanTactileData * data =
      (x2robot_msgs__msg__TashanTactileData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!x2robot_msgs__msg__TashanTactileData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          x2robot_msgs__msg__TashanTactileData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!x2robot_msgs__msg__TashanTactileData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
