// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_vehicle_msgs:msg/ShiftStamped.idl
// generated code does not contain a copyright notice
#include "tier4_vehicle_msgs/msg/detail/shift_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `shift`
#include "tier4_vehicle_msgs/msg/detail/shift__functions.h"

bool
tier4_vehicle_msgs__msg__ShiftStamped__init(tier4_vehicle_msgs__msg__ShiftStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tier4_vehicle_msgs__msg__ShiftStamped__fini(msg);
    return false;
  }
  // shift
  if (!tier4_vehicle_msgs__msg__Shift__init(&msg->shift)) {
    tier4_vehicle_msgs__msg__ShiftStamped__fini(msg);
    return false;
  }
  return true;
}

void
tier4_vehicle_msgs__msg__ShiftStamped__fini(tier4_vehicle_msgs__msg__ShiftStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // shift
  tier4_vehicle_msgs__msg__Shift__fini(&msg->shift);
}

bool
tier4_vehicle_msgs__msg__ShiftStamped__are_equal(const tier4_vehicle_msgs__msg__ShiftStamped * lhs, const tier4_vehicle_msgs__msg__ShiftStamped * rhs)
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
  // shift
  if (!tier4_vehicle_msgs__msg__Shift__are_equal(
      &(lhs->shift), &(rhs->shift)))
  {
    return false;
  }
  return true;
}

bool
tier4_vehicle_msgs__msg__ShiftStamped__copy(
  const tier4_vehicle_msgs__msg__ShiftStamped * input,
  tier4_vehicle_msgs__msg__ShiftStamped * output)
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
  // shift
  if (!tier4_vehicle_msgs__msg__Shift__copy(
      &(input->shift), &(output->shift)))
  {
    return false;
  }
  return true;
}

tier4_vehicle_msgs__msg__ShiftStamped *
tier4_vehicle_msgs__msg__ShiftStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_vehicle_msgs__msg__ShiftStamped * msg = (tier4_vehicle_msgs__msg__ShiftStamped *)allocator.allocate(sizeof(tier4_vehicle_msgs__msg__ShiftStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_vehicle_msgs__msg__ShiftStamped));
  bool success = tier4_vehicle_msgs__msg__ShiftStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_vehicle_msgs__msg__ShiftStamped__destroy(tier4_vehicle_msgs__msg__ShiftStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_vehicle_msgs__msg__ShiftStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_vehicle_msgs__msg__ShiftStamped__Sequence__init(tier4_vehicle_msgs__msg__ShiftStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_vehicle_msgs__msg__ShiftStamped * data = NULL;

  if (size) {
    data = (tier4_vehicle_msgs__msg__ShiftStamped *)allocator.zero_allocate(size, sizeof(tier4_vehicle_msgs__msg__ShiftStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_vehicle_msgs__msg__ShiftStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_vehicle_msgs__msg__ShiftStamped__fini(&data[i - 1]);
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
tier4_vehicle_msgs__msg__ShiftStamped__Sequence__fini(tier4_vehicle_msgs__msg__ShiftStamped__Sequence * array)
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
      tier4_vehicle_msgs__msg__ShiftStamped__fini(&array->data[i]);
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

tier4_vehicle_msgs__msg__ShiftStamped__Sequence *
tier4_vehicle_msgs__msg__ShiftStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_vehicle_msgs__msg__ShiftStamped__Sequence * array = (tier4_vehicle_msgs__msg__ShiftStamped__Sequence *)allocator.allocate(sizeof(tier4_vehicle_msgs__msg__ShiftStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_vehicle_msgs__msg__ShiftStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_vehicle_msgs__msg__ShiftStamped__Sequence__destroy(tier4_vehicle_msgs__msg__ShiftStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_vehicle_msgs__msg__ShiftStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_vehicle_msgs__msg__ShiftStamped__Sequence__are_equal(const tier4_vehicle_msgs__msg__ShiftStamped__Sequence * lhs, const tier4_vehicle_msgs__msg__ShiftStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_vehicle_msgs__msg__ShiftStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_vehicle_msgs__msg__ShiftStamped__Sequence__copy(
  const tier4_vehicle_msgs__msg__ShiftStamped__Sequence * input,
  tier4_vehicle_msgs__msg__ShiftStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_vehicle_msgs__msg__ShiftStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_vehicle_msgs__msg__ShiftStamped * data =
      (tier4_vehicle_msgs__msg__ShiftStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_vehicle_msgs__msg__ShiftStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_vehicle_msgs__msg__ShiftStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_vehicle_msgs__msg__ShiftStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
