// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/WaitForTick.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/wait_for_tick__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `user_id`
#include "rosidl_runtime_c/string_functions.h"

bool
morai_msgs__msg__WaitForTick__init(morai_msgs__msg__WaitForTick * msg)
{
  if (!msg) {
    return false;
  }
  // user_id
  if (!rosidl_runtime_c__String__init(&msg->user_id)) {
    morai_msgs__msg__WaitForTick__fini(msg);
    return false;
  }
  // frame
  return true;
}

void
morai_msgs__msg__WaitForTick__fini(morai_msgs__msg__WaitForTick * msg)
{
  if (!msg) {
    return;
  }
  // user_id
  rosidl_runtime_c__String__fini(&msg->user_id);
  // frame
}

bool
morai_msgs__msg__WaitForTick__are_equal(const morai_msgs__msg__WaitForTick * lhs, const morai_msgs__msg__WaitForTick * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // user_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->user_id), &(rhs->user_id)))
  {
    return false;
  }
  // frame
  if (lhs->frame != rhs->frame) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__WaitForTick__copy(
  const morai_msgs__msg__WaitForTick * input,
  morai_msgs__msg__WaitForTick * output)
{
  if (!input || !output) {
    return false;
  }
  // user_id
  if (!rosidl_runtime_c__String__copy(
      &(input->user_id), &(output->user_id)))
  {
    return false;
  }
  // frame
  output->frame = input->frame;
  return true;
}

morai_msgs__msg__WaitForTick *
morai_msgs__msg__WaitForTick__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__WaitForTick * msg = (morai_msgs__msg__WaitForTick *)allocator.allocate(sizeof(morai_msgs__msg__WaitForTick), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__WaitForTick));
  bool success = morai_msgs__msg__WaitForTick__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__WaitForTick__destroy(morai_msgs__msg__WaitForTick * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    morai_msgs__msg__WaitForTick__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
morai_msgs__msg__WaitForTick__Sequence__init(morai_msgs__msg__WaitForTick__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__WaitForTick * data = NULL;

  if (size) {
    data = (morai_msgs__msg__WaitForTick *)allocator.zero_allocate(size, sizeof(morai_msgs__msg__WaitForTick), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__WaitForTick__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__WaitForTick__fini(&data[i - 1]);
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
morai_msgs__msg__WaitForTick__Sequence__fini(morai_msgs__msg__WaitForTick__Sequence * array)
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
      morai_msgs__msg__WaitForTick__fini(&array->data[i]);
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

morai_msgs__msg__WaitForTick__Sequence *
morai_msgs__msg__WaitForTick__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__WaitForTick__Sequence * array = (morai_msgs__msg__WaitForTick__Sequence *)allocator.allocate(sizeof(morai_msgs__msg__WaitForTick__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__WaitForTick__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__WaitForTick__Sequence__destroy(morai_msgs__msg__WaitForTick__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    morai_msgs__msg__WaitForTick__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
morai_msgs__msg__WaitForTick__Sequence__are_equal(const morai_msgs__msg__WaitForTick__Sequence * lhs, const morai_msgs__msg__WaitForTick__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__WaitForTick__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__WaitForTick__Sequence__copy(
  const morai_msgs__msg__WaitForTick__Sequence * input,
  morai_msgs__msg__WaitForTick__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__WaitForTick);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    morai_msgs__msg__WaitForTick * data =
      (morai_msgs__msg__WaitForTick *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__WaitForTick__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__WaitForTick__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!morai_msgs__msg__WaitForTick__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
