// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_map_msgs:srv/GetPartialPointCloudMap.idl
// generated code does not contain a copyright notice
#include "autoware_map_msgs/srv/detail/get_partial_point_cloud_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `area`
#include "autoware_map_msgs/msg/detail/area_info__functions.h"

bool
autoware_map_msgs__srv__GetPartialPointCloudMap_Request__init(autoware_map_msgs__srv__GetPartialPointCloudMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // area
  if (!autoware_map_msgs__msg__AreaInfo__init(&msg->area)) {
    autoware_map_msgs__srv__GetPartialPointCloudMap_Request__fini(msg);
    return false;
  }
  return true;
}

void
autoware_map_msgs__srv__GetPartialPointCloudMap_Request__fini(autoware_map_msgs__srv__GetPartialPointCloudMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // area
  autoware_map_msgs__msg__AreaInfo__fini(&msg->area);
}

bool
autoware_map_msgs__srv__GetPartialPointCloudMap_Request__are_equal(const autoware_map_msgs__srv__GetPartialPointCloudMap_Request * lhs, const autoware_map_msgs__srv__GetPartialPointCloudMap_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // area
  if (!autoware_map_msgs__msg__AreaInfo__are_equal(
      &(lhs->area), &(rhs->area)))
  {
    return false;
  }
  return true;
}

bool
autoware_map_msgs__srv__GetPartialPointCloudMap_Request__copy(
  const autoware_map_msgs__srv__GetPartialPointCloudMap_Request * input,
  autoware_map_msgs__srv__GetPartialPointCloudMap_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // area
  if (!autoware_map_msgs__msg__AreaInfo__copy(
      &(input->area), &(output->area)))
  {
    return false;
  }
  return true;
}

autoware_map_msgs__srv__GetPartialPointCloudMap_Request *
autoware_map_msgs__srv__GetPartialPointCloudMap_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_map_msgs__srv__GetPartialPointCloudMap_Request * msg = (autoware_map_msgs__srv__GetPartialPointCloudMap_Request *)allocator.allocate(sizeof(autoware_map_msgs__srv__GetPartialPointCloudMap_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_map_msgs__srv__GetPartialPointCloudMap_Request));
  bool success = autoware_map_msgs__srv__GetPartialPointCloudMap_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_map_msgs__srv__GetPartialPointCloudMap_Request__destroy(autoware_map_msgs__srv__GetPartialPointCloudMap_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_map_msgs__srv__GetPartialPointCloudMap_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence__init(autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_map_msgs__srv__GetPartialPointCloudMap_Request * data = NULL;

  if (size) {
    data = (autoware_map_msgs__srv__GetPartialPointCloudMap_Request *)allocator.zero_allocate(size, sizeof(autoware_map_msgs__srv__GetPartialPointCloudMap_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_map_msgs__srv__GetPartialPointCloudMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_map_msgs__srv__GetPartialPointCloudMap_Request__fini(&data[i - 1]);
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
autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence__fini(autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence * array)
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
      autoware_map_msgs__srv__GetPartialPointCloudMap_Request__fini(&array->data[i]);
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

autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence *
autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence * array = (autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence *)allocator.allocate(sizeof(autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence__destroy(autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence__are_equal(const autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence * lhs, const autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_map_msgs__srv__GetPartialPointCloudMap_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence__copy(
  const autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence * input,
  autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_map_msgs__srv__GetPartialPointCloudMap_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_map_msgs__srv__GetPartialPointCloudMap_Request * data =
      (autoware_map_msgs__srv__GetPartialPointCloudMap_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_map_msgs__srv__GetPartialPointCloudMap_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_map_msgs__srv__GetPartialPointCloudMap_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_map_msgs__srv__GetPartialPointCloudMap_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `new_pointcloud_with_ids`
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_with_id__functions.h"

bool
autoware_map_msgs__srv__GetPartialPointCloudMap_Response__init(autoware_map_msgs__srv__GetPartialPointCloudMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_map_msgs__srv__GetPartialPointCloudMap_Response__fini(msg);
    return false;
  }
  // new_pointcloud_with_ids
  if (!autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__init(&msg->new_pointcloud_with_ids, 0)) {
    autoware_map_msgs__srv__GetPartialPointCloudMap_Response__fini(msg);
    return false;
  }
  return true;
}

void
autoware_map_msgs__srv__GetPartialPointCloudMap_Response__fini(autoware_map_msgs__srv__GetPartialPointCloudMap_Response * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // new_pointcloud_with_ids
  autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__fini(&msg->new_pointcloud_with_ids);
}

bool
autoware_map_msgs__srv__GetPartialPointCloudMap_Response__are_equal(const autoware_map_msgs__srv__GetPartialPointCloudMap_Response * lhs, const autoware_map_msgs__srv__GetPartialPointCloudMap_Response * rhs)
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
  // new_pointcloud_with_ids
  if (!autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__are_equal(
      &(lhs->new_pointcloud_with_ids), &(rhs->new_pointcloud_with_ids)))
  {
    return false;
  }
  return true;
}

bool
autoware_map_msgs__srv__GetPartialPointCloudMap_Response__copy(
  const autoware_map_msgs__srv__GetPartialPointCloudMap_Response * input,
  autoware_map_msgs__srv__GetPartialPointCloudMap_Response * output)
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
  // new_pointcloud_with_ids
  if (!autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__copy(
      &(input->new_pointcloud_with_ids), &(output->new_pointcloud_with_ids)))
  {
    return false;
  }
  return true;
}

autoware_map_msgs__srv__GetPartialPointCloudMap_Response *
autoware_map_msgs__srv__GetPartialPointCloudMap_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_map_msgs__srv__GetPartialPointCloudMap_Response * msg = (autoware_map_msgs__srv__GetPartialPointCloudMap_Response *)allocator.allocate(sizeof(autoware_map_msgs__srv__GetPartialPointCloudMap_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_map_msgs__srv__GetPartialPointCloudMap_Response));
  bool success = autoware_map_msgs__srv__GetPartialPointCloudMap_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_map_msgs__srv__GetPartialPointCloudMap_Response__destroy(autoware_map_msgs__srv__GetPartialPointCloudMap_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_map_msgs__srv__GetPartialPointCloudMap_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence__init(autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_map_msgs__srv__GetPartialPointCloudMap_Response * data = NULL;

  if (size) {
    data = (autoware_map_msgs__srv__GetPartialPointCloudMap_Response *)allocator.zero_allocate(size, sizeof(autoware_map_msgs__srv__GetPartialPointCloudMap_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_map_msgs__srv__GetPartialPointCloudMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_map_msgs__srv__GetPartialPointCloudMap_Response__fini(&data[i - 1]);
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
autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence__fini(autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence * array)
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
      autoware_map_msgs__srv__GetPartialPointCloudMap_Response__fini(&array->data[i]);
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

autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence *
autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence * array = (autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence *)allocator.allocate(sizeof(autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence__destroy(autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence__are_equal(const autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence * lhs, const autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_map_msgs__srv__GetPartialPointCloudMap_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence__copy(
  const autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence * input,
  autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_map_msgs__srv__GetPartialPointCloudMap_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_map_msgs__srv__GetPartialPointCloudMap_Response * data =
      (autoware_map_msgs__srv__GetPartialPointCloudMap_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_map_msgs__srv__GetPartialPointCloudMap_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_map_msgs__srv__GetPartialPointCloudMap_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_map_msgs__srv__GetPartialPointCloudMap_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
