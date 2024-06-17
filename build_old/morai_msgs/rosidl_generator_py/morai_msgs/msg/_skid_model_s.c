// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from morai_msgs:msg/SkidModel.idl
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
#include "morai_msgs/msg/detail/skid_model__struct.h"
#include "morai_msgs/msg/detail/skid_model__functions.h"

bool morai_msgs__msg__wheel_rpm__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * morai_msgs__msg__wheel_rpm__convert_to_py(void * raw_ros_message);
bool morai_msgs__msg__wheel_torque__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * morai_msgs__msg__wheel_torque__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool morai_msgs__msg__skid_model__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("morai_msgs.msg._skid_model.SkidModel", full_classname_dest, 36) == 0);
  }
  morai_msgs__msg__SkidModel * ros_message = _ros_message;
  {  // rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "rpm");
    if (!field) {
      return false;
    }
    if (!morai_msgs__msg__wheel_rpm__convert_from_py(field, &ros_message->rpm)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "torque");
    if (!field) {
      return false;
    }
    if (!morai_msgs__msg__wheel_torque__convert_from_py(field, &ros_message->torque)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * morai_msgs__msg__skid_model__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SkidModel */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("morai_msgs.msg._skid_model");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SkidModel");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  morai_msgs__msg__SkidModel * ros_message = (morai_msgs__msg__SkidModel *)raw_ros_message;
  {  // rpm
    PyObject * field = NULL;
    field = morai_msgs__msg__wheel_rpm__convert_to_py(&ros_message->rpm);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // torque
    PyObject * field = NULL;
    field = morai_msgs__msg__wheel_torque__convert_to_py(&ros_message->torque);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
