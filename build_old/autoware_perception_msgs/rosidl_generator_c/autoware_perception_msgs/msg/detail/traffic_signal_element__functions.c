// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_perception_msgs:msg/TrafficSignalElement.idl
// generated code does not contain a copyright notice
#include "autoware_perception_msgs/msg/detail/traffic_signal_element__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
autoware_perception_msgs__msg__TrafficSignalElement__init(autoware_perception_msgs__msg__TrafficSignalElement * msg)
{
  if (!msg) {
    return false;
  }
  // color
  // shape
  // status
  // confidence
  return true;
}

void
autoware_perception_msgs__msg__TrafficSignalElement__fini(autoware_perception_msgs__msg__TrafficSignalElement * msg)
{
  if (!msg) {
    return;
  }
  // color
  // shape
  // status
  // confidence
}

bool
autoware_perception_msgs__msg__TrafficSignalElement__are_equal(const autoware_perception_msgs__msg__TrafficSignalElement * lhs, const autoware_perception_msgs__msg__TrafficSignalElement * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // color
  if (lhs->color != rhs->color) {
    return false;
  }
  // shape
  if (lhs->shape != rhs->shape) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
autoware_perception_msgs__msg__TrafficSignalElement__copy(
  const autoware_perception_msgs__msg__TrafficSignalElement * input,
  autoware_perception_msgs__msg__TrafficSignalElement * output)
{
  if (!input || !output) {
    return false;
  }
  // color
  output->color = input->color;
  // shape
  output->shape = input->shape;
  // status
  output->status = input->status;
  // confidence
  output->confidence = input->confidence;
  return true;
}

autoware_perception_msgs__msg__TrafficSignalElement *
autoware_perception_msgs__msg__TrafficSignalElement__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_perception_msgs__msg__TrafficSignalElement * msg = (autoware_perception_msgs__msg__TrafficSignalElement *)allocator.allocate(sizeof(autoware_perception_msgs__msg__TrafficSignalElement), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_perception_msgs__msg__TrafficSignalElement));
  bool success = autoware_perception_msgs__msg__TrafficSignalElement__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_perception_msgs__msg__TrafficSignalElement__destroy(autoware_perception_msgs__msg__TrafficSignalElement * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_perception_msgs__msg__TrafficSignalElement__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_perception_msgs__msg__TrafficSignalElement__Sequence__init(autoware_perception_msgs__msg__TrafficSignalElement__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_perception_msgs__msg__TrafficSignalElement * data = NULL;

  if (size) {
    data = (autoware_perception_msgs__msg__TrafficSignalElement *)allocator.zero_allocate(size, sizeof(autoware_perception_msgs__msg__TrafficSignalElement), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_perception_msgs__msg__TrafficSignalElement__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_perception_msgs__msg__TrafficSignalElement__fini(&data[i - 1]);
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
autoware_perception_msgs__msg__TrafficSignalElement__Sequence__fini(autoware_perception_msgs__msg__TrafficSignalElement__Sequence * array)
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
      autoware_perception_msgs__msg__TrafficSignalElement__fini(&array->data[i]);
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

autoware_perception_msgs__msg__TrafficSignalElement__Sequence *
autoware_perception_msgs__msg__TrafficSignalElement__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_perception_msgs__msg__TrafficSignalElement__Sequence * array = (autoware_perception_msgs__msg__TrafficSignalElement__Sequence *)allocator.allocate(sizeof(autoware_perception_msgs__msg__TrafficSignalElement__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_perception_msgs__msg__TrafficSignalElement__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_perception_msgs__msg__TrafficSignalElement__Sequence__destroy(autoware_perception_msgs__msg__TrafficSignalElement__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_perception_msgs__msg__TrafficSignalElement__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_perception_msgs__msg__TrafficSignalElement__Sequence__are_equal(const autoware_perception_msgs__msg__TrafficSignalElement__Sequence * lhs, const autoware_perception_msgs__msg__TrafficSignalElement__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_perception_msgs__msg__TrafficSignalElement__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_perception_msgs__msg__TrafficSignalElement__Sequence__copy(
  const autoware_perception_msgs__msg__TrafficSignalElement__Sequence * input,
  autoware_perception_msgs__msg__TrafficSignalElement__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_perception_msgs__msg__TrafficSignalElement);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_perception_msgs__msg__TrafficSignalElement * data =
      (autoware_perception_msgs__msg__TrafficSignalElement *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_perception_msgs__msg__TrafficSignalElement__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_perception_msgs__msg__TrafficSignalElement__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_perception_msgs__msg__TrafficSignalElement__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
