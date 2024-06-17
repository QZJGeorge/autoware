// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pandar_msgs:msg/PandarPacket.idl
// generated code does not contain a copyright notice
#include "pandar_msgs/msg/detail/pandar_packet__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
pandar_msgs__msg__PandarPacket__init(pandar_msgs__msg__PandarPacket * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    pandar_msgs__msg__PandarPacket__fini(msg);
    return false;
  }
  // data
  // size
  return true;
}

void
pandar_msgs__msg__PandarPacket__fini(pandar_msgs__msg__PandarPacket * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // data
  // size
}

bool
pandar_msgs__msg__PandarPacket__are_equal(const pandar_msgs__msg__PandarPacket * lhs, const pandar_msgs__msg__PandarPacket * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // data
  for (size_t i = 0; i < 1500; ++i) {
    if (lhs->data[i] != rhs->data[i]) {
      return false;
    }
  }
  // size
  if (lhs->size != rhs->size) {
    return false;
  }
  return true;
}

bool
pandar_msgs__msg__PandarPacket__copy(
  const pandar_msgs__msg__PandarPacket * input,
  pandar_msgs__msg__PandarPacket * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // data
  for (size_t i = 0; i < 1500; ++i) {
    output->data[i] = input->data[i];
  }
  // size
  output->size = input->size;
  return true;
}

pandar_msgs__msg__PandarPacket *
pandar_msgs__msg__PandarPacket__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pandar_msgs__msg__PandarPacket * msg = (pandar_msgs__msg__PandarPacket *)allocator.allocate(sizeof(pandar_msgs__msg__PandarPacket), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pandar_msgs__msg__PandarPacket));
  bool success = pandar_msgs__msg__PandarPacket__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pandar_msgs__msg__PandarPacket__destroy(pandar_msgs__msg__PandarPacket * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pandar_msgs__msg__PandarPacket__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pandar_msgs__msg__PandarPacket__Sequence__init(pandar_msgs__msg__PandarPacket__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pandar_msgs__msg__PandarPacket * data = NULL;

  if (size) {
    data = (pandar_msgs__msg__PandarPacket *)allocator.zero_allocate(size, sizeof(pandar_msgs__msg__PandarPacket), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pandar_msgs__msg__PandarPacket__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pandar_msgs__msg__PandarPacket__fini(&data[i - 1]);
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
pandar_msgs__msg__PandarPacket__Sequence__fini(pandar_msgs__msg__PandarPacket__Sequence * array)
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
      pandar_msgs__msg__PandarPacket__fini(&array->data[i]);
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

pandar_msgs__msg__PandarPacket__Sequence *
pandar_msgs__msg__PandarPacket__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pandar_msgs__msg__PandarPacket__Sequence * array = (pandar_msgs__msg__PandarPacket__Sequence *)allocator.allocate(sizeof(pandar_msgs__msg__PandarPacket__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pandar_msgs__msg__PandarPacket__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pandar_msgs__msg__PandarPacket__Sequence__destroy(pandar_msgs__msg__PandarPacket__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pandar_msgs__msg__PandarPacket__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pandar_msgs__msg__PandarPacket__Sequence__are_equal(const pandar_msgs__msg__PandarPacket__Sequence * lhs, const pandar_msgs__msg__PandarPacket__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pandar_msgs__msg__PandarPacket__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pandar_msgs__msg__PandarPacket__Sequence__copy(
  const pandar_msgs__msg__PandarPacket__Sequence * input,
  pandar_msgs__msg__PandarPacket__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pandar_msgs__msg__PandarPacket);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pandar_msgs__msg__PandarPacket * data =
      (pandar_msgs__msg__PandarPacket *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pandar_msgs__msg__PandarPacket__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pandar_msgs__msg__PandarPacket__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pandar_msgs__msg__PandarPacket__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
