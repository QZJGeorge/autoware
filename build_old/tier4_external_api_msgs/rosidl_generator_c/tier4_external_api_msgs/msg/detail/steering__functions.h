// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tier4_external_api_msgs:msg/Steering.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__STEERING__FUNCTIONS_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__STEERING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tier4_external_api_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tier4_external_api_msgs/msg/detail/steering__struct.h"

/// Initialize msg/Steering message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tier4_external_api_msgs__msg__Steering
 * )) before or use
 * tier4_external_api_msgs__msg__Steering__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
bool
tier4_external_api_msgs__msg__Steering__init(tier4_external_api_msgs__msg__Steering * msg);

/// Finalize msg/Steering message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
void
tier4_external_api_msgs__msg__Steering__fini(tier4_external_api_msgs__msg__Steering * msg);

/// Create msg/Steering message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tier4_external_api_msgs__msg__Steering__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
tier4_external_api_msgs__msg__Steering *
tier4_external_api_msgs__msg__Steering__create();

/// Destroy msg/Steering message.
/**
 * It calls
 * tier4_external_api_msgs__msg__Steering__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
void
tier4_external_api_msgs__msg__Steering__destroy(tier4_external_api_msgs__msg__Steering * msg);

/// Check for msg/Steering message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
bool
tier4_external_api_msgs__msg__Steering__are_equal(const tier4_external_api_msgs__msg__Steering * lhs, const tier4_external_api_msgs__msg__Steering * rhs);

/// Copy a msg/Steering message.
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
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
bool
tier4_external_api_msgs__msg__Steering__copy(
  const tier4_external_api_msgs__msg__Steering * input,
  tier4_external_api_msgs__msg__Steering * output);

/// Initialize array of msg/Steering messages.
/**
 * It allocates the memory for the number of elements and calls
 * tier4_external_api_msgs__msg__Steering__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
bool
tier4_external_api_msgs__msg__Steering__Sequence__init(tier4_external_api_msgs__msg__Steering__Sequence * array, size_t size);

/// Finalize array of msg/Steering messages.
/**
 * It calls
 * tier4_external_api_msgs__msg__Steering__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
void
tier4_external_api_msgs__msg__Steering__Sequence__fini(tier4_external_api_msgs__msg__Steering__Sequence * array);

/// Create array of msg/Steering messages.
/**
 * It allocates the memory for the array and calls
 * tier4_external_api_msgs__msg__Steering__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
tier4_external_api_msgs__msg__Steering__Sequence *
tier4_external_api_msgs__msg__Steering__Sequence__create(size_t size);

/// Destroy array of msg/Steering messages.
/**
 * It calls
 * tier4_external_api_msgs__msg__Steering__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
void
tier4_external_api_msgs__msg__Steering__Sequence__destroy(tier4_external_api_msgs__msg__Steering__Sequence * array);

/// Check for msg/Steering message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
bool
tier4_external_api_msgs__msg__Steering__Sequence__are_equal(const tier4_external_api_msgs__msg__Steering__Sequence * lhs, const tier4_external_api_msgs__msg__Steering__Sequence * rhs);

/// Copy an array of msg/Steering messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tier4_external_api_msgs
bool
tier4_external_api_msgs__msg__Steering__Sequence__copy(
  const tier4_external_api_msgs__msg__Steering__Sequence * input,
  tier4_external_api_msgs__msg__Steering__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__STEERING__FUNCTIONS_H_
