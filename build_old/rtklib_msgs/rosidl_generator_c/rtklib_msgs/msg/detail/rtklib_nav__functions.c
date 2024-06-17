// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtklib_msgs:msg/RtklibNav.idl
// generated code does not contain a copyright notice
#include "rtklib_msgs/msg/detail/rtklib_nav__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ecef_pos`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `ecef_vel`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `status`
#include "sensor_msgs/msg/detail/nav_sat_fix__functions.h"

bool
rtklib_msgs__msg__RtklibNav__init(rtklib_msgs__msg__RtklibNav * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rtklib_msgs__msg__RtklibNav__fini(msg);
    return false;
  }
  // tow
  // ecef_pos
  if (!geometry_msgs__msg__Point__init(&msg->ecef_pos)) {
    rtklib_msgs__msg__RtklibNav__fini(msg);
    return false;
  }
  // ecef_vel
  if (!geometry_msgs__msg__Vector3__init(&msg->ecef_vel)) {
    rtklib_msgs__msg__RtklibNav__fini(msg);
    return false;
  }
  // status
  if (!sensor_msgs__msg__NavSatFix__init(&msg->status)) {
    rtklib_msgs__msg__RtklibNav__fini(msg);
    return false;
  }
  return true;
}

void
rtklib_msgs__msg__RtklibNav__fini(rtklib_msgs__msg__RtklibNav * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tow
  // ecef_pos
  geometry_msgs__msg__Point__fini(&msg->ecef_pos);
  // ecef_vel
  geometry_msgs__msg__Vector3__fini(&msg->ecef_vel);
  // status
  sensor_msgs__msg__NavSatFix__fini(&msg->status);
}

bool
rtklib_msgs__msg__RtklibNav__are_equal(const rtklib_msgs__msg__RtklibNav * lhs, const rtklib_msgs__msg__RtklibNav * rhs)
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
  // tow
  if (lhs->tow != rhs->tow) {
    return false;
  }
  // ecef_pos
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->ecef_pos), &(rhs->ecef_pos)))
  {
    return false;
  }
  // ecef_vel
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->ecef_vel), &(rhs->ecef_vel)))
  {
    return false;
  }
  // status
  if (!sensor_msgs__msg__NavSatFix__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
rtklib_msgs__msg__RtklibNav__copy(
  const rtklib_msgs__msg__RtklibNav * input,
  rtklib_msgs__msg__RtklibNav * output)
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
  // tow
  output->tow = input->tow;
  // ecef_pos
  if (!geometry_msgs__msg__Point__copy(
      &(input->ecef_pos), &(output->ecef_pos)))
  {
    return false;
  }
  // ecef_vel
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->ecef_vel), &(output->ecef_vel)))
  {
    return false;
  }
  // status
  if (!sensor_msgs__msg__NavSatFix__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

rtklib_msgs__msg__RtklibNav *
rtklib_msgs__msg__RtklibNav__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtklib_msgs__msg__RtklibNav * msg = (rtklib_msgs__msg__RtklibNav *)allocator.allocate(sizeof(rtklib_msgs__msg__RtklibNav), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtklib_msgs__msg__RtklibNav));
  bool success = rtklib_msgs__msg__RtklibNav__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtklib_msgs__msg__RtklibNav__destroy(rtklib_msgs__msg__RtklibNav * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtklib_msgs__msg__RtklibNav__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtklib_msgs__msg__RtklibNav__Sequence__init(rtklib_msgs__msg__RtklibNav__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtklib_msgs__msg__RtklibNav * data = NULL;

  if (size) {
    data = (rtklib_msgs__msg__RtklibNav *)allocator.zero_allocate(size, sizeof(rtklib_msgs__msg__RtklibNav), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtklib_msgs__msg__RtklibNav__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtklib_msgs__msg__RtklibNav__fini(&data[i - 1]);
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
rtklib_msgs__msg__RtklibNav__Sequence__fini(rtklib_msgs__msg__RtklibNav__Sequence * array)
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
      rtklib_msgs__msg__RtklibNav__fini(&array->data[i]);
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

rtklib_msgs__msg__RtklibNav__Sequence *
rtklib_msgs__msg__RtklibNav__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtklib_msgs__msg__RtklibNav__Sequence * array = (rtklib_msgs__msg__RtklibNav__Sequence *)allocator.allocate(sizeof(rtklib_msgs__msg__RtklibNav__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtklib_msgs__msg__RtklibNav__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtklib_msgs__msg__RtklibNav__Sequence__destroy(rtklib_msgs__msg__RtklibNav__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtklib_msgs__msg__RtklibNav__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtklib_msgs__msg__RtklibNav__Sequence__are_equal(const rtklib_msgs__msg__RtklibNav__Sequence * lhs, const rtklib_msgs__msg__RtklibNav__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtklib_msgs__msg__RtklibNav__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtklib_msgs__msg__RtklibNav__Sequence__copy(
  const rtklib_msgs__msg__RtklibNav__Sequence * input,
  rtklib_msgs__msg__RtklibNav__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtklib_msgs__msg__RtklibNav);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtklib_msgs__msg__RtklibNav * data =
      (rtklib_msgs__msg__RtklibNav *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtklib_msgs__msg__RtklibNav__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtklib_msgs__msg__RtklibNav__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtklib_msgs__msg__RtklibNav__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
