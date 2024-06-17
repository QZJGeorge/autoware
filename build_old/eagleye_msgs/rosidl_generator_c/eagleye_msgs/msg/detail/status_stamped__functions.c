// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from eagleye_msgs:msg/StatusStamped.idl
// generated code does not contain a copyright notice
#include "eagleye_msgs/msg/detail/status_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `status`
#include "eagleye_msgs/msg/detail/status__functions.h"

bool
eagleye_msgs__msg__StatusStamped__init(eagleye_msgs__msg__StatusStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    eagleye_msgs__msg__StatusStamped__fini(msg);
    return false;
  }
  // status
  if (!eagleye_msgs__msg__Status__init(&msg->status)) {
    eagleye_msgs__msg__StatusStamped__fini(msg);
    return false;
  }
  return true;
}

void
eagleye_msgs__msg__StatusStamped__fini(eagleye_msgs__msg__StatusStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // status
  eagleye_msgs__msg__Status__fini(&msg->status);
}

bool
eagleye_msgs__msg__StatusStamped__are_equal(const eagleye_msgs__msg__StatusStamped * lhs, const eagleye_msgs__msg__StatusStamped * rhs)
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
  // status
  if (!eagleye_msgs__msg__Status__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
eagleye_msgs__msg__StatusStamped__copy(
  const eagleye_msgs__msg__StatusStamped * input,
  eagleye_msgs__msg__StatusStamped * output)
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
  // status
  if (!eagleye_msgs__msg__Status__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

eagleye_msgs__msg__StatusStamped *
eagleye_msgs__msg__StatusStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eagleye_msgs__msg__StatusStamped * msg = (eagleye_msgs__msg__StatusStamped *)allocator.allocate(sizeof(eagleye_msgs__msg__StatusStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(eagleye_msgs__msg__StatusStamped));
  bool success = eagleye_msgs__msg__StatusStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
eagleye_msgs__msg__StatusStamped__destroy(eagleye_msgs__msg__StatusStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    eagleye_msgs__msg__StatusStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
eagleye_msgs__msg__StatusStamped__Sequence__init(eagleye_msgs__msg__StatusStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eagleye_msgs__msg__StatusStamped * data = NULL;

  if (size) {
    data = (eagleye_msgs__msg__StatusStamped *)allocator.zero_allocate(size, sizeof(eagleye_msgs__msg__StatusStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = eagleye_msgs__msg__StatusStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        eagleye_msgs__msg__StatusStamped__fini(&data[i - 1]);
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
eagleye_msgs__msg__StatusStamped__Sequence__fini(eagleye_msgs__msg__StatusStamped__Sequence * array)
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
      eagleye_msgs__msg__StatusStamped__fini(&array->data[i]);
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

eagleye_msgs__msg__StatusStamped__Sequence *
eagleye_msgs__msg__StatusStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eagleye_msgs__msg__StatusStamped__Sequence * array = (eagleye_msgs__msg__StatusStamped__Sequence *)allocator.allocate(sizeof(eagleye_msgs__msg__StatusStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = eagleye_msgs__msg__StatusStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
eagleye_msgs__msg__StatusStamped__Sequence__destroy(eagleye_msgs__msg__StatusStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    eagleye_msgs__msg__StatusStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
eagleye_msgs__msg__StatusStamped__Sequence__are_equal(const eagleye_msgs__msg__StatusStamped__Sequence * lhs, const eagleye_msgs__msg__StatusStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!eagleye_msgs__msg__StatusStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
eagleye_msgs__msg__StatusStamped__Sequence__copy(
  const eagleye_msgs__msg__StatusStamped__Sequence * input,
  eagleye_msgs__msg__StatusStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(eagleye_msgs__msg__StatusStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    eagleye_msgs__msg__StatusStamped * data =
      (eagleye_msgs__msg__StatusStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!eagleye_msgs__msg__StatusStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          eagleye_msgs__msg__StatusStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!eagleye_msgs__msg__StatusStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
