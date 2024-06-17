// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tier4_api_msgs:msg/AwapiVehicleStatus.idl
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
#include "tier4_api_msgs/msg/detail/awapi_vehicle_status__struct.h"
#include "tier4_api_msgs/msg/detail/awapi_vehicle_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
bool tier4_api_msgs__msg__euler__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tier4_api_msgs__msg__euler__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geographic_msgs__msg__geo_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geographic_msgs__msg__geo_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tier4_api_msgs__msg__awapi_vehicle_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("tier4_api_msgs.msg._awapi_vehicle_status.AwapiVehicleStatus", full_classname_dest, 59) == 0);
  }
  tier4_api_msgs__msg__AwapiVehicleStatus * ros_message = _ros_message;
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
  {  // pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // eulerangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "eulerangle");
    if (!field) {
      return false;
    }
    if (!tier4_api_msgs__msg__euler__convert_from_py(field, &ros_message->eulerangle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // geo_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "geo_point");
    if (!field) {
      return false;
    }
    if (!geographic_msgs__msg__geo_point__convert_from_py(field, &ros_message->geo_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_velocity = PyFloat_AS_DOUBLE(field);
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
  {  // gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // energy_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "energy_level");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->energy_level = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // turn_signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_signal");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn_signal = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // target_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_steering
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_steering");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_steering = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_steering_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_steering_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_steering_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tier4_api_msgs__msg__awapi_vehicle_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AwapiVehicleStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tier4_api_msgs.msg._awapi_vehicle_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AwapiVehicleStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tier4_api_msgs__msg__AwapiVehicleStatus * ros_message = (tier4_api_msgs__msg__AwapiVehicleStatus *)raw_ros_message;
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
  {  // pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eulerangle
    PyObject * field = NULL;
    field = tier4_api_msgs__msg__euler__convert_to_py(&ros_message->eulerangle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eulerangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // geo_point
    PyObject * field = NULL;
    field = geographic_msgs__msg__geo_point__convert_to_py(&ros_message->geo_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "geo_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_velocity", field);
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
  {  // energy_level
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->energy_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "energy_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_signal
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->turn_signal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_signal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_steering
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_steering);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_steering", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_steering_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_steering_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_steering_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
