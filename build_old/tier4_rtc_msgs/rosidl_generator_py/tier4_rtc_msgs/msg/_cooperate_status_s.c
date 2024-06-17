// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tier4_rtc_msgs:msg/CooperateStatus.idl
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
#include "tier4_rtc_msgs/msg/detail/cooperate_status__struct.h"
#include "tier4_rtc_msgs/msg/detail/cooperate_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);
bool tier4_rtc_msgs__msg__module__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tier4_rtc_msgs__msg__module__convert_to_py(void * raw_ros_message);
bool tier4_rtc_msgs__msg__command__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tier4_rtc_msgs__msg__command__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tier4_rtc_msgs__msg__cooperate_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("tier4_rtc_msgs.msg._cooperate_status.CooperateStatus", full_classname_dest, 52) == 0);
  }
  tier4_rtc_msgs__msg__CooperateStatus * ros_message = _ros_message;
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
  {  // uuid
    PyObject * field = PyObject_GetAttrString(_pymsg, "uuid");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->uuid)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // module
    PyObject * field = PyObject_GetAttrString(_pymsg, "module");
    if (!field) {
      return false;
    }
    if (!tier4_rtc_msgs__msg__module__convert_from_py(field, &ros_message->module)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // safe
    PyObject * field = PyObject_GetAttrString(_pymsg, "safe");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->safe = (Py_True == field);
    Py_DECREF(field);
  }
  {  // command_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "command_status");
    if (!field) {
      return false;
    }
    if (!tier4_rtc_msgs__msg__command__convert_from_py(field, &ros_message->command_status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // auto_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->auto_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // start_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->start_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // finish_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "finish_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->finish_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tier4_rtc_msgs__msg__cooperate_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CooperateStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tier4_rtc_msgs.msg._cooperate_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CooperateStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tier4_rtc_msgs__msg__CooperateStatus * ros_message = (tier4_rtc_msgs__msg__CooperateStatus *)raw_ros_message;
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
  {  // uuid
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->uuid);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "uuid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // module
    PyObject * field = NULL;
    field = tier4_rtc_msgs__msg__module__convert_to_py(&ros_message->module);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "module", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safe
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->safe ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command_status
    PyObject * field = NULL;
    field = tier4_rtc_msgs__msg__command__convert_to_py(&ros_message->command_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "command_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->auto_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->start_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // finish_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->finish_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "finish_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
