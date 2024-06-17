// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mcity_msgs:msg/Control.idl
// generated code does not contain a copyright notice
#include "mcity_msgs/msg/detail/control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mcity_msgs__msg__Control__init(mcity_msgs__msg__Control * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // count
  // brake_cmd
  // throttle_cmd
  // steering_cmd
  // gear_cmd
  // turn_signal_cmd
  return true;
}

void
mcity_msgs__msg__Control__fini(mcity_msgs__msg__Control * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // count
  // brake_cmd
  // throttle_cmd
  // steering_cmd
  // gear_cmd
  // turn_signal_cmd
}

bool
mcity_msgs__msg__Control__are_equal(const mcity_msgs__msg__Control * lhs, const mcity_msgs__msg__Control * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  // brake_cmd
  if (lhs->brake_cmd != rhs->brake_cmd) {
    return false;
  }
  // throttle_cmd
  if (lhs->throttle_cmd != rhs->throttle_cmd) {
    return false;
  }
  // steering_cmd
  if (lhs->steering_cmd != rhs->steering_cmd) {
    return false;
  }
  // gear_cmd
  if (lhs->gear_cmd != rhs->gear_cmd) {
    return false;
  }
  // turn_signal_cmd
  if (lhs->turn_signal_cmd != rhs->turn_signal_cmd) {
    return false;
  }
  return true;
}

bool
mcity_msgs__msg__Control__copy(
  const mcity_msgs__msg__Control * input,
  mcity_msgs__msg__Control * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // count
  output->count = input->count;
  // brake_cmd
  output->brake_cmd = input->brake_cmd;
  // throttle_cmd
  output->throttle_cmd = input->throttle_cmd;
  // steering_cmd
  output->steering_cmd = input->steering_cmd;
  // gear_cmd
  output->gear_cmd = input->gear_cmd;
  // turn_signal_cmd
  output->turn_signal_cmd = input->turn_signal_cmd;
  return true;
}

mcity_msgs__msg__Control *
mcity_msgs__msg__Control__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mcity_msgs__msg__Control * msg = (mcity_msgs__msg__Control *)allocator.allocate(sizeof(mcity_msgs__msg__Control), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mcity_msgs__msg__Control));
  bool success = mcity_msgs__msg__Control__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mcity_msgs__msg__Control__destroy(mcity_msgs__msg__Control * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mcity_msgs__msg__Control__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mcity_msgs__msg__Control__Sequence__init(mcity_msgs__msg__Control__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mcity_msgs__msg__Control * data = NULL;

  if (size) {
    data = (mcity_msgs__msg__Control *)allocator.zero_allocate(size, sizeof(mcity_msgs__msg__Control), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mcity_msgs__msg__Control__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mcity_msgs__msg__Control__fini(&data[i - 1]);
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
mcity_msgs__msg__Control__Sequence__fini(mcity_msgs__msg__Control__Sequence * array)
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
      mcity_msgs__msg__Control__fini(&array->data[i]);
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

mcity_msgs__msg__Control__Sequence *
mcity_msgs__msg__Control__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mcity_msgs__msg__Control__Sequence * array = (mcity_msgs__msg__Control__Sequence *)allocator.allocate(sizeof(mcity_msgs__msg__Control__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mcity_msgs__msg__Control__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mcity_msgs__msg__Control__Sequence__destroy(mcity_msgs__msg__Control__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mcity_msgs__msg__Control__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mcity_msgs__msg__Control__Sequence__are_equal(const mcity_msgs__msg__Control__Sequence * lhs, const mcity_msgs__msg__Control__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mcity_msgs__msg__Control__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mcity_msgs__msg__Control__Sequence__copy(
  const mcity_msgs__msg__Control__Sequence * input,
  mcity_msgs__msg__Control__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mcity_msgs__msg__Control);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mcity_msgs__msg__Control * data =
      (mcity_msgs__msg__Control *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mcity_msgs__msg__Control__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mcity_msgs__msg__Control__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mcity_msgs__msg__Control__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
