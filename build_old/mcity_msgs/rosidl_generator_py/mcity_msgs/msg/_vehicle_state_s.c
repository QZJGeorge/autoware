// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mcity_msgs:msg/VehicleState.idl
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
#include "mcity_msgs/msg/detail/vehicle_state__struct.h"
#include "mcity_msgs/msg/detail/vehicle_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mcity_msgs__msg__vehicle_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("mcity_msgs.msg._vehicle_state.VehicleState", full_classname_dest, 42) == 0);
  }
  mcity_msgs__msg__VehicleState * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->timestamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // by_wire_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "by_wire_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->by_wire_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // throttle_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_cmd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_input
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_input");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_input = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_state");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_state = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->throttle_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // throttle_override
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_override");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->throttle_override = (Py_True == field);
    Py_DECREF(field);
  }
  {  // throttle_driver
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_driver");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->throttle_driver = (Py_True == field);
    Py_DECREF(field);
  }
  {  // throttle_timeout
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_timeout");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->throttle_timeout = (Py_True == field);
    Py_DECREF(field);
  }
  {  // brake_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_cmd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_input
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_input");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_input = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_state");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_state = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_torq_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_torq_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_torq_cmd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_torq_input
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_torq_input");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_torq_input = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_torq_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_torq_state");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_torq_state = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_boo_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_boo_output");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->brake_boo_output = (Py_True == field);
    Py_DECREF(field);
  }
  {  // brake_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->brake_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // brake_override
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_override");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->brake_override = (Py_True == field);
    Py_DECREF(field);
  }
  {  // brake_driver
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_driver");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->brake_driver = (Py_True == field);
    Py_DECREF(field);
  }
  {  // brake_timeout
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_timeout");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->brake_timeout = (Py_True == field);
    Py_DECREF(field);
  }
  {  // steer_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_cmd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steer_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_state");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_state = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steer_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_torque = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steer_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->steer_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // steer_override
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_override");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->steer_override = (Py_True == field);
    Py_DECREF(field);
  }
  {  // steer_timeout
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_timeout");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->steer_timeout = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gear_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_pos");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear_pos = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wheel_v_front_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_v_front_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_v_front_left = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheel_v_front_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_v_front_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_v_front_right = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheel_v_rear_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_v_rear_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_v_rear_left = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheel_v_rear_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_v_rear_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_v_rear_right = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mcity_msgs__msg__vehicle_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mcity_msgs.msg._vehicle_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mcity_msgs__msg__VehicleState * ros_message = (mcity_msgs__msg__VehicleState *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // by_wire_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->by_wire_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "by_wire_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_input
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_input);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_input", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_state
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->throttle_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_override
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->throttle_override ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_override", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_driver
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->throttle_driver ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_driver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_timeout
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->throttle_timeout ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_timeout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_input
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_input);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_input", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_state
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_torq_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_torq_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_torq_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_torq_input
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_torq_input);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_torq_input", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_torq_state
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_torq_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_torq_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_boo_output
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->brake_boo_output ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_boo_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->brake_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_override
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->brake_override ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_override", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_driver
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->brake_driver ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_driver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_timeout
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->brake_timeout ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_timeout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_state
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->steer_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_override
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->steer_override ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_override", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_timeout
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->steer_timeout ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_timeout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_pos
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gear_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_v_front_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_v_front_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_v_front_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_v_front_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_v_front_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_v_front_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_v_rear_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_v_rear_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_v_rear_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_v_rear_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_v_rear_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_v_rear_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
