// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from operation_mode_transition_manager:msg/OperationModeTransitionManagerDebug.idl
// generated code does not contain a copyright notice

#ifndef OPERATION_MODE_TRANSITION_MANAGER__MSG__DETAIL__OPERATION_MODE_TRANSITION_MANAGER_DEBUG__FUNCTIONS_H_
#define OPERATION_MODE_TRANSITION_MANAGER__MSG__DETAIL__OPERATION_MODE_TRANSITION_MANAGER_DEBUG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "operation_mode_transition_manager/msg/rosidl_generator_c__visibility_control.h"

#include "operation_mode_transition_manager/msg/detail/operation_mode_transition_manager_debug__struct.h"

/// Initialize msg/OperationModeTransitionManagerDebug message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug
 * )) before or use
 * operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_operation_mode_transition_manager
bool
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__init(operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * msg);

/// Finalize msg/OperationModeTransitionManagerDebug message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_operation_mode_transition_manager
void
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__fini(operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * msg);

/// Create msg/OperationModeTransitionManagerDebug message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_operation_mode_transition_manager
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug *
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__create();

/// Destroy msg/OperationModeTransitionManagerDebug message.
/**
 * It calls
 * operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_operation_mode_transition_manager
void
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__destroy(operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * msg);

/// Check for msg/OperationModeTransitionManagerDebug message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_operation_mode_transition_manager
bool
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__are_equal(const operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * lhs, const operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * rhs);

/// Copy a msg/OperationModeTransitionManagerDebug message.
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
ROSIDL_GENERATOR_C_PUBLIC_operation_mode_transition_manager
bool
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__copy(
  const operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * input,
  operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * output);

/// Initialize array of msg/OperationModeTransitionManagerDebug messages.
/**
 * It allocates the memory for the number of elements and calls
 * operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_operation_mode_transition_manager
bool
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence__init(operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence * array, size_t size);

/// Finalize array of msg/OperationModeTransitionManagerDebug messages.
/**
 * It calls
 * operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_operation_mode_transition_manager
void
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence__fini(operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence * array);

/// Create array of msg/OperationModeTransitionManagerDebug messages.
/**
 * It allocates the memory for the array and calls
 * operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_operation_mode_transition_manager
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence *
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence__create(size_t size);

/// Destroy array of msg/OperationModeTransitionManagerDebug messages.
/**
 * It calls
 * operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_operation_mode_transition_manager
void
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence__destroy(operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence * array);

/// Check for msg/OperationModeTransitionManagerDebug message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_operation_mode_transition_manager
bool
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence__are_equal(const operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence * lhs, const operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence * rhs);

/// Copy an array of msg/OperationModeTransitionManagerDebug messages.
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
ROSIDL_GENERATOR_C_PUBLIC_operation_mode_transition_manager
bool
operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence__copy(
  const operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence * input,
  operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OPERATION_MODE_TRANSITION_MANAGER__MSG__DETAIL__OPERATION_MODE_TRANSITION_MANAGER_DEBUG__FUNCTIONS_H_
