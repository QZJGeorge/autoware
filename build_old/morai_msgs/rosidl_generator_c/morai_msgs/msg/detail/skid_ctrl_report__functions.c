// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/SkidCtrlReport.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/skid_ctrl_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `acceleration`
// Member `position`
// Member `velocity`
// Member `angular_velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `skid_model_report`
#include "morai_msgs/msg/detail/skid_model__functions.h"

bool
morai_msgs__msg__SkidCtrlReport__init(morai_msgs__msg__SkidCtrlReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    morai_msgs__msg__SkidCtrlReport__fini(msg);
    return false;
  }
  // ctrl_mode
  // acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->acceleration)) {
    morai_msgs__msg__SkidCtrlReport__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__init(&msg->position)) {
    morai_msgs__msg__SkidCtrlReport__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    morai_msgs__msg__SkidCtrlReport__fini(msg);
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_velocity)) {
    morai_msgs__msg__SkidCtrlReport__fini(msg);
    return false;
  }
  // heading
  // cmd_type
  // skid_model_report
  if (!morai_msgs__msg__SkidModel__init(&msg->skid_model_report)) {
    morai_msgs__msg__SkidCtrlReport__fini(msg);
    return false;
  }
  return true;
}

void
morai_msgs__msg__SkidCtrlReport__fini(morai_msgs__msg__SkidCtrlReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ctrl_mode
  // acceleration
  geometry_msgs__msg__Vector3__fini(&msg->acceleration);
  // position
  geometry_msgs__msg__Vector3__fini(&msg->position);
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // angular_velocity
  geometry_msgs__msg__Vector3__fini(&msg->angular_velocity);
  // heading
  // cmd_type
  // skid_model_report
  morai_msgs__msg__SkidModel__fini(&msg->skid_model_report);
}

bool
morai_msgs__msg__SkidCtrlReport__are_equal(const morai_msgs__msg__SkidCtrlReport * lhs, const morai_msgs__msg__SkidCtrlReport * rhs)
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
  // ctrl_mode
  if (lhs->ctrl_mode != rhs->ctrl_mode) {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__are_equal(
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
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->angular_velocity), &(rhs->angular_velocity)))
  {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // cmd_type
  if (lhs->cmd_type != rhs->cmd_type) {
    return false;
  }
  // skid_model_report
  if (!morai_msgs__msg__SkidModel__are_equal(
      &(lhs->skid_model_report), &(rhs->skid_model_report)))
  {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__SkidCtrlReport__copy(
  const morai_msgs__msg__SkidCtrlReport * input,
  morai_msgs__msg__SkidCtrlReport * output)
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
  // ctrl_mode
  output->ctrl_mode = input->ctrl_mode;
  // acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__copy(
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
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->angular_velocity), &(output->angular_velocity)))
  {
    return false;
  }
  // heading
  output->heading = input->heading;
  // cmd_type
  output->cmd_type = input->cmd_type;
  // skid_model_report
  if (!morai_msgs__msg__SkidModel__copy(
      &(input->skid_model_report), &(output->skid_model_report)))
  {
    return false;
  }
  return true;
}

morai_msgs__msg__SkidCtrlReport *
morai_msgs__msg__SkidCtrlReport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__SkidCtrlReport * msg = (morai_msgs__msg__SkidCtrlReport *)allocator.allocate(sizeof(morai_msgs__msg__SkidCtrlReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__SkidCtrlReport));
  bool success = morai_msgs__msg__SkidCtrlReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__SkidCtrlReport__destroy(morai_msgs__msg__SkidCtrlReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    morai_msgs__msg__SkidCtrlReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
morai_msgs__msg__SkidCtrlReport__Sequence__init(morai_msgs__msg__SkidCtrlReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__SkidCtrlReport * data = NULL;

  if (size) {
    data = (morai_msgs__msg__SkidCtrlReport *)allocator.zero_allocate(size, sizeof(morai_msgs__msg__SkidCtrlReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__SkidCtrlReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__SkidCtrlReport__fini(&data[i - 1]);
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
morai_msgs__msg__SkidCtrlReport__Sequence__fini(morai_msgs__msg__SkidCtrlReport__Sequence * array)
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
      morai_msgs__msg__SkidCtrlReport__fini(&array->data[i]);
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

morai_msgs__msg__SkidCtrlReport__Sequence *
morai_msgs__msg__SkidCtrlReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__SkidCtrlReport__Sequence * array = (morai_msgs__msg__SkidCtrlReport__Sequence *)allocator.allocate(sizeof(morai_msgs__msg__SkidCtrlReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__SkidCtrlReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__SkidCtrlReport__Sequence__destroy(morai_msgs__msg__SkidCtrlReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    morai_msgs__msg__SkidCtrlReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
morai_msgs__msg__SkidCtrlReport__Sequence__are_equal(const morai_msgs__msg__SkidCtrlReport__Sequence * lhs, const morai_msgs__msg__SkidCtrlReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__SkidCtrlReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__SkidCtrlReport__Sequence__copy(
  const morai_msgs__msg__SkidCtrlReport__Sequence * input,
  morai_msgs__msg__SkidCtrlReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__SkidCtrlReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    morai_msgs__msg__SkidCtrlReport * data =
      (morai_msgs__msg__SkidCtrlReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__SkidCtrlReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__SkidCtrlReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!morai_msgs__msg__SkidCtrlReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
