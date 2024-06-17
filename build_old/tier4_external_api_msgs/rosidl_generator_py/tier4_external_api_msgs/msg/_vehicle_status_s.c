// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tier4_external_api_msgs:msg/VehicleStatus.idl
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
#include "tier4_external_api_msgs/msg/detail/vehicle_status__struct.h"
#include "tier4_external_api_msgs/msg/detail/vehicle_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist__convert_to_py(void * raw_ros_message);
bool tier4_external_api_msgs__msg__steering__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tier4_external_api_msgs__msg__steering__convert_to_py(void * raw_ros_message);
bool tier4_external_api_msgs__msg__turn_signal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tier4_external_api_msgs__msg__turn_signal__convert_to_py(void * raw_ros_message);
bool tier4_external_api_msgs__msg__gear_shift__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tier4_external_api_msgs__msg__gear_shift__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tier4_external_api_msgs__msg__vehicle_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("tier4_external_api_msgs.msg._vehicle_status.VehicleStatus", full_classname_dest, 57) == 0);
  }
  tier4_external_api_msgs__msg__VehicleStatus * ros_message = _ros_message;
  {  // twist
    PyObject * field = PyObject_GetAttrString(_pymsg, "twist");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist__convert_from_py(field, &ros_message->twist)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // steering
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering");
    if (!field) {
      return false;
    }
    if (!tier4_external_api_msgs__msg__steering__convert_from_py(field, &ros_message->steering)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // turn_signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_signal");
    if (!field) {
      return false;
    }
    if (!tier4_external_api_msgs__msg__turn_signal__convert_from_py(field, &ros_message->turn_signal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // gear_shift
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_shift");
    if (!field) {
      return false;
    }
    if (!tier4_external_api_msgs__msg__gear_shift__convert_from_py(field, &ros_message->gear_shift)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tier4_external_api_msgs__msg__vehicle_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tier4_external_api_msgs.msg._vehicle_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tier4_external_api_msgs__msg__VehicleStatus * ros_message = (tier4_external_api_msgs__msg__VehicleStatus *)raw_ros_message;
  {  // twist
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist__convert_to_py(&ros_message->twist);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "twist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering
    PyObject * field = NULL;
    field = tier4_external_api_msgs__msg__steering__convert_to_py(&ros_message->steering);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_signal
    PyObject * field = NULL;
    field = tier4_external_api_msgs__msg__turn_signal__convert_to_py(&ros_message->turn_signal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_signal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_shift
    PyObject * field = NULL;
    field = tier4_external_api_msgs__msg__gear_shift__convert_to_py(&ros_message->gear_shift);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_shift", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
