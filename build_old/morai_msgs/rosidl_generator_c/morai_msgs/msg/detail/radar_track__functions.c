// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/RadarTrack.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/radar_track__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `velocity`
// Member `acceleration`
// Member `size`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `position_covariance`
// Member `velocity_covariance`
// Member `acceleration_covariance`
// Member `size_covariance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
morai_msgs__msg__RadarTrack__init(morai_msgs__msg__RadarTrack * msg)
{
  if (!msg) {
    return false;
  }
  // uuid
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    morai_msgs__msg__RadarTrack__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    morai_msgs__msg__RadarTrack__fini(msg);
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->acceleration)) {
    morai_msgs__msg__RadarTrack__fini(msg);
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__init(&msg->size)) {
    morai_msgs__msg__RadarTrack__fini(msg);
    return false;
  }
  // classification
  // position_covariance
  if (!rosidl_runtime_c__float__Sequence__init(&msg->position_covariance, 0)) {
    morai_msgs__msg__RadarTrack__fini(msg);
    return false;
  }
  // velocity_covariance
  if (!rosidl_runtime_c__float__Sequence__init(&msg->velocity_covariance, 0)) {
    morai_msgs__msg__RadarTrack__fini(msg);
    return false;
  }
  // acceleration_covariance
  if (!rosidl_runtime_c__float__Sequence__init(&msg->acceleration_covariance, 0)) {
    morai_msgs__msg__RadarTrack__fini(msg);
    return false;
  }
  // size_covariance
  if (!rosidl_runtime_c__float__Sequence__init(&msg->size_covariance, 0)) {
    morai_msgs__msg__RadarTrack__fini(msg);
    return false;
  }
  // amplitude
  return true;
}

void
morai_msgs__msg__RadarTrack__fini(morai_msgs__msg__RadarTrack * msg)
{
  if (!msg) {
    return;
  }
  // uuid
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // acceleration
  geometry_msgs__msg__Vector3__fini(&msg->acceleration);
  // size
  geometry_msgs__msg__Vector3__fini(&msg->size);
  // classification
  // position_covariance
  rosidl_runtime_c__float__Sequence__fini(&msg->position_covariance);
  // velocity_covariance
  rosidl_runtime_c__float__Sequence__fini(&msg->velocity_covariance);
  // acceleration_covariance
  rosidl_runtime_c__float__Sequence__fini(&msg->acceleration_covariance);
  // size_covariance
  rosidl_runtime_c__float__Sequence__fini(&msg->size_covariance);
  // amplitude
}

bool
morai_msgs__msg__RadarTrack__are_equal(const morai_msgs__msg__RadarTrack * lhs, const morai_msgs__msg__RadarTrack * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // uuid
  if (lhs->uuid != rhs->uuid) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  // classification
  if (lhs->classification != rhs->classification) {
    return false;
  }
  // position_covariance
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->position_covariance), &(rhs->position_covariance)))
  {
    return false;
  }
  // velocity_covariance
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->velocity_covariance), &(rhs->velocity_covariance)))
  {
    return false;
  }
  // acceleration_covariance
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->acceleration_covariance), &(rhs->acceleration_covariance)))
  {
    return false;
  }
  // size_covariance
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->size_covariance), &(rhs->size_covariance)))
  {
    return false;
  }
  // amplitude
  if (lhs->amplitude != rhs->amplitude) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__RadarTrack__copy(
  const morai_msgs__msg__RadarTrack * input,
  morai_msgs__msg__RadarTrack * output)
{
  if (!input || !output) {
    return false;
  }
  // uuid
  output->uuid = input->uuid;
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  // classification
  output->classification = input->classification;
  // position_covariance
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->position_covariance), &(output->position_covariance)))
  {
    return false;
  }
  // velocity_covariance
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->velocity_covariance), &(output->velocity_covariance)))
  {
    return false;
  }
  // acceleration_covariance
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->acceleration_covariance), &(output->acceleration_covariance)))
  {
    return false;
  }
  // size_covariance
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->size_covariance), &(output->size_covariance)))
  {
    return false;
  }
  // amplitude
  output->amplitude = input->amplitude;
  return true;
}

morai_msgs__msg__RadarTrack *
morai_msgs__msg__RadarTrack__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__RadarTrack * msg = (morai_msgs__msg__RadarTrack *)allocator.allocate(sizeof(morai_msgs__msg__RadarTrack), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__RadarTrack));
  bool success = morai_msgs__msg__RadarTrack__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__RadarTrack__destroy(morai_msgs__msg__RadarTrack * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    morai_msgs__msg__RadarTrack__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
morai_msgs__msg__RadarTrack__Sequence__init(morai_msgs__msg__RadarTrack__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__RadarTrack * data = NULL;

  if (size) {
    data = (morai_msgs__msg__RadarTrack *)allocator.zero_allocate(size, sizeof(morai_msgs__msg__RadarTrack), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__RadarTrack__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__RadarTrack__fini(&data[i - 1]);
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
morai_msgs__msg__RadarTrack__Sequence__fini(morai_msgs__msg__RadarTrack__Sequence * array)
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
      morai_msgs__msg__RadarTrack__fini(&array->data[i]);
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

morai_msgs__msg__RadarTrack__Sequence *
morai_msgs__msg__RadarTrack__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__RadarTrack__Sequence * array = (morai_msgs__msg__RadarTrack__Sequence *)allocator.allocate(sizeof(morai_msgs__msg__RadarTrack__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__RadarTrack__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__RadarTrack__Sequence__destroy(morai_msgs__msg__RadarTrack__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    morai_msgs__msg__RadarTrack__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
morai_msgs__msg__RadarTrack__Sequence__are_equal(const morai_msgs__msg__RadarTrack__Sequence * lhs, const morai_msgs__msg__RadarTrack__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__RadarTrack__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__RadarTrack__Sequence__copy(
  const morai_msgs__msg__RadarTrack__Sequence * input,
  morai_msgs__msg__RadarTrack__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__RadarTrack);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    morai_msgs__msg__RadarTrack * data =
      (morai_msgs__msg__RadarTrack *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__RadarTrack__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__RadarTrack__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!morai_msgs__msg__RadarTrack__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
