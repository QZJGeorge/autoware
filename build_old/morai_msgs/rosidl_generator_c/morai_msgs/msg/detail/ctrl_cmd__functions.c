// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/CtrlCmd.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/ctrl_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
morai_msgs__msg__CtrlCmd__init(morai_msgs__msg__CtrlCmd * msg)
{
  if (!msg) {
    return false;
  }
  // longl_cmd_type
  // accel
  // brake
  // steering
  // velocity
  // acceleration
  return true;
}

void
morai_msgs__msg__CtrlCmd__fini(morai_msgs__msg__CtrlCmd * msg)
{
  if (!msg) {
    return;
  }
  // longl_cmd_type
  // accel
  // brake
  // steering
  // velocity
  // acceleration
}

bool
morai_msgs__msg__CtrlCmd__are_equal(const morai_msgs__msg__CtrlCmd * lhs, const morai_msgs__msg__CtrlCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // longl_cmd_type
  if (lhs->longl_cmd_type != rhs->longl_cmd_type) {
    return false;
  }
  // accel
  if (lhs->accel != rhs->accel) {
    return false;
  }
  // brake
  if (lhs->brake != rhs->brake) {
    return false;
  }
  // steering
  if (lhs->steering != rhs->steering) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // acceleration
  if (lhs->acceleration != rhs->acceleration) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__CtrlCmd__copy(
  const morai_msgs__msg__CtrlCmd * input,
  morai_msgs__msg__CtrlCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // longl_cmd_type
  output->longl_cmd_type = input->longl_cmd_type;
  // accel
  output->accel = input->accel;
  // brake
  output->brake = input->brake;
  // steering
  output->steering = input->steering;
  // velocity
  output->velocity = input->velocity;
  // acceleration
  output->acceleration = input->acceleration;
  return true;
}

morai_msgs__msg__CtrlCmd *
morai_msgs__msg__CtrlCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__CtrlCmd * msg = (morai_msgs__msg__CtrlCmd *)allocator.allocate(sizeof(morai_msgs__msg__CtrlCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__CtrlCmd));
  bool success = morai_msgs__msg__CtrlCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__CtrlCmd__destroy(morai_msgs__msg__CtrlCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    morai_msgs__msg__CtrlCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
morai_msgs__msg__CtrlCmd__Sequence__init(morai_msgs__msg__CtrlCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__CtrlCmd * data = NULL;

  if (size) {
    data = (morai_msgs__msg__CtrlCmd *)allocator.zero_allocate(size, sizeof(morai_msgs__msg__CtrlCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__CtrlCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__CtrlCmd__fini(&data[i - 1]);
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
morai_msgs__msg__CtrlCmd__Sequence__fini(morai_msgs__msg__CtrlCmd__Sequence * array)
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
      morai_msgs__msg__CtrlCmd__fini(&array->data[i]);
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

morai_msgs__msg__CtrlCmd__Sequence *
morai_msgs__msg__CtrlCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__CtrlCmd__Sequence * array = (morai_msgs__msg__CtrlCmd__Sequence *)allocator.allocate(sizeof(morai_msgs__msg__CtrlCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__CtrlCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__CtrlCmd__Sequence__destroy(morai_msgs__msg__CtrlCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    morai_msgs__msg__CtrlCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
morai_msgs__msg__CtrlCmd__Sequence__are_equal(const morai_msgs__msg__CtrlCmd__Sequence * lhs, const morai_msgs__msg__CtrlCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__CtrlCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__CtrlCmd__Sequence__copy(
  const morai_msgs__msg__CtrlCmd__Sequence * input,
  morai_msgs__msg__CtrlCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__CtrlCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    morai_msgs__msg__CtrlCmd * data =
      (morai_msgs__msg__CtrlCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__CtrlCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__CtrlCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!morai_msgs__msg__CtrlCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
