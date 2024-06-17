// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_planning_msgs:msg/PoseWithUuidStamped.idl
// generated code does not contain a copyright notice
#include "autoware_planning_msgs/msg/detail/pose_with_uuid_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `uuid`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
autoware_planning_msgs__msg__PoseWithUuidStamped__init(autoware_planning_msgs__msg__PoseWithUuidStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_planning_msgs__msg__PoseWithUuidStamped__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    autoware_planning_msgs__msg__PoseWithUuidStamped__fini(msg);
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__init(&msg->uuid)) {
    autoware_planning_msgs__msg__PoseWithUuidStamped__fini(msg);
    return false;
  }
  return true;
}

void
autoware_planning_msgs__msg__PoseWithUuidStamped__fini(autoware_planning_msgs__msg__PoseWithUuidStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // uuid
  unique_identifier_msgs__msg__UUID__fini(&msg->uuid);
}

bool
autoware_planning_msgs__msg__PoseWithUuidStamped__are_equal(const autoware_planning_msgs__msg__PoseWithUuidStamped * lhs, const autoware_planning_msgs__msg__PoseWithUuidStamped * rhs)
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
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->uuid), &(rhs->uuid)))
  {
    return false;
  }
  return true;
}

bool
autoware_planning_msgs__msg__PoseWithUuidStamped__copy(
  const autoware_planning_msgs__msg__PoseWithUuidStamped * input,
  autoware_planning_msgs__msg__PoseWithUuidStamped * output)
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
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->uuid), &(output->uuid)))
  {
    return false;
  }
  return true;
}

autoware_planning_msgs__msg__PoseWithUuidStamped *
autoware_planning_msgs__msg__PoseWithUuidStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_planning_msgs__msg__PoseWithUuidStamped * msg = (autoware_planning_msgs__msg__PoseWithUuidStamped *)allocator.allocate(sizeof(autoware_planning_msgs__msg__PoseWithUuidStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_planning_msgs__msg__PoseWithUuidStamped));
  bool success = autoware_planning_msgs__msg__PoseWithUuidStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_planning_msgs__msg__PoseWithUuidStamped__destroy(autoware_planning_msgs__msg__PoseWithUuidStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_planning_msgs__msg__PoseWithUuidStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_planning_msgs__msg__PoseWithUuidStamped__Sequence__init(autoware_planning_msgs__msg__PoseWithUuidStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_planning_msgs__msg__PoseWithUuidStamped * data = NULL;

  if (size) {
    data = (autoware_planning_msgs__msg__PoseWithUuidStamped *)allocator.zero_allocate(size, sizeof(autoware_planning_msgs__msg__PoseWithUuidStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_planning_msgs__msg__PoseWithUuidStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_planning_msgs__msg__PoseWithUuidStamped__fini(&data[i - 1]);
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
autoware_planning_msgs__msg__PoseWithUuidStamped__Sequence__fini(autoware_planning_msgs__msg__PoseWithUuidStamped__Sequence * array)
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
      autoware_planning_msgs__msg__PoseWithUuidStamped__fini(&array->data[i]);
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

autoware_planning_msgs__msg__PoseWithUuidStamped__Sequence *
autoware_planning_msgs__msg__PoseWithUuidStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_planning_msgs__msg__PoseWithUuidStamped__Sequence * array = (autoware_planning_msgs__msg__PoseWithUuidStamped__Sequence *)allocator.allocate(sizeof(autoware_planning_msgs__msg__PoseWithUuidStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_planning_msgs__msg__PoseWithUuidStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_planning_msgs__msg__PoseWithUuidStamped__Sequence__destroy(autoware_planning_msgs__msg__PoseWithUuidStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_planning_msgs__msg__PoseWithUuidStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_planning_msgs__msg__PoseWithUuidStamped__Sequence__are_equal(const autoware_planning_msgs__msg__PoseWithUuidStamped__Sequence * lhs, const autoware_planning_msgs__msg__PoseWithUuidStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_planning_msgs__msg__PoseWithUuidStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_planning_msgs__msg__PoseWithUuidStamped__Sequence__copy(
  const autoware_planning_msgs__msg__PoseWithUuidStamped__Sequence * input,
  autoware_planning_msgs__msg__PoseWithUuidStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_planning_msgs__msg__PoseWithUuidStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_planning_msgs__msg__PoseWithUuidStamped * data =
      (autoware_planning_msgs__msg__PoseWithUuidStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_planning_msgs__msg__PoseWithUuidStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_planning_msgs__msg__PoseWithUuidStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_planning_msgs__msg__PoseWithUuidStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
