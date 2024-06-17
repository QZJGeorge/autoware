// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from morai_msgs:msg/PRCtrlCmd.idl
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
#include "morai_msgs/msg/detail/pr_ctrl_cmd__struct.h"
#include "morai_msgs/msg/detail/pr_ctrl_cmd__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool morai_msgs__msg__pr_ctrl_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("morai_msgs.msg._pr_ctrl_cmd.PRCtrlCmd", full_classname_dest, 37) == 0);
  }
  morai_msgs__msg__PRCtrlCmd * ros_message = _ros_message;
  {  // longitudinal_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitudinal_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // latitudinal_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitudinal_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitudinal_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angular_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angular_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * morai_msgs__msg__pr_ctrl_cmd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PRCtrlCmd */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("morai_msgs.msg._pr_ctrl_cmd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PRCtrlCmd");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  morai_msgs__msg__PRCtrlCmd * ros_message = (morai_msgs__msg__PRCtrlCmd *)raw_ros_message;
  {  // longitudinal_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitudinal_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitudinal_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latitudinal_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitudinal_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitudinal_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angular_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
