// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from morai_msgs:msg/MapSpec.idl
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
#include "morai_msgs/msg/detail/map_spec__struct.h"
#include "morai_msgs/msg/detail/map_spec__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool morai_msgs__msg__map_spec__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
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
    assert(strncmp("morai_msgs.msg._map_spec.MapSpec", full_classname_dest, 32) == 0);
  }
  morai_msgs__msg__MapSpec * ros_message = _ros_message;
  {  // plane_coordinate_system
    PyObject * field = PyObject_GetAttrString(_pymsg, "plane_coordinate_system");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->plane_coordinate_system = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // utm_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "utm_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utm_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // utm_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "utm_offset");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->utm_offset)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ellipse
    PyObject * field = PyObject_GetAttrString(_pymsg, "ellipse");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->ellipse, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // central_latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "central_latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->central_latitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // central_meridian
    PyObject * field = PyObject_GetAttrString(_pymsg, "central_meridian");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->central_meridian = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // scale_factor
    PyObject * field = PyObject_GetAttrString(_pymsg, "scale_factor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->scale_factor = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // false_easting
    PyObject * field = PyObject_GetAttrString(_pymsg, "false_easting");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->false_easting = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // false_northing
    PyObject * field = PyObject_GetAttrString(_pymsg, "false_northing");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->false_northing = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * morai_msgs__msg__map_spec__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MapSpec */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("morai_msgs.msg._map_spec");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MapSpec");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  morai_msgs__msg__MapSpec * ros_message = (morai_msgs__msg__MapSpec *)raw_ros_message;
  {  // plane_coordinate_system
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->plane_coordinate_system);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plane_coordinate_system", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utm_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->utm_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utm_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utm_offset
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->utm_offset);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "utm_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ellipse
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->ellipse.data,
      strlen(ros_message->ellipse.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ellipse", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // central_latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->central_latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "central_latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // central_meridian
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->central_meridian);
    {
      int rc = PyObject_SetAttrString(_pymessage, "central_meridian", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scale_factor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->scale_factor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scale_factor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // false_easting
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->false_easting);
    {
      int rc = PyObject_SetAttrString(_pymessage, "false_easting", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // false_northing
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->false_northing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "false_northing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
