// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tier4_planning_msgs:msg/VelocityLimitConstraints.idl
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
#include "tier4_planning_msgs/msg/detail/velocity_limit_constraints__struct.h"
#include "tier4_planning_msgs/msg/detail/velocity_limit_constraints__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tier4_planning_msgs__msg__velocity_limit_constraints__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("tier4_planning_msgs.msg._velocity_limit_constraints.VelocityLimitConstraints", full_classname_dest, 76) == 0);
  }
  tier4_planning_msgs__msg__VelocityLimitConstraints * ros_message = _ros_message;
  {  // min_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_acceleration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_jerk");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_jerk = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_jerk");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_jerk = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tier4_planning_msgs__msg__velocity_limit_constraints__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VelocityLimitConstraints */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tier4_planning_msgs.msg._velocity_limit_constraints");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VelocityLimitConstraints");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tier4_planning_msgs__msg__VelocityLimitConstraints * ros_message = (tier4_planning_msgs__msg__VelocityLimitConstraints *)raw_ros_message;
  {  // min_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_jerk
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_jerk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_jerk
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_jerk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
