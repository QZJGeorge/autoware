// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from morai_msgs:msg/CollisionData.idl
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
#include "morai_msgs/msg/detail/collision_data__struct.h"
#include "morai_msgs/msg/detail/collision_data__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "morai_msgs/msg/detail/object_status__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool morai_msgs__msg__object_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * morai_msgs__msg__object_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool morai_msgs__msg__collision_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("morai_msgs.msg._collision_data.CollisionData", full_classname_dest, 44) == 0);
  }
  morai_msgs__msg__CollisionData * ros_message = _ros_message;
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
  {  // global_offset_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "global_offset_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->global_offset_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // global_offset_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "global_offset_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->global_offset_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // global_offset_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "global_offset_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->global_offset_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // collision_object
    PyObject * field = PyObject_GetAttrString(_pymsg, "collision_object");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'collision_object'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!morai_msgs__msg__ObjectStatus__Sequence__init(&(ros_message->collision_object), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create morai_msgs__msg__ObjectStatus__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    morai_msgs__msg__ObjectStatus * dest = ros_message->collision_object.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!morai_msgs__msg__object_status__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * morai_msgs__msg__collision_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CollisionData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("morai_msgs.msg._collision_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CollisionData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  morai_msgs__msg__CollisionData * ros_message = (morai_msgs__msg__CollisionData *)raw_ros_message;
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
  {  // global_offset_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->global_offset_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "global_offset_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // global_offset_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->global_offset_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "global_offset_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // global_offset_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->global_offset_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "global_offset_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // collision_object
    PyObject * field = NULL;
    size_t size = ros_message->collision_object.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    morai_msgs__msg__ObjectStatus * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->collision_object.data[i]);
      PyObject * pyitem = morai_msgs__msg__object_status__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "collision_object", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
