// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_map_msgs:srv/GetPartialPointCloudMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_map_msgs/srv/detail/get_partial_point_cloud_map__rosidl_typesupport_introspection_c.h"
#include "autoware_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_map_msgs/srv/detail/get_partial_point_cloud_map__functions.h"
#include "autoware_map_msgs/srv/detail/get_partial_point_cloud_map__struct.h"


// Include directives for member types
// Member `area`
#include "autoware_map_msgs/msg/area_info.h"
// Member `area`
#include "autoware_map_msgs/msg/detail/area_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_map_msgs__srv__GetPartialPointCloudMap_Request__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_map_msgs__srv__GetPartialPointCloudMap_Request__init(message_memory);
}

void autoware_map_msgs__srv__GetPartialPointCloudMap_Request__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Request_fini_function(void * message_memory)
{
  autoware_map_msgs__srv__GetPartialPointCloudMap_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_map_msgs__srv__GetPartialPointCloudMap_Request__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Request_message_member_array[1] = {
  {
    "area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_map_msgs__srv__GetPartialPointCloudMap_Request, area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_map_msgs__srv__GetPartialPointCloudMap_Request__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Request_message_members = {
  "autoware_map_msgs__srv",  // message namespace
  "GetPartialPointCloudMap_Request",  // message name
  1,  // number of fields
  sizeof(autoware_map_msgs__srv__GetPartialPointCloudMap_Request),
  autoware_map_msgs__srv__GetPartialPointCloudMap_Request__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Request_message_member_array,  // message members
  autoware_map_msgs__srv__GetPartialPointCloudMap_Request__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_map_msgs__srv__GetPartialPointCloudMap_Request__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_map_msgs__srv__GetPartialPointCloudMap_Request__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Request_message_type_support_handle = {
  0,
  &autoware_map_msgs__srv__GetPartialPointCloudMap_Request__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_map_msgs, srv, GetPartialPointCloudMap_Request)() {
  autoware_map_msgs__srv__GetPartialPointCloudMap_Request__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_map_msgs, msg, AreaInfo)();
  if (!autoware_map_msgs__srv__GetPartialPointCloudMap_Request__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Request_message_type_support_handle.typesupport_identifier) {
    autoware_map_msgs__srv__GetPartialPointCloudMap_Request__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_map_msgs__srv__GetPartialPointCloudMap_Request__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "autoware_map_msgs/srv/detail/get_partial_point_cloud_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autoware_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autoware_map_msgs/srv/detail/get_partial_point_cloud_map__functions.h"
// already included above
// #include "autoware_map_msgs/srv/detail/get_partial_point_cloud_map__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `new_pointcloud_with_ids`
#include "autoware_map_msgs/msg/point_cloud_map_cell_with_id.h"
// Member `new_pointcloud_with_ids`
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_with_id__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_map_msgs__srv__GetPartialPointCloudMap_Response__init(message_memory);
}

void autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Response_fini_function(void * message_memory)
{
  autoware_map_msgs__srv__GetPartialPointCloudMap_Response__fini(message_memory);
}

size_t autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__size_function__GetPartialPointCloudMap_Response__new_pointcloud_with_ids(
  const void * untyped_member)
{
  const autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence * member =
    (const autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__get_const_function__GetPartialPointCloudMap_Response__new_pointcloud_with_ids(
  const void * untyped_member, size_t index)
{
  const autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence * member =
    (const autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__get_function__GetPartialPointCloudMap_Response__new_pointcloud_with_ids(
  void * untyped_member, size_t index)
{
  autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence * member =
    (autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__fetch_function__GetPartialPointCloudMap_Response__new_pointcloud_with_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_map_msgs__msg__PointCloudMapCellWithID * item =
    ((const autoware_map_msgs__msg__PointCloudMapCellWithID *)
    autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__get_const_function__GetPartialPointCloudMap_Response__new_pointcloud_with_ids(untyped_member, index));
  autoware_map_msgs__msg__PointCloudMapCellWithID * value =
    (autoware_map_msgs__msg__PointCloudMapCellWithID *)(untyped_value);
  *value = *item;
}

void autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__assign_function__GetPartialPointCloudMap_Response__new_pointcloud_with_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_map_msgs__msg__PointCloudMapCellWithID * item =
    ((autoware_map_msgs__msg__PointCloudMapCellWithID *)
    autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__get_function__GetPartialPointCloudMap_Response__new_pointcloud_with_ids(untyped_member, index));
  const autoware_map_msgs__msg__PointCloudMapCellWithID * value =
    (const autoware_map_msgs__msg__PointCloudMapCellWithID *)(untyped_value);
  *item = *value;
}

bool autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__resize_function__GetPartialPointCloudMap_Response__new_pointcloud_with_ids(
  void * untyped_member, size_t size)
{
  autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence * member =
    (autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence *)(untyped_member);
  autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__fini(member);
  return autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Response_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_map_msgs__srv__GetPartialPointCloudMap_Response, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "new_pointcloud_with_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_map_msgs__srv__GetPartialPointCloudMap_Response, new_pointcloud_with_ids),  // bytes offset in struct
    NULL,  // default value
    autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__size_function__GetPartialPointCloudMap_Response__new_pointcloud_with_ids,  // size() function pointer
    autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__get_const_function__GetPartialPointCloudMap_Response__new_pointcloud_with_ids,  // get_const(index) function pointer
    autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__get_function__GetPartialPointCloudMap_Response__new_pointcloud_with_ids,  // get(index) function pointer
    autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__fetch_function__GetPartialPointCloudMap_Response__new_pointcloud_with_ids,  // fetch(index, &value) function pointer
    autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__assign_function__GetPartialPointCloudMap_Response__new_pointcloud_with_ids,  // assign(index, value) function pointer
    autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__resize_function__GetPartialPointCloudMap_Response__new_pointcloud_with_ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Response_message_members = {
  "autoware_map_msgs__srv",  // message namespace
  "GetPartialPointCloudMap_Response",  // message name
  2,  // number of fields
  sizeof(autoware_map_msgs__srv__GetPartialPointCloudMap_Response),
  autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Response_message_member_array,  // message members
  autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Response_message_type_support_handle = {
  0,
  &autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_map_msgs, srv, GetPartialPointCloudMap_Response)() {
  autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_map_msgs, msg, PointCloudMapCellWithID)();
  if (!autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Response_message_type_support_handle.typesupport_identifier) {
    autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_map_msgs__srv__GetPartialPointCloudMap_Response__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autoware_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "autoware_map_msgs/srv/detail/get_partial_point_cloud_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers autoware_map_msgs__srv__detail__get_partial_point_cloud_map__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_service_members = {
  "autoware_map_msgs__srv",  // service namespace
  "GetPartialPointCloudMap",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // autoware_map_msgs__srv__detail__get_partial_point_cloud_map__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Request_message_type_support_handle,
  NULL  // response message
  // autoware_map_msgs__srv__detail__get_partial_point_cloud_map__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_Response_message_type_support_handle
};

static rosidl_service_type_support_t autoware_map_msgs__srv__detail__get_partial_point_cloud_map__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_service_type_support_handle = {
  0,
  &autoware_map_msgs__srv__detail__get_partial_point_cloud_map__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_map_msgs, srv, GetPartialPointCloudMap_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_map_msgs, srv, GetPartialPointCloudMap_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_map_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_map_msgs, srv, GetPartialPointCloudMap)() {
  if (!autoware_map_msgs__srv__detail__get_partial_point_cloud_map__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_service_type_support_handle.typesupport_identifier) {
    autoware_map_msgs__srv__detail__get_partial_point_cloud_map__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)autoware_map_msgs__srv__detail__get_partial_point_cloud_map__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_map_msgs, srv, GetPartialPointCloudMap_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_map_msgs, srv, GetPartialPointCloudMap_Response)()->data;
  }

  return &autoware_map_msgs__srv__detail__get_partial_point_cloud_map__rosidl_typesupport_introspection_c__GetPartialPointCloudMap_service_type_support_handle;
}
