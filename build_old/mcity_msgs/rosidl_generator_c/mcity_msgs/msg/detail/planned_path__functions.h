// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mcity_msgs:msg/PlannedPath.idl
// generated code does not contain a copyright notice

#ifndef MCITY_MSGS__MSG__DETAIL__PLANNED_PATH__FUNCTIONS_H_
#define MCITY_MSGS__MSG__DETAIL__PLANNED_PATH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mcity_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mcity_msgs/msg/detail/planned_path__struct.h"

/// Initialize msg/PlannedPath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mcity_msgs__msg__PlannedPath
 * )) before or use
 * mcity_msgs__msg__PlannedPath__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mcity_msgs
bool
mcity_msgs__msg__PlannedPath__init(mcity_msgs__msg__PlannedPath * msg);

/// Finalize msg/PlannedPath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mcity_msgs
void
mcity_msgs__msg__PlannedPath__fini(mcity_msgs__msg__PlannedPath * msg);

/// Create msg/PlannedPath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mcity_msgs__msg__PlannedPath__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mcity_msgs
mcity_msgs__msg__PlannedPath *
mcity_msgs__msg__PlannedPath__create();

/// Destroy msg/PlannedPath message.
/**
 * It calls
 * mcity_msgs__msg__PlannedPath__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mcity_msgs
void
mcity_msgs__msg__PlannedPath__destroy(mcity_msgs__msg__PlannedPath * msg);

/// Check for msg/PlannedPath message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mcity_msgs
bool
mcity_msgs__msg__PlannedPath__are_equal(const mcity_msgs__msg__PlannedPath * lhs, const mcity_msgs__msg__PlannedPath * rhs);

/// Copy a msg/PlannedPath message.
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
ROSIDL_GENERATOR_C_PUBLIC_mcity_msgs
bool
mcity_msgs__msg__PlannedPath__copy(
  const mcity_msgs__msg__PlannedPath * input,
  mcity_msgs__msg__PlannedPath * output);

/// Initialize array of msg/PlannedPath messages.
/**
 * It allocates the memory for the number of elements and calls
 * mcity_msgs__msg__PlannedPath__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mcity_msgs
bool
mcity_msgs__msg__PlannedPath__Sequence__init(mcity_msgs__msg__PlannedPath__Sequence * array, size_t size);

/// Finalize array of msg/PlannedPath messages.
/**
 * It calls
 * mcity_msgs__msg__PlannedPath__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mcity_msgs
void
mcity_msgs__msg__PlannedPath__Sequence__fini(mcity_msgs__msg__PlannedPath__Sequence * array);

/// Create array of msg/PlannedPath messages.
/**
 * It allocates the memory for the array and calls
 * mcity_msgs__msg__PlannedPath__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mcity_msgs
mcity_msgs__msg__PlannedPath__Sequence *
mcity_msgs__msg__PlannedPath__Sequence__create(size_t size);

/// Destroy array of msg/PlannedPath messages.
/**
 * It calls
 * mcity_msgs__msg__PlannedPath__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mcity_msgs
void
mcity_msgs__msg__PlannedPath__Sequence__destroy(mcity_msgs__msg__PlannedPath__Sequence * array);

/// Check for msg/PlannedPath message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mcity_msgs
bool
mcity_msgs__msg__PlannedPath__Sequence__are_equal(const mcity_msgs__msg__PlannedPath__Sequence * lhs, const mcity_msgs__msg__PlannedPath__Sequence * rhs);

/// Copy an array of msg/PlannedPath messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mcity_msgs
bool
mcity_msgs__msg__PlannedPath__Sequence__copy(
  const mcity_msgs__msg__PlannedPath__Sequence * input,
  mcity_msgs__msg__PlannedPath__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MCITY_MSGS__MSG__DETAIL__PLANNED_PATH__FUNCTIONS_H_
