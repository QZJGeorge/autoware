// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from morai_msgs:msg/MapSpecIndex.idl
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
#include "morai_msgs/msg/detail/map_spec_index__struct.h"
#include "morai_msgs/msg/detail/map_spec_index__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool morai_msgs__msg__map_spec_index__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("morai_msgs.msg._map_spec_index.MapSpecIndex", full_classname_dest, 43) == 0);
  }
  morai_msgs__msg__MapSpecIndex * ros_message = _ros_message;
  {  // load_map_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "load_map_data");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->load_map_data = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * morai_msgs__msg__map_spec_index__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MapSpecIndex */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("morai_msgs.msg._map_spec_index");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MapSpecIndex");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  morai_msgs__msg__MapSpecIndex * ros_message = (morai_msgs__msg__MapSpecIndex *)raw_ros_message;
  {  // load_map_data
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->load_map_data ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load_map_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
