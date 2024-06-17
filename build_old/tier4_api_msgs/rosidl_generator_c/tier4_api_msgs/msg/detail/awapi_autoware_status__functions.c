// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_api_msgs:msg/AwapiAutowareStatus.idl
// generated code does not contain a copyright notice
#include "tier4_api_msgs/msg/detail/awapi_autoware_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `autoware_state`
#include "rosidl_runtime_c/string_functions.h"
// Member `hazard_status`
#include "tier4_system_msgs/msg/detail/hazard_status_stamped__functions.h"
// Member `stop_reason`
#include "tier4_planning_msgs/msg/detail/stop_reason_array__functions.h"
// Member `diagnostics`
// Member `error_diagnostics`
#include "diagnostic_msgs/msg/detail/diagnostic_status__functions.h"

bool
tier4_api_msgs__msg__AwapiAutowareStatus__init(tier4_api_msgs__msg__AwapiAutowareStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tier4_api_msgs__msg__AwapiAutowareStatus__fini(msg);
    return false;
  }
  // autoware_state
  if (!rosidl_runtime_c__String__init(&msg->autoware_state)) {
    tier4_api_msgs__msg__AwapiAutowareStatus__fini(msg);
    return false;
  }
  // control_mode
  // gate_mode
  // emergency_stopped
  // current_max_velocity
  // hazard_status
  if (!tier4_system_msgs__msg__HazardStatusStamped__init(&msg->hazard_status)) {
    tier4_api_msgs__msg__AwapiAutowareStatus__fini(msg);
    return false;
  }
  // stop_reason
  if (!tier4_planning_msgs__msg__StopReasonArray__init(&msg->stop_reason)) {
    tier4_api_msgs__msg__AwapiAutowareStatus__fini(msg);
    return false;
  }
  // diagnostics
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&msg->diagnostics, 0)) {
    tier4_api_msgs__msg__AwapiAutowareStatus__fini(msg);
    return false;
  }
  // error_diagnostics
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&msg->error_diagnostics, 0)) {
    tier4_api_msgs__msg__AwapiAutowareStatus__fini(msg);
    return false;
  }
  // autonomous_overridden
  // arrived_goal
  return true;
}

void
tier4_api_msgs__msg__AwapiAutowareStatus__fini(tier4_api_msgs__msg__AwapiAutowareStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // autoware_state
  rosidl_runtime_c__String__fini(&msg->autoware_state);
  // control_mode
  // gate_mode
  // emergency_stopped
  // current_max_velocity
  // hazard_status
  tier4_system_msgs__msg__HazardStatusStamped__fini(&msg->hazard_status);
  // stop_reason
  tier4_planning_msgs__msg__StopReasonArray__fini(&msg->stop_reason);
  // diagnostics
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&msg->diagnostics);
  // error_diagnostics
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&msg->error_diagnostics);
  // autonomous_overridden
  // arrived_goal
}

bool
tier4_api_msgs__msg__AwapiAutowareStatus__are_equal(const tier4_api_msgs__msg__AwapiAutowareStatus * lhs, const tier4_api_msgs__msg__AwapiAutowareStatus * rhs)
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
  // autoware_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->autoware_state), &(rhs->autoware_state)))
  {
    return false;
  }
  // control_mode
  if (lhs->control_mode != rhs->control_mode) {
    return false;
  }
  // gate_mode
  if (lhs->gate_mode != rhs->gate_mode) {
    return false;
  }
  // emergency_stopped
  if (lhs->emergency_stopped != rhs->emergency_stopped) {
    return false;
  }
  // current_max_velocity
  if (lhs->current_max_velocity != rhs->current_max_velocity) {
    return false;
  }
  // hazard_status
  if (!tier4_system_msgs__msg__HazardStatusStamped__are_equal(
      &(lhs->hazard_status), &(rhs->hazard_status)))
  {
    return false;
  }
  // stop_reason
  if (!tier4_planning_msgs__msg__StopReasonArray__are_equal(
      &(lhs->stop_reason), &(rhs->stop_reason)))
  {
    return false;
  }
  // diagnostics
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__are_equal(
      &(lhs->diagnostics), &(rhs->diagnostics)))
  {
    return false;
  }
  // error_diagnostics
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__are_equal(
      &(lhs->error_diagnostics), &(rhs->error_diagnostics)))
  {
    return false;
  }
  // autonomous_overridden
  if (lhs->autonomous_overridden != rhs->autonomous_overridden) {
    return false;
  }
  // arrived_goal
  if (lhs->arrived_goal != rhs->arrived_goal) {
    return false;
  }
  return true;
}

