// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from autoware_sensing_msgs:msg/GnssInsOrientationStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION_STAMPED__FUNCTIONS_H_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION_STAMPED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "autoware_sensing_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation_stamped__struct.h"

/// Initialize msg/GnssInsOrientationStamped message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_sensing_msgs__msg__GnssInsOrientationStamped
 * )) before or use
 * autoware_sensing_msgs__msg__GnssInsOrientationStamped__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
bool
autoware_sensing_msgs__msg__GnssInsOrientationStamped__init(autoware_sensing_msgs__msg__GnssInsOrientationStamped * msg);

/// Finalize msg/GnssInsOrientationStamped message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
void
autoware_sensing_msgs__msg__GnssInsOrientationStamped__fini(autoware_sensing_msgs__msg__GnssInsOrientationStamped * msg);

/// Create msg/GnssInsOrientationStamped message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_sensing_msgs__msg__GnssInsOrientationStamped__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
autoware_sensing_msgs__msg__GnssInsOrientationStamped *
autoware_sensing_msgs__msg__GnssInsOrientationStamped__create();

/// Destroy msg/GnssInsOrientationStamped message.
/**
 * It calls
 * autoware_sensing_msgs__msg__GnssInsOrientationStamped__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
void
autoware_sensing_msgs__msg__GnssInsOrientationStamped__destroy(autoware_sensing_msgs__msg__GnssInsOrientationStamped * msg);

/// Check for msg/GnssInsOrientationStamped message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
bool
autoware_sensing_msgs__msg__GnssInsOrientationStamped__are_equal(const autoware_sensing_msgs__msg__GnssInsOrientationStamped * lhs, const autoware_sensing_msgs__msg__GnssInsOrientationStamped * rhs);

/// Copy a msg/GnssInsOrientationStamped message.
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
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
bool
autoware_sensing_msgs__msg__GnssInsOrientationStamped__copy(
  const autoware_sensing_msgs__msg__GnssInsOrientationStamped * input,
  autoware_sensing_msgs__msg__GnssInsOrientationStamped * output);

/// Initialize array of msg/GnssInsOrientationStamped messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_sensing_msgs__msg__GnssInsOrientationStamped__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
bool
autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__init(autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence * array, size_t size);

/// Finalize array of msg/GnssInsOrientationStamped messages.
/**
 * It calls
 * autoware_sensing_msgs__msg__GnssInsOrientationStamped__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
void
autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__fini(autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence * array);

/// Create array of msg/GnssInsOrientationStamped messages.
/**
 * It allocates the memory for the array and calls
 * autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence *
autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__create(size_t size);

/// Destroy array of msg/GnssInsOrientationStamped messages.
/**
 * It calls
 * autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
void
autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__destroy(autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence * array);

/// Check for msg/GnssInsOrientationStamped message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
bool
autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__are_equal(const autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence * lhs, const autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence * rhs);

/// Copy an array of msg/GnssInsOrientationStamped messages.
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
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
bool
autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__copy(
  const autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence * input,
  autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION_STAMPED__FUNCTIONS_H_
