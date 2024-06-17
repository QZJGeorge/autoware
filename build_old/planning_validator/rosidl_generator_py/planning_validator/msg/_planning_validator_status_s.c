// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from planning_validator:msg/PlanningValidatorStatus.idl
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
#include "planning_validator/msg/detail/planning_validator_status__struct.h"
#include "planning_validator/msg/detail/planning_validator_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool planning_validator__msg__planning_validator_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[74];
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
    assert(strncmp("planning_validator.msg._planning_validator_status.PlanningValidatorStatus", full_classname_dest, 73) == 0);
  }
  planning_validator__msg__PlanningValidatorStatus * ros_message = _ros_message;
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
  {  // is_valid_finite_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_valid_finite_value");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_valid_finite_value = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_valid_interval
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_valid_interval");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_valid_interval = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_valid_relative_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_valid_relative_angle");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_valid_relative_angle = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_valid_curvature
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_valid_curvature");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_valid_curvature = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_valid_lateral_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_valid_lateral_acc");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_valid_lateral_acc = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_valid_longitudinal_max_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_valid_longitudinal_max_acc");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_valid_longitudinal_max_acc = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_valid_longitudinal_min_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_valid_longitudinal_min_acc");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_valid_longitudinal_min_acc = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_valid_steering
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_valid_steering");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_valid_steering = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_valid_steering_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_valid_steering_rate");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_valid_steering_rate = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_valid_velocity_deviation
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_valid_velocity_deviation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_valid_velocity_deviation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_valid_distance_deviation
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_valid_distance_deviation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_valid_distance_deviation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // max_interval_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_interval_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_interval_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_relative_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_relative_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_relative_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_curvature
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_curvature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_curvature = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_lateral_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_lateral_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_lateral_acc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_longitudinal_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_longitudinal_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_longitudinal_acc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_longitudinal_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_longitudinal_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_longitudinal_acc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_steering
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_steering");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_steering = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_steering_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_steering_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_steering_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_deviation
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_deviation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_deviation = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_deviation
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_deviation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_deviation = PyFloat_AS_DOUBLE(field);
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
PyObject * planning_validator__msg__planning_validator_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlanningValidatorStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("planning_validator.msg._planning_validator_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlanningValidatorStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  planning_validator__msg__PlanningValidatorStatus * ros_message = (planning_validator__msg__PlanningValidatorStatus *)raw_ros_message;
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
  {  // is_valid_finite_value
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_valid_finite_value ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_valid_finite_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_valid_interval
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_valid_interval ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_valid_interval", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_valid_relative_angle
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_valid_relative_angle ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_valid_relative_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_valid_curvature
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_valid_curvature ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_valid_curvature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_valid_lateral_acc
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_valid_lateral_acc ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_valid_lateral_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_valid_longitudinal_max_acc
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_valid_longitudinal_max_acc ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_valid_longitudinal_max_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_valid_longitudinal_min_acc
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_valid_longitudinal_min_acc ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_valid_longitudinal_min_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_valid_steering
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_valid_steering ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_valid_steering", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_valid_steering_rate
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_valid_steering_rate ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_valid_steering_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_valid_velocity_deviation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_valid_velocity_deviation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_valid_velocity_deviation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_valid_distance_deviation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_valid_distance_deviation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_valid_distance_deviation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_interval_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_interval_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_interval_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_relative_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_relative_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_relative_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_curvature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_curvature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_curvature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_lateral_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_lateral_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_lateral_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_longitudinal_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_longitudinal_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_longitudinal_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_longitudinal_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_longitudinal_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_longitudinal_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_steering
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_steering);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_steering", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_steering_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_steering_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_steering_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_deviation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_deviation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_deviation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_deviation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_deviation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_deviation", field);
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
