// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from eagleye_msgs:msg/Status.idl
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
#include "eagleye_msgs/msg/detail/status__struct.h"
#include "eagleye_msgs/msg/detail/status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool eagleye_msgs__msg__status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
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
    assert(strncmp("eagleye_msgs.msg._status.Status", full_classname_dest, 31) == 0);
  }
  eagleye_msgs__msg__Status * ros_message = _ros_message;
  {  // enabled_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "enabled_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enabled_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // estimate_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "estimate_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->estimate_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_abnormal
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_abnormal");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_abnormal = (Py_True == field);
    Py_DECREF(field);
  }
  {  // error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error_code = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * eagleye_msgs__msg__status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Status */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("eagleye_msgs.msg._status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Status");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  eagleye_msgs__msg__Status * ros_message = (eagleye_msgs__msg__Status *)raw_ros_message;
  {  // enabled_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enabled_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enabled_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // estimate_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->estimate_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "estimate_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_abnormal
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_abnormal ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_abnormal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->error_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
