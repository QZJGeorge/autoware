// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/RadarDetection.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/radar_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
morai_msgs__msg__RadarDetection__init(morai_msgs__msg__RadarDetection * msg)
{
  if (!msg) {
    return false;
  }
  // detection_id
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    morai_msgs__msg__RadarDetection__fini(msg);
    return false;
  }
  // azimuth
  // rangerate
  // amplitude
  return true;
}

void
morai_msgs__msg__RadarDetection__fini(morai_msgs__msg__RadarDetection * msg)
{
  if (!msg) {
    return;
  }
  // detection_id
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // azimuth
  // rangerate
  // amplitude
}

bool
morai_msgs__msg__RadarDetection__are_equal(const morai_msgs__msg__RadarDetection * lhs, const morai_msgs__msg__RadarDetection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // detection_id
  if (lhs->detection_id != rhs->detection_id) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // azimuth
  if (lhs->azimuth != rhs->azimuth) {
    return false;
  }
  // rangerate
  if (lhs->rangerate != rhs->rangerate) {
    return false;
  }
  // amplitude
  if (lhs->amplitude != rhs->amplitude) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__RadarDetection__copy(
  const morai_msgs__msg__RadarDetection * input,
  morai_msgs__msg__RadarDetection * output)
{
  if (!input || !output) {
    return false;
  }
  // detection_id
  output->detection_id = input->detection_id;
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // azimuth
  output->azimuth = input->azimuth;
  // rangerate
  output->rangerate = input->rangerate;
  // amplitude
  output->amplitude = input->amplitude;
  return true;
}

morai_msgs__msg__RadarDetection *
morai_msgs__msg__RadarDetection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__RadarDetection * msg = (morai_msgs__msg__RadarDetection *)allocator.allocate(sizeof(morai_msgs__msg__RadarDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__RadarDetection));
  bool success = morai_msgs__msg__RadarDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__RadarDetection__destroy(morai_msgs__msg__RadarDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    morai_msgs__msg__RadarDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
morai_msgs__msg__RadarDetection__Sequence__init(morai_msgs__msg__RadarDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__RadarDetection * data = NULL;

  if (size) {
    data = (morai_msgs__msg__RadarDetection *)allocator.zero_allocate(size, sizeof(morai_msgs__msg__RadarDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__RadarDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__RadarDetection__fini(&data[i - 1]);
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
morai_msgs__msg__RadarDetection__Sequence__fini(morai_msgs__msg__RadarDetection__Sequence * array)
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
      morai_msgs__msg__RadarDetection__fini(&array->data[i]);
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

morai_msgs__msg__RadarDetection__Sequence *
morai_msgs__msg__RadarDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__RadarDetection__Sequence * array = (morai_msgs__msg__RadarDetection__Sequence *)allocator.allocate(sizeof(morai_msgs__msg__RadarDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__RadarDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__RadarDetection__Sequence__destroy(morai_msgs__msg__RadarDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    morai_msgs__msg__RadarDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
morai_msgs__msg__RadarDetection__Sequence__are_equal(const morai_msgs__msg__RadarDetection__Sequence * lhs, const morai_msgs__msg__RadarDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__RadarDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__RadarDetection__Sequence__copy(
  const morai_msgs__msg__RadarDetection__Sequence * input,
  morai_msgs__msg__RadarDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__RadarDetection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    morai_msgs__msg__RadarDetection * data =
      (morai_msgs__msg__RadarDetection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__RadarDetection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__RadarDetection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!morai_msgs__msg__RadarDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
