// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tier4_system_msgs:msg/OperationModeAvailability.idl
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
#include "tier4_system_msgs/msg/detail/operation_mode_availability__struct.h"
#include "tier4_system_msgs/msg/detail/operation_mode_availability__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tier4_system_msgs__msg__operation_mode_availability__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[77];
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
    assert(strncmp("tier4_system_msgs.msg._operation_mode_availability.OperationModeAvailability", full_classname_dest, 76) == 0);
  }
  tier4_system_msgs__msg__OperationModeAvailability * ros_message = _ros_message;
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
  {  // stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // autonomous
    PyObject * field = PyObject_GetAttrString(_pymsg, "autonomous");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->autonomous = (Py_True == field);
    Py_DECREF(field);
  }
  {  // local
    PyObject * field = PyObject_GetAttrString(_pymsg, "local");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->local = (Py_True == field);
    Py_DECREF(field);
  }
  {  // remote
    PyObject * field = PyObject_GetAttrString(_pymsg, "remote");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->remote = (Py_True == field);
    Py_DECREF(field);
  }
  {  // emergency_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emergency_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // comfortable_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "comfortable_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->comfortable_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pull_over
    PyObject * field = PyObject_GetAttrString(_pymsg, "pull_over");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pull_over = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tier4_system_msgs__msg__operation_mode_availability__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OperationModeAvailability */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tier4_system_msgs.msg._operation_mode_availability");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OperationModeAvailability");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tier4_system_msgs__msg__OperationModeAvailability * ros_message = (tier4_system_msgs__msg__OperationModeAvailability *)raw_ros_message;
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
  {  // stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // autonomous
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->autonomous ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "autonomous", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->local ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remote
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->remote ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remote", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emergency_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // comfortable_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->comfortable_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "comfortable_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pull_over
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pull_over ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pull_over", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
