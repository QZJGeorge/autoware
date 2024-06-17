// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_localization_msgs:srv/PoseWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_localization_msgs/srv/detail/pose_with_covariance_stamped__rosidl_typesupport_introspection_c.h"
#include "tier4_localization_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_localization_msgs/srv/detail/pose_with_covariance_stamped__functions.h"
#include "tier4_localization_msgs/srv/detail/pose_with_covariance_stamped__struct.h"


// Include directives for member types
// Member `pose_with_covariance`
#include "geometry_msgs/msg/pose_with_covariance_stamped.h"
// Member `pose_with_covariance`
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request__init(message_memory);
}

void tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Request_fini_function(void * message_memory)
{
  tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Request_message_member_array[1] = {
  {
    "pose_with_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request, pose_with_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Request_message_members = {
  "tier4_localization_msgs__srv",  // message namespace
  "PoseWithCovarianceStamped_Request",  // message name
  1,  // number of fields
  sizeof(tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request),
  tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Request_message_member_array,  // message members
  tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Request_message_type_support_handle = {
  0,
  &tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_localization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_localization_msgs, srv, PoseWithCovarianceStamped_Request)() {
  tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseWithCovarianceStamped)();
  if (!tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Request_message_type_support_handle.typesupport_identifier) {
    tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tier4_localization_msgs/srv/detail/pose_with_covariance_stamped__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tier4_localization_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tier4_localization_msgs/srv/detail/pose_with_covariance_stamped__functions.h"
// already included above
// #include "tier4_localization_msgs/srv/detail/pose_with_covariance_stamped__struct.h"


// Include directives for member types
// Member `pose_with_covariance`
// already included above
// #include "geometry_msgs/msg/pose_with_covariance_stamped.h"
// Member `pose_with_covariance`
// already included above
// #include "geometry_msgs/msg/detail/pose_with_covariance_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response__init(message_memory);
}

void tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Response_fini_function(void * message_memory)
{
  tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_with_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response, pose_with_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Response_message_members = {
  "tier4_localization_msgs__srv",  // message namespace
  "PoseWithCovarianceStamped_Response",  // message name
  2,  // number of fields
  sizeof(tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response),
  tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Response_message_member_array,  // message members
  tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Response_message_type_support_handle = {
  0,
  &tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_localization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_localization_msgs, srv, PoseWithCovarianceStamped_Response)() {
  tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseWithCovarianceStamped)();
  if (!tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Response_message_type_support_handle.typesupport_identifier) {
    tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tier4_localization_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tier4_localization_msgs/srv/detail/pose_with_covariance_stamped__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tier4_localization_msgs__srv__detail__pose_with_covariance_stamped__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_service_members = {
  "tier4_localization_msgs__srv",  // service namespace
  "PoseWithCovarianceStamped",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tier4_localization_msgs__srv__detail__pose_with_covariance_stamped__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Request_message_type_support_handle,
  NULL  // response message
  // tier4_localization_msgs__srv__detail__pose_with_covariance_stamped__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_Response_message_type_support_handle
};

static rosidl_service_type_support_t tier4_localization_msgs__srv__detail__pose_with_covariance_stamped__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_service_type_support_handle = {
  0,
  &tier4_localization_msgs__srv__detail__pose_with_covariance_stamped__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_localization_msgs, srv, PoseWithCovarianceStamped_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_localization_msgs, srv, PoseWithCovarianceStamped_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_localization_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_localization_msgs, srv, PoseWithCovarianceStamped)() {
  if (!tier4_localization_msgs__srv__detail__pose_with_covariance_stamped__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_service_type_support_handle.typesupport_identifier) {
    tier4_localization_msgs__srv__detail__pose_with_covariance_stamped__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tier4_localization_msgs__srv__detail__pose_with_covariance_stamped__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_localization_msgs, srv, PoseWithCovarianceStamped_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_localization_msgs, srv, PoseWithCovarianceStamped_Response)()->data;
  }

  return &tier4_localization_msgs__srv__detail__pose_with_covariance_stamped__rosidl_typesupport_introspection_c__PoseWithCovarianceStamped_service_type_support_handle;
}
