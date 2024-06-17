// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_perception_msgs:msg/Feature.idl
// generated code does not contain a copyright notice
#include "tier4_perception_msgs/msg/detail/feature__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cluster`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"

bool
tier4_perception_msgs__msg__Feature__init(tier4_perception_msgs__msg__Feature * msg)
{
  if (!msg) {
    return false;
  }
  // cluster
  if (!sensor_msgs__msg__PointCloud2__init(&msg->cluster)) {
    tier4_perception_msgs__msg__Feature__fini(msg);
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->roi)) {
    tier4_perception_msgs__msg__Feature__fini(msg);
    return false;
  }
  return true;
}

void
tier4_perception_msgs__msg__Feature__fini(tier4_perception_msgs__msg__Feature * msg)
{
  if (!msg) {
    return;
  }
  // cluster
  sensor_msgs__msg__PointCloud2__fini(&msg->cluster);
  // roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->roi);
}

bool
tier4_perception_msgs__msg__Feature__are_equal(const tier4_perception_msgs__msg__Feature * lhs, const tier4_perception_msgs__msg__Feature * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cluster
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->cluster), &(rhs->cluster)))
  {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__are_equal(
      &(lhs->roi), &(rhs->roi)))
  {
    return false;
  }
  return true;
}

bool
tier4_perception_msgs__msg__Feature__copy(
  const tier4_perception_msgs__msg__Feature * input,
  tier4_perception_msgs__msg__Feature * output)
{
  if (!input || !output) {
    return false;
  }
  // cluster
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->cluster), &(output->cluster)))
  {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__copy(
      &(input->roi), &(output->roi)))
  {
    return false;
  }
  return true;
}

tier4_perception_msgs__msg__Feature *
tier4_perception_msgs__msg__Feature__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_perception_msgs__msg__Feature * msg = (tier4_perception_msgs__msg__Feature *)allocator.allocate(sizeof(tier4_perception_msgs__msg__Feature), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_perception_msgs__msg__Feature));
  bool success = tier4_perception_msgs__msg__Feature__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_perception_msgs__msg__Feature__destroy(tier4_perception_msgs__msg__Feature * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_perception_msgs__msg__Feature__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_perception_msgs__msg__Feature__Sequence__init(tier4_perception_msgs__msg__Feature__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_perception_msgs__msg__Feature * data = NULL;

  if (size) {
    data = (tier4_perception_msgs__msg__Feature *)allocator.zero_allocate(size, sizeof(tier4_perception_msgs__msg__Feature), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_perception_msgs__msg__Feature__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_perception_msgs__msg__Feature__fini(&data[i - 1]);
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
tier4_perception_msgs__msg__Feature__Sequence__fini(tier4_perception_msgs__msg__Feature__Sequence * array)
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
      tier4_perception_msgs__msg__Feature__fini(&array->data[i]);
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

tier4_perception_msgs__msg__Feature__Sequence *
tier4_perception_msgs__msg__Feature__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_perception_msgs__msg__Feature__Sequence * array = (tier4_perception_msgs__msg__Feature__Sequence *)allocator.allocate(sizeof(tier4_perception_msgs__msg__Feature__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_perception_msgs__msg__Feature__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_perception_msgs__msg__Feature__Sequence__destroy(tier4_perception_msgs__msg__Feature__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_perception_msgs__msg__Feature__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_perception_msgs__msg__Feature__Sequence__are_equal(const tier4_perception_msgs__msg__Feature__Sequence * lhs, const tier4_perception_msgs__msg__Feature__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_perception_msgs__msg__Feature__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_perception_msgs__msg__Feature__Sequence__copy(
  const tier4_perception_msgs__msg__Feature__Sequence * input,
  tier4_perception_msgs__msg__Feature__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_perception_msgs__msg__Feature);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_perception_msgs__msg__Feature * data =
      (tier4_perception_msgs__msg__Feature *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_perception_msgs__msg__Feature__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_perception_msgs__msg__Feature__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_perception_msgs__msg__Feature__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
