// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from morai_msgs:srv/MoraiSyncModeCmdSrv.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_CMD_SRV__FUNCTIONS_H_
#define MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_CMD_SRV__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "morai_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "morai_msgs/srv/detail/morai_sync_mode_cmd_srv__struct.h"

/// Initialize srv/MoraiSyncModeCmdSrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * morai_msgs__srv__MoraiSyncModeCmdSrv_Request
 * )) before or use
 * morai_msgs__srv__MoraiSyncModeCmdSrv_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
bool
morai_msgs__srv__MoraiSyncModeCmdSrv_Request__init(morai_msgs__srv__MoraiSyncModeCmdSrv_Request * msg);

/// Finalize srv/MoraiSyncModeCmdSrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
void
morai_msgs__srv__MoraiSyncModeCmdSrv_Request__fini(morai_msgs__srv__MoraiSyncModeCmdSrv_Request * msg);

/// Create srv/MoraiSyncModeCmdSrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * morai_msgs__srv__MoraiSyncModeCmdSrv_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
morai_msgs__srv__MoraiSyncModeCmdSrv_Request *
morai_msgs__srv__MoraiSyncModeCmdSrv_Request__create();

/// Destroy srv/MoraiSyncModeCmdSrv message.
/**
 * It calls
 * morai_msgs__srv__MoraiSyncModeCmdSrv_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
void
morai_msgs__srv__MoraiSyncModeCmdSrv_Request__destroy(morai_msgs__srv__MoraiSyncModeCmdSrv_Request * msg);

/// Check for srv/MoraiSyncModeCmdSrv message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
bool
morai_msgs__srv__MoraiSyncModeCmdSrv_Request__are_equal(const morai_msgs__srv__MoraiSyncModeCmdSrv_Request * lhs, const morai_msgs__srv__MoraiSyncModeCmdSrv_Request * rhs);

/// Copy a srv/MoraiSyncModeCmdSrv message.
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
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
bool
morai_msgs__srv__MoraiSyncModeCmdSrv_Request__copy(
  const morai_msgs__srv__MoraiSyncModeCmdSrv_Request * input,
  morai_msgs__srv__MoraiSyncModeCmdSrv_Request * output);

/// Initialize array of srv/MoraiSyncModeCmdSrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * morai_msgs__srv__MoraiSyncModeCmdSrv_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
bool
morai_msgs__srv__MoraiSyncModeCmdSrv_Request__Sequence__init(morai_msgs__srv__MoraiSyncModeCmdSrv_Request__Sequence * array, size_t size);

/// Finalize array of srv/MoraiSyncModeCmdSrv messages.
/**
 * It calls
 * morai_msgs__srv__MoraiSyncModeCmdSrv_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
void
morai_msgs__srv__MoraiSyncModeCmdSrv_Request__Sequence__fini(morai_msgs__srv__MoraiSyncModeCmdSrv_Request__Sequence * array);

/// Create array of srv/MoraiSyncModeCmdSrv messages.
/**
 * It allocates the memory for the array and calls
 * morai_msgs__srv__MoraiSyncModeCmdSrv_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
morai_msgs__srv__MoraiSyncModeCmdSrv_Request__Sequence *
morai_msgs__srv__MoraiSyncModeCmdSrv_Request__Sequence__create(size_t size);

/// Destroy array of srv/MoraiSyncModeCmdSrv messages.
/**
 * It calls
 * morai_msgs__srv__MoraiSyncModeCmdSrv_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
void
morai_msgs__srv__MoraiSyncModeCmdSrv_Request__Sequence__destroy(morai_msgs__srv__MoraiSyncModeCmdSrv_Request__Sequence * array);

/// Check for srv/MoraiSyncModeCmdSrv message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
bool
morai_msgs__srv__MoraiSyncModeCmdSrv_Request__Sequence__are_equal(const morai_msgs__srv__MoraiSyncModeCmdSrv_Request__Sequence * lhs, const morai_msgs__srv__MoraiSyncModeCmdSrv_Request__Sequence * rhs);

/// Copy an array of srv/MoraiSyncModeCmdSrv messages.
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
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
bool
morai_msgs__srv__MoraiSyncModeCmdSrv_Request__Sequence__copy(
  const morai_msgs__srv__MoraiSyncModeCmdSrv_Request__Sequence * input,
  morai_msgs__srv__MoraiSyncModeCmdSrv_Request__Sequence * output);

/// Initialize srv/MoraiSyncModeCmdSrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * morai_msgs__srv__MoraiSyncModeCmdSrv_Response
 * )) before or use
 * morai_msgs__srv__MoraiSyncModeCmdSrv_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
bool
morai_msgs__srv__MoraiSyncModeCmdSrv_Response__init(morai_msgs__srv__MoraiSyncModeCmdSrv_Response * msg);

/// Finalize srv/MoraiSyncModeCmdSrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
void
morai_msgs__srv__MoraiSyncModeCmdSrv_Response__fini(morai_msgs__srv__MoraiSyncModeCmdSrv_Response * msg);

/// Create srv/MoraiSyncModeCmdSrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * morai_msgs__srv__MoraiSyncModeCmdSrv_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
morai_msgs__srv__MoraiSyncModeCmdSrv_Response *
morai_msgs__srv__MoraiSyncModeCmdSrv_Response__create();

/// Destroy srv/MoraiSyncModeCmdSrv message.
/**
 * It calls
 * morai_msgs__srv__MoraiSyncModeCmdSrv_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
void
morai_msgs__srv__MoraiSyncModeCmdSrv_Response__destroy(morai_msgs__srv__MoraiSyncModeCmdSrv_Response * msg);

/// Check for srv/MoraiSyncModeCmdSrv message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
bool
morai_msgs__srv__MoraiSyncModeCmdSrv_Response__are_equal(const morai_msgs__srv__MoraiSyncModeCmdSrv_Response * lhs, const morai_msgs__srv__MoraiSyncModeCmdSrv_Response * rhs);

/// Copy a srv/MoraiSyncModeCmdSrv message.
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
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
bool
morai_msgs__srv__MoraiSyncModeCmdSrv_Response__copy(
  const morai_msgs__srv__MoraiSyncModeCmdSrv_Response * input,
  morai_msgs__srv__MoraiSyncModeCmdSrv_Response * output);

/// Initialize array of srv/MoraiSyncModeCmdSrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * morai_msgs__srv__MoraiSyncModeCmdSrv_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
bool
morai_msgs__srv__MoraiSyncModeCmdSrv_Response__Sequence__init(morai_msgs__srv__MoraiSyncModeCmdSrv_Response__Sequence * array, size_t size);

/// Finalize array of srv/MoraiSyncModeCmdSrv messages.
/**
 * It calls
 * morai_msgs__srv__MoraiSyncModeCmdSrv_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
void
morai_msgs__srv__MoraiSyncModeCmdSrv_Response__Sequence__fini(morai_msgs__srv__MoraiSyncModeCmdSrv_Response__Sequence * array);

/// Create array of srv/MoraiSyncModeCmdSrv messages.
/**
 * It allocates the memory for the array and calls
 * morai_msgs__srv__MoraiSyncModeCmdSrv_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
morai_msgs__srv__MoraiSyncModeCmdSrv_Response__Sequence *
morai_msgs__srv__MoraiSyncModeCmdSrv_Response__Sequence__create(size_t size);

/// Destroy array of srv/MoraiSyncModeCmdSrv messages.
/**
 * It calls
 * morai_msgs__srv__MoraiSyncModeCmdSrv_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
void
morai_msgs__srv__MoraiSyncModeCmdSrv_Response__Sequence__destroy(morai_msgs__srv__MoraiSyncModeCmdSrv_Response__Sequence * array);

/// Check for srv/MoraiSyncModeCmdSrv message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
bool
morai_msgs__srv__MoraiSyncModeCmdSrv_Response__Sequence__are_equal(const morai_msgs__srv__MoraiSyncModeCmdSrv_Response__Sequence * lhs, const morai_msgs__srv__MoraiSyncModeCmdSrv_Response__Sequence * rhs);

/// Copy an array of srv/MoraiSyncModeCmdSrv messages.
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
ROSIDL_GENERATOR_C_PUBLIC_morai_msgs
bool
morai_msgs__srv__MoraiSyncModeCmdSrv_Response__Sequence__copy(
  const morai_msgs__srv__MoraiSyncModeCmdSrv_Response__Sequence * input,
  morai_msgs__srv__MoraiSyncModeCmdSrv_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_CMD_SRV__FUNCTIONS_H_
