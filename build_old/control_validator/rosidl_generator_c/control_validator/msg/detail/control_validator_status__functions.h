// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from control_validator:msg/ControlValidatorStatus.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_VALIDATOR__MSG__DETAIL__CONTROL_VALIDATOR_STATUS__FUNCTIONS_H_
#define CONTROL_VALIDATOR__MSG__DETAIL__CONTROL_VALIDATOR_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "control_validator/msg/rosidl_generator_c__visibility_control.h"

#include "control_validator/msg/detail/control_validator_status__struct.h"

/// Initialize msg/ControlValidatorStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * control_validator__msg__ControlValidatorStatus
 * )) before or use
 * control_validator__msg__ControlValidatorStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_control_validator
bool
control_validator__msg__ControlValidatorStatus__init(control_validator__msg__ControlValidatorStatus * msg);

/// Finalize msg/ControlValidatorStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_validator
void
control_validator__msg__ControlValidatorStatus__fini(control_validator__msg__ControlValidatorStatus * msg);

/// Create msg/ControlValidatorStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * control_validator__msg__ControlValidatorStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_validator
control_validator__msg__ControlValidatorStatus *
control_validator__msg__ControlValidatorStatus__create();

/// Destroy msg/ControlValidatorStatus message.
/**
 * It calls
 * control_validator__msg__ControlValidatorStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_validator
void
control_validator__msg__ControlValidatorStatus__destroy(control_validator__msg__ControlValidatorStatus * msg);

/// Check for msg/ControlValidatorStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_validator
bool
control_validator__msg__ControlValidatorStatus__are_equal(const control_validator__msg__ControlValidatorStatus * lhs, const control_validator__msg__ControlValidatorStatus * rhs);

/// Copy a msg/ControlValidatorStatus message.
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
ROSIDL_GENERATOR_C_PUBLIC_control_validator
bool
control_validator__msg__ControlValidatorStatus__copy(
  const control_validator__msg__ControlValidatorStatus * input,
  control_validator__msg__ControlValidatorStatus * output);

/// Initialize array of msg/ControlValidatorStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * control_validator__msg__ControlValidatorStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_validator
bool
control_validator__msg__ControlValidatorStatus__Sequence__init(control_validator__msg__ControlValidatorStatus__Sequence * array, size_t size);

/// Finalize array of msg/ControlValidatorStatus messages.
/**
 * It calls
 * control_validator__msg__ControlValidatorStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_validator
void
control_validator__msg__ControlValidatorStatus__Sequence__fini(control_validator__msg__ControlValidatorStatus__Sequence * array);

/// Create array of msg/ControlValidatorStatus messages.
/**
 * It allocates the memory for the array and calls
 * control_validator__msg__ControlValidatorStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_control_validator
control_validator__msg__ControlValidatorStatus__Sequence *
control_validator__msg__ControlValidatorStatus__Sequence__create(size_t size);

/// Destroy array of msg/ControlValidatorStatus messages.
/**
 * It calls
 * control_validator__msg__ControlValidatorStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_validator
void
control_validator__msg__ControlValidatorStatus__Sequence__destroy(control_validator__msg__ControlValidatorStatus__Sequence * array);

/// Check for msg/ControlValidatorStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_control_validator
bool
control_validator__msg__ControlValidatorStatus__Sequence__are_equal(const control_validator__msg__ControlValidatorStatus__Sequence * lhs, const control_validator__msg__ControlValidatorStatus__Sequence * rhs);

/// Copy an array of msg/ControlValidatorStatus messages.
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
ROSIDL_GENERATOR_C_PUBLIC_control_validator
bool
control_validator__msg__ControlValidatorStatus__Sequence__copy(
  const control_validator__msg__ControlValidatorStatus__Sequence * input,
  control_validator__msg__ControlValidatorStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_VALIDATOR__MSG__DETAIL__CONTROL_VALIDATOR_STATUS__FUNCTIONS_H_
