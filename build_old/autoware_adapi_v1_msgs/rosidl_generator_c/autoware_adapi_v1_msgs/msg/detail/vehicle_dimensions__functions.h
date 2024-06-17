// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from autoware_adapi_v1_msgs:msg/VehicleDimensions.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__FUNCTIONS_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "autoware_adapi_v1_msgs/msg/detail/vehicle_dimensions__struct.h"

/// Initialize msg/VehicleDimensions message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_adapi_v1_msgs__msg__VehicleDimensions
 * )) before or use
 * autoware_adapi_v1_msgs__msg__VehicleDimensions__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
bool
autoware_adapi_v1_msgs__msg__VehicleDimensions__init(autoware_adapi_v1_msgs__msg__VehicleDimensions * msg);

/// Finalize msg/VehicleDimensions message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
void
autoware_adapi_v1_msgs__msg__VehicleDimensions__fini(autoware_adapi_v1_msgs__msg__VehicleDimensions * msg);

/// Create msg/VehicleDimensions message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_adapi_v1_msgs__msg__VehicleDimensions__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
autoware_adapi_v1_msgs__msg__VehicleDimensions *
autoware_adapi_v1_msgs__msg__VehicleDimensions__create();

/// Destroy msg/VehicleDimensions message.
/**
 * It calls
 * autoware_adapi_v1_msgs__msg__VehicleDimensions__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
void
autoware_adapi_v1_msgs__msg__VehicleDimensions__destroy(autoware_adapi_v1_msgs__msg__VehicleDimensions * msg);

/// Check for msg/VehicleDimensions message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
bool
autoware_adapi_v1_msgs__msg__VehicleDimensions__are_equal(const autoware_adapi_v1_msgs__msg__VehicleDimensions * lhs, const autoware_adapi_v1_msgs__msg__VehicleDimensions * rhs);

/// Copy a msg/VehicleDimensions message.
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
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
bool
autoware_adapi_v1_msgs__msg__VehicleDimensions__copy(
  const autoware_adapi_v1_msgs__msg__VehicleDimensions * input,
  autoware_adapi_v1_msgs__msg__VehicleDimensions * output);

/// Initialize array of msg/VehicleDimensions messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_adapi_v1_msgs__msg__VehicleDimensions__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
bool
autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence__init(autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence * array, size_t size);

/// Finalize array of msg/VehicleDimensions messages.
/**
 * It calls
 * autoware_adapi_v1_msgs__msg__VehicleDimensions__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
void
autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence__fini(autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence * array);

/// Create array of msg/VehicleDimensions messages.
/**
 * It allocates the memory for the array and calls
 * autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence *
autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence__create(size_t size);

/// Destroy array of msg/VehicleDimensions messages.
/**
 * It calls
 * autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
void
autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence__destroy(autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence * array);

/// Check for msg/VehicleDimensions message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
bool
autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence__are_equal(const autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence * lhs, const autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence * rhs);

/// Copy an array of msg/VehicleDimensions messages.
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
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
bool
autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence__copy(
  const autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence * input,
  autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__FUNCTIONS_H_
