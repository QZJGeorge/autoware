// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_adapi_v1_msgs:msg/VehicleDimensions.idl
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
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_dimensions__struct.h"
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_dimensions__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__polygon__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__polygon__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_adapi_v1_msgs__msg__vehicle_dimensions__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("autoware_adapi_v1_msgs.msg._vehicle_dimensions.VehicleDimensions", full_classname_dest, 64) == 0);
  }
  autoware_adapi_v1_msgs__msg__VehicleDimensions * ros_message = _ros_message;
  {  // wheel_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_radius = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheel_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_width = (float)PyFloat_AS_DOUBLE(field);
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
  {  // wheel_tread
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_tread");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_tread = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_overhang
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_overhang");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_overhang = (float)PyFloat_AS_DOUBLE(field);
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
  {  // left_overhang
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_overhang");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_overhang = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_overhang
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_overhang");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_overhang = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // footprint
    PyObject * field = PyObject_GetAttrString(_pymsg, "footprint");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__polygon__convert_from_py(field, &ros_message->footprint)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_adapi_v1_msgs__msg__vehicle_dimensions__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleDimensions */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_adapi_v1_msgs.msg._vehicle_dimensions");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleDimensions");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_adapi_v1_msgs__msg__VehicleDimensions * ros_message = (autoware_adapi_v1_msgs__msg__VehicleDimensions *)raw_ros_message;
  {  // wheel_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_width", field);
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
  {  // wheel_tread
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_tread);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_tread", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_overhang
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_overhang);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_overhang", field);
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
  {  // left_overhang
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_overhang);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_overhang", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_overhang
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_overhang);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_overhang", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // footprint
    PyObject * field = NULL;
    field = geometry_msgs__msg__polygon__convert_to_py(&ros_message->footprint);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "footprint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
