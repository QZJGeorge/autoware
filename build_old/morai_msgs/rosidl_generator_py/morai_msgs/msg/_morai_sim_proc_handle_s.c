// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from morai_msgs:msg/MoraiSimProcHandle.idl
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
#include "morai_msgs/msg/detail/morai_sim_proc_handle__struct.h"
#include "morai_msgs/msg/detail/morai_sim_proc_handle__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool morai_msgs__msg__morai_sim_proc_handle__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("morai_msgs.msg._morai_sim_proc_handle.MoraiSimProcHandle", full_classname_dest, 56) == 0);
  }
  morai_msgs__msg__MoraiSimProcHandle * ros_message = _ros_message;
  {  // sim_process_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "sim_process_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sim_process_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // replay_option
    PyObject * field = PyObject_GetAttrString(_pymsg, "replay_option");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->replay_option = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rosbag_file_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "rosbag_file_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->rosbag_file_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // replay_target_option
    PyObject * field = PyObject_GetAttrString(_pymsg, "replay_target_option");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->replay_target_option = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // replay_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "replay_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->replay_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // start_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->start_time = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * morai_msgs__msg__morai_sim_proc_handle__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoraiSimProcHandle */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("morai_msgs.msg._morai_sim_proc_handle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoraiSimProcHandle");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  morai_msgs__msg__MoraiSimProcHandle * ros_message = (morai_msgs__msg__MoraiSimProcHandle *)raw_ros_message;
  {  // sim_process_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sim_process_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sim_process_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // replay_option
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->replay_option);
    {
      int rc = PyObject_SetAttrString(_pymessage, "replay_option", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rosbag_file_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->rosbag_file_name.data,
      strlen(ros_message->rosbag_file_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rosbag_file_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // replay_target_option
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->replay_target_option);
    {
      int rc = PyObject_SetAttrString(_pymessage, "replay_target_option", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // replay_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->replay_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "replay_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_time
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->start_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
