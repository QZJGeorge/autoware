// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tier4_planning_msgs:msg/AvoidanceDebugMsg.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG__FUNCTIONS_H_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tier4_planning_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tier4_planning_msgs/msg/detail/avoidance_debug_msg__struct.h"

/// Initialize msg/AvoidanceDebugMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tier4_planning_msgs__msg__AvoidanceDebugMsg
 * )) before or use
 * tier4_planning_msgs__msg__AvoidanceDebugMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_planning_msgs
bool
tier4_planning_msgs__msg__AvoidanceDebugMsg__init(tier4_planning_msgs__msg__AvoidanceDebugMsg * msg);

/// Finalize msg/AvoidanceDebugMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_planning_msgs
void
tier4_planning_msgs__msg__AvoidanceDebugMsg__fini(tier4_planning_msgs__msg__AvoidanceDebugMsg * msg);

/// Create msg/AvoidanceDebugMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tier4_planning_msgs__msg__AvoidanceDebugMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_planning_msgs
tier4_planning_msgs__msg__AvoidanceDebugMsg *
tier4_planning_msgs__msg__AvoidanceDebugMsg__create();

/// Destroy msg/AvoidanceDebugMsg message.
/**
 * It calls
 * tier4_planning_msgs__msg__AvoidanceDebugMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_planning_msgs
void
tier4_planning_msgs__msg__AvoidanceDebugMsg__destroy(tier4_planning_msgs__msg__AvoidanceDebugMsg * msg);

/// Check for msg/AvoidanceDebugMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_planning_msgs
bool
tier4_planning_msgs__msg__AvoidanceDebugMsg__are_equal(const tier4_planning_msgs__msg__AvoidanceDebugMsg * lhs, const tier4_planning_msgs__msg__AvoidanceDebugMsg * rhs);

/// Copy a msg/AvoidanceDebugMsg message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_planning_msgs
bool
tier4_planning_msgs__msg__AvoidanceDebugMsg__copy(
  const tier4_planning_msgs__msg__AvoidanceDebugMsg * input,
  tier4_planning_msgs__msg__AvoidanceDebugMsg * output);

/// Initialize array of msg/AvoidanceDebugMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * tier4_planning_msgs__msg__AvoidanceDebugMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_planning_msgs
bool
tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence__init(tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence * array, size_t size);

/// Finalize array of msg/AvoidanceDebugMsg messages.
/**
 * It calls
 * tier4_planning_msgs__msg__AvoidanceDebugMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_planning_msgs
void
tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence__fini(tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence * array);

/// Create array of msg/AvoidanceDebugMsg messages.
/**
 * It allocates the memory for the array and calls
 * tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_planning_msgs
tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence *
tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence__create(size_t size);

/// Destroy array of msg/AvoidanceDebugMsg messages.
/**
 * It calls
 * tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_planning_msgs
void
tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence__destroy(tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence * array);

/// Check for msg/AvoidanceDebugMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_planning_msgs
bool
tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence__are_equal(const tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence * lhs, const tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence * rhs);

/// Copy an array of msg/AvoidanceDebugMsg messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_planning_msgs
bool
tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence__copy(
  const tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence * input,
  tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG__FUNCTIONS_H_
