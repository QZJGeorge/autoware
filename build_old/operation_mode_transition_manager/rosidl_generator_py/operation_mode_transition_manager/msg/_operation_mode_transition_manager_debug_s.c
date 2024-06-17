// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from operation_mode_transition_manager:msg/OperationModeTransitionManagerDebug.idl
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
#include "operation_mode_transition_manager/msg/detail/operation_mode_transition_manager_debug__struct.h"
#include "operation_mode_transition_manager/msg/detail/operation_mode_transition_manager_debug__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool operation_mode_transition_manager__msg__operation_mode_transition_manager_debug__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[115];
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
    assert(strncmp("operation_mode_transition_manager.msg._operation_mode_transition_manager_debug.OperationModeTransitionManagerDebug", full_classname_dest, 114) == 0);
  }
  operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // in_autoware_control
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_autoware_control");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_autoware_control = (Py_True == field);
    Py_DECREF(field);
  }
  {  // in_transition
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_transition");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_transition = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_all_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_all_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_all_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // engage_allowed_for_stopped_vehicle
    PyObject * field = PyObject_GetAttrString(_pymsg, "engage_allowed_for_stopped_vehicle");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->engage_allowed_for_stopped_vehicle = (Py_True == field);
    Py_DECREF(field);
  }
  {  // trajectory_available_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_available_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->trajectory_available_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lateral_deviation_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_deviation_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lateral_deviation_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // yaw_deviation_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_deviation_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->yaw_deviation_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // speed_upper_deviation_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_upper_deviation_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->speed_upper_deviation_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // speed_lower_deviation_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_lower_deviation_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->speed_lower_deviation_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stop_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->stop_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // large_acceleration_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "large_acceleration_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->large_acceleration_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // large_lateral_acceleration_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "large_lateral_acceleration_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->large_lateral_acceleration_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // large_lateral_acceleration_diff_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "large_lateral_acceleration_diff_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->large_lateral_acceleration_diff_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // current_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_control_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_control_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_control_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_planning_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_planning_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_planning_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_control_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_control_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_control_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lateral_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lateral_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lateral_acceleration_deviation
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_acceleration_deviation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lateral_acceleration_deviation = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lateral_deviation
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_deviation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lateral_deviation = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_deviation
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_deviation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_deviation = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_deviation
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_deviation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_deviation = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * operation_mode_transition_manager__msg__operation_mode_transition_manager_debug__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OperationModeTransitionManagerDebug */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("operation_mode_transition_manager.msg._operation_mode_transition_manager_debug");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OperationModeTransitionManagerDebug");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * ros_message = (operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->status.data,
      strlen(ros_message->status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_autoware_control
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_autoware_control ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_autoware_control", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_transition
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_transition ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_transition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_all_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_all_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_all_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engage_allowed_for_stopped_vehicle
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->engage_allowed_for_stopped_vehicle ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engage_allowed_for_stopped_vehicle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trajectory_available_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->trajectory_available_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_available_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_deviation_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lateral_deviation_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_deviation_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_deviation_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->yaw_deviation_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_deviation_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_upper_deviation_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->speed_upper_deviation_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_upper_deviation_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_lower_deviation_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->speed_lower_deviation_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_lower_deviation_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stop_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->stop_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // large_acceleration_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->large_acceleration_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "large_acceleration_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // large_lateral_acceleration_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->large_lateral_acceleration_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "large_lateral_acceleration_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // large_lateral_acceleration_diff_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->large_lateral_acceleration_diff_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "large_lateral_acceleration_diff_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_control_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_control_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_control_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_planning_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_planning_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_planning_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_control_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_control_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_control_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lateral_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_acceleration_deviation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lateral_acceleration_deviation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_acceleration_deviation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_deviation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lateral_deviation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_deviation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_deviation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_deviation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_deviation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_deviation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_deviation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_deviation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
