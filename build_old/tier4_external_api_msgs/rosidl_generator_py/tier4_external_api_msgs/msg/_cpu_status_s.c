// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tier4_external_api_msgs:msg/CpuStatus.idl
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
#include "tier4_external_api_msgs/msg/detail/cpu_status__struct.h"
#include "tier4_external_api_msgs/msg/detail/cpu_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tier4_external_api_msgs__msg__cpu_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("tier4_external_api_msgs.msg._cpu_status.CpuStatus", full_classname_dest, 49) == 0);
  }
  tier4_external_api_msgs__msg__CpuStatus * ros_message = _ros_message;
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // total
    PyObject * field = PyObject_GetAttrString(_pymsg, "total");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // usr
    PyObject * field = PyObject_GetAttrString(_pymsg, "usr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->usr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // nice
    PyObject * field = PyObject_GetAttrString(_pymsg, "nice");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->nice = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sys
    PyObject * field = PyObject_GetAttrString(_pymsg, "sys");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sys = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // idle
    PyObject * field = PyObject_GetAttrString(_pymsg, "idle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->idle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tier4_external_api_msgs__msg__cpu_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CpuStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tier4_external_api_msgs.msg._cpu_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CpuStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tier4_external_api_msgs__msg__CpuStatus * ros_message = (tier4_external_api_msgs__msg__CpuStatus *)raw_ros_message;
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // usr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->usr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "usr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nice
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->nice);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sys
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sys);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sys", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // idle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->idle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "idle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
