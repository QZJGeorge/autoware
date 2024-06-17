// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/SyncModeInfo.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/sync_mode_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `master_id`
#include "rosidl_runtime_c/string_functions.h"

bool
morai_msgs__msg__SyncModeInfo__init(morai_msgs__msg__SyncModeInfo * msg)
{
  if (!msg) {
    return false;
  }
  // master_id
  if (!rosidl_runtime_c__String__init(&msg->master_id)) {
    morai_msgs__msg__SyncModeInfo__fini(msg);
    return false;
  }
  // status
  // frame
  // can_send_tick
  return true;
}

void
morai_msgs__msg__SyncModeInfo__fini(morai_msgs__msg__SyncModeInfo * msg)
{
  if (!msg) {
    return;
  }
  // master_id
  rosidl_runtime_c__String__fini(&msg->master_id);
  // status
  // frame
  // can_send_tick
}

bool
morai_msgs__msg__SyncModeInfo__are_equal(const morai_msgs__msg__SyncModeInfo * lhs, const morai_msgs__msg__SyncModeInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // master_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->master_id), &(rhs->master_id)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // frame
  if (lhs->frame != rhs->frame) {
    return false;
  }
  // can_send_tick
  if (lhs->can_send_tick != rhs->can_send_tick) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__SyncModeInfo__copy(
  const morai_msgs__msg__SyncModeInfo * input,
  morai_msgs__msg__SyncModeInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // master_id
  if (!rosidl_runtime_c__String__copy(
      &(input->master_id), &(output->master_id)))
  {
    return false;
  }
  // status
  output->status = input->status;
  // frame
  output->frame = input->frame;
  // can_send_tick
  output->can_send_tick = input->can_send_tick;
  return true;
}

morai_msgs__msg__SyncModeInfo *
morai_msgs__msg__SyncModeInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__SyncModeInfo * msg = (morai_msgs__msg__SyncModeInfo *)allocator.allocate(sizeof(morai_msgs__msg__SyncModeInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__SyncModeInfo));
  bool success = morai_msgs__msg__SyncModeInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__SyncModeInfo__destroy(morai_msgs__msg__SyncModeInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    morai_msgs__msg__SyncModeInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
morai_msgs__msg__SyncModeInfo__Sequence__init(morai_msgs__msg__SyncModeInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__SyncModeInfo * data = NULL;

  if (size) {
    data = (morai_msgs__msg__SyncModeInfo *)allocator.zero_allocate(size, sizeof(morai_msgs__msg__SyncModeInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__SyncModeInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__SyncModeInfo__fini(&data[i - 1]);
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
morai_msgs__msg__SyncModeInfo__Sequence__fini(morai_msgs__msg__SyncModeInfo__Sequence * array)
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
      morai_msgs__msg__SyncModeInfo__fini(&array->data[i]);
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

morai_msgs__msg__SyncModeInfo__Sequence *
morai_msgs__msg__SyncModeInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__SyncModeInfo__Sequence * array = (morai_msgs__msg__SyncModeInfo__Sequence *)allocator.allocate(sizeof(morai_msgs__msg__SyncModeInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__SyncModeInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__SyncModeInfo__Sequence__destroy(morai_msgs__msg__SyncModeInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    morai_msgs__msg__SyncModeInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
morai_msgs__msg__SyncModeInfo__Sequence__are_equal(const morai_msgs__msg__SyncModeInfo__Sequence * lhs, const morai_msgs__msg__SyncModeInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__SyncModeInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__SyncModeInfo__Sequence__copy(
  const morai_msgs__msg__SyncModeInfo__Sequence * input,
  morai_msgs__msg__SyncModeInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__SyncModeInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    morai_msgs__msg__SyncModeInfo * data =
      (morai_msgs__msg__SyncModeInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__SyncModeInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__SyncModeInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!morai_msgs__msg__SyncModeInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
