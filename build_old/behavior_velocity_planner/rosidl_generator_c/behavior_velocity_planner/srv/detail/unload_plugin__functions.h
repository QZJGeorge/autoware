// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from behavior_velocity_planner:srv/UnloadPlugin.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__UNLOAD_PLUGIN__FUNCTIONS_H_
#define BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__UNLOAD_PLUGIN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "behavior_velocity_planner/msg/rosidl_generator_c__visibility_control.h"

#include "behavior_velocity_planner/srv/detail/unload_plugin__struct.h"

/// Initialize srv/UnloadPlugin message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behavior_velocity_planner__srv__UnloadPlugin_Request
 * )) before or use
 * behavior_velocity_planner__srv__UnloadPlugin_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
bool
behavior_velocity_planner__srv__UnloadPlugin_Request__init(behavior_velocity_planner__srv__UnloadPlugin_Request * msg);

/// Finalize srv/UnloadPlugin message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
void
behavior_velocity_planner__srv__UnloadPlugin_Request__fini(behavior_velocity_planner__srv__UnloadPlugin_Request * msg);

/// Create srv/UnloadPlugin message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behavior_velocity_planner__srv__UnloadPlugin_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
behavior_velocity_planner__srv__UnloadPlugin_Request *
behavior_velocity_planner__srv__UnloadPlugin_Request__create();

