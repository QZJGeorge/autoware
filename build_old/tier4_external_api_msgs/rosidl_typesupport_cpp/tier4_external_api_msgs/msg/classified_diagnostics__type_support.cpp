// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from tier4_external_api_msgs:msg/ClassifiedDiagnostics.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "tier4_external_api_msgs/msg/detail/classified_diagnostics__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace tier4_external_api_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _ClassifiedDiagnostics_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ClassifiedDiagnostics_type_support_ids_t;

static const _ClassifiedDiagnostics_type_support_ids_t _ClassifiedDiagnostics_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ClassifiedDiagnostics_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ClassifiedDiagnostics_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ClassifiedDiagnostics_type_support_symbol_names_t _ClassifiedDiagnostics_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tier4_external_api_msgs, msg, ClassifiedDiagnostics)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tier4_external_api_msgs, msg, ClassifiedDiagnostics)),
  }
};

typedef struct _ClassifiedDiagnostics_type_support_data_t
{
  void * data[2];
} _ClassifiedDiagnostics_type_support_data_t;

static _ClassifiedDiagnostics_type_support_data_t _ClassifiedDiagnostics_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ClassifiedDiagnostics_message_typesupport_map = {
  2,
  "tier4_external_api_msgs",
  &_ClassifiedDiagnostics_message_typesupport_ids.typesupport_identifier[0],
  &_ClassifiedDiagnostics_message_typesupport_symbol_names.symbol_name[0],
  &_ClassifiedDiagnostics_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ClassifiedDiagnostics_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ClassifiedDiagnostics_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace tier4_external_api_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_external_api_msgs::msg::ClassifiedDiagnostics>()
{
  return &::tier4_external_api_msgs::msg::rosidl_typesupport_cpp::ClassifiedDiagnostics_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tier4_external_api_msgs, msg, ClassifiedDiagnostics)() {
  return get_message_type_support_handle<tier4_external_api_msgs::msg::ClassifiedDiagnostics>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
