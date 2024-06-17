// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/MultiEgoSetting.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/multi_ego_setting__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ego_index`
// Member `global_position_x`
// Member `global_position_y`
// Member `global_position_z`
// Member `global_roll`
// Member `global_pitch`
// Member `global_yaw`
// Member `velocity`
// Member `gear`
// Member `ctrl_mode`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
morai_msgs__msg__MultiEgoSetting__init(morai_msgs__msg__MultiEgoSetting * msg)
{
  if (!msg) {
    return false;
  }
  // number_of_ego_vehicle
  // camera_index
  // ego_index
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->ego_index, 0)) {
    morai_msgs__msg__MultiEgoSetting__fini(msg);
    return false;
  }
  // global_position_x
  if (!rosidl_runtime_c__double__Sequence__init(&msg->global_position_x, 0)) {
    morai_msgs__msg__MultiEgoSetting__fini(msg);
    return false;
  }
  // global_position_y
  if (!rosidl_runtime_c__double__Sequence__init(&msg->global_position_y, 0)) {
    morai_msgs__msg__MultiEgoSetting__fini(msg);
    return false;
  }
  // global_position_z
  if (!rosidl_runtime_c__double__Sequence__init(&msg->global_position_z, 0)) {
    morai_msgs__msg__MultiEgoSetting__fini(msg);
    return false;
  }
  // global_roll
  if (!rosidl_runtime_c__float__Sequence__init(&msg->global_roll, 0)) {
    morai_msgs__msg__MultiEgoSetting__fini(msg);
    return false;
  }
  // global_pitch
  if (!rosidl_runtime_c__float__Sequence__init(&msg->global_pitch, 0)) {
    morai_msgs__msg__MultiEgoSetting__fini(msg);
    return false;
  }
  // global_yaw
  if (!rosidl_runtime_c__float__Sequence__init(&msg->global_yaw, 0)) {
    morai_msgs__msg__MultiEgoSetting__fini(msg);
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__float__Sequence__init(&msg->velocity, 0)) {
    morai_msgs__msg__MultiEgoSetting__fini(msg);
    return false;
  }
  // gear
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->gear, 0)) {
    morai_msgs__msg__MultiEgoSetting__fini(msg);
    return false;
  }
  // ctrl_mode
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->ctrl_mode, 0)) {
    morai_msgs__msg__MultiEgoSetting__fini(msg);
    return false;
  }
  return true;
}

void
morai_msgs__msg__MultiEgoSetting__fini(morai_msgs__msg__MultiEgoSetting * msg)
{
  if (!msg) {
    return;
  }
  // number_of_ego_vehicle
  // camera_index
  // ego_index
  rosidl_runtime_c__int32__Sequence__fini(&msg->ego_index);
  // global_position_x
  rosidl_runtime_c__double__Sequence__fini(&msg->global_position_x);
  // global_position_y
  rosidl_runtime_c__double__Sequence__fini(&msg->global_position_y);
  // global_position_z
  rosidl_runtime_c__double__Sequence__fini(&msg->global_position_z);
  // global_roll
  rosidl_runtime_c__float__Sequence__fini(&msg->global_roll);
  // global_pitch
  rosidl_runtime_c__float__Sequence__fini(&msg->global_pitch);
  // global_yaw
  rosidl_runtime_c__float__Sequence__fini(&msg->global_yaw);
  // velocity
  rosidl_runtime_c__float__Sequence__fini(&msg->velocity);
  // gear
  rosidl_runtime_c__int8__Sequence__fini(&msg->gear);
  // ctrl_mode
  rosidl_runtime_c__int8__Sequence__fini(&msg->ctrl_mode);
}

