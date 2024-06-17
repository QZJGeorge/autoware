// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_rtc_msgs:srv/AutoModeWithModule.idl
// generated code does not contain a copyright notice
#include "tier4_rtc_msgs/srv/detail/auto_mode_with_module__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `module`
#include "tier4_rtc_msgs/msg/detail/module__functions.h"

bool
tier4_rtc_msgs__srv__AutoModeWithModule_Request__init(tier4_rtc_msgs__srv__AutoModeWithModule_Request * msg)
{
  if (!msg) {
    return false;
  }
  // module
  if (!tier4_rtc_msgs__msg__Module__init(&msg->module)) {
    tier4_rtc_msgs__srv__AutoModeWithModule_Request__fini(msg);
    return false;
  }
  // enable
  return true;
}

void
tier4_rtc_msgs__srv__AutoModeWithModule_Request__fini(tier4_rtc_msgs__srv__AutoModeWithModule_Request * msg)
{
  if (!msg) {
    return;
  }
  // module
  tier4_rtc_msgs__msg__Module__fini(&msg->module);
  // enable
}

bool
tier4_rtc_msgs__srv__AutoModeWithModule_Request__are_equal(const tier4_rtc_msgs__srv__AutoModeWithModule_Request * lhs, const tier4_rtc_msgs__srv__AutoModeWithModule_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // module
  if (!tier4_rtc_msgs__msg__Module__are_equal(
      &(lhs->module), &(rhs->module)))
  {
    return false;
  }
  // enable
  if (lhs->enable != rhs->enable) {
    return false;
  }
  return true;
}

bool
tier4_rtc_msgs__srv__AutoModeWithModule_Request__copy(
  const tier4_rtc_msgs__srv__AutoModeWithModule_Request * input,
  tier4_rtc_msgs__srv__AutoModeWithModule_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // module
  if (!tier4_rtc_msgs__msg__Module__copy(
      &(input->module), &(output->module)))
  {
    return false;
  }
  // enable
  output->enable = input->enable;
  return true;
}

