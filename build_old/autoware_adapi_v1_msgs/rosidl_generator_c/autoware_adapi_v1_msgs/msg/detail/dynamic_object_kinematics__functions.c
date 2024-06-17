// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:msg/DynamicObjectKinematics.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/dynamic_object_kinematics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `accel`
#include "geometry_msgs/msg/detail/accel__functions.h"
// Member `predicted_paths`
#include "autoware_adapi_v1_msgs/msg/detail/dynamic_object_path__functions.h"

bool
autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__init(autoware_adapi_v1_msgs__msg__DynamicObjectKinematics * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__fini(msg);
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Accel__init(&msg->accel)) {
    autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__fini(msg);
    return false;
  }
  // predicted_paths
  if (!autoware_adapi_v1_msgs__msg__DynamicObjectPath__Sequence__init(&msg->predicted_paths, 0)) {
    autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__fini(msg);
    return false;
  }
  return true;
}

void
autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__fini(autoware_adapi_v1_msgs__msg__DynamicObjectKinematics * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // accel
  geometry_msgs__msg__Accel__fini(&msg->accel);
  // predicted_paths
  autoware_adapi_v1_msgs__msg__DynamicObjectPath__Sequence__fini(&msg->predicted_paths);
}

bool
autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__are_equal(const autoware_adapi_v1_msgs__msg__DynamicObjectKinematics * lhs, const autoware_adapi_v1_msgs__msg__DynamicObjectKinematics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Accel__are_equal(
      &(lhs->accel), &(rhs->accel)))
  {
    return false;
  }
  // predicted_paths
  if (!autoware_adapi_v1_msgs__msg__DynamicObjectPath__Sequence__are_equal(
      &(lhs->predicted_paths), &(rhs->predicted_paths)))
  {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__copy(
  const autoware_adapi_v1_msgs__msg__DynamicObjectKinematics * input,
  autoware_adapi_v1_msgs__msg__DynamicObjectKinematics * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Accel__copy(
      &(input->accel), &(output->accel)))
  {
    return false;
  }
  // predicted_paths
  if (!autoware_adapi_v1_msgs__msg__DynamicObjectPath__Sequence__copy(
      &(input->predicted_paths), &(output->predicted_paths)))
  {
    return false;
  }
  return true;
}

autoware_adapi_v1_msgs__msg__DynamicObjectKinematics *
autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__DynamicObjectKinematics * msg = (autoware_adapi_v1_msgs__msg__DynamicObjectKinematics *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__DynamicObjectKinematics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__msg__DynamicObjectKinematics));
  bool success = autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__destroy(autoware_adapi_v1_msgs__msg__DynamicObjectKinematics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence__init(autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__DynamicObjectKinematics * data = NULL;

  if (size) {
    data = (autoware_adapi_v1_msgs__msg__DynamicObjectKinematics *)allocator.zero_allocate(size, sizeof(autoware_adapi_v1_msgs__msg__DynamicObjectKinematics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence__fini(autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence * array)
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
      autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence *
autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence * array = (autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence__destroy(autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence__are_equal(const autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence * lhs, const autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence__copy(
  const autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence * input,
  autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__msg__DynamicObjectKinematics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_adapi_v1_msgs__msg__DynamicObjectKinematics * data =
      (autoware_adapi_v1_msgs__msg__DynamicObjectKinematics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
