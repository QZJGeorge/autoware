// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tier4_planning_msgs:msg/AvoidanceDebugMsg.idl
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
#include "tier4_planning_msgs/msg/detail/avoidance_debug_msg__struct.h"
#include "tier4_planning_msgs/msg/detail/avoidance_debug_msg__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tier4_planning_msgs__msg__avoidance_debug_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("tier4_planning_msgs.msg._avoidance_debug_msg.AvoidanceDebugMsg", full_classname_dest, 62) == 0);
  }
  tier4_planning_msgs__msg__AvoidanceDebugMsg * ros_message = _ros_message;
  {  // object_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->object_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // allow_avoidance
    PyObject * field = PyObject_GetAttrString(_pymsg, "allow_avoidance");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->allow_avoidance = (Py_True == field);
    Py_DECREF(field);
  }
  {  // longitudinal_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitudinal_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lateral_distance_from_centerline
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_distance_from_centerline");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lateral_distance_from_centerline = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // to_furthest_linestring_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "to_furthest_linestring_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->to_furthest_linestring_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_shift_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_shift_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_shift_length = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // required_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "required_jerk");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->required_jerk = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // maximum_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "maximum_jerk");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->maximum_jerk = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // failed_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "failed_reason");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->failed_reason, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tier4_planning_msgs__msg__avoidance_debug_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AvoidanceDebugMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tier4_planning_msgs.msg._avoidance_debug_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AvoidanceDebugMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tier4_planning_msgs__msg__AvoidanceDebugMsg * ros_message = (tier4_planning_msgs__msg__AvoidanceDebugMsg *)raw_ros_message;
  {  // object_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->object_id.data,
      strlen(ros_message->object_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // allow_avoidance
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->allow_avoidance ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "allow_avoidance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitudinal_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitudinal_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitudinal_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_distance_from_centerline
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lateral_distance_from_centerline);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_distance_from_centerline", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // to_furthest_linestring_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->to_furthest_linestring_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "to_furthest_linestring_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_shift_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_shift_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_shift_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // required_jerk
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->required_jerk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "required_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maximum_jerk
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->maximum_jerk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maximum_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // failed_reason
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->failed_reason.data,
      strlen(ros_message->failed_reason.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "failed_reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
