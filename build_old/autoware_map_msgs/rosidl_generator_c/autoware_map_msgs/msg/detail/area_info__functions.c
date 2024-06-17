// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_map_msgs:msg/AreaInfo.idl
// generated code does not contain a copyright notice
#include "autoware_map_msgs/msg/detail/area_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
autoware_map_msgs__msg__AreaInfo__init(autoware_map_msgs__msg__AreaInfo * msg)
{
  if (!msg) {
    return false;
  }
  // center_x
  // center_y
  // radius
  return true;
}

void
autoware_map_msgs__msg__AreaInfo__fini(autoware_map_msgs__msg__AreaInfo * msg)
{
  if (!msg) {
    return;
  }
  // center_x
  // center_y
  // radius
}

bool
autoware_map_msgs__msg__AreaInfo__are_equal(const autoware_map_msgs__msg__AreaInfo * lhs, const autoware_map_msgs__msg__AreaInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // center_x
  if (lhs->center_x != rhs->center_x) {
    return false;
  }
  // center_y
  if (lhs->center_y != rhs->center_y) {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  return true;
}

bool
autoware_map_msgs__msg__AreaInfo__copy(
  const autoware_map_msgs__msg__AreaInfo * input,
  autoware_map_msgs__msg__AreaInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // center_x
  output->center_x = input->center_x;
  // center_y
  output->center_y = input->center_y;
  // radius
  output->radius = input->radius;
  return true;
}

autoware_map_msgs__msg__AreaInfo *
autoware_map_msgs__msg__AreaInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_map_msgs__msg__AreaInfo * msg = (autoware_map_msgs__msg__AreaInfo *)allocator.allocate(sizeof(autoware_map_msgs__msg__AreaInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_map_msgs__msg__AreaInfo));
  bool success = autoware_map_msgs__msg__AreaInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_map_msgs__msg__AreaInfo__destroy(autoware_map_msgs__msg__AreaInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_map_msgs__msg__AreaInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_map_msgs__msg__AreaInfo__Sequence__init(autoware_map_msgs__msg__AreaInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_map_msgs__msg__AreaInfo * data = NULL;

  if (size) {
    data = (autoware_map_msgs__msg__AreaInfo *)allocator.zero_allocate(size, sizeof(autoware_map_msgs__msg__AreaInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_map_msgs__msg__AreaInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_map_msgs__msg__AreaInfo__fini(&data[i - 1]);
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
autoware_map_msgs__msg__AreaInfo__Sequence__fini(autoware_map_msgs__msg__AreaInfo__Sequence * array)
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
      autoware_map_msgs__msg__AreaInfo__fini(&array->data[i]);
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

autoware_map_msgs__msg__AreaInfo__Sequence *
autoware_map_msgs__msg__AreaInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_map_msgs__msg__AreaInfo__Sequence * array = (autoware_map_msgs__msg__AreaInfo__Sequence *)allocator.allocate(sizeof(autoware_map_msgs__msg__AreaInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_map_msgs__msg__AreaInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_map_msgs__msg__AreaInfo__Sequence__destroy(autoware_map_msgs__msg__AreaInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_map_msgs__msg__AreaInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_map_msgs__msg__AreaInfo__Sequence__are_equal(const autoware_map_msgs__msg__AreaInfo__Sequence * lhs, const autoware_map_msgs__msg__AreaInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_map_msgs__msg__AreaInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_map_msgs__msg__AreaInfo__Sequence__copy(
  const autoware_map_msgs__msg__AreaInfo__Sequence * input,
  autoware_map_msgs__msg__AreaInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_map_msgs__msg__AreaInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_map_msgs__msg__AreaInfo * data =
      (autoware_map_msgs__msg__AreaInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_map_msgs__msg__AreaInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_map_msgs__msg__AreaInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_map_msgs__msg__AreaInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
