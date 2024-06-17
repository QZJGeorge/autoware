// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tier4_api_msgs:msg/AwapiAutowareStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "tier4_api_msgs/msg/detail/awapi_autoware_status__struct.h"
#include "tier4_api_msgs/msg/detail/awapi_autoware_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "diagnostic_msgs/msg/detail/diagnostic_status__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool tier4_system_msgs__msg__hazard_status_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * tier4_system_msgs__msg__hazard_status_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool tier4_planning_msgs__msg__stop_reason_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * tier4_planning_msgs__msg__stop_reason_array__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool diagnostic_msgs__msg__diagnostic_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * diagnostic_msgs__msg__diagnostic_status__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool diagnostic_msgs__msg__diagnostic_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * diagnostic_msgs__msg__diagnostic_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tier4_api_msgs__msg__awapi_autoware_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tier4_api_msgs.msg._awapi_autoware_status.AwapiAutowareStatus", full_classname_dest, 61) == 0);
  }
  tier4_api_msgs__msg__AwapiAutowareStatus * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // autoware_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "autoware_state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->autoware_state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // control_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->control_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gate_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "gate_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gate_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // emergency_stopped
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_stopped");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emergency_stopped = (Py_True == field);
    Py_DECREF(field);
  }
  {  // current_max_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_max_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_max_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hazard_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "hazard_status");
    if (!field) {
      return false;
    }
    if (!tier4_system_msgs__msg__hazard_status_stamped__convert_from_py(field, &ros_message->hazard_status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // stop_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_reason");
    if (!field) {
      return false;
    }
    if (!tier4_planning_msgs__msg__stop_reason_array__convert_from_py(field, &ros_message->stop_reason)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // diagnostics
    PyObject * field = PyObject_GetAttrString(_pymsg, "diagnostics");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'diagnostics'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&(ros_message->diagnostics), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create diagnostic_msgs__msg__DiagnosticStatus__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    diagnostic_msgs__msg__DiagnosticStatus * dest = ros_message->diagnostics.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!diagnostic_msgs__msg__diagnostic_status__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // error_diagnostics
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_diagnostics");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'error_diagnostics'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&(ros_message->error_diagnostics), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create diagnostic_msgs__msg__DiagnosticStatus__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    diagnostic_msgs__msg__DiagnosticStatus * dest = ros_message->error_diagnostics.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!diagnostic_msgs__msg__diagnostic_status__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // autonomous_overridden
    PyObject * field = PyObject_GetAttrString(_pymsg, "autonomous_overridden");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->autonomous_overridden = (Py_True == field);
    Py_DECREF(field);
  }
  {  // arrived_goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "arrived_goal");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->arrived_goal = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tier4_api_msgs__msg__awapi_autoware_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AwapiAutowareStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tier4_api_msgs.msg._awapi_autoware_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AwapiAutowareStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tier4_api_msgs__msg__AwapiAutowareStatus * ros_message = (tier4_api_msgs__msg__AwapiAutowareStatus *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // autoware_state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->autoware_state.data,
      strlen(ros_message->autoware_state.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "autoware_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->control_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gate_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gate_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gate_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_stopped
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emergency_stopped ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_stopped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_max_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_max_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_max_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hazard_status
    PyObject * field = NULL;
    field = tier4_system_msgs__msg__hazard_status_stamped__convert_to_py(&ros_message->hazard_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "hazard_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stop_reason
    PyObject * field = NULL;
    field = tier4_planning_msgs__msg__stop_reason_array__convert_to_py(&ros_message->stop_reason);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop_reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diagnostics
    PyObject * field = NULL;
    size_t size = ros_message->diagnostics.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    diagnostic_msgs__msg__DiagnosticStatus * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->diagnostics.data[i]);
      PyObject * pyitem = diagnostic_msgs__msg__diagnostic_status__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "diagnostics", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_diagnostics
    PyObject * field = NULL;
    size_t size = ros_message->error_diagnostics.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    diagnostic_msgs__msg__DiagnosticStatus * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->error_diagnostics.data[i]);
      PyObject * pyitem = diagnostic_msgs__msg__diagnostic_status__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_diagnostics", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // autonomous_overridden
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->autonomous_overridden ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "autonomous_overridden", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arrived_goal
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->arrived_goal ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arrived_goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
