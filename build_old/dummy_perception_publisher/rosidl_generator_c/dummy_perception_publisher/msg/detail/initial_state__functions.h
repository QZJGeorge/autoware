// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dummy_perception_publisher:msg/InitialState.idl
// generated code does not contain a copyright notice

#ifndef DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__INITIAL_STATE__FUNCTIONS_H_
#define DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__INITIAL_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dummy_perception_publisher/msg/rosidl_generator_c__visibility_control.h"

#include "dummy_perception_publisher/msg/detail/initial_state__struct.h"

/// Initialize msg/InitialState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dummy_perception_publisher__msg__InitialState
 * )) before or use
 * dummy_perception_publisher__msg__InitialState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dummy_perception_publisher
bool
dummy_perception_publisher__msg__InitialState__init(dummy_perception_publisher__msg__InitialState * msg);

/// Finalize msg/InitialState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dummy_perception_publisher
void
dummy_perception_publisher__msg__InitialState__fini(dummy_perception_publisher__msg__InitialState * msg);

/// Create msg/InitialState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dummy_perception_publisher__msg__InitialState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dummy_perception_publisher
dummy_perception_publisher__msg__InitialState *
dummy_perception_publisher__msg__InitialState__create();

/// Destroy msg/InitialState message.
/**
 * It calls
 * dummy_perception_publisher__msg__InitialState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dummy_perception_publisher
void
dummy_perception_publisher__msg__InitialState__destroy(dummy_perception_publisher__msg__InitialState * msg);

/// Check for msg/InitialState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dummy_perception_publisher
bool
dummy_perception_publisher__msg__InitialState__are_equal(const dummy_perception_publisher__msg__InitialState * lhs, const dummy_perception_publisher__msg__InitialState * rhs);

/// Copy a msg/InitialState message.
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
ROSIDL_GENERATOR_C_PUBLIC_dummy_perception_publisher
bool
dummy_perception_publisher__msg__InitialState__copy(
  const dummy_perception_publisher__msg__InitialState * input,
  dummy_perception_publisher__msg__InitialState * output);

/// Initialize array of msg/InitialState messages.
/**
 * It allocates the memory for the number of elements and calls
 * dummy_perception_publisher__msg__InitialState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dummy_perception_publisher
bool
dummy_perception_publisher__msg__InitialState__Sequence__init(dummy_perception_publisher__msg__InitialState__Sequence * array, size_t size);

/// Finalize array of msg/InitialState messages.
/**
 * It calls
 * dummy_perception_publisher__msg__InitialState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dummy_perception_publisher
void
dummy_perception_publisher__msg__InitialState__Sequence__fini(dummy_perception_publisher__msg__InitialState__Sequence * array);

/// Create array of msg/InitialState messages.
/**
 * It allocates the memory for the array and calls
 * dummy_perception_publisher__msg__InitialState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dummy_perception_publisher
dummy_perception_publisher__msg__InitialState__Sequence *
dummy_perception_publisher__msg__InitialState__Sequence__create(size_t size);

/// Destroy array of msg/InitialState messages.
/**
 * It calls
 * dummy_perception_publisher__msg__InitialState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dummy_perception_publisher
void
dummy_perception_publisher__msg__InitialState__Sequence__destroy(dummy_perception_publisher__msg__InitialState__Sequence * array);

/// Check for msg/InitialState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dummy_perception_publisher
bool
dummy_perception_publisher__msg__InitialState__Sequence__are_equal(const dummy_perception_publisher__msg__InitialState__Sequence * lhs, const dummy_perception_publisher__msg__InitialState__Sequence * rhs);

/// Copy an array of msg/InitialState messages.
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
ROSIDL_GENERATOR_C_PUBLIC_dummy_perception_publisher
bool
dummy_perception_publisher__msg__InitialState__Sequence__copy(
  const dummy_perception_publisher__msg__InitialState__Sequence * input,
  dummy_perception_publisher__msg__InitialState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__INITIAL_STATE__FUNCTIONS_H_
