// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_perception_msgs:msg/TrafficSignal.idl
// generated code does not contain a copyright notice
#include "autoware_perception_msgs/msg/detail/traffic_signal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `elements`
#include "autoware_perception_msgs/msg/detail/traffic_signal_element__functions.h"

bool
autoware_perception_msgs__msg__TrafficSignal__init(autoware_perception_msgs__msg__TrafficSignal * msg)
{
  if (!msg) {
    return false;
  }
  // traffic_signal_id
  // elements
  if (!autoware_perception_msgs__msg__TrafficSignalElement__Sequence__init(&msg->elements, 0)) {
    autoware_perception_msgs__msg__TrafficSignal__fini(msg);
    return false;
  }
  return true;
}

void
autoware_perception_msgs__msg__TrafficSignal__fini(autoware_perception_msgs__msg__TrafficSignal * msg)
{
  if (!msg) {
    return;
  }
  // traffic_signal_id
  // elements
  autoware_perception_msgs__msg__TrafficSignalElement__Sequence__fini(&msg->elements);
}

bool
autoware_perception_msgs__msg__TrafficSignal__are_equal(const autoware_perception_msgs__msg__TrafficSignal * lhs, const autoware_perception_msgs__msg__TrafficSignal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // traffic_signal_id
  if (lhs->traffic_signal_id != rhs->traffic_signal_id) {
    return false;
  }
  // elements
  if (!autoware_perception_msgs__msg__TrafficSignalElement__Sequence__are_equal(
      &(lhs->elements), &(rhs->elements)))
  {
    return false;
  }
  return true;
}

bool
autoware_perception_msgs__msg__TrafficSignal__copy(
  const autoware_perception_msgs__msg__TrafficSignal * input,
  autoware_perception_msgs__msg__TrafficSignal * output)
{
  if (!input || !output) {
    return false;
  }
  // traffic_signal_id
  output->traffic_signal_id = input->traffic_signal_id;
  // elements
  if (!autoware_perception_msgs__msg__TrafficSignalElement__Sequence__copy(
      &(input->elements), &(output->elements)))
  {
    return false;
  }
  return true;
}

autoware_perception_msgs__msg__TrafficSignal *
autoware_perception_msgs__msg__TrafficSignal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_perception_msgs__msg__TrafficSignal * msg = (autoware_perception_msgs__msg__TrafficSignal *)allocator.allocate(sizeof(autoware_perception_msgs__msg__TrafficSignal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_perception_msgs__msg__TrafficSignal));
  bool success = autoware_perception_msgs__msg__TrafficSignal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_perception_msgs__msg__TrafficSignal__destroy(autoware_perception_msgs__msg__TrafficSignal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_perception_msgs__msg__TrafficSignal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_perception_msgs__msg__TrafficSignal__Sequence__init(autoware_perception_msgs__msg__TrafficSignal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_perception_msgs__msg__TrafficSignal * data = NULL;

  if (size) {
    data = (autoware_perception_msgs__msg__TrafficSignal *)allocator.zero_allocate(size, sizeof(autoware_perception_msgs__msg__TrafficSignal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_perception_msgs__msg__TrafficSignal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_perception_msgs__msg__TrafficSignal__fini(&data[i - 1]);
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
autoware_perception_msgs__msg__TrafficSignal__Sequence__fini(autoware_perception_msgs__msg__TrafficSignal__Sequence * array)
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
      autoware_perception_msgs__msg__TrafficSignal__fini(&array->data[i]);
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

autoware_perception_msgs__msg__TrafficSignal__Sequence *
autoware_perception_msgs__msg__TrafficSignal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_perception_msgs__msg__TrafficSignal__Sequence * array = (autoware_perception_msgs__msg__TrafficSignal__Sequence *)allocator.allocate(sizeof(autoware_perception_msgs__msg__TrafficSignal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_perception_msgs__msg__TrafficSignal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_perception_msgs__msg__TrafficSignal__Sequence__destroy(autoware_perception_msgs__msg__TrafficSignal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_perception_msgs__msg__TrafficSignal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_perception_msgs__msg__TrafficSignal__Sequence__are_equal(const autoware_perception_msgs__msg__TrafficSignal__Sequence * lhs, const autoware_perception_msgs__msg__TrafficSignal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_perception_msgs__msg__TrafficSignal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_perception_msgs__msg__TrafficSignal__Sequence__copy(
  const autoware_perception_msgs__msg__TrafficSignal__Sequence * input,
  autoware_perception_msgs__msg__TrafficSignal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_perception_msgs__msg__TrafficSignal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_perception_msgs__msg__TrafficSignal * data =
      (autoware_perception_msgs__msg__TrafficSignal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_perception_msgs__msg__TrafficSignal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_perception_msgs__msg__TrafficSignal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_perception_msgs__msg__TrafficSignal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
