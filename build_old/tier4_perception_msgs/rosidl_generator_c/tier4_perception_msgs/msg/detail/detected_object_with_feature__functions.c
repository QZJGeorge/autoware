// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_perception_msgs:msg/DetectedObjectWithFeature.idl
// generated code does not contain a copyright notice
#include "tier4_perception_msgs/msg/detail/detected_object_with_feature__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object`
#include "autoware_auto_perception_msgs/msg/detail/detected_object__functions.h"
// Member `feature`
#include "tier4_perception_msgs/msg/detail/feature__functions.h"

bool
tier4_perception_msgs__msg__DetectedObjectWithFeature__init(tier4_perception_msgs__msg__DetectedObjectWithFeature * msg)
{
  if (!msg) {
    return false;
  }
  // object
  if (!autoware_auto_perception_msgs__msg__DetectedObject__init(&msg->object)) {
    tier4_perception_msgs__msg__DetectedObjectWithFeature__fini(msg);
    return false;
  }
  // feature
  if (!tier4_perception_msgs__msg__Feature__init(&msg->feature)) {
    tier4_perception_msgs__msg__DetectedObjectWithFeature__fini(msg);
    return false;
  }
  return true;
}

void
tier4_perception_msgs__msg__DetectedObjectWithFeature__fini(tier4_perception_msgs__msg__DetectedObjectWithFeature * msg)
{
  if (!msg) {
    return;
  }
  // object
  autoware_auto_perception_msgs__msg__DetectedObject__fini(&msg->object);
  // feature
  tier4_perception_msgs__msg__Feature__fini(&msg->feature);
}

bool
tier4_perception_msgs__msg__DetectedObjectWithFeature__are_equal(const tier4_perception_msgs__msg__DetectedObjectWithFeature * lhs, const tier4_perception_msgs__msg__DetectedObjectWithFeature * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object
  if (!autoware_auto_perception_msgs__msg__DetectedObject__are_equal(
      &(lhs->object), &(rhs->object)))
  {
    return false;
  }
  // feature
  if (!tier4_perception_msgs__msg__Feature__are_equal(
      &(lhs->feature), &(rhs->feature)))
  {
    return false;
  }
  return true;
}

bool
tier4_perception_msgs__msg__DetectedObjectWithFeature__copy(
  const tier4_perception_msgs__msg__DetectedObjectWithFeature * input,
  tier4_perception_msgs__msg__DetectedObjectWithFeature * output)
{
  if (!input || !output) {
    return false;
  }
  // object
  if (!autoware_auto_perception_msgs__msg__DetectedObject__copy(
      &(input->object), &(output->object)))
  {
    return false;
  }
  // feature
  if (!tier4_perception_msgs__msg__Feature__copy(
      &(input->feature), &(output->feature)))
  {
    return false;
  }
  return true;
}

tier4_perception_msgs__msg__DetectedObjectWithFeature *
tier4_perception_msgs__msg__DetectedObjectWithFeature__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_perception_msgs__msg__DetectedObjectWithFeature * msg = (tier4_perception_msgs__msg__DetectedObjectWithFeature *)allocator.allocate(sizeof(tier4_perception_msgs__msg__DetectedObjectWithFeature), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_perception_msgs__msg__DetectedObjectWithFeature));
  bool success = tier4_perception_msgs__msg__DetectedObjectWithFeature__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_perception_msgs__msg__DetectedObjectWithFeature__destroy(tier4_perception_msgs__msg__DetectedObjectWithFeature * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_perception_msgs__msg__DetectedObjectWithFeature__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence__init(tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_perception_msgs__msg__DetectedObjectWithFeature * data = NULL;

  if (size) {
    data = (tier4_perception_msgs__msg__DetectedObjectWithFeature *)allocator.zero_allocate(size, sizeof(tier4_perception_msgs__msg__DetectedObjectWithFeature), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_perception_msgs__msg__DetectedObjectWithFeature__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_perception_msgs__msg__DetectedObjectWithFeature__fini(&data[i - 1]);
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
tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence__fini(tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence * array)
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
      tier4_perception_msgs__msg__DetectedObjectWithFeature__fini(&array->data[i]);
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

tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence *
tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence * array = (tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence *)allocator.allocate(sizeof(tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence__destroy(tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence__are_equal(const tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence * lhs, const tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_perception_msgs__msg__DetectedObjectWithFeature__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence__copy(
  const tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence * input,
  tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_perception_msgs__msg__DetectedObjectWithFeature);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_perception_msgs__msg__DetectedObjectWithFeature * data =
      (tier4_perception_msgs__msg__DetectedObjectWithFeature *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_perception_msgs__msg__DetectedObjectWithFeature__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_perception_msgs__msg__DetectedObjectWithFeature__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_perception_msgs__msg__DetectedObjectWithFeature__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