/// Destroy srv/UnloadPlugin message.
/**
 * It calls
 * behavior_velocity_planner__srv__UnloadPlugin_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
void
behavior_velocity_planner__srv__UnloadPlugin_Request__destroy(behavior_velocity_planner__srv__UnloadPlugin_Request * msg);

/// Check for srv/UnloadPlugin message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
bool
behavior_velocity_planner__srv__UnloadPlugin_Request__are_equal(const behavior_velocity_planner__srv__UnloadPlugin_Request * lhs, const behavior_velocity_planner__srv__UnloadPlugin_Request * rhs);

/// Copy a srv/UnloadPlugin message.
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
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
bool
behavior_velocity_planner__srv__UnloadPlugin_Request__copy(
  const behavior_velocity_planner__srv__UnloadPlugin_Request * input,
  behavior_velocity_planner__srv__UnloadPlugin_Request * output);

/// Initialize array of srv/UnloadPlugin messages.
/**
 * It allocates the memory for the number of elements and calls
 * behavior_velocity_planner__srv__UnloadPlugin_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
bool
behavior_velocity_planner__srv__UnloadPlugin_Request__Sequence__init(behavior_velocity_planner__srv__UnloadPlugin_Request__Sequence * array, size_t size);

/// Finalize array of srv/UnloadPlugin messages.
/**
 * It calls
 * behavior_velocity_planner__srv__UnloadPlugin_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
void
behavior_velocity_planner__srv__UnloadPlugin_Request__Sequence__fini(behavior_velocity_planner__srv__UnloadPlugin_Request__Sequence * array);

/// Create array of srv/UnloadPlugin messages.
/**
 * It allocates the memory for the array and calls
 * behavior_velocity_planner__srv__UnloadPlugin_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
behavior_velocity_planner__srv__UnloadPlugin_Request__Sequence *
behavior_velocity_planner__srv__UnloadPlugin_Request__Sequence__create(size_t size);

/// Destroy array of srv/UnloadPlugin messages.
/**
 * It calls
 * behavior_velocity_planner__srv__UnloadPlugin_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
void
behavior_velocity_planner__srv__UnloadPlugin_Request__Sequence__destroy(behavior_velocity_planner__srv__UnloadPlugin_Request__Sequence * array);

/// Check for srv/UnloadPlugin message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
bool
behavior_velocity_planner__srv__UnloadPlugin_Request__Sequence__are_equal(const behavior_velocity_planner__srv__UnloadPlugin_Request__Sequence * lhs, const behavior_velocity_planner__srv__UnloadPlugin_Request__Sequence * rhs);

/// Copy an array of srv/UnloadPlugin messages.
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
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
bool
behavior_velocity_planner__srv__UnloadPlugin_Request__Sequence__copy(
  const behavior_velocity_planner__srv__UnloadPlugin_Request__Sequence * input,
  behavior_velocity_planner__srv__UnloadPlugin_Request__Sequence * output);

/// Initialize srv/UnloadPlugin message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behavior_velocity_planner__srv__UnloadPlugin_Response
 * )) before or use
 * behavior_velocity_planner__srv__UnloadPlugin_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
bool
behavior_velocity_planner__srv__UnloadPlugin_Response__init(behavior_velocity_planner__srv__UnloadPlugin_Response * msg);

/// Finalize srv/UnloadPlugin message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
void
behavior_velocity_planner__srv__UnloadPlugin_Response__fini(behavior_velocity_planner__srv__UnloadPlugin_Response * msg);

/// Create srv/UnloadPlugin message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behavior_velocity_planner__srv__UnloadPlugin_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
behavior_velocity_planner__srv__UnloadPlugin_Response *
behavior_velocity_planner__srv__UnloadPlugin_Response__create();

/// Destroy srv/UnloadPlugin message.
/**
 * It calls
 * behavior_velocity_planner__srv__UnloadPlugin_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
void
behavior_velocity_planner__srv__UnloadPlugin_Response__destroy(behavior_velocity_planner__srv__UnloadPlugin_Response * msg);

/// Check for srv/UnloadPlugin message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
bool
behavior_velocity_planner__srv__UnloadPlugin_Response__are_equal(const behavior_velocity_planner__srv__UnloadPlugin_Response * lhs, const behavior_velocity_planner__srv__UnloadPlugin_Response * rhs);

/// Copy a srv/UnloadPlugin message.
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
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
bool
behavior_velocity_planner__srv__UnloadPlugin_Response__copy(
  const behavior_velocity_planner__srv__UnloadPlugin_Response * input,
  behavior_velocity_planner__srv__UnloadPlugin_Response * output);

/// Initialize array of srv/UnloadPlugin messages.
/**
 * It allocates the memory for the number of elements and calls
 * behavior_velocity_planner__srv__UnloadPlugin_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
bool
behavior_velocity_planner__srv__UnloadPlugin_Response__Sequence__init(behavior_velocity_planner__srv__UnloadPlugin_Response__Sequence * array, size_t size);

/// Finalize array of srv/UnloadPlugin messages.
/**
 * It calls
 * behavior_velocity_planner__srv__UnloadPlugin_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
void
behavior_velocity_planner__srv__UnloadPlugin_Response__Sequence__fini(behavior_velocity_planner__srv__UnloadPlugin_Response__Sequence * array);

/// Create array of srv/UnloadPlugin messages.
/**
 * It allocates the memory for the array and calls
 * behavior_velocity_planner__srv__UnloadPlugin_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
behavior_velocity_planner__srv__UnloadPlugin_Response__Sequence *
behavior_velocity_planner__srv__UnloadPlugin_Response__Sequence__create(size_t size);

/// Destroy array of srv/UnloadPlugin messages.
/**
 * It calls
 * behavior_velocity_planner__srv__UnloadPlugin_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
void
behavior_velocity_planner__srv__UnloadPlugin_Response__Sequence__destroy(behavior_velocity_planner__srv__UnloadPlugin_Response__Sequence * array);

/// Check for srv/UnloadPlugin message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
bool
behavior_velocity_planner__srv__UnloadPlugin_Response__Sequence__are_equal(const behavior_velocity_planner__srv__UnloadPlugin_Response__Sequence * lhs, const behavior_velocity_planner__srv__UnloadPlugin_Response__Sequence * rhs);

/// Copy an array of srv/UnloadPlugin messages.
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
ROSIDL_GENERATOR_C_PUBLIC_behavior_velocity_planner
bool
behavior_velocity_planner__srv__UnloadPlugin_Response__Sequence__copy(
  const behavior_velocity_planner__srv__UnloadPlugin_Response__Sequence * input,
  behavior_velocity_planner__srv__UnloadPlugin_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__UNLOAD_PLUGIN__FUNCTIONS_H_
