// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/SensorPosControl.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/sensor_pos_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sensor_index`
// Member `pose_x`
// Member `pose_y`
// Member `pose_z`
// Member `roll`
// Member `pitch`
// Member `yaw`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
morai_msgs__msg__SensorPosControl__init(morai_msgs__msg__SensorPosControl * msg)
{
  if (!msg) {
    return false;
  }
  // sensor_index
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->sensor_index, 0)) {
    morai_msgs__msg__SensorPosControl__fini(msg);
    return false;
  }
  // pose_x
  if (!rosidl_runtime_c__float__Sequence__init(&msg->pose_x, 0)) {
    morai_msgs__msg__SensorPosControl__fini(msg);
    return false;
  }
  // pose_y
  if (!rosidl_runtime_c__float__Sequence__init(&msg->pose_y, 0)) {
    morai_msgs__msg__SensorPosControl__fini(msg);
    return false;
  }
  // pose_z
  if (!rosidl_runtime_c__float__Sequence__init(&msg->pose_z, 0)) {
    morai_msgs__msg__SensorPosControl__fini(msg);
    return false;
  }
  // roll
  if (!rosidl_runtime_c__float__Sequence__init(&msg->roll, 0)) {
    morai_msgs__msg__SensorPosControl__fini(msg);
    return false;
  }
  // pitch
  if (!rosidl_runtime_c__float__Sequence__init(&msg->pitch, 0)) {
    morai_msgs__msg__SensorPosControl__fini(msg);
    return false;
  }
  // yaw
  if (!rosidl_runtime_c__float__Sequence__init(&msg->yaw, 0)) {
    morai_msgs__msg__SensorPosControl__fini(msg);
    return false;
  }
  return true;
}

void
morai_msgs__msg__SensorPosControl__fini(morai_msgs__msg__SensorPosControl * msg)
{
  if (!msg) {
    return;
  }
  // sensor_index
  rosidl_runtime_c__int16__Sequence__fini(&msg->sensor_index);
  // pose_x
  rosidl_runtime_c__float__Sequence__fini(&msg->pose_x);
  // pose_y
  rosidl_runtime_c__float__Sequence__fini(&msg->pose_y);
  // pose_z
  rosidl_runtime_c__float__Sequence__fini(&msg->pose_z);
  // roll
  rosidl_runtime_c__float__Sequence__fini(&msg->roll);
  // pitch
  rosidl_runtime_c__float__Sequence__fini(&msg->pitch);
  // yaw
  rosidl_runtime_c__float__Sequence__fini(&msg->yaw);
}

bool
morai_msgs__msg__SensorPosControl__are_equal(const morai_msgs__msg__SensorPosControl * lhs, const morai_msgs__msg__SensorPosControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sensor_index
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->sensor_index), &(rhs->sensor_index)))
  {
    return false;
  }
  // pose_x
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->pose_x), &(rhs->pose_x)))
  {
    return false;
  }
  // pose_y
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->pose_y), &(rhs->pose_y)))
  {
    return false;
  }
  // pose_z
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->pose_z), &(rhs->pose_z)))
  {
    return false;
  }
  // roll
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->roll), &(rhs->roll)))
  {
    return false;
  }
  // pitch
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->pitch), &(rhs->pitch)))
  {
    return false;
  }
  // yaw
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->yaw), &(rhs->yaw)))
  {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__SensorPosControl__copy(
  const morai_msgs__msg__SensorPosControl * input,
  morai_msgs__msg__SensorPosControl * output)
{
  if (!input || !output) {
    return false;
  }
  // sensor_index
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->sensor_index), &(output->sensor_index)))
  {
    return false;
  }
  // pose_x
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->pose_x), &(output->pose_x)))
  {
    return false;
  }
  // pose_y
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->pose_y), &(output->pose_y)))
  {
    return false;
  }
  // pose_z
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->pose_z), &(output->pose_z)))
  {
    return false;
  }
  // roll
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->roll), &(output->roll)))
  {
    return false;
  }
  // pitch
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->pitch), &(output->pitch)))
  {
    return false;
  }
  // yaw
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->yaw), &(output->yaw)))
  {
    return false;
  }
  return true;
}

morai_msgs__msg__SensorPosControl *
morai_msgs__msg__SensorPosControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__SensorPosControl * msg = (morai_msgs__msg__SensorPosControl *)allocator.allocate(sizeof(morai_msgs__msg__SensorPosControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__SensorPosControl));
  bool success = morai_msgs__msg__SensorPosControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__SensorPosControl__destroy(morai_msgs__msg__SensorPosControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    morai_msgs__msg__SensorPosControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
morai_msgs__msg__SensorPosControl__Sequence__init(morai_msgs__msg__SensorPosControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__SensorPosControl * data = NULL;

  if (size) {
    data = (morai_msgs__msg__SensorPosControl *)allocator.zero_allocate(size, sizeof(morai_msgs__msg__SensorPosControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__SensorPosControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__SensorPosControl__fini(&data[i - 1]);
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
morai_msgs__msg__SensorPosControl__Sequence__fini(morai_msgs__msg__SensorPosControl__Sequence * array)
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
      morai_msgs__msg__SensorPosControl__fini(&array->data[i]);
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

morai_msgs__msg__SensorPosControl__Sequence *
morai_msgs__msg__SensorPosControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__SensorPosControl__Sequence * array = (morai_msgs__msg__SensorPosControl__Sequence *)allocator.allocate(sizeof(morai_msgs__msg__SensorPosControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__SensorPosControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__SensorPosControl__Sequence__destroy(morai_msgs__msg__SensorPosControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    morai_msgs__msg__SensorPosControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
morai_msgs__msg__SensorPosControl__Sequence__are_equal(const morai_msgs__msg__SensorPosControl__Sequence * lhs, const morai_msgs__msg__SensorPosControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__SensorPosControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__SensorPosControl__Sequence__copy(
  const morai_msgs__msg__SensorPosControl__Sequence * input,
  morai_msgs__msg__SensorPosControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__SensorPosControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    morai_msgs__msg__SensorPosControl * data =
      (morai_msgs__msg__SensorPosControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__SensorPosControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__SensorPosControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!morai_msgs__msg__SensorPosControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
