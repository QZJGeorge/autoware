// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/EventInfo.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/event_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lamps`
#include "morai_msgs/msg/detail/lamps__functions.h"

bool
morai_msgs__msg__EventInfo__init(morai_msgs__msg__EventInfo * msg)
{
  if (!msg) {
    return false;
  }
  // option
  // ctrl_mode
  // gear
  // lamps
  if (!morai_msgs__msg__Lamps__init(&msg->lamps)) {
    morai_msgs__msg__EventInfo__fini(msg);
    return false;
  }
  // set_pause
  return true;
}

void
morai_msgs__msg__EventInfo__fini(morai_msgs__msg__EventInfo * msg)
{
  if (!msg) {
    return;
  }
  // option
  // ctrl_mode
  // gear
  // lamps
  morai_msgs__msg__Lamps__fini(&msg->lamps);
  // set_pause
}

bool
morai_msgs__msg__EventInfo__are_equal(const morai_msgs__msg__EventInfo * lhs, const morai_msgs__msg__EventInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // option
  if (lhs->option != rhs->option) {
    return false;
  }
  // ctrl_mode
  if (lhs->ctrl_mode != rhs->ctrl_mode) {
    return false;
  }
  // gear
  if (lhs->gear != rhs->gear) {
    return false;
  }
  // lamps
  if (!morai_msgs__msg__Lamps__are_equal(
      &(lhs->lamps), &(rhs->lamps)))
  {
    return false;
  }
  // set_pause
  if (lhs->set_pause != rhs->set_pause) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__EventInfo__copy(
  const morai_msgs__msg__EventInfo * input,
  morai_msgs__msg__EventInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // option
  output->option = input->option;
  // ctrl_mode
  output->ctrl_mode = input->ctrl_mode;
  // gear
  output->gear = input->gear;
  // lamps
  if (!morai_msgs__msg__Lamps__copy(
      &(input->lamps), &(output->lamps)))
  {
    return false;
  }
  // set_pause
  output->set_pause = input->set_pause;
  return true;
}

morai_msgs__msg__EventInfo *
morai_msgs__msg__EventInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__EventInfo * msg = (morai_msgs__msg__EventInfo *)allocator.allocate(sizeof(morai_msgs__msg__EventInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__EventInfo));
  bool success = morai_msgs__msg__EventInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__EventInfo__destroy(morai_msgs__msg__EventInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    morai_msgs__msg__EventInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
morai_msgs__msg__EventInfo__Sequence__init(morai_msgs__msg__EventInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__EventInfo * data = NULL;

  if (size) {
    data = (morai_msgs__msg__EventInfo *)allocator.zero_allocate(size, sizeof(morai_msgs__msg__EventInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__EventInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__EventInfo__fini(&data[i - 1]);
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
morai_msgs__msg__EventInfo__Sequence__fini(morai_msgs__msg__EventInfo__Sequence * array)
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
      morai_msgs__msg__EventInfo__fini(&array->data[i]);
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

morai_msgs__msg__EventInfo__Sequence *
morai_msgs__msg__EventInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__EventInfo__Sequence * array = (morai_msgs__msg__EventInfo__Sequence *)allocator.allocate(sizeof(morai_msgs__msg__EventInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__EventInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__EventInfo__Sequence__destroy(morai_msgs__msg__EventInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    morai_msgs__msg__EventInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
morai_msgs__msg__EventInfo__Sequence__are_equal(const morai_msgs__msg__EventInfo__Sequence * lhs, const morai_msgs__msg__EventInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__EventInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__EventInfo__Sequence__copy(
  const morai_msgs__msg__EventInfo__Sequence * input,
  morai_msgs__msg__EventInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__EventInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    morai_msgs__msg__EventInfo * data =
      (morai_msgs__msg__EventInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__EventInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__EventInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!morai_msgs__msg__EventInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
