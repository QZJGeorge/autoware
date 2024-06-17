// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_external_api_msgs:msg/RosbagCopyStatus.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/msg/detail/rosbag_copy_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `project_id`
// Member `vehicle_id`
// Member `date`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
tier4_external_api_msgs__msg__RosbagCopyStatus__init(tier4_external_api_msgs__msg__RosbagCopyStatus * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // progress_percentage
  // project_id
  if (!rosidl_runtime_c__String__init(&msg->project_id)) {
    tier4_external_api_msgs__msg__RosbagCopyStatus__fini(msg);
    return false;
  }
  // vehicle_id
  if (!rosidl_runtime_c__String__init(&msg->vehicle_id)) {
    tier4_external_api_msgs__msg__RosbagCopyStatus__fini(msg);
    return false;
  }
  // date
  if (!rosidl_runtime_c__String__init(&msg->date)) {
    tier4_external_api_msgs__msg__RosbagCopyStatus__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    tier4_external_api_msgs__msg__RosbagCopyStatus__fini(msg);
    return false;
  }
  return true;
}

void
tier4_external_api_msgs__msg__RosbagCopyStatus__fini(tier4_external_api_msgs__msg__RosbagCopyStatus * msg)
{
  if (!msg) {
    return;
  }
  // status
  // progress_percentage
  // project_id
  rosidl_runtime_c__String__fini(&msg->project_id);
  // vehicle_id
  rosidl_runtime_c__String__fini(&msg->vehicle_id);
  // date
  rosidl_runtime_c__String__fini(&msg->date);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
tier4_external_api_msgs__msg__RosbagCopyStatus__are_equal(const tier4_external_api_msgs__msg__RosbagCopyStatus * lhs, const tier4_external_api_msgs__msg__RosbagCopyStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // progress_percentage
  if (lhs->progress_percentage != rhs->progress_percentage) {
    return false;
  }
  // project_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->project_id), &(rhs->project_id)))
  {
    return false;
  }
  // vehicle_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->vehicle_id), &(rhs->vehicle_id)))
  {
    return false;
  }
  // date
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->date), &(rhs->date)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
tier4_external_api_msgs__msg__RosbagCopyStatus__copy(
  const tier4_external_api_msgs__msg__RosbagCopyStatus * input,
  tier4_external_api_msgs__msg__RosbagCopyStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // progress_percentage
  output->progress_percentage = input->progress_percentage;
  // project_id
  if (!rosidl_runtime_c__String__copy(
      &(input->project_id), &(output->project_id)))
  {
    return false;
  }
  // vehicle_id
  if (!rosidl_runtime_c__String__copy(
      &(input->vehicle_id), &(output->vehicle_id)))
  {
    return false;
  }
  // date
  if (!rosidl_runtime_c__String__copy(
      &(input->date), &(output->date)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

tier4_external_api_msgs__msg__RosbagCopyStatus *
tier4_external_api_msgs__msg__RosbagCopyStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_external_api_msgs__msg__RosbagCopyStatus * msg = (tier4_external_api_msgs__msg__RosbagCopyStatus *)allocator.allocate(sizeof(tier4_external_api_msgs__msg__RosbagCopyStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_external_api_msgs__msg__RosbagCopyStatus));
  bool success = tier4_external_api_msgs__msg__RosbagCopyStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_external_api_msgs__msg__RosbagCopyStatus__destroy(tier4_external_api_msgs__msg__RosbagCopyStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_external_api_msgs__msg__RosbagCopyStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence__init(tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_external_api_msgs__msg__RosbagCopyStatus * data = NULL;

  if (size) {
    data = (tier4_external_api_msgs__msg__RosbagCopyStatus *)allocator.zero_allocate(size, sizeof(tier4_external_api_msgs__msg__RosbagCopyStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_external_api_msgs__msg__RosbagCopyStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_external_api_msgs__msg__RosbagCopyStatus__fini(&data[i - 1]);
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
tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence__fini(tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence * array)
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
      tier4_external_api_msgs__msg__RosbagCopyStatus__fini(&array->data[i]);
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

tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence *
tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence * array = (tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence *)allocator.allocate(sizeof(tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence__destroy(tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence__are_equal(const tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence * lhs, const tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_external_api_msgs__msg__RosbagCopyStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence__copy(
  const tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence * input,
  tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_external_api_msgs__msg__RosbagCopyStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_external_api_msgs__msg__RosbagCopyStatus * data =
      (tier4_external_api_msgs__msg__RosbagCopyStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_external_api_msgs__msg__RosbagCopyStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_external_api_msgs__msg__RosbagCopyStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_external_api_msgs__msg__RosbagCopyStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
