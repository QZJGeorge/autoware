// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from control_validator:msg/ControlValidatorStatus.idl
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
#include "control_validator/msg/detail/control_validator_status__struct.h"
#include "control_validator/msg/detail/control_validator_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool control_validator__msg__control_validator_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
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
    assert(strncmp("control_validator.msg._control_validator_status.ControlValidatorStatus", full_classname_dest, 70) == 0);
  }
  control_validator__msg__ControlValidatorStatus * ros_message = _ros_message;
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
  {  // is_valid_max_distance_deviation
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_valid_max_distance_deviation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_valid_max_distance_deviation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // max_distance_deviation
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_distance_deviation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_distance_deviation = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // invalid_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "invalid_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->invalid_count = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * control_validator__msg__control_validator_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlValidatorStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("control_validator.msg._control_validator_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlValidatorStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  control_validator__msg__ControlValidatorStatus * ros_message = (control_validator__msg__ControlValidatorStatus *)raw_ros_message;
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
  {  // is_valid_max_distance_deviation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_valid_max_distance_deviation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_valid_max_distance_deviation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_distance_deviation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_distance_deviation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_distance_deviation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // invalid_count
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->invalid_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "invalid_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
