// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_perception_msgs:msg/TrafficLightRoi.idl
// generated code does not contain a copyright notice
#include "tier4_perception_msgs/msg/detail/traffic_light_roi__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"

bool
tier4_perception_msgs__msg__TrafficLightRoi__init(tier4_perception_msgs__msg__TrafficLightRoi * msg)
{
  if (!msg) {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->roi)) {
    tier4_perception_msgs__msg__TrafficLightRoi__fini(msg);
    return false;
  }
  // traffic_light_id
  return true;
}

void
tier4_perception_msgs__msg__TrafficLightRoi__fini(tier4_perception_msgs__msg__TrafficLightRoi * msg)
{
  if (!msg) {
    return;
  }
  // roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->roi);
  // traffic_light_id
}

bool
tier4_perception_msgs__msg__TrafficLightRoi__are_equal(const tier4_perception_msgs__msg__TrafficLightRoi * lhs, const tier4_perception_msgs__msg__TrafficLightRoi * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__are_equal(
      &(lhs->roi), &(rhs->roi)))
  {
    return false;
  }
  // traffic_light_id
  if (lhs->traffic_light_id != rhs->traffic_light_id) {
    return false;
  }
  return true;
}

bool
tier4_perception_msgs__msg__TrafficLightRoi__copy(
  const tier4_perception_msgs__msg__TrafficLightRoi * input,
  tier4_perception_msgs__msg__TrafficLightRoi * output)
{
  if (!input || !output) {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__copy(
      &(input->roi), &(output->roi)))
  {
    return false;
  }
  // traffic_light_id
  output->traffic_light_id = input->traffic_light_id;
  return true;
}

tier4_perception_msgs__msg__TrafficLightRoi *
tier4_perception_msgs__msg__TrafficLightRoi__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_perception_msgs__msg__TrafficLightRoi * msg = (tier4_perception_msgs__msg__TrafficLightRoi *)allocator.allocate(sizeof(tier4_perception_msgs__msg__TrafficLightRoi), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_perception_msgs__msg__TrafficLightRoi));
  bool success = tier4_perception_msgs__msg__TrafficLightRoi__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_perception_msgs__msg__TrafficLightRoi__destroy(tier4_perception_msgs__msg__TrafficLightRoi * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_perception_msgs__msg__TrafficLightRoi__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_perception_msgs__msg__TrafficLightRoi__Sequence__init(tier4_perception_msgs__msg__TrafficLightRoi__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_perception_msgs__msg__TrafficLightRoi * data = NULL;

  if (size) {
    data = (tier4_perception_msgs__msg__TrafficLightRoi *)allocator.zero_allocate(size, sizeof(tier4_perception_msgs__msg__TrafficLightRoi), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_perception_msgs__msg__TrafficLightRoi__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_perception_msgs__msg__TrafficLightRoi__fini(&data[i - 1]);
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
tier4_perception_msgs__msg__TrafficLightRoi__Sequence__fini(tier4_perception_msgs__msg__TrafficLightRoi__Sequence * array)
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
      tier4_perception_msgs__msg__TrafficLightRoi__fini(&array->data[i]);
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

tier4_perception_msgs__msg__TrafficLightRoi__Sequence *
tier4_perception_msgs__msg__TrafficLightRoi__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_perception_msgs__msg__TrafficLightRoi__Sequence * array = (tier4_perception_msgs__msg__TrafficLightRoi__Sequence *)allocator.allocate(sizeof(tier4_perception_msgs__msg__TrafficLightRoi__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_perception_msgs__msg__TrafficLightRoi__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_perception_msgs__msg__TrafficLightRoi__Sequence__destroy(tier4_perception_msgs__msg__TrafficLightRoi__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_perception_msgs__msg__TrafficLightRoi__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_perception_msgs__msg__TrafficLightRoi__Sequence__are_equal(const tier4_perception_msgs__msg__TrafficLightRoi__Sequence * lhs, const tier4_perception_msgs__msg__TrafficLightRoi__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_perception_msgs__msg__TrafficLightRoi__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_perception_msgs__msg__TrafficLightRoi__Sequence__copy(
  const tier4_perception_msgs__msg__TrafficLightRoi__Sequence * input,
  tier4_perception_msgs__msg__TrafficLightRoi__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_perception_msgs__msg__TrafficLightRoi);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_perception_msgs__msg__TrafficLightRoi * data =
      (tier4_perception_msgs__msg__TrafficLightRoi *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_perception_msgs__msg__TrafficLightRoi__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_perception_msgs__msg__TrafficLightRoi__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_perception_msgs__msg__TrafficLightRoi__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
