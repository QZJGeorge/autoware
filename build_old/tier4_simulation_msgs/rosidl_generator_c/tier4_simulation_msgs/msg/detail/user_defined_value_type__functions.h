// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tier4_simulation_msgs:msg/UserDefinedValueType.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE_TYPE__FUNCTIONS_H_
#define TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE_TYPE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tier4_simulation_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tier4_simulation_msgs/msg/detail/user_defined_value_type__struct.h"

/// Initialize msg/UserDefinedValueType message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tier4_simulation_msgs__msg__UserDefinedValueType
 * )) before or use
 * tier4_simulation_msgs__msg__UserDefinedValueType__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_simulation_msgs
bool
tier4_simulation_msgs__msg__UserDefinedValueType__init(tier4_simulation_msgs__msg__UserDefinedValueType * msg);

/// Finalize msg/UserDefinedValueType message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_simulation_msgs
void
tier4_simulation_msgs__msg__UserDefinedValueType__fini(tier4_simulation_msgs__msg__UserDefinedValueType * msg);

/// Create msg/UserDefinedValueType message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tier4_simulation_msgs__msg__UserDefinedValueType__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_simulation_msgs
tier4_simulation_msgs__msg__UserDefinedValueType *
tier4_simulation_msgs__msg__UserDefinedValueType__create();

/// Destroy msg/UserDefinedValueType message.
/**
 * It calls
 * tier4_simulation_msgs__msg__UserDefinedValueType__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_simulation_msgs
void
tier4_simulation_msgs__msg__UserDefinedValueType__destroy(tier4_simulation_msgs__msg__UserDefinedValueType * msg);

/// Check for msg/UserDefinedValueType message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_simulation_msgs
bool
tier4_simulation_msgs__msg__UserDefinedValueType__are_equal(const tier4_simulation_msgs__msg__UserDefinedValueType * lhs, const tier4_simulation_msgs__msg__UserDefinedValueType * rhs);

/// Copy a msg/UserDefinedValueType message.
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
ROSIDL_GENERATOR_C_PUBLIC_tier4_simulation_msgs
bool
tier4_simulation_msgs__msg__UserDefinedValueType__copy(
  const tier4_simulation_msgs__msg__UserDefinedValueType * input,
  tier4_simulation_msgs__msg__UserDefinedValueType * output);

/// Initialize array of msg/UserDefinedValueType messages.
/**
 * It allocates the memory for the number of elements and calls
 * tier4_simulation_msgs__msg__UserDefinedValueType__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_simulation_msgs
bool
tier4_simulation_msgs__msg__UserDefinedValueType__Sequence__init(tier4_simulation_msgs__msg__UserDefinedValueType__Sequence * array, size_t size);

/// Finalize array of msg/UserDefinedValueType messages.
/**
 * It calls
 * tier4_simulation_msgs__msg__UserDefinedValueType__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_simulation_msgs
void
tier4_simulation_msgs__msg__UserDefinedValueType__Sequence__fini(tier4_simulation_msgs__msg__UserDefinedValueType__Sequence * array);

/// Create array of msg/UserDefinedValueType messages.
/**
 * It allocates the memory for the array and calls
 * tier4_simulation_msgs__msg__UserDefinedValueType__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_simulation_msgs
tier4_simulation_msgs__msg__UserDefinedValueType__Sequence *
tier4_simulation_msgs__msg__UserDefinedValueType__Sequence__create(size_t size);

/// Destroy array of msg/UserDefinedValueType messages.
/**
 * It calls
 * tier4_simulation_msgs__msg__UserDefinedValueType__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_simulation_msgs
void
tier4_simulation_msgs__msg__UserDefinedValueType__Sequence__destroy(tier4_simulation_msgs__msg__UserDefinedValueType__Sequence * array);

/// Check for msg/UserDefinedValueType message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_simulation_msgs
bool
tier4_simulation_msgs__msg__UserDefinedValueType__Sequence__are_equal(const tier4_simulation_msgs__msg__UserDefinedValueType__Sequence * lhs, const tier4_simulation_msgs__msg__UserDefinedValueType__Sequence * rhs);

/// Copy an array of msg/UserDefinedValueType messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tier4_simulation_msgs
bool
tier4_simulation_msgs__msg__UserDefinedValueType__Sequence__copy(
  const tier4_simulation_msgs__msg__UserDefinedValueType__Sequence * input,
  tier4_simulation_msgs__msg__UserDefinedValueType__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE_TYPE__FUNCTIONS_H_
