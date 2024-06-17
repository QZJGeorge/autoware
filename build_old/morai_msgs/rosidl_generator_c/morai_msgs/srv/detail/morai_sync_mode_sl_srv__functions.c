// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:srv/MoraiSyncModeSLSrv.idl
// generated code does not contain a copyright notice
#include "morai_msgs/srv/detail/morai_sync_mode_sl_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `request`
#include "morai_msgs/msg/detail/sync_mode_scenario_load__functions.h"

bool
morai_msgs__srv__MoraiSyncModeSLSrv_Request__init(morai_msgs__srv__MoraiSyncModeSLSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // request
  if (!morai_msgs__msg__SyncModeScenarioLoad__init(&msg->request)) {
    morai_msgs__srv__MoraiSyncModeSLSrv_Request__fini(msg);
    return false;
  }
  return true;
}

void
morai_msgs__srv__MoraiSyncModeSLSrv_Request__fini(morai_msgs__srv__MoraiSyncModeSLSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // request
  morai_msgs__msg__SyncModeScenarioLoad__fini(&msg->request);
}

bool
morai_msgs__srv__MoraiSyncModeSLSrv_Request__are_equal(const morai_msgs__srv__MoraiSyncModeSLSrv_Request * lhs, const morai_msgs__srv__MoraiSyncModeSLSrv_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request
  if (!morai_msgs__msg__SyncModeScenarioLoad__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  return true;
}

bool
morai_msgs__srv__MoraiSyncModeSLSrv_Request__copy(
  const morai_msgs__srv__MoraiSyncModeSLSrv_Request * input,
  morai_msgs__srv__MoraiSyncModeSLSrv_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // request
  if (!morai_msgs__msg__SyncModeScenarioLoad__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  return true;
}

morai_msgs__srv__MoraiSyncModeSLSrv_Request *
morai_msgs__srv__MoraiSyncModeSLSrv_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__srv__MoraiSyncModeSLSrv_Request * msg = (morai_msgs__srv__MoraiSyncModeSLSrv_Request *)allocator.allocate(sizeof(morai_msgs__srv__MoraiSyncModeSLSrv_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__srv__MoraiSyncModeSLSrv_Request));
  bool success = morai_msgs__srv__MoraiSyncModeSLSrv_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
morai_msgs__srv__MoraiSyncModeSLSrv_Request__destroy(morai_msgs__srv__MoraiSyncModeSLSrv_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    morai_msgs__srv__MoraiSyncModeSLSrv_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
morai_msgs__srv__MoraiSyncModeSLSrv_Request__Sequence__init(morai_msgs__srv__MoraiSyncModeSLSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__srv__MoraiSyncModeSLSrv_Request * data = NULL;

  if (size) {
    data = (morai_msgs__srv__MoraiSyncModeSLSrv_Request *)allocator.zero_allocate(size, sizeof(morai_msgs__srv__MoraiSyncModeSLSrv_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__srv__MoraiSyncModeSLSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__srv__MoraiSyncModeSLSrv_Request__fini(&data[i - 1]);
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
morai_msgs__srv__MoraiSyncModeSLSrv_Request__Sequence__fini(morai_msgs__srv__MoraiSyncModeSLSrv_Request__Sequence * array)
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
      morai_msgs__srv__MoraiSyncModeSLSrv_Request__fini(&array->data[i]);
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

morai_msgs__srv__MoraiSyncModeSLSrv_Request__Sequence *
morai_msgs__srv__MoraiSyncModeSLSrv_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__srv__MoraiSyncModeSLSrv_Request__Sequence * array = (morai_msgs__srv__MoraiSyncModeSLSrv_Request__Sequence *)allocator.allocate(sizeof(morai_msgs__srv__MoraiSyncModeSLSrv_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__srv__MoraiSyncModeSLSrv_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
morai_msgs__srv__MoraiSyncModeSLSrv_Request__Sequence__destroy(morai_msgs__srv__MoraiSyncModeSLSrv_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    morai_msgs__srv__MoraiSyncModeSLSrv_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
morai_msgs__srv__MoraiSyncModeSLSrv_Request__Sequence__are_equal(const morai_msgs__srv__MoraiSyncModeSLSrv_Request__Sequence * lhs, const morai_msgs__srv__MoraiSyncModeSLSrv_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__srv__MoraiSyncModeSLSrv_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__srv__MoraiSyncModeSLSrv_Request__Sequence__copy(
  const morai_msgs__srv__MoraiSyncModeSLSrv_Request__Sequence * input,
  morai_msgs__srv__MoraiSyncModeSLSrv_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__srv__MoraiSyncModeSLSrv_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    morai_msgs__srv__MoraiSyncModeSLSrv_Request * data =
      (morai_msgs__srv__MoraiSyncModeSLSrv_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__srv__MoraiSyncModeSLSrv_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          morai_msgs__srv__MoraiSyncModeSLSrv_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!morai_msgs__srv__MoraiSyncModeSLSrv_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `response`
#include "morai_msgs/msg/detail/sync_mode_result_response__functions.h"

bool
morai_msgs__srv__MoraiSyncModeSLSrv_Response__init(morai_msgs__srv__MoraiSyncModeSLSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!morai_msgs__msg__SyncModeResultResponse__init(&msg->response)) {
    morai_msgs__srv__MoraiSyncModeSLSrv_Response__fini(msg);
    return false;
  }
  return true;
}

void
morai_msgs__srv__MoraiSyncModeSLSrv_Response__fini(morai_msgs__srv__MoraiSyncModeSLSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
  morai_msgs__msg__SyncModeResultResponse__fini(&msg->response);
}

bool
morai_msgs__srv__MoraiSyncModeSLSrv_Response__are_equal(const morai_msgs__srv__MoraiSyncModeSLSrv_Response * lhs, const morai_msgs__srv__MoraiSyncModeSLSrv_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (!morai_msgs__msg__SyncModeResultResponse__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
morai_msgs__srv__MoraiSyncModeSLSrv_Response__copy(
  const morai_msgs__srv__MoraiSyncModeSLSrv_Response * input,
  morai_msgs__srv__MoraiSyncModeSLSrv_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  if (!morai_msgs__msg__SyncModeResultResponse__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

morai_msgs__srv__MoraiSyncModeSLSrv_Response *
morai_msgs__srv__MoraiSyncModeSLSrv_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__srv__MoraiSyncModeSLSrv_Response * msg = (morai_msgs__srv__MoraiSyncModeSLSrv_Response *)allocator.allocate(sizeof(morai_msgs__srv__MoraiSyncModeSLSrv_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__srv__MoraiSyncModeSLSrv_Response));
  bool success = morai_msgs__srv__MoraiSyncModeSLSrv_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
morai_msgs__srv__MoraiSyncModeSLSrv_Response__destroy(morai_msgs__srv__MoraiSyncModeSLSrv_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    morai_msgs__srv__MoraiSyncModeSLSrv_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
morai_msgs__srv__MoraiSyncModeSLSrv_Response__Sequence__init(morai_msgs__srv__MoraiSyncModeSLSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__srv__MoraiSyncModeSLSrv_Response * data = NULL;

  if (size) {
    data = (morai_msgs__srv__MoraiSyncModeSLSrv_Response *)allocator.zero_allocate(size, sizeof(morai_msgs__srv__MoraiSyncModeSLSrv_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__srv__MoraiSyncModeSLSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__srv__MoraiSyncModeSLSrv_Response__fini(&data[i - 1]);
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
morai_msgs__srv__MoraiSyncModeSLSrv_Response__Sequence__fini(morai_msgs__srv__MoraiSyncModeSLSrv_Response__Sequence * array)
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
      morai_msgs__srv__MoraiSyncModeSLSrv_Response__fini(&array->data[i]);
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

morai_msgs__srv__MoraiSyncModeSLSrv_Response__Sequence *
morai_msgs__srv__MoraiSyncModeSLSrv_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  morai_msgs__srv__MoraiSyncModeSLSrv_Response__Sequence * array = (morai_msgs__srv__MoraiSyncModeSLSrv_Response__Sequence *)allocator.allocate(sizeof(morai_msgs__srv__MoraiSyncModeSLSrv_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__srv__MoraiSyncModeSLSrv_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
morai_msgs__srv__MoraiSyncModeSLSrv_Response__Sequence__destroy(morai_msgs__srv__MoraiSyncModeSLSrv_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    morai_msgs__srv__MoraiSyncModeSLSrv_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
morai_msgs__srv__MoraiSyncModeSLSrv_Response__Sequence__are_equal(const morai_msgs__srv__MoraiSyncModeSLSrv_Response__Sequence * lhs, const morai_msgs__srv__MoraiSyncModeSLSrv_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__srv__MoraiSyncModeSLSrv_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__srv__MoraiSyncModeSLSrv_Response__Sequence__copy(
  const morai_msgs__srv__MoraiSyncModeSLSrv_Response__Sequence * input,
  morai_msgs__srv__MoraiSyncModeSLSrv_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__srv__MoraiSyncModeSLSrv_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    morai_msgs__srv__MoraiSyncModeSLSrv_Response * data =
      (morai_msgs__srv__MoraiSyncModeSLSrv_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__srv__MoraiSyncModeSLSrv_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          morai_msgs__srv__MoraiSyncModeSLSrv_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!morai_msgs__srv__MoraiSyncModeSLSrv_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
