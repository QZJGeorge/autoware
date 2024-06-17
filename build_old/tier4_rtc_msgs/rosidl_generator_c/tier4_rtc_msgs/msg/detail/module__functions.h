// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tier4_rtc_msgs:msg/Module.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__MODULE__FUNCTIONS_H_
#define TIER4_RTC_MSGS__MSG__DETAIL__MODULE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tier4_rtc_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tier4_rtc_msgs/msg/detail/module__struct.h"

/// Initialize msg/Module message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tier4_rtc_msgs__msg__Module
 * )) before or use
 * tier4_rtc_msgs__msg__Module__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
bool
tier4_rtc_msgs__msg__Module__init(tier4_rtc_msgs__msg__Module * msg);

/// Finalize msg/Module message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
void
tier4_rtc_msgs__msg__Module__fini(tier4_rtc_msgs__msg__Module * msg);

/// Create msg/Module message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tier4_rtc_msgs__msg__Module__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
tier4_rtc_msgs__msg__Module *
tier4_rtc_msgs__msg__Module__create();

/// Destroy msg/Module message.
/**
 * It calls
 * tier4_rtc_msgs__msg__Module__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
void
tier4_rtc_msgs__msg__Module__destroy(tier4_rtc_msgs__msg__Module * msg);

/// Check for msg/Module message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
bool
tier4_rtc_msgs__msg__Module__are_equal(const tier4_rtc_msgs__msg__Module * lhs, const tier4_rtc_msgs__msg__Module * rhs);

/// Copy a msg/Module message.
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
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
bool
tier4_rtc_msgs__msg__Module__copy(
  const tier4_rtc_msgs__msg__Module * input,
  tier4_rtc_msgs__msg__Module * output);

/// Initialize array of msg/Module messages.
/**
 * It allocates the memory for the number of elements and calls
 * tier4_rtc_msgs__msg__Module__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
bool
tier4_rtc_msgs__msg__Module__Sequence__init(tier4_rtc_msgs__msg__Module__Sequence * array, size_t size);

/// Finalize array of msg/Module messages.
/**
 * It calls
 * tier4_rtc_msgs__msg__Module__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
void
tier4_rtc_msgs__msg__Module__Sequence__fini(tier4_rtc_msgs__msg__Module__Sequence * array);

/// Create array of msg/Module messages.
/**
 * It allocates the memory for the array and calls
 * tier4_rtc_msgs__msg__Module__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
tier4_rtc_msgs__msg__Module__Sequence *
tier4_rtc_msgs__msg__Module__Sequence__create(size_t size);

/// Destroy array of msg/Module messages.
/**
 * It calls
 * tier4_rtc_msgs__msg__Module__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
void
tier4_rtc_msgs__msg__Module__Sequence__destroy(tier4_rtc_msgs__msg__Module__Sequence * array);

/// Check for msg/Module message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
bool
tier4_rtc_msgs__msg__Module__Sequence__are_equal(const tier4_rtc_msgs__msg__Module__Sequence * lhs, const tier4_rtc_msgs__msg__Module__Sequence * rhs);

/// Copy an array of msg/Module messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tier4_rtc_msgs
bool
tier4_rtc_msgs__msg__Module__Sequence__copy(
  const tier4_rtc_msgs__msg__Module__Sequence * input,
  tier4_rtc_msgs__msg__Module__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__MODULE__FUNCTIONS_H_
