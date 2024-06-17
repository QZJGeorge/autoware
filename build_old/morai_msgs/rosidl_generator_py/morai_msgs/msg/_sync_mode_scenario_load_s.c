// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from morai_msgs:msg/SyncModeScenarioLoad.idl
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
#include "morai_msgs/msg/detail/sync_mode_scenario_load__struct.h"
#include "morai_msgs/msg/detail/sync_mode_scenario_load__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool morai_msgs__msg__sync_mode_scenario_load__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("morai_msgs.msg._sync_mode_scenario_load.SyncModeScenarioLoad", full_classname_dest, 60) == 0);
  }
  morai_msgs__msg__SyncModeScenarioLoad * ros_message = _ros_message;
  {  // frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frame = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // file_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "file_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->file_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // load_network_connection_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "load_network_connection_data");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->load_network_connection_data = (Py_True == field);
    Py_DECREF(field);
  }
  {  // delete_all
    PyObject * field = PyObject_GetAttrString(_pymsg, "delete_all");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->delete_all = (Py_True == field);
    Py_DECREF(field);
  }
  {  // load_ego_vehicle_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "load_ego_vehicle_data");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->load_ego_vehicle_data = (Py_True == field);
    Py_DECREF(field);
  }
  {  // load_surrounding_vehicle_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "load_surrounding_vehicle_data");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->load_surrounding_vehicle_data = (Py_True == field);
    Py_DECREF(field);
  }
  {  // load_pedestrian_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "load_pedestrian_data");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->load_pedestrian_data = (Py_True == field);
    Py_DECREF(field);
  }
  {  // load_obstacle_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "load_obstacle_data");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->load_obstacle_data = (Py_True == field);
    Py_DECREF(field);
  }
  {  // set_pause
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_pause");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->set_pause = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * morai_msgs__msg__sync_mode_scenario_load__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SyncModeScenarioLoad */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("morai_msgs.msg._sync_mode_scenario_load");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SyncModeScenarioLoad");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  morai_msgs__msg__SyncModeScenarioLoad * ros_message = (morai_msgs__msg__SyncModeScenarioLoad *)raw_ros_message;
  {  // frame
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->frame);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // file_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->file_name.data,
      strlen(ros_message->file_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "file_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load_network_connection_data
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->load_network_connection_data ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load_network_connection_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delete_all
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->delete_all ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delete_all", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load_ego_vehicle_data
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->load_ego_vehicle_data ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load_ego_vehicle_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load_surrounding_vehicle_data
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->load_surrounding_vehicle_data ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load_surrounding_vehicle_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load_pedestrian_data
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->load_pedestrian_data ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load_pedestrian_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load_obstacle_data
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->load_obstacle_data ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load_obstacle_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_pause
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->set_pause ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_pause", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
