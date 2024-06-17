// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_sensing_msgs:msg/GnssInsOrientationStamped.idl
// generated code does not contain a copyright notice
#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `orientation`
#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation__functions.h"

bool
autoware_sensing_msgs__msg__GnssInsOrientationStamped__init(autoware_sensing_msgs__msg__GnssInsOrientationStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_sensing_msgs__msg__GnssInsOrientationStamped__fini(msg);
    return false;
  }
  // orientation
  if (!autoware_sensing_msgs__msg__GnssInsOrientation__init(&msg->orientation)) {
    autoware_sensing_msgs__msg__GnssInsOrientationStamped__fini(msg);
    return false;
  }
  return true;
}

void
autoware_sensing_msgs__msg__GnssInsOrientationStamped__fini(autoware_sensing_msgs__msg__GnssInsOrientationStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // orientation
  autoware_sensing_msgs__msg__GnssInsOrientation__fini(&msg->orientation);
}

bool
autoware_sensing_msgs__msg__GnssInsOrientationStamped__are_equal(const autoware_sensing_msgs__msg__GnssInsOrientationStamped * lhs, const autoware_sensing_msgs__msg__GnssInsOrientationStamped * rhs)
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
  // orientation
  if (!autoware_sensing_msgs__msg__GnssInsOrientation__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  return true;
}

bool
autoware_sensing_msgs__msg__GnssInsOrientationStamped__copy(
  const autoware_sensing_msgs__msg__GnssInsOrientationStamped * input,
  autoware_sensing_msgs__msg__GnssInsOrientationStamped * output)
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
  // orientation
  if (!autoware_sensing_msgs__msg__GnssInsOrientation__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  return true;
}

autoware_sensing_msgs__msg__GnssInsOrientationStamped *
autoware_sensing_msgs__msg__GnssInsOrientationStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__GnssInsOrientationStamped * msg = (autoware_sensing_msgs__msg__GnssInsOrientationStamped *)allocator.allocate(sizeof(autoware_sensing_msgs__msg__GnssInsOrientationStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_sensing_msgs__msg__GnssInsOrientationStamped));
  bool success = autoware_sensing_msgs__msg__GnssInsOrientationStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_sensing_msgs__msg__GnssInsOrientationStamped__destroy(autoware_sensing_msgs__msg__GnssInsOrientationStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_sensing_msgs__msg__GnssInsOrientationStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__init(autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__GnssInsOrientationStamped * data = NULL;

  if (size) {
    data = (autoware_sensing_msgs__msg__GnssInsOrientationStamped *)allocator.zero_allocate(size, sizeof(autoware_sensing_msgs__msg__GnssInsOrientationStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_sensing_msgs__msg__GnssInsOrientationStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_sensing_msgs__msg__GnssInsOrientationStamped__fini(&data[i - 1]);
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
autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__fini(autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence * array)
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
      autoware_sensing_msgs__msg__GnssInsOrientationStamped__fini(&array->data[i]);
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

autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence *
autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence * array = (autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence *)allocator.allocate(sizeof(autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__destroy(autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__are_equal(const autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence * lhs, const autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_sensing_msgs__msg__GnssInsOrientationStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__copy(
  const autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence * input,
  autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_sensing_msgs__msg__GnssInsOrientationStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_sensing_msgs__msg__GnssInsOrientationStamped * data =
      (autoware_sensing_msgs__msg__GnssInsOrientationStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_sensing_msgs__msg__GnssInsOrientationStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_sensing_msgs__msg__GnssInsOrientationStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_sensing_msgs__msg__GnssInsOrientationStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
