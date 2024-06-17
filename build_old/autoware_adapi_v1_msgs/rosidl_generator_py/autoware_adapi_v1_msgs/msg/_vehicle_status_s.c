// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_adapi_v1_msgs:msg/VehicleStatus.idl
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
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_status__struct.h"
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool autoware_adapi_v1_msgs__msg__gear__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_adapi_v1_msgs__msg__gear__convert_to_py(void * raw_ros_message);
bool autoware_adapi_v1_msgs__msg__turn_indicators__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_adapi_v1_msgs__msg__turn_indicators__convert_to_py(void * raw_ros_message);
bool autoware_adapi_v1_msgs__msg__hazard_lights__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_adapi_v1_msgs__msg__hazard_lights__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_adapi_v1_msgs__msg__vehicle_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("autoware_adapi_v1_msgs.msg._vehicle_status.VehicleStatus", full_classname_dest, 56) == 0);
  }
  autoware_adapi_v1_msgs__msg__VehicleStatus * ros_message = _ros_message;
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
  {  // gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear");
    if (!field) {
      return false;
    }
    if (!autoware_adapi_v1_msgs__msg__gear__convert_from_py(field, &ros_message->gear)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // turn_indicators
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_indicators");
    if (!field) {
      return false;
    }
    if (!autoware_adapi_v1_msgs__msg__turn_indicators__convert_from_py(field, &ros_message->turn_indicators)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // hazard_lights
    PyObject * field = PyObject_GetAttrString(_pymsg, "hazard_lights");
    if (!field) {
      return false;
    }
    if (!autoware_adapi_v1_msgs__msg__hazard_lights__convert_from_py(field, &ros_message->hazard_lights)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // steering_tire_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_tire_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_tire_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // energy_percentage
    PyObject * field = PyObject_GetAttrString(_pymsg, "energy_percentage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->energy_percentage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_adapi_v1_msgs__msg__vehicle_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_adapi_v1_msgs.msg._vehicle_status");
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
  autoware_adapi_v1_msgs__msg__VehicleStatus * ros_message = (autoware_adapi_v1_msgs__msg__VehicleStatus *)raw_ros_message;
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
  {  // gear
    PyObject * field = NULL;
    field = autoware_adapi_v1_msgs__msg__gear__convert_to_py(&ros_message->gear);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_indicators
    PyObject * field = NULL;
    field = autoware_adapi_v1_msgs__msg__turn_indicators__convert_to_py(&ros_message->turn_indicators);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_indicators", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hazard_lights
    PyObject * field = NULL;
    field = autoware_adapi_v1_msgs__msg__hazard_lights__convert_to_py(&ros_message->hazard_lights);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "hazard_lights", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_tire_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_tire_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_tire_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // energy_percentage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->energy_percentage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "energy_percentage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
