// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/SyncModeCtrlCmd.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/sync_mode_ctrl_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `command`
#include "morai_msgs/msg/detail/ctrl_cmd__functions.h"

bool
morai_msgs__msg__SyncModeCtrlCmd__init(morai_msgs__msg__SyncModeCtrlCmd * msg)
{
  if (!msg) {
    return false;
  }
  // frame
  // command
  if (!morai_msgs__msg__CtrlCmd__init(&msg->command)) {
    morai_msgs__msg__SyncModeCtrlCmd__fini(msg);
    return false;
  }
  // sensor_capture
  return true;
}

void
morai_msgs__msg__SyncModeCtrlCmd__fini(morai_msgs__msg__SyncModeCtrlCmd * msg)
{
  if (!msg) {
    return;
  }
  // frame
  // command
  morai_msgs__msg__CtrlCmd__fini(&msg->command);
  // sensor_capture
}

bool
morai_msgs__msg__SyncModeCtrlCmd__are_equal(const morai_msgs__msg__SyncModeCtrlCmd * lhs, const morai_msgs__msg__SyncModeCtrlCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame
  if (lhs->frame != rhs->frame) {
    return false;
  }
  // command
  if (!morai_msgs__msg__CtrlCmd__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  // sensor_capture
  if (lhs->sensor_capture != rhs->sensor_capture) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__SyncModeCtrlCmd__copy(
  const morai_msgs__msg__SyncModeCtrlCmd * input,
  morai_msgs__msg__SyncModeCtrlCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // frame
  output->frame = input->frame;
  // command
  if (!morai_msgs__msg__CtrlCmd__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  // sensor_capture
  output->sensor_capture = input->sensor_capture;
  return true;
}

morai_msgs__msg__SyncModeCtrlCmd *
morai_msgs__msg__SyncModeCtrlCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__SyncModeCtrlCmd * msg = (morai_msgs__msg__SyncModeCtrlCmd *)allocator.allocate(sizeof(morai_msgs__msg__SyncModeCtrlCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__SyncModeCtrlCmd));
  bool success = morai_msgs__msg__SyncModeCtrlCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__SyncModeCtrlCmd__destroy(morai_msgs__msg__SyncModeCtrlCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    morai_msgs__msg__SyncModeCtrlCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
morai_msgs__msg__SyncModeCtrlCmd__Sequence__init(morai_msgs__msg__SyncModeCtrlCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__SyncModeCtrlCmd * data = NULL;

  if (size) {
    data = (morai_msgs__msg__SyncModeCtrlCmd *)allocator.zero_allocate(size, sizeof(morai_msgs__msg__SyncModeCtrlCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__SyncModeCtrlCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__SyncModeCtrlCmd__fini(&data[i - 1]);
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
morai_msgs__msg__SyncModeCtrlCmd__Sequence__fini(morai_msgs__msg__SyncModeCtrlCmd__Sequence * array)
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
      morai_msgs__msg__SyncModeCtrlCmd__fini(&array->data[i]);
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

morai_msgs__msg__SyncModeCtrlCmd__Sequence *
morai_msgs__msg__SyncModeCtrlCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__SyncModeCtrlCmd__Sequence * array = (morai_msgs__msg__SyncModeCtrlCmd__Sequence *)allocator.allocate(sizeof(morai_msgs__msg__SyncModeCtrlCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__SyncModeCtrlCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__SyncModeCtrlCmd__Sequence__destroy(morai_msgs__msg__SyncModeCtrlCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    morai_msgs__msg__SyncModeCtrlCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
morai_msgs__msg__SyncModeCtrlCmd__Sequence__are_equal(const morai_msgs__msg__SyncModeCtrlCmd__Sequence * lhs, const morai_msgs__msg__SyncModeCtrlCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__SyncModeCtrlCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__SyncModeCtrlCmd__Sequence__copy(
  const morai_msgs__msg__SyncModeCtrlCmd__Sequence * input,
  morai_msgs__msg__SyncModeCtrlCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__SyncModeCtrlCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    morai_msgs__msg__SyncModeCtrlCmd * data =
      (morai_msgs__msg__SyncModeCtrlCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__SyncModeCtrlCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__SyncModeCtrlCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!morai_msgs__msg__SyncModeCtrlCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
