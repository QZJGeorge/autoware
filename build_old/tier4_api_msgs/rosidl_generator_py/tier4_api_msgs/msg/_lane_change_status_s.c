// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tier4_api_msgs:msg/LaneChangeStatus.idl
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
#include "tier4_api_msgs/msg/detail/lane_change_status__struct.h"
#include "tier4_api_msgs/msg/detail/lane_change_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool tier4_planning_msgs__msg__path__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * tier4_planning_msgs__msg__path__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tier4_api_msgs__msg__lane_change_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("tier4_api_msgs.msg._lane_change_status.LaneChangeStatus", full_classname_dest, 55) == 0);
  }
  tier4_api_msgs__msg__LaneChangeStatus * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // force_lane_change_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "force_lane_change_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->force_lane_change_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lane_change_ready
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_change_ready");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lane_change_ready = (Py_True == field);
    Py_DECREF(field);
  }
  {  // candidate_path
    PyObject * field = PyObject_GetAttrString(_pymsg, "candidate_path");
    if (!field) {
      return false;
    }
    if (!tier4_planning_msgs__msg__path__convert_from_py(field, &ros_message->candidate_path)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tier4_api_msgs__msg__lane_change_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LaneChangeStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tier4_api_msgs.msg._lane_change_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaneChangeStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tier4_api_msgs__msg__LaneChangeStatus * ros_message = (tier4_api_msgs__msg__LaneChangeStatus *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force_lane_change_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->force_lane_change_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "force_lane_change_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_change_ready
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lane_change_ready ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_change_ready", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // candidate_path
    PyObject * field = NULL;
    field = tier4_planning_msgs__msg__path__convert_to_py(&ros_message->candidate_path);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "candidate_path", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
