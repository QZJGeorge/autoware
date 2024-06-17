// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_version_msgs:srv/InterfaceVersion.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_VERSION_MSGS__SRV__DETAIL__INTERFACE_VERSION__STRUCT_H_
#define AUTOWARE_ADAPI_VERSION_MSGS__SRV__DETAIL__INTERFACE_VERSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/InterfaceVersion in the package autoware_adapi_version_msgs.
typedef struct autoware_adapi_version_msgs__srv__InterfaceVersion_Request
{
  uint8_t structure_needs_at_least_one_member;
} autoware_adapi_version_msgs__srv__InterfaceVersion_Request;

// Struct for a sequence of autoware_adapi_version_msgs__srv__InterfaceVersion_Request.
typedef struct autoware_adapi_version_msgs__srv__InterfaceVersion_Request__Sequence
{
  autoware_adapi_version_msgs__srv__InterfaceVersion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_version_msgs__srv__InterfaceVersion_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/InterfaceVersion in the package autoware_adapi_version_msgs.
typedef struct autoware_adapi_version_msgs__srv__InterfaceVersion_Response
{
  uint16_t major;
  uint16_t minor;
  uint16_t patch;
} autoware_adapi_version_msgs__srv__InterfaceVersion_Response;

// Struct for a sequence of autoware_adapi_version_msgs__srv__InterfaceVersion_Response.
typedef struct autoware_adapi_version_msgs__srv__InterfaceVersion_Response__Sequence
{
  autoware_adapi_version_msgs__srv__InterfaceVersion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_version_msgs__srv__InterfaceVersion_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_VERSION_MSGS__SRV__DETAIL__INTERFACE_VERSION__STRUCT_H_
