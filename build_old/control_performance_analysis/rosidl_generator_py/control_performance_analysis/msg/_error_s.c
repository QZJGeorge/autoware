// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from control_performance_analysis:msg/Error.idl
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
#include "control_performance_analysis/msg/detail/error__struct.h"
#include "control_performance_analysis/msg/detail/error__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool control_performance_analysis__msg__error__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("control_performance_analysis.msg._error.Error", full_classname_dest, 45) == 0);
  }
  control_performance_analysis__msg__Error * ros_message = _ros_message;
  {  // lateral_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lateral_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lateral_error_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_error_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lateral_error_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lateral_error_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_error_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lateral_error_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitudinal_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitudinal_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitudinal_error_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal_error_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitudinal_error_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitudinal_error_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal_error_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitudinal_error_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_error_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_error_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_error_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // control_effort_energy
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_effort_energy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->control_effort_energy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // error_energy
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_energy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->error_energy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // value_approximation
    PyObject * field = PyObject_GetAttrString(_pymsg, "value_approximation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->value_approximation = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // curvature_estimate
    PyObject * field = PyObject_GetAttrString(_pymsg, "curvature_estimate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->curvature_estimate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // curvature_estimate_pp
    PyObject * field = PyObject_GetAttrString(_pymsg, "curvature_estimate_pp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->curvature_estimate_pp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vehicle_velocity_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_velocity_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vehicle_velocity_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tracking_curvature_discontinuity_ability
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracking_curvature_discontinuity_ability");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tracking_curvature_discontinuity_ability = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * control_performance_analysis__msg__error__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Error */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("control_performance_analysis.msg._error");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Error");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  control_performance_analysis__msg__Error * ros_message = (control_performance_analysis__msg__Error *)raw_ros_message;
  {  // lateral_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lateral_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_error_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lateral_error_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_error_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_error_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lateral_error_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_error_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitudinal_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitudinal_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitudinal_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitudinal_error_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitudinal_error_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitudinal_error_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitudinal_error_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitudinal_error_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitudinal_error_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_error_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_error_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_error_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_effort_energy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->control_effort_energy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_effort_energy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_energy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->error_energy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_energy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // value_approximation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->value_approximation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "value_approximation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curvature_estimate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->curvature_estimate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "curvature_estimate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curvature_estimate_pp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->curvature_estimate_pp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "curvature_estimate_pp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_velocity_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vehicle_velocity_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_velocity_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tracking_curvature_discontinuity_ability
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tracking_curvature_discontinuity_ability);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracking_curvature_discontinuity_ability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
