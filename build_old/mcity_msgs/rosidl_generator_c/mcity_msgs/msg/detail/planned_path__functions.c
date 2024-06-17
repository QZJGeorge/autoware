// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mcity_msgs:msg/PlannedPath.idl
// generated code does not contain a copyright notice
#include "mcity_msgs/msg/detail/planned_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `x_vector`
// Member `y_vector`
// Member `vd_vector`
// Member `ori_vector`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mcity_msgs__msg__PlannedPath__init(mcity_msgs__msg__PlannedPath * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // time_resolution
  // go
  // estop
  // x_vector
  if (!rosidl_runtime_c__double__Sequence__init(&msg->x_vector, 0)) {
    mcity_msgs__msg__PlannedPath__fini(msg);
    return false;
  }
  // y_vector
  if (!rosidl_runtime_c__double__Sequence__init(&msg->y_vector, 0)) {
    mcity_msgs__msg__PlannedPath__fini(msg);
    return false;
  }
  // vd_vector
  if (!rosidl_runtime_c__double__Sequence__init(&msg->vd_vector, 0)) {
    mcity_msgs__msg__PlannedPath__fini(msg);
    return false;
  }
  // ori_vector
  if (!rosidl_runtime_c__double__Sequence__init(&msg->ori_vector, 0)) {
    mcity_msgs__msg__PlannedPath__fini(msg);
    return false;
  }
  return true;
}

void
mcity_msgs__msg__PlannedPath__fini(mcity_msgs__msg__PlannedPath * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // time_resolution
  // go
  // estop
  // x_vector
  rosidl_runtime_c__double__Sequence__fini(&msg->x_vector);
  // y_vector
  rosidl_runtime_c__double__Sequence__fini(&msg->y_vector);
  // vd_vector
  rosidl_runtime_c__double__Sequence__fini(&msg->vd_vector);
  // ori_vector
  rosidl_runtime_c__double__Sequence__fini(&msg->ori_vector);
}

bool
mcity_msgs__msg__PlannedPath__are_equal(const mcity_msgs__msg__PlannedPath * lhs, const mcity_msgs__msg__PlannedPath * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // time_resolution
  if (lhs->time_resolution != rhs->time_resolution) {
    return false;
  }
  // go
  if (lhs->go != rhs->go) {
    return false;
  }
  // estop
  if (lhs->estop != rhs->estop) {
    return false;
  }
  // x_vector
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->x_vector), &(rhs->x_vector)))
  {
    return false;
  }
  // y_vector
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->y_vector), &(rhs->y_vector)))
  {
    return false;
  }
  // vd_vector
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->vd_vector), &(rhs->vd_vector)))
  {
    return false;
  }
  // ori_vector
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->ori_vector), &(rhs->ori_vector)))
  {
    return false;
  }
  return true;
}

bool
mcity_msgs__msg__PlannedPath__copy(
  const mcity_msgs__msg__PlannedPath * input,
  mcity_msgs__msg__PlannedPath * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // time_resolution
  output->time_resolution = input->time_resolution;
  // go
  output->go = input->go;
  // estop
  output->estop = input->estop;
  // x_vector
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->x_vector), &(output->x_vector)))
  {
    return false;
  }
  // y_vector
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->y_vector), &(output->y_vector)))
  {
    return false;
  }
  // vd_vector
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->vd_vector), &(output->vd_vector)))
  {
    return false;
  }
  // ori_vector
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->ori_vector), &(output->ori_vector)))
  {
    return false;
  }
  return true;
}

mcity_msgs__msg__PlannedPath *
mcity_msgs__msg__PlannedPath__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mcity_msgs__msg__PlannedPath * msg = (mcity_msgs__msg__PlannedPath *)allocator.allocate(sizeof(mcity_msgs__msg__PlannedPath), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mcity_msgs__msg__PlannedPath));
  bool success = mcity_msgs__msg__PlannedPath__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mcity_msgs__msg__PlannedPath__destroy(mcity_msgs__msg__PlannedPath * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mcity_msgs__msg__PlannedPath__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mcity_msgs__msg__PlannedPath__Sequence__init(mcity_msgs__msg__PlannedPath__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mcity_msgs__msg__PlannedPath * data = NULL;

  if (size) {
    data = (mcity_msgs__msg__PlannedPath *)allocator.zero_allocate(size, sizeof(mcity_msgs__msg__PlannedPath), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mcity_msgs__msg__PlannedPath__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mcity_msgs__msg__PlannedPath__fini(&data[i - 1]);
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
mcity_msgs__msg__PlannedPath__Sequence__fini(mcity_msgs__msg__PlannedPath__Sequence * array)
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
      mcity_msgs__msg__PlannedPath__fini(&array->data[i]);
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

mcity_msgs__msg__PlannedPath__Sequence *
mcity_msgs__msg__PlannedPath__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mcity_msgs__msg__PlannedPath__Sequence * array = (mcity_msgs__msg__PlannedPath__Sequence *)allocator.allocate(sizeof(mcity_msgs__msg__PlannedPath__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mcity_msgs__msg__PlannedPath__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mcity_msgs__msg__PlannedPath__Sequence__destroy(mcity_msgs__msg__PlannedPath__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mcity_msgs__msg__PlannedPath__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mcity_msgs__msg__PlannedPath__Sequence__are_equal(const mcity_msgs__msg__PlannedPath__Sequence * lhs, const mcity_msgs__msg__PlannedPath__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mcity_msgs__msg__PlannedPath__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mcity_msgs__msg__PlannedPath__Sequence__copy(
  const mcity_msgs__msg__PlannedPath__Sequence * input,
  mcity_msgs__msg__PlannedPath__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mcity_msgs__msg__PlannedPath);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mcity_msgs__msg__PlannedPath * data =
      (mcity_msgs__msg__PlannedPath *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mcity_msgs__msg__PlannedPath__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mcity_msgs__msg__PlannedPath__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mcity_msgs__msg__PlannedPath__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
