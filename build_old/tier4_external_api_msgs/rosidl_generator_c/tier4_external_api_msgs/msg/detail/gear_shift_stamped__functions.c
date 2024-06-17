// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_external_api_msgs:msg/GearShiftStamped.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/msg/detail/gear_shift_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `gear_shift`
#include "tier4_external_api_msgs/msg/detail/gear_shift__functions.h"

bool
tier4_external_api_msgs__msg__GearShiftStamped__init(tier4_external_api_msgs__msg__GearShiftStamped * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tier4_external_api_msgs__msg__GearShiftStamped__fini(msg);
    return false;
  }
  // gear_shift
  if (!tier4_external_api_msgs__msg__GearShift__init(&msg->gear_shift)) {
    tier4_external_api_msgs__msg__GearShiftStamped__fini(msg);
    return false;
  }
  return true;
}

void
tier4_external_api_msgs__msg__GearShiftStamped__fini(tier4_external_api_msgs__msg__GearShiftStamped * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // gear_shift
  tier4_external_api_msgs__msg__GearShift__fini(&msg->gear_shift);
}

bool
tier4_external_api_msgs__msg__GearShiftStamped__are_equal(const tier4_external_api_msgs__msg__GearShiftStamped * lhs, const tier4_external_api_msgs__msg__GearShiftStamped * rhs)
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
  // gear_shift
  if (!tier4_external_api_msgs__msg__GearShift__are_equal(
      &(lhs->gear_shift), &(rhs->gear_shift)))
  {
    return false;
  }
  return true;
}

bool
tier4_external_api_msgs__msg__GearShiftStamped__copy(
  const tier4_external_api_msgs__msg__GearShiftStamped * input,
  tier4_external_api_msgs__msg__GearShiftStamped * output)
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
  // gear_shift
  if (!tier4_external_api_msgs__msg__GearShift__copy(
      &(input->gear_shift), &(output->gear_shift)))
  {
    return false;
  }
  return true;
}

tier4_external_api_msgs__msg__GearShiftStamped *
tier4_external_api_msgs__msg__GearShiftStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_external_api_msgs__msg__GearShiftStamped * msg = (tier4_external_api_msgs__msg__GearShiftStamped *)allocator.allocate(sizeof(tier4_external_api_msgs__msg__GearShiftStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_external_api_msgs__msg__GearShiftStamped));
  bool success = tier4_external_api_msgs__msg__GearShiftStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_external_api_msgs__msg__GearShiftStamped__destroy(tier4_external_api_msgs__msg__GearShiftStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_external_api_msgs__msg__GearShiftStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_external_api_msgs__msg__GearShiftStamped__Sequence__init(tier4_external_api_msgs__msg__GearShiftStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_external_api_msgs__msg__GearShiftStamped * data = NULL;

  if (size) {
    data = (tier4_external_api_msgs__msg__GearShiftStamped *)allocator.zero_allocate(size, sizeof(tier4_external_api_msgs__msg__GearShiftStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_external_api_msgs__msg__GearShiftStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_external_api_msgs__msg__GearShiftStamped__fini(&data[i - 1]);
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
tier4_external_api_msgs__msg__GearShiftStamped__Sequence__fini(tier4_external_api_msgs__msg__GearShiftStamped__Sequence * array)
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
      tier4_external_api_msgs__msg__GearShiftStamped__fini(&array->data[i]);
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

tier4_external_api_msgs__msg__GearShiftStamped__Sequence *
tier4_external_api_msgs__msg__GearShiftStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_external_api_msgs__msg__GearShiftStamped__Sequence * array = (tier4_external_api_msgs__msg__GearShiftStamped__Sequence *)allocator.allocate(sizeof(tier4_external_api_msgs__msg__GearShiftStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_external_api_msgs__msg__GearShiftStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_external_api_msgs__msg__GearShiftStamped__Sequence__destroy(tier4_external_api_msgs__msg__GearShiftStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_external_api_msgs__msg__GearShiftStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_external_api_msgs__msg__GearShiftStamped__Sequence__are_equal(const tier4_external_api_msgs__msg__GearShiftStamped__Sequence * lhs, const tier4_external_api_msgs__msg__GearShiftStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_external_api_msgs__msg__GearShiftStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_external_api_msgs__msg__GearShiftStamped__Sequence__copy(
  const tier4_external_api_msgs__msg__GearShiftStamped__Sequence * input,
  tier4_external_api_msgs__msg__GearShiftStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_external_api_msgs__msg__GearShiftStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_external_api_msgs__msg__GearShiftStamped * data =
      (tier4_external_api_msgs__msg__GearShiftStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_external_api_msgs__msg__GearShiftStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_external_api_msgs__msg__GearShiftStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_external_api_msgs__msg__GearShiftStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
