// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from eagleye_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#include "eagleye_msgs/msg/detail/status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
eagleye_msgs__msg__Status__init(eagleye_msgs__msg__Status * msg)
{
  if (!msg) {
    return false;
  }
  // enabled_status
  // estimate_status
  // is_abnormal
  // error_code
  return true;
}

void
eagleye_msgs__msg__Status__fini(eagleye_msgs__msg__Status * msg)
{
  if (!msg) {
    return;
  }
  // enabled_status
  // estimate_status
  // is_abnormal
  // error_code
}

bool
eagleye_msgs__msg__Status__are_equal(const eagleye_msgs__msg__Status * lhs, const eagleye_msgs__msg__Status * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // enabled_status
  if (lhs->enabled_status != rhs->enabled_status) {
    return false;
  }
  // estimate_status
  if (lhs->estimate_status != rhs->estimate_status) {
    return false;
  }
  // is_abnormal
  if (lhs->is_abnormal != rhs->is_abnormal) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  return true;
}

bool
eagleye_msgs__msg__Status__copy(
  const eagleye_msgs__msg__Status * input,
  eagleye_msgs__msg__Status * output)
{
  if (!input || !output) {
    return false;
  }
  // enabled_status
  output->enabled_status = input->enabled_status;
  // estimate_status
  output->estimate_status = input->estimate_status;
  // is_abnormal
  output->is_abnormal = input->is_abnormal;
  // error_code
  output->error_code = input->error_code;
  return true;
}

eagleye_msgs__msg__Status *
eagleye_msgs__msg__Status__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eagleye_msgs__msg__Status * msg = (eagleye_msgs__msg__Status *)allocator.allocate(sizeof(eagleye_msgs__msg__Status), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(eagleye_msgs__msg__Status));
  bool success = eagleye_msgs__msg__Status__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
eagleye_msgs__msg__Status__destroy(eagleye_msgs__msg__Status * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    eagleye_msgs__msg__Status__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
eagleye_msgs__msg__Status__Sequence__init(eagleye_msgs__msg__Status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eagleye_msgs__msg__Status * data = NULL;

  if (size) {
    data = (eagleye_msgs__msg__Status *)allocator.zero_allocate(size, sizeof(eagleye_msgs__msg__Status), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = eagleye_msgs__msg__Status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        eagleye_msgs__msg__Status__fini(&data[i - 1]);
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
eagleye_msgs__msg__Status__Sequence__fini(eagleye_msgs__msg__Status__Sequence * array)
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
      eagleye_msgs__msg__Status__fini(&array->data[i]);
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

eagleye_msgs__msg__Status__Sequence *
eagleye_msgs__msg__Status__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eagleye_msgs__msg__Status__Sequence * array = (eagleye_msgs__msg__Status__Sequence *)allocator.allocate(sizeof(eagleye_msgs__msg__Status__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = eagleye_msgs__msg__Status__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
eagleye_msgs__msg__Status__Sequence__destroy(eagleye_msgs__msg__Status__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    eagleye_msgs__msg__Status__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
eagleye_msgs__msg__Status__Sequence__are_equal(const eagleye_msgs__msg__Status__Sequence * lhs, const eagleye_msgs__msg__Status__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!eagleye_msgs__msg__Status__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
eagleye_msgs__msg__Status__Sequence__copy(
  const eagleye_msgs__msg__Status__Sequence * input,
  eagleye_msgs__msg__Status__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(eagleye_msgs__msg__Status);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    eagleye_msgs__msg__Status * data =
      (eagleye_msgs__msg__Status *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!eagleye_msgs__msg__Status__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          eagleye_msgs__msg__Status__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!eagleye_msgs__msg__Status__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
