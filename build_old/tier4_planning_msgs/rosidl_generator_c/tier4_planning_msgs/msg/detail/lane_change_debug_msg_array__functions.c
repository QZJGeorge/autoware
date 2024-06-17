// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_planning_msgs:msg/LaneChangeDebugMsgArray.idl
// generated code does not contain a copyright notice
#include "tier4_planning_msgs/msg/detail/lane_change_debug_msg_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `lane_change_info`
#include "tier4_planning_msgs/msg/detail/lane_change_debug_msg__functions.h"

bool
tier4_planning_msgs__msg__LaneChangeDebugMsgArray__init(tier4_planning_msgs__msg__LaneChangeDebugMsgArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tier4_planning_msgs__msg__LaneChangeDebugMsgArray__fini(msg);
    return false;
  }
  // lane_change_info
  if (!tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence__init(&msg->lane_change_info, 0)) {
    tier4_planning_msgs__msg__LaneChangeDebugMsgArray__fini(msg);
    return false;
  }
  return true;
}

void
tier4_planning_msgs__msg__LaneChangeDebugMsgArray__fini(tier4_planning_msgs__msg__LaneChangeDebugMsgArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // lane_change_info
  tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence__fini(&msg->lane_change_info);
}

bool
tier4_planning_msgs__msg__LaneChangeDebugMsgArray__are_equal(const tier4_planning_msgs__msg__LaneChangeDebugMsgArray * lhs, const tier4_planning_msgs__msg__LaneChangeDebugMsgArray * rhs)
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
  // lane_change_info
  if (!tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence__are_equal(
      &(lhs->lane_change_info), &(rhs->lane_change_info)))
  {
    return false;
  }
  return true;
}

bool
tier4_planning_msgs__msg__LaneChangeDebugMsgArray__copy(
  const tier4_planning_msgs__msg__LaneChangeDebugMsgArray * input,
  tier4_planning_msgs__msg__LaneChangeDebugMsgArray * output)
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
  // lane_change_info
  if (!tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence__copy(
      &(input->lane_change_info), &(output->lane_change_info)))
  {
    return false;
  }
  return true;
}

tier4_planning_msgs__msg__LaneChangeDebugMsgArray *
tier4_planning_msgs__msg__LaneChangeDebugMsgArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_planning_msgs__msg__LaneChangeDebugMsgArray * msg = (tier4_planning_msgs__msg__LaneChangeDebugMsgArray *)allocator.allocate(sizeof(tier4_planning_msgs__msg__LaneChangeDebugMsgArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_planning_msgs__msg__LaneChangeDebugMsgArray));
  bool success = tier4_planning_msgs__msg__LaneChangeDebugMsgArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_planning_msgs__msg__LaneChangeDebugMsgArray__destroy(tier4_planning_msgs__msg__LaneChangeDebugMsgArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_planning_msgs__msg__LaneChangeDebugMsgArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_planning_msgs__msg__LaneChangeDebugMsgArray__Sequence__init(tier4_planning_msgs__msg__LaneChangeDebugMsgArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_planning_msgs__msg__LaneChangeDebugMsgArray * data = NULL;

  if (size) {
    data = (tier4_planning_msgs__msg__LaneChangeDebugMsgArray *)allocator.zero_allocate(size, sizeof(tier4_planning_msgs__msg__LaneChangeDebugMsgArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_planning_msgs__msg__LaneChangeDebugMsgArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_planning_msgs__msg__LaneChangeDebugMsgArray__fini(&data[i - 1]);
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
tier4_planning_msgs__msg__LaneChangeDebugMsgArray__Sequence__fini(tier4_planning_msgs__msg__LaneChangeDebugMsgArray__Sequence * array)
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
      tier4_planning_msgs__msg__LaneChangeDebugMsgArray__fini(&array->data[i]);
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

tier4_planning_msgs__msg__LaneChangeDebugMsgArray__Sequence *
tier4_planning_msgs__msg__LaneChangeDebugMsgArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_planning_msgs__msg__LaneChangeDebugMsgArray__Sequence * array = (tier4_planning_msgs__msg__LaneChangeDebugMsgArray__Sequence *)allocator.allocate(sizeof(tier4_planning_msgs__msg__LaneChangeDebugMsgArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_planning_msgs__msg__LaneChangeDebugMsgArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_planning_msgs__msg__LaneChangeDebugMsgArray__Sequence__destroy(tier4_planning_msgs__msg__LaneChangeDebugMsgArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_planning_msgs__msg__LaneChangeDebugMsgArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_planning_msgs__msg__LaneChangeDebugMsgArray__Sequence__are_equal(const tier4_planning_msgs__msg__LaneChangeDebugMsgArray__Sequence * lhs, const tier4_planning_msgs__msg__LaneChangeDebugMsgArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_planning_msgs__msg__LaneChangeDebugMsgArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_planning_msgs__msg__LaneChangeDebugMsgArray__Sequence__copy(
  const tier4_planning_msgs__msg__LaneChangeDebugMsgArray__Sequence * input,
  tier4_planning_msgs__msg__LaneChangeDebugMsgArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_planning_msgs__msg__LaneChangeDebugMsgArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_planning_msgs__msg__LaneChangeDebugMsgArray * data =
      (tier4_planning_msgs__msg__LaneChangeDebugMsgArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_planning_msgs__msg__LaneChangeDebugMsgArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_planning_msgs__msg__LaneChangeDebugMsgArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_planning_msgs__msg__LaneChangeDebugMsgArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