tier4_rtc_msgs__srv__AutoModeWithModule_Request *
tier4_rtc_msgs__srv__AutoModeWithModule_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_rtc_msgs__srv__AutoModeWithModule_Request * msg = (tier4_rtc_msgs__srv__AutoModeWithModule_Request *)allocator.allocate(sizeof(tier4_rtc_msgs__srv__AutoModeWithModule_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_rtc_msgs__srv__AutoModeWithModule_Request));
  bool success = tier4_rtc_msgs__srv__AutoModeWithModule_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_rtc_msgs__srv__AutoModeWithModule_Request__destroy(tier4_rtc_msgs__srv__AutoModeWithModule_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_rtc_msgs__srv__AutoModeWithModule_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_rtc_msgs__srv__AutoModeWithModule_Request__Sequence__init(tier4_rtc_msgs__srv__AutoModeWithModule_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_rtc_msgs__srv__AutoModeWithModule_Request * data = NULL;

  if (size) {
    data = (tier4_rtc_msgs__srv__AutoModeWithModule_Request *)allocator.zero_allocate(size, sizeof(tier4_rtc_msgs__srv__AutoModeWithModule_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_rtc_msgs__srv__AutoModeWithModule_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_rtc_msgs__srv__AutoModeWithModule_Request__fini(&data[i - 1]);
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
tier4_rtc_msgs__srv__AutoModeWithModule_Request__Sequence__fini(tier4_rtc_msgs__srv__AutoModeWithModule_Request__Sequence * array)
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
      tier4_rtc_msgs__srv__AutoModeWithModule_Request__fini(&array->data[i]);
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

tier4_rtc_msgs__srv__AutoModeWithModule_Request__Sequence *
tier4_rtc_msgs__srv__AutoModeWithModule_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_rtc_msgs__srv__AutoModeWithModule_Request__Sequence * array = (tier4_rtc_msgs__srv__AutoModeWithModule_Request__Sequence *)allocator.allocate(sizeof(tier4_rtc_msgs__srv__AutoModeWithModule_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_rtc_msgs__srv__AutoModeWithModule_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_rtc_msgs__srv__AutoModeWithModule_Request__Sequence__destroy(tier4_rtc_msgs__srv__AutoModeWithModule_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_rtc_msgs__srv__AutoModeWithModule_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_rtc_msgs__srv__AutoModeWithModule_Request__Sequence__are_equal(const tier4_rtc_msgs__srv__AutoModeWithModule_Request__Sequence * lhs, const tier4_rtc_msgs__srv__AutoModeWithModule_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_rtc_msgs__srv__AutoModeWithModule_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_rtc_msgs__srv__AutoModeWithModule_Request__Sequence__copy(
  const tier4_rtc_msgs__srv__AutoModeWithModule_Request__Sequence * input,
  tier4_rtc_msgs__srv__AutoModeWithModule_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_rtc_msgs__srv__AutoModeWithModule_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_rtc_msgs__srv__AutoModeWithModule_Request * data =
      (tier4_rtc_msgs__srv__AutoModeWithModule_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_rtc_msgs__srv__AutoModeWithModule_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_rtc_msgs__srv__AutoModeWithModule_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_rtc_msgs__srv__AutoModeWithModule_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tier4_rtc_msgs__srv__AutoModeWithModule_Response__init(tier4_rtc_msgs__srv__AutoModeWithModule_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
tier4_rtc_msgs__srv__AutoModeWithModule_Response__fini(tier4_rtc_msgs__srv__AutoModeWithModule_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
tier4_rtc_msgs__srv__AutoModeWithModule_Response__are_equal(const tier4_rtc_msgs__srv__AutoModeWithModule_Response * lhs, const tier4_rtc_msgs__srv__AutoModeWithModule_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
tier4_rtc_msgs__srv__AutoModeWithModule_Response__copy(
  const tier4_rtc_msgs__srv__AutoModeWithModule_Response * input,
  tier4_rtc_msgs__srv__AutoModeWithModule_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

tier4_rtc_msgs__srv__AutoModeWithModule_Response *
tier4_rtc_msgs__srv__AutoModeWithModule_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_rtc_msgs__srv__AutoModeWithModule_Response * msg = (tier4_rtc_msgs__srv__AutoModeWithModule_Response *)allocator.allocate(sizeof(tier4_rtc_msgs__srv__AutoModeWithModule_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_rtc_msgs__srv__AutoModeWithModule_Response));
  bool success = tier4_rtc_msgs__srv__AutoModeWithModule_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_rtc_msgs__srv__AutoModeWithModule_Response__destroy(tier4_rtc_msgs__srv__AutoModeWithModule_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_rtc_msgs__srv__AutoModeWithModule_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_rtc_msgs__srv__AutoModeWithModule_Response__Sequence__init(tier4_rtc_msgs__srv__AutoModeWithModule_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_rtc_msgs__srv__AutoModeWithModule_Response * data = NULL;

  if (size) {
    data = (tier4_rtc_msgs__srv__AutoModeWithModule_Response *)allocator.zero_allocate(size, sizeof(tier4_rtc_msgs__srv__AutoModeWithModule_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_rtc_msgs__srv__AutoModeWithModule_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_rtc_msgs__srv__AutoModeWithModule_Response__fini(&data[i - 1]);
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
tier4_rtc_msgs__srv__AutoModeWithModule_Response__Sequence__fini(tier4_rtc_msgs__srv__AutoModeWithModule_Response__Sequence * array)
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
      tier4_rtc_msgs__srv__AutoModeWithModule_Response__fini(&array->data[i]);
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

tier4_rtc_msgs__srv__AutoModeWithModule_Response__Sequence *
tier4_rtc_msgs__srv__AutoModeWithModule_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_rtc_msgs__srv__AutoModeWithModule_Response__Sequence * array = (tier4_rtc_msgs__srv__AutoModeWithModule_Response__Sequence *)allocator.allocate(sizeof(tier4_rtc_msgs__srv__AutoModeWithModule_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_rtc_msgs__srv__AutoModeWithModule_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_rtc_msgs__srv__AutoModeWithModule_Response__Sequence__destroy(tier4_rtc_msgs__srv__AutoModeWithModule_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_rtc_msgs__srv__AutoModeWithModule_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_rtc_msgs__srv__AutoModeWithModule_Response__Sequence__are_equal(const tier4_rtc_msgs__srv__AutoModeWithModule_Response__Sequence * lhs, const tier4_rtc_msgs__srv__AutoModeWithModule_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_rtc_msgs__srv__AutoModeWithModule_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_rtc_msgs__srv__AutoModeWithModule_Response__Sequence__copy(
  const tier4_rtc_msgs__srv__AutoModeWithModule_Response__Sequence * input,
  tier4_rtc_msgs__srv__AutoModeWithModule_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_rtc_msgs__srv__AutoModeWithModule_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_rtc_msgs__srv__AutoModeWithModule_Response * data =
      (tier4_rtc_msgs__srv__AutoModeWithModule_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_rtc_msgs__srv__AutoModeWithModule_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_rtc_msgs__srv__AutoModeWithModule_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_rtc_msgs__srv__AutoModeWithModule_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
