// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/RadarTracks.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/radar_tracks__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `tracks`
#include "morai_msgs/msg/detail/radar_track__functions.h"

bool
morai_msgs__msg__RadarTracks__init(morai_msgs__msg__RadarTracks * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    morai_msgs__msg__RadarTracks__fini(msg);
    return false;
  }
  // tracks
  if (!morai_msgs__msg__RadarTrack__Sequence__init(&msg->tracks, 0)) {
    morai_msgs__msg__RadarTracks__fini(msg);
    return false;
  }
  return true;
}

void
morai_msgs__msg__RadarTracks__fini(morai_msgs__msg__RadarTracks * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tracks
  morai_msgs__msg__RadarTrack__Sequence__fini(&msg->tracks);
}

bool
morai_msgs__msg__RadarTracks__are_equal(const morai_msgs__msg__RadarTracks * lhs, const morai_msgs__msg__RadarTracks * rhs)
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
  // tracks
  if (!morai_msgs__msg__RadarTrack__Sequence__are_equal(
      &(lhs->tracks), &(rhs->tracks)))
  {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__RadarTracks__copy(
  const morai_msgs__msg__RadarTracks * input,
  morai_msgs__msg__RadarTracks * output)
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
  // tracks
  if (!morai_msgs__msg__RadarTrack__Sequence__copy(
      &(input->tracks), &(output->tracks)))
  {
    return false;
  }
  return true;
}

morai_msgs__msg__RadarTracks *
morai_msgs__msg__RadarTracks__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__RadarTracks * msg = (morai_msgs__msg__RadarTracks *)allocator.allocate(sizeof(morai_msgs__msg__RadarTracks), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__RadarTracks));
  bool success = morai_msgs__msg__RadarTracks__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__RadarTracks__destroy(morai_msgs__msg__RadarTracks * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    morai_msgs__msg__RadarTracks__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
morai_msgs__msg__RadarTracks__Sequence__init(morai_msgs__msg__RadarTracks__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__RadarTracks * data = NULL;

  if (size) {
    data = (morai_msgs__msg__RadarTracks *)allocator.zero_allocate(size, sizeof(morai_msgs__msg__RadarTracks), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__RadarTracks__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__RadarTracks__fini(&data[i - 1]);
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
morai_msgs__msg__RadarTracks__Sequence__fini(morai_msgs__msg__RadarTracks__Sequence * array)
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
      morai_msgs__msg__RadarTracks__fini(&array->data[i]);
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

morai_msgs__msg__RadarTracks__Sequence *
morai_msgs__msg__RadarTracks__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__RadarTracks__Sequence * array = (morai_msgs__msg__RadarTracks__Sequence *)allocator.allocate(sizeof(morai_msgs__msg__RadarTracks__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__RadarTracks__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__RadarTracks__Sequence__destroy(morai_msgs__msg__RadarTracks__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    morai_msgs__msg__RadarTracks__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
morai_msgs__msg__RadarTracks__Sequence__are_equal(const morai_msgs__msg__RadarTracks__Sequence * lhs, const morai_msgs__msg__RadarTracks__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__RadarTracks__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__RadarTracks__Sequence__copy(
  const morai_msgs__msg__RadarTracks__Sequence * input,
  morai_msgs__msg__RadarTracks__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__RadarTracks);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    morai_msgs__msg__RadarTracks * data =
      (morai_msgs__msg__RadarTracks *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__RadarTracks__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__RadarTracks__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!morai_msgs__msg__RadarTracks__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
