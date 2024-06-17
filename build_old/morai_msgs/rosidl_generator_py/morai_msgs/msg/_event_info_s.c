// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from morai_msgs:msg/EventInfo.idl
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
#include "morai_msgs/msg/detail/event_info__struct.h"
#include "morai_msgs/msg/detail/event_info__functions.h"

bool morai_msgs__msg__lamps__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * morai_msgs__msg__lamps__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool morai_msgs__msg__event_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("morai_msgs.msg._event_info.EventInfo", full_classname_dest, 36) == 0);
  }
  morai_msgs__msg__EventInfo * ros_message = _ros_message;
  {  // option
    PyObject * field = PyObject_GetAttrString(_pymsg, "option");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->option = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ctrl_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "ctrl_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ctrl_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lamps
    PyObject * field = PyObject_GetAttrString(_pymsg, "lamps");
    if (!field) {
      return false;
    }
    if (!morai_msgs__msg__lamps__convert_from_py(field, &ros_message->lamps)) {
      Py_DECREF(field);
      return false;
    }
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
PyObject * morai_msgs__msg__event_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EventInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("morai_msgs.msg._event_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EventInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  morai_msgs__msg__EventInfo * ros_message = (morai_msgs__msg__EventInfo *)raw_ros_message;
  {  // option
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->option);
    {
      int rc = PyObject_SetAttrString(_pymessage, "option", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ctrl_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ctrl_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ctrl_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lamps
    PyObject * field = NULL;
    field = morai_msgs__msg__lamps__convert_to_py(&ros_message->lamps);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lamps", field);
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
