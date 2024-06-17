// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from morai_msgs:msg/VehicleSpec.idl
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
#include "morai_msgs/msg/detail/vehicle_spec__struct.h"
#include "morai_msgs/msg/detail/vehicle_spec__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool morai_msgs__msg__vehicle_spec__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("morai_msgs.msg._vehicle_spec.VehicleSpec", full_classname_dest, 40) == 0);
  }
  morai_msgs__msg__VehicleSpec * ros_message = _ros_message;
  {  // size
    PyObject * field = PyObject_GetAttrString(_pymsg, "size");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->size)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // wheel_base
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_base");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_base = (float)PyFloat_AS_DOUBLE(field);
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
  {  // overhang
    PyObject * field = PyObject_GetAttrString(_pymsg, "overhang");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->overhang = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_overhang
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_overhang");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_overhang = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * morai_msgs__msg__vehicle_spec__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleSpec */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("morai_msgs.msg._vehicle_spec");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleSpec");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  morai_msgs__msg__VehicleSpec * ros_message = (morai_msgs__msg__VehicleSpec *)raw_ros_message;
  {  // size
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->size);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_base
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_base);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_base", field);
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
  {  // overhang
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->overhang);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overhang", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_overhang
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_overhang);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_overhang", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
