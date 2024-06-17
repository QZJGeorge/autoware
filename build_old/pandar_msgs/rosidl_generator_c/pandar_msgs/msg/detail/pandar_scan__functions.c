// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pandar_msgs:msg/PandarScan.idl
// generated code does not contain a copyright notice
#include "pandar_msgs/msg/detail/pandar_scan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `packets`
#include "pandar_msgs/msg/detail/pandar_packet__functions.h"

bool
pandar_msgs__msg__PandarScan__init(pandar_msgs__msg__PandarScan * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pandar_msgs__msg__PandarScan__fini(msg);
    return false;
  }
  // packets
  if (!pandar_msgs__msg__PandarPacket__Sequence__init(&msg->packets, 0)) {
    pandar_msgs__msg__PandarScan__fini(msg);
    return false;
  }
  return true;
}

void
pandar_msgs__msg__PandarScan__fini(pandar_msgs__msg__PandarScan * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // packets
  pandar_msgs__msg__PandarPacket__Sequence__fini(&msg->packets);
}

bool
pandar_msgs__msg__PandarScan__are_equal(const pandar_msgs__msg__PandarScan * lhs, const pandar_msgs__msg__PandarScan * rhs)
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
  // packets
  if (!pandar_msgs__msg__PandarPacket__Sequence__are_equal(
      &(lhs->packets), &(rhs->packets)))
  {
    return false;
  }
  return true;
}

bool
pandar_msgs__msg__PandarScan__copy(
  const pandar_msgs__msg__PandarScan * input,
  pandar_msgs__msg__PandarScan * output)
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
  // packets
  if (!pandar_msgs__msg__PandarPacket__Sequence__copy(
      &(input->packets), &(output->packets)))
  {
    return false;
  }
  return true;
}

pandar_msgs__msg__PandarScan *
pandar_msgs__msg__PandarScan__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pandar_msgs__msg__PandarScan * msg = (pandar_msgs__msg__PandarScan *)allocator.allocate(sizeof(pandar_msgs__msg__PandarScan), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pandar_msgs__msg__PandarScan));
  bool success = pandar_msgs__msg__PandarScan__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pandar_msgs__msg__PandarScan__destroy(pandar_msgs__msg__PandarScan * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pandar_msgs__msg__PandarScan__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pandar_msgs__msg__PandarScan__Sequence__init(pandar_msgs__msg__PandarScan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pandar_msgs__msg__PandarScan * data = NULL;

  if (size) {
    data = (pandar_msgs__msg__PandarScan *)allocator.zero_allocate(size, sizeof(pandar_msgs__msg__PandarScan), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pandar_msgs__msg__PandarScan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pandar_msgs__msg__PandarScan__fini(&data[i - 1]);
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
pandar_msgs__msg__PandarScan__Sequence__fini(pandar_msgs__msg__PandarScan__Sequence * array)
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
      pandar_msgs__msg__PandarScan__fini(&array->data[i]);
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

pandar_msgs__msg__PandarScan__Sequence *
pandar_msgs__msg__PandarScan__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pandar_msgs__msg__PandarScan__Sequence * array = (pandar_msgs__msg__PandarScan__Sequence *)allocator.allocate(sizeof(pandar_msgs__msg__PandarScan__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pandar_msgs__msg__PandarScan__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pandar_msgs__msg__PandarScan__Sequence__destroy(pandar_msgs__msg__PandarScan__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pandar_msgs__msg__PandarScan__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pandar_msgs__msg__PandarScan__Sequence__are_equal(const pandar_msgs__msg__PandarScan__Sequence * lhs, const pandar_msgs__msg__PandarScan__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pandar_msgs__msg__PandarScan__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pandar_msgs__msg__PandarScan__Sequence__copy(
  const pandar_msgs__msg__PandarScan__Sequence * input,
  pandar_msgs__msg__PandarScan__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pandar_msgs__msg__PandarScan);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pandar_msgs__msg__PandarScan * data =
      (pandar_msgs__msg__PandarScan *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pandar_msgs__msg__PandarScan__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pandar_msgs__msg__PandarScan__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pandar_msgs__msg__PandarScan__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
