// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from morai_msgs:msg/ReplayInfo.idl
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
#include "morai_msgs/msg/detail/replay_info__struct.h"
#include "morai_msgs/msg/detail/replay_info__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "morai_msgs/msg/detail/object_status__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__quaternion__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__quaternion__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
bool morai_msgs__msg__object_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * morai_msgs__msg__object_status__convert_to_py(void * raw_ros_message);
bool morai_msgs__msg__object_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * morai_msgs__msg__object_status__convert_to_py(void * raw_ros_message);
bool morai_msgs__msg__object_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * morai_msgs__msg__object_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool morai_msgs__msg__replay_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("morai_msgs.msg._replay_info.ReplayInfo", full_classname_dest, 38) == 0);
  }
  morai_msgs__msg__ReplayInfo * ros_message = _ros_message;
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
  {  // ego_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "ego_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ego_acc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ego_brake
    PyObject * field = PyObject_GetAttrString(_pymsg, "ego_brake");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ego_brake = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ego_steer
    PyObject * field = PyObject_GetAttrString(_pymsg, "ego_steer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ego_steer = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__quaternion__convert_from_py(field, &ros_message->orientation)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // linear_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "linear_acceleration");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->linear_acceleration)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // angular_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_velocity");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->angular_velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // num_of_npcs
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_of_npcs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_of_npcs = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // num_of_pedestrian
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_of_pedestrian");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_of_pedestrian = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // num_of_obstacle
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_of_obstacle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_of_obstacle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // npc_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "npc_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'npc_list'");
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
    if (!morai_msgs__msg__ObjectStatus__Sequence__init(&(ros_message->npc_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create morai_msgs__msg__ObjectStatus__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    morai_msgs__msg__ObjectStatus * dest = ros_message->npc_list.data;
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
  {  // pedestrian_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "pedestrian_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'pedestrian_list'");
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
    if (!morai_msgs__msg__ObjectStatus__Sequence__init(&(ros_message->pedestrian_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create morai_msgs__msg__ObjectStatus__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    morai_msgs__msg__ObjectStatus * dest = ros_message->pedestrian_list.data;
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
  {  // obstacle_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'obstacle_list'");
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
    if (!morai_msgs__msg__ObjectStatus__Sequence__init(&(ros_message->obstacle_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create morai_msgs__msg__ObjectStatus__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    morai_msgs__msg__ObjectStatus * dest = ros_message->obstacle_list.data;
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
PyObject * morai_msgs__msg__replay_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ReplayInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("morai_msgs.msg._replay_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ReplayInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  morai_msgs__msg__ReplayInfo * ros_message = (morai_msgs__msg__ReplayInfo *)raw_ros_message;
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
  {  // ego_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ego_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ego_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ego_brake
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ego_brake);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ego_brake", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ego_steer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ego_steer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ego_steer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation
    PyObject * field = NULL;
    field = geometry_msgs__msg__quaternion__convert_to_py(&ros_message->orientation);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // linear_acceleration
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->linear_acceleration);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "linear_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_velocity
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->angular_velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_of_npcs
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->num_of_npcs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_of_npcs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_of_pedestrian
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->num_of_pedestrian);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_of_pedestrian", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_of_obstacle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->num_of_obstacle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_of_obstacle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // npc_list
    PyObject * field = NULL;
    size_t size = ros_message->npc_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    morai_msgs__msg__ObjectStatus * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->npc_list.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "npc_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pedestrian_list
    PyObject * field = NULL;
    size_t size = ros_message->pedestrian_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    morai_msgs__msg__ObjectStatus * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->pedestrian_list.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "pedestrian_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_list
    PyObject * field = NULL;
    size_t size = ros_message->obstacle_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    morai_msgs__msg__ObjectStatus * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->obstacle_list.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
