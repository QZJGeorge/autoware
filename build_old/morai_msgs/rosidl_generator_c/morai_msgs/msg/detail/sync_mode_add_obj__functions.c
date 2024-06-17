// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/SyncModeAddObj.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/sync_mode_add_obj__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
morai_msgs__msg__SyncModeAddObj__init(morai_msgs__msg__SyncModeAddObj * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    morai_msgs__msg__SyncModeAddObj__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__init(&msg->position)) {
    morai_msgs__msg__SyncModeAddObj__fini(msg);
    return false;
  }
  // heading
  // frame
  return true;
}

void
morai_msgs__msg__SyncModeAddObj__fini(morai_msgs__msg__SyncModeAddObj * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // position
  geometry_msgs__msg__Vector3__fini(&msg->position);
  // heading
  // frame
}

bool
morai_msgs__msg__SyncModeAddObj__are_equal(const morai_msgs__msg__SyncModeAddObj * lhs, const morai_msgs__msg__SyncModeAddObj * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // frame
  if (lhs->frame != rhs->frame) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__SyncModeAddObj__copy(
  const morai_msgs__msg__SyncModeAddObj * input,
  morai_msgs__msg__SyncModeAddObj * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // heading
  output->heading = input->heading;
  // frame
  output->frame = input->frame;
  return true;
}

morai_msgs__msg__SyncModeAddObj *
morai_msgs__msg__SyncModeAddObj__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__SyncModeAddObj * msg = (morai_msgs__msg__SyncModeAddObj *)allocator.allocate(sizeof(morai_msgs__msg__SyncModeAddObj), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__SyncModeAddObj));
  bool success = morai_msgs__msg__SyncModeAddObj__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__SyncModeAddObj__destroy(morai_msgs__msg__SyncModeAddObj * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    morai_msgs__msg__SyncModeAddObj__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
morai_msgs__msg__SyncModeAddObj__Sequence__init(morai_msgs__msg__SyncModeAddObj__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__SyncModeAddObj * data = NULL;

  if (size) {
    data = (morai_msgs__msg__SyncModeAddObj *)allocator.zero_allocate(size, sizeof(morai_msgs__msg__SyncModeAddObj), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__SyncModeAddObj__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__SyncModeAddObj__fini(&data[i - 1]);
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
morai_msgs__msg__SyncModeAddObj__Sequence__fini(morai_msgs__msg__SyncModeAddObj__Sequence * array)
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
      morai_msgs__msg__SyncModeAddObj__fini(&array->data[i]);
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

morai_msgs__msg__SyncModeAddObj__Sequence *
morai_msgs__msg__SyncModeAddObj__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__msg__SyncModeAddObj__Sequence * array = (morai_msgs__msg__SyncModeAddObj__Sequence *)allocator.allocate(sizeof(morai_msgs__msg__SyncModeAddObj__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__SyncModeAddObj__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__SyncModeAddObj__Sequence__destroy(morai_msgs__msg__SyncModeAddObj__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    morai_msgs__msg__SyncModeAddObj__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
morai_msgs__msg__SyncModeAddObj__Sequence__are_equal(const morai_msgs__msg__SyncModeAddObj__Sequence * lhs, const morai_msgs__msg__SyncModeAddObj__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__SyncModeAddObj__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__SyncModeAddObj__Sequence__copy(
  const morai_msgs__msg__SyncModeAddObj__Sequence * input,
  morai_msgs__msg__SyncModeAddObj__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__SyncModeAddObj);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    morai_msgs__msg__SyncModeAddObj * data =
      (morai_msgs__msg__SyncModeAddObj *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__SyncModeAddObj__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__SyncModeAddObj__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!morai_msgs__msg__SyncModeAddObj__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
