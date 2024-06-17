// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_adapi_v1_msgs:msg/CooperationStatus.idl
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
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_status__struct.h"
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);
bool autoware_adapi_v1_msgs__msg__cooperation_decision__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_adapi_v1_msgs__msg__cooperation_decision__convert_to_py(void * raw_ros_message);
bool autoware_adapi_v1_msgs__msg__cooperation_decision__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_adapi_v1_msgs__msg__cooperation_decision__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_adapi_v1_msgs__msg__cooperation_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("autoware_adapi_v1_msgs.msg._cooperation_status.CooperationStatus", full_classname_dest, 64) == 0);
  }
  autoware_adapi_v1_msgs__msg__CooperationStatus * ros_message = _ros_message;
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
  {  // autonomous
    PyObject * field = PyObject_GetAttrString(_pymsg, "autonomous");
    if (!field) {
      return false;
    }
    if (!autoware_adapi_v1_msgs__msg__cooperation_decision__convert_from_py(field, &ros_message->autonomous)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cooperator
    PyObject * field = PyObject_GetAttrString(_pymsg, "cooperator");
    if (!field) {
      return false;
    }
    if (!autoware_adapi_v1_msgs__msg__cooperation_decision__convert_from_py(field, &ros_message->cooperator)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cancellable
    PyObject * field = PyObject_GetAttrString(_pymsg, "cancellable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cancellable = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_adapi_v1_msgs__msg__cooperation_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CooperationStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_adapi_v1_msgs.msg._cooperation_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CooperationStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_adapi_v1_msgs__msg__CooperationStatus * ros_message = (autoware_adapi_v1_msgs__msg__CooperationStatus *)raw_ros_message;
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
  {  // autonomous
    PyObject * field = NULL;
    field = autoware_adapi_v1_msgs__msg__cooperation_decision__convert_to_py(&ros_message->autonomous);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "autonomous", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cooperator
    PyObject * field = NULL;
    field = autoware_adapi_v1_msgs__msg__cooperation_decision__convert_to_py(&ros_message->cooperator);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cooperator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cancellable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cancellable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cancellable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