bool
morai_msgs__msg__MultiEgoSetting__are_equal(const morai_msgs__msg__MultiEgoSetting * lhs, const morai_msgs__msg__MultiEgoSetting * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // number_of_ego_vehicle
  if (lhs->number_of_ego_vehicle != rhs->number_of_ego_vehicle) {
    return false;
  }
  // camera_index
  if (lhs->camera_index != rhs->camera_index) {
    return false;
  }
  // ego_index
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->ego_index), &(rhs->ego_index)))
  {
    return false;
  }
  // global_position_x
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->global_position_x), &(rhs->global_position_x)))
  {
    return false;
  }
  // global_position_y
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->global_position_y), &(rhs->global_position_y)))
  {
    return false;
  }
  // global_position_z
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->global_position_z), &(rhs->global_position_z)))
  {
    return false;
  }
  // global_roll
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->global_roll), &(rhs->global_roll)))
  {
    return false;
  }
  // global_pitch
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->global_pitch), &(rhs->global_pitch)))
  {
    return false;
  }
  // global_yaw
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->global_yaw), &(rhs->global_yaw)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // gear
  if (!rosidl_runtime_c__int8__Sequence__are_equal(
      &(lhs->gear), &(rhs->gear)))
  {
    return false;
  }
  // ctrl_mode
  if (!rosidl_runtime_c__int8__Sequence__are_equal(
      &(lhs->ctrl_mode), &(rhs->ctrl_mode)))
  {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__MultiEgoSetting__copy(
  const morai_msgs__msg__MultiEgoSetting * input,
  morai_msgs__msg__MultiEgoSetting * output)
{
  if (!input || !output) {
    return false;
  }
  // number_of_ego_vehicle
  output->number_of_ego_vehicle = input->number_of_ego_vehicle;
  // camera_index
  output->camera_index = input->camera_index;
  // ego_index
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->ego_index), &(output->ego_index)))
  {
    return false;
  }
  // global_position_x
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->global_position_x), &(output->global_position_x)))
  {
    return false;
  }
  // global_position_y
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->global_position_y), &(output->global_position_y)))
  {
    return false;
  }
  // global_position_z
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->global_position_z), &(output->global_position_z)))
  {
    return false;
  }
  // global_roll
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->global_roll), &(output->global_roll)))
  {
    return false;
  }
  // global_pitch
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->global_pitch), &(output->global_pitch)))
  {
    return false;
  }
  // global_yaw
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->global_yaw), &(output->global_yaw)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // gear
  if (!rosidl_runtime_c__int8__Sequence__copy(
      &(input->gear), &(output->gear)))
  {
    return false;
  }
  // ctrl_mode
  if (!rosidl_runtime_c__int8__Sequence__copy(
      &(input->ctrl_mode), &(output->ctrl_mode)))
  {
    return false;
  }
  return true;
}

morai_msgs__msg__MultiEgoSetting *
morai_msgs__msg__MultiEgoSetting__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__MultiEgoSetting * msg = (morai_msgs__msg__MultiEgoSetting *)allocator.allocate(sizeof(morai_msgs__msg__MultiEgoSetting), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__MultiEgoSetting));
  bool success = morai_msgs__msg__MultiEgoSetting__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__MultiEgoSetting__destroy(morai_msgs__msg__MultiEgoSetting * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    morai_msgs__msg__MultiEgoSetting__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
morai_msgs__msg__MultiEgoSetting__Sequence__init(morai_msgs__msg__MultiEgoSetting__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__MultiEgoSetting * data = NULL;

  if (size) {
    data = (morai_msgs__msg__MultiEgoSetting *)allocator.zero_allocate(size, sizeof(morai_msgs__msg__MultiEgoSetting), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__MultiEgoSetting__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__MultiEgoSetting__fini(&data[i - 1]);
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
morai_msgs__msg__MultiEgoSetting__Sequence__fini(morai_msgs__msg__MultiEgoSetting__Sequence * array)
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
      morai_msgs__msg__MultiEgoSetting__fini(&array->data[i]);
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

morai_msgs__msg__MultiEgoSetting__Sequence *
morai_msgs__msg__MultiEgoSetting__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__MultiEgoSetting__Sequence * array = (morai_msgs__msg__MultiEgoSetting__Sequence *)allocator.allocate(sizeof(morai_msgs__msg__MultiEgoSetting__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__MultiEgoSetting__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__MultiEgoSetting__Sequence__destroy(morai_msgs__msg__MultiEgoSetting__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    morai_msgs__msg__MultiEgoSetting__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
morai_msgs__msg__MultiEgoSetting__Sequence__are_equal(const morai_msgs__msg__MultiEgoSetting__Sequence * lhs, const morai_msgs__msg__MultiEgoSetting__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__MultiEgoSetting__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__MultiEgoSetting__Sequence__copy(
  const morai_msgs__msg__MultiEgoSetting__Sequence * input,
  morai_msgs__msg__MultiEgoSetting__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__MultiEgoSetting);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    morai_msgs__msg__MultiEgoSetting * data =
      (morai_msgs__msg__MultiEgoSetting *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__MultiEgoSetting__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__MultiEgoSetting__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!morai_msgs__msg__MultiEgoSetting__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
