// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tier4_system_msgs:msg/HazardStatus.idl
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
#include "tier4_system_msgs/msg/detail/hazard_status__struct.h"
#include "tier4_system_msgs/msg/detail/hazard_status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "diagnostic_msgs/msg/detail/diagnostic_status__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool diagnostic_msgs__msg__diagnostic_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * diagnostic_msgs__msg__diagnostic_status__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool diagnostic_msgs__msg__diagnostic_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * diagnostic_msgs__msg__diagnostic_status__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool diagnostic_msgs__msg__diagnostic_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * diagnostic_msgs__msg__diagnostic_status__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool diagnostic_msgs__msg__diagnostic_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * diagnostic_msgs__msg__diagnostic_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tier4_system_msgs__msg__hazard_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("tier4_system_msgs.msg._hazard_status.HazardStatus", full_classname_dest, 49) == 0);
  }
  tier4_system_msgs__msg__HazardStatus * ros_message = _ros_message;
  {  // level
    PyObject * field = PyObject_GetAttrString(_pymsg, "level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->level = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // emergency
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emergency = (Py_True == field);
    Py_DECREF(field);
  }
  {  // emergency_holding
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_holding");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emergency_holding = (Py_True == field);
    Py_DECREF(field);
  }
  {  // diagnostics_nf
    PyObject * field = PyObject_GetAttrString(_pymsg, "diagnostics_nf");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'diagnostics_nf'");
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
    if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&(ros_message->diagnostics_nf), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create diagnostic_msgs__msg__DiagnosticStatus__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    diagnostic_msgs__msg__DiagnosticStatus * dest = ros_message->diagnostics_nf.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!diagnostic_msgs__msg__diagnostic_status__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // diagnostics_sf
    PyObject * field = PyObject_GetAttrString(_pymsg, "diagnostics_sf");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'diagnostics_sf'");
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
    if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&(ros_message->diagnostics_sf), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create diagnostic_msgs__msg__DiagnosticStatus__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    diagnostic_msgs__msg__DiagnosticStatus * dest = ros_message->diagnostics_sf.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!diagnostic_msgs__msg__diagnostic_status__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // diagnostics_lf
    PyObject * field = PyObject_GetAttrString(_pymsg, "diagnostics_lf");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'diagnostics_lf'");
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
    if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&(ros_message->diagnostics_lf), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create diagnostic_msgs__msg__DiagnosticStatus__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    diagnostic_msgs__msg__DiagnosticStatus * dest = ros_message->diagnostics_lf.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!diagnostic_msgs__msg__diagnostic_status__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // diagnostics_spf
    PyObject * field = PyObject_GetAttrString(_pymsg, "diagnostics_spf");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'diagnostics_spf'");
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
    if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&(ros_message->diagnostics_spf), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create diagnostic_msgs__msg__DiagnosticStatus__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    diagnostic_msgs__msg__DiagnosticStatus * dest = ros_message->diagnostics_spf.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!diagnostic_msgs__msg__diagnostic_status__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * tier4_system_msgs__msg__hazard_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HazardStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tier4_system_msgs.msg._hazard_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HazardStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tier4_system_msgs__msg__HazardStatus * ros_message = (tier4_system_msgs__msg__HazardStatus *)raw_ros_message;
  {  // level
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emergency ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_holding
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emergency_holding ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_holding", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diagnostics_nf
    PyObject * field = NULL;
    size_t size = ros_message->diagnostics_nf.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    diagnostic_msgs__msg__DiagnosticStatus * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->diagnostics_nf.data[i]);
      PyObject * pyitem = diagnostic_msgs__msg__diagnostic_status__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "diagnostics_nf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diagnostics_sf
    PyObject * field = NULL;
    size_t size = ros_message->diagnostics_sf.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    diagnostic_msgs__msg__DiagnosticStatus * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->diagnostics_sf.data[i]);
      PyObject * pyitem = diagnostic_msgs__msg__diagnostic_status__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "diagnostics_sf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diagnostics_lf
    PyObject * field = NULL;
    size_t size = ros_message->diagnostics_lf.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    diagnostic_msgs__msg__DiagnosticStatus * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->diagnostics_lf.data[i]);
      PyObject * pyitem = diagnostic_msgs__msg__diagnostic_status__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "diagnostics_lf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diagnostics_spf
    PyObject * field = NULL;
    size_t size = ros_message->diagnostics_spf.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    diagnostic_msgs__msg__DiagnosticStatus * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->diagnostics_spf.data[i]);
      PyObject * pyitem = diagnostic_msgs__msg__diagnostic_status__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "diagnostics_spf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
