// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tier4_vehicle_msgs:msg/ActuationCommand.idl
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
#include "tier4_vehicle_msgs/msg/detail/actuation_command__struct.h"
#include "tier4_vehicle_msgs/msg/detail/actuation_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tier4_vehicle_msgs__msg__actuation_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("tier4_vehicle_msgs.msg._actuation_command.ActuationCommand", full_classname_dest, 58) == 0);
  }
  tier4_vehicle_msgs__msg__ActuationCommand * ros_message = _ros_message;
  {  // accel_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_cmd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_cmd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steer_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_cmd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tier4_vehicle_msgs__msg__actuation_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ActuationCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tier4_vehicle_msgs.msg._actuation_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ActuationCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tier4_vehicle_msgs__msg__ActuationCommand * ros_message = (tier4_vehicle_msgs__msg__ActuationCommand *)raw_ros_message;
  {  // accel_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