bool
tier4_api_msgs__msg__AwapiAutowareStatus__copy(
  const tier4_api_msgs__msg__AwapiAutowareStatus * input,
  tier4_api_msgs__msg__AwapiAutowareStatus * output)
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
  // autoware_state
  if (!rosidl_runtime_c__String__copy(
      &(input->autoware_state), &(output->autoware_state)))
  {
    return false;
  }
  // control_mode
  output->control_mode = input->control_mode;
  // gate_mode
  output->gate_mode = input->gate_mode;
  // emergency_stopped
  output->emergency_stopped = input->emergency_stopped;
  // current_max_velocity
  output->current_max_velocity = input->current_max_velocity;
  // hazard_status
  if (!tier4_system_msgs__msg__HazardStatusStamped__copy(
      &(input->hazard_status), &(output->hazard_status)))
  {
    return false;
  }
  // stop_reason
  if (!tier4_planning_msgs__msg__StopReasonArray__copy(
      &(input->stop_reason), &(output->stop_reason)))
  {
    return false;
  }
  // diagnostics
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__copy(
      &(input->diagnostics), &(output->diagnostics)))
  {
    return false;
  }
  // error_diagnostics
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__copy(
      &(input->error_diagnostics), &(output->error_diagnostics)))
  {
    return false;
  }
  // autonomous_overridden
  output->autonomous_overridden = input->autonomous_overridden;
  // arrived_goal
  output->arrived_goal = input->arrived_goal;
  return true;
}

tier4_api_msgs__msg__AwapiAutowareStatus *
tier4_api_msgs__msg__AwapiAutowareStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_api_msgs__msg__AwapiAutowareStatus * msg = (tier4_api_msgs__msg__AwapiAutowareStatus *)allocator.allocate(sizeof(tier4_api_msgs__msg__AwapiAutowareStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_api_msgs__msg__AwapiAutowareStatus));
  bool success = tier4_api_msgs__msg__AwapiAutowareStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_api_msgs__msg__AwapiAutowareStatus__destroy(tier4_api_msgs__msg__AwapiAutowareStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_api_msgs__msg__AwapiAutowareStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_api_msgs__msg__AwapiAutowareStatus__Sequence__init(tier4_api_msgs__msg__AwapiAutowareStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_api_msgs__msg__AwapiAutowareStatus * data = NULL;

  if (size) {
    data = (tier4_api_msgs__msg__AwapiAutowareStatus *)allocator.zero_allocate(size, sizeof(tier4_api_msgs__msg__AwapiAutowareStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_api_msgs__msg__AwapiAutowareStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_api_msgs__msg__AwapiAutowareStatus__fini(&data[i - 1]);
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
tier4_api_msgs__msg__AwapiAutowareStatus__Sequence__fini(tier4_api_msgs__msg__AwapiAutowareStatus__Sequence * array)
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
      tier4_api_msgs__msg__AwapiAutowareStatus__fini(&array->data[i]);
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

tier4_api_msgs__msg__AwapiAutowareStatus__Sequence *
tier4_api_msgs__msg__AwapiAutowareStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_api_msgs__msg__AwapiAutowareStatus__Sequence * array = (tier4_api_msgs__msg__AwapiAutowareStatus__Sequence *)allocator.allocate(sizeof(tier4_api_msgs__msg__AwapiAutowareStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_api_msgs__msg__AwapiAutowareStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_api_msgs__msg__AwapiAutowareStatus__Sequence__destroy(tier4_api_msgs__msg__AwapiAutowareStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_api_msgs__msg__AwapiAutowareStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_api_msgs__msg__AwapiAutowareStatus__Sequence__are_equal(const tier4_api_msgs__msg__AwapiAutowareStatus__Sequence * lhs, const tier4_api_msgs__msg__AwapiAutowareStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_api_msgs__msg__AwapiAutowareStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_api_msgs__msg__AwapiAutowareStatus__Sequence__copy(
  const tier4_api_msgs__msg__AwapiAutowareStatus__Sequence * input,
  tier4_api_msgs__msg__AwapiAutowareStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_api_msgs__msg__AwapiAutowareStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tier4_api_msgs__msg__AwapiAutowareStatus * data =
      (tier4_api_msgs__msg__AwapiAutowareStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_api_msgs__msg__AwapiAutowareStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tier4_api_msgs__msg__AwapiAutowareStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_api_msgs__msg__AwapiAutowareStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
