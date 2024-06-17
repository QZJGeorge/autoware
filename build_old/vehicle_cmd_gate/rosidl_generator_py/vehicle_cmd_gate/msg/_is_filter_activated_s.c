// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from vehicle_cmd_gate:msg/IsFilterActivated.idl
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
#include "vehicle_cmd_gate/msg/detail/is_filter_activated__struct.h"
#include "vehicle_cmd_gate/msg/detail/is_filter_activated__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool vehicle_cmd_gate__msg__is_filter_activated__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("vehicle_cmd_gate.msg._is_filter_activated.IsFilterActivated", full_classname_dest, 59) == 0);
  }
  vehicle_cmd_gate__msg__IsFilterActivated * ros_message = _ros_message;
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
  {  // is_activated
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_activated");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_activated = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_activated_on_steering
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_activated_on_steering");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_activated_on_steering = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_activated_on_steering_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_activated_on_steering_rate");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_activated_on_steering_rate = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_activated_on_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_activated_on_speed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_activated_on_speed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_activated_on_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_activated_on_acceleration");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_activated_on_acceleration = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_activated_on_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_activated_on_jerk");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_activated_on_jerk = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * vehicle_cmd_gate__msg__is_filter_activated__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IsFilterActivated */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("vehicle_cmd_gate.msg._is_filter_activated");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IsFilterActivated");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  vehicle_cmd_gate__msg__IsFilterActivated * ros_message = (vehicle_cmd_gate__msg__IsFilterActivated *)raw_ros_message;
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
  {  // is_activated
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_activated ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_activated", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_activated_on_steering
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_activated_on_steering ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_activated_on_steering", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_activated_on_steering_rate
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_activated_on_steering_rate ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_activated_on_steering_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_activated_on_speed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_activated_on_speed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_activated_on_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_activated_on_acceleration
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_activated_on_acceleration ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_activated_on_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_activated_on_jerk
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_activated_on_jerk ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_activated_on_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
