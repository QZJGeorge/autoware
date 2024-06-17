// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mcity_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef MCITY_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_
#define MCITY_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mcity_msgs__msg__VehicleState __attribute__((deprecated))
#else
# define DEPRECATED__mcity_msgs__msg__VehicleState __declspec(deprecated)
#endif

namespace mcity_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleState_
{
  using Type = VehicleState_<ContainerAllocator>;

  explicit VehicleState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->speed_x = 0.0;
      this->speed_y = 0.0;
      this->speed_z = 0.0;
      this->acc_x = 0.0;
      this->acc_y = 0.0;
      this->acc_z = 0.0;
      this->heading = 0.0;
      this->yaw_rate = 0.0;
      this->by_wire_enabled = false;
      this->throttle_cmd = 0.0;
      this->throttle_input = 0.0;
      this->throttle_state = 0.0;
      this->throttle_enabled = false;
      this->throttle_override = false;
      this->throttle_driver = false;
      this->throttle_timeout = false;
      this->brake_cmd = 0.0;
      this->brake_input = 0.0;
      this->brake_state = 0.0;
      this->brake_torq_cmd = 0.0;
      this->brake_torq_input = 0.0;
      this->brake_torq_state = 0.0;
      this->brake_boo_output = false;
      this->brake_enabled = false;
      this->brake_override = false;
      this->brake_driver = false;
      this->brake_timeout = false;
      this->steer_cmd = 0.0;
      this->steer_state = 0.0;
      this->steer_torque = 0.0;
      this->steer_enabled = false;
      this->steer_override = false;
      this->steer_timeout = false;
      this->gear_pos = 0;
      this->wheel_v_front_left = 0.0;
      this->wheel_v_front_right = 0.0;
      this->wheel_v_rear_left = 0.0;
      this->wheel_v_rear_right = 0.0;
    }
  }

  explicit VehicleState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->speed_x = 0.0;
      this->speed_y = 0.0;
      this->speed_z = 0.0;
      this->acc_x = 0.0;
      this->acc_y = 0.0;
      this->acc_z = 0.0;
      this->heading = 0.0;
      this->yaw_rate = 0.0;
      this->by_wire_enabled = false;
      this->throttle_cmd = 0.0;
      this->throttle_input = 0.0;
      this->throttle_state = 0.0;
      this->throttle_enabled = false;
      this->throttle_override = false;
      this->throttle_driver = false;
      this->throttle_timeout = false;
      this->brake_cmd = 0.0;
      this->brake_input = 0.0;
      this->brake_state = 0.0;
      this->brake_torq_cmd = 0.0;
      this->brake_torq_input = 0.0;
      this->brake_torq_state = 0.0;
      this->brake_boo_output = false;
      this->brake_enabled = false;
      this->brake_override = false;
      this->brake_driver = false;
      this->brake_timeout = false;
      this->steer_cmd = 0.0;
      this->steer_state = 0.0;
      this->steer_torque = 0.0;
      this->steer_enabled = false;
      this->steer_override = false;
      this->steer_timeout = false;
      this->gear_pos = 0;
      this->wheel_v_front_left = 0.0;
      this->wheel_v_front_right = 0.0;
      this->wheel_v_rear_left = 0.0;
      this->wheel_v_rear_right = 0.0;
    }
  }

  // field types and members
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _speed_x_type =
    double;
  _speed_x_type speed_x;
  using _speed_y_type =
    double;
  _speed_y_type speed_y;
  using _speed_z_type =
    double;
  _speed_z_type speed_z;
  using _acc_x_type =
    double;
  _acc_x_type acc_x;
  using _acc_y_type =
    double;
  _acc_y_type acc_y;
  using _acc_z_type =
    double;
  _acc_z_type acc_z;
  using _heading_type =
    double;
  _heading_type heading;
  using _yaw_rate_type =
    double;
  _yaw_rate_type yaw_rate;
  using _by_wire_enabled_type =
    bool;
  _by_wire_enabled_type by_wire_enabled;
  using _throttle_cmd_type =
    double;
  _throttle_cmd_type throttle_cmd;
  using _throttle_input_type =
    double;
  _throttle_input_type throttle_input;
  using _throttle_state_type =
    double;
  _throttle_state_type throttle_state;
  using _throttle_enabled_type =
    bool;
  _throttle_enabled_type throttle_enabled;
  using _throttle_override_type =
    bool;
  _throttle_override_type throttle_override;
  using _throttle_driver_type =
    bool;
  _throttle_driver_type throttle_driver;
  using _throttle_timeout_type =
    bool;
  _throttle_timeout_type throttle_timeout;
  using _brake_cmd_type =
    double;
  _brake_cmd_type brake_cmd;
  using _brake_input_type =
    double;
  _brake_input_type brake_input;
  using _brake_state_type =
    double;
  _brake_state_type brake_state;
  using _brake_torq_cmd_type =
    double;
  _brake_torq_cmd_type brake_torq_cmd;
  using _brake_torq_input_type =
    double;
  _brake_torq_input_type brake_torq_input;
  using _brake_torq_state_type =
    double;
  _brake_torq_state_type brake_torq_state;
  using _brake_boo_output_type =
    bool;
  _brake_boo_output_type brake_boo_output;
  using _brake_enabled_type =
    bool;
  _brake_enabled_type brake_enabled;
  using _brake_override_type =
    bool;
  _brake_override_type brake_override;
  using _brake_driver_type =
    bool;
  _brake_driver_type brake_driver;
  using _brake_timeout_type =
    bool;
  _brake_timeout_type brake_timeout;
  using _steer_cmd_type =
    double;
  _steer_cmd_type steer_cmd;
  using _steer_state_type =
    double;
  _steer_state_type steer_state;
  using _steer_torque_type =
    double;
  _steer_torque_type steer_torque;
  using _steer_enabled_type =
    bool;
  _steer_enabled_type steer_enabled;
  using _steer_override_type =
    bool;
  _steer_override_type steer_override;
  using _steer_timeout_type =
    bool;
  _steer_timeout_type steer_timeout;
  using _gear_pos_type =
    int16_t;
  _gear_pos_type gear_pos;
  using _wheel_v_front_left_type =
    double;
  _wheel_v_front_left_type wheel_v_front_left;
  using _wheel_v_front_right_type =
    double;
  _wheel_v_front_right_type wheel_v_front_right;
  using _wheel_v_rear_left_type =
    double;
  _wheel_v_rear_left_type wheel_v_rear_left;
  using _wheel_v_rear_right_type =
    double;
  _wheel_v_rear_right_type wheel_v_rear_right;

  // setters for named parameter idiom
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__speed_x(
    const double & _arg)
  {
    this->speed_x = _arg;
    return *this;
  }
  Type & set__speed_y(
    const double & _arg)
  {
    this->speed_y = _arg;
    return *this;
  }
  Type & set__speed_z(
    const double & _arg)
  {
    this->speed_z = _arg;
    return *this;
  }
  Type & set__acc_x(
    const double & _arg)
  {
    this->acc_x = _arg;
    return *this;
  }
  Type & set__acc_y(
    const double & _arg)
  {
    this->acc_y = _arg;
    return *this;
  }
  Type & set__acc_z(
    const double & _arg)
  {
    this->acc_z = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const double & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__by_wire_enabled(
    const bool & _arg)
  {
    this->by_wire_enabled = _arg;
    return *this;
  }
  Type & set__throttle_cmd(
    const double & _arg)
  {
    this->throttle_cmd = _arg;
    return *this;
  }
  Type & set__throttle_input(
    const double & _arg)
  {
    this->throttle_input = _arg;
    return *this;
  }
  Type & set__throttle_state(
    const double & _arg)
  {
    this->throttle_state = _arg;
    return *this;
  }
  Type & set__throttle_enabled(
    const bool & _arg)
  {
    this->throttle_enabled = _arg;
    return *this;
  }
  Type & set__throttle_override(
    const bool & _arg)
  {
    this->throttle_override = _arg;
    return *this;
  }
  Type & set__throttle_driver(
    const bool & _arg)
  {
    this->throttle_driver = _arg;
    return *this;
  }
  Type & set__throttle_timeout(
    const bool & _arg)
  {
    this->throttle_timeout = _arg;
    return *this;
  }
  Type & set__brake_cmd(
    const double & _arg)
  {
    this->brake_cmd = _arg;
    return *this;
  }
  Type & set__brake_input(
    const double & _arg)
  {
    this->brake_input = _arg;
    return *this;
  }
  Type & set__brake_state(
    const double & _arg)
  {
    this->brake_state = _arg;
    return *this;
  }
  Type & set__brake_torq_cmd(
    const double & _arg)
  {
    this->brake_torq_cmd = _arg;
    return *this;
  }
  Type & set__brake_torq_input(
    const double & _arg)
  {
    this->brake_torq_input = _arg;
    return *this;
  }
  Type & set__brake_torq_state(
    const double & _arg)
  {
    this->brake_torq_state = _arg;
    return *this;
  }
  Type & set__brake_boo_output(
    const bool & _arg)
  {
    this->brake_boo_output = _arg;
    return *this;
  }
  Type & set__brake_enabled(
    const bool & _arg)
  {
    this->brake_enabled = _arg;
    return *this;
  }
  Type & set__brake_override(
    const bool & _arg)
  {
    this->brake_override = _arg;
    return *this;
  }
  Type & set__brake_driver(
    const bool & _arg)
  {
    this->brake_driver = _arg;
    return *this;
  }
  Type & set__brake_timeout(
    const bool & _arg)
  {
    this->brake_timeout = _arg;
    return *this;
  }
  Type & set__steer_cmd(
    const double & _arg)
  {
    this->steer_cmd = _arg;
    return *this;
  }
  Type & set__steer_state(
    const double & _arg)
  {
    this->steer_state = _arg;
    return *this;
  }
  Type & set__steer_torque(
    const double & _arg)
  {
    this->steer_torque = _arg;
    return *this;
  }
  Type & set__steer_enabled(
    const bool & _arg)
  {
    this->steer_enabled = _arg;
    return *this;
  }
  Type & set__steer_override(
    const bool & _arg)
  {
    this->steer_override = _arg;
    return *this;
  }
  Type & set__steer_timeout(
    const bool & _arg)
  {
    this->steer_timeout = _arg;
    return *this;
  }
  Type & set__gear_pos(
    const int16_t & _arg)
  {
    this->gear_pos = _arg;
    return *this;
  }
  Type & set__wheel_v_front_left(
    const double & _arg)
  {
    this->wheel_v_front_left = _arg;
    return *this;
  }
  Type & set__wheel_v_front_right(
    const double & _arg)
  {
    this->wheel_v_front_right = _arg;
    return *this;
  }
  Type & set__wheel_v_rear_left(
    const double & _arg)
  {
    this->wheel_v_rear_left = _arg;
    return *this;
  }
  Type & set__wheel_v_rear_right(
    const double & _arg)
  {
    this->wheel_v_rear_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mcity_msgs::msg::VehicleState_<ContainerAllocator> *;
  using ConstRawPtr =
    const mcity_msgs::msg::VehicleState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mcity_msgs::msg::VehicleState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mcity_msgs::msg::VehicleState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mcity_msgs::msg::VehicleState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mcity_msgs::msg::VehicleState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mcity_msgs::msg::VehicleState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mcity_msgs::msg::VehicleState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mcity_msgs::msg::VehicleState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mcity_msgs::msg::VehicleState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mcity_msgs__msg__VehicleState
    std::shared_ptr<mcity_msgs::msg::VehicleState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mcity_msgs__msg__VehicleState
    std::shared_ptr<mcity_msgs::msg::VehicleState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleState_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->speed_x != other.speed_x) {
      return false;
    }
    if (this->speed_y != other.speed_y) {
      return false;
    }
    if (this->speed_z != other.speed_z) {
      return false;
    }
    if (this->acc_x != other.acc_x) {
      return false;
    }
    if (this->acc_y != other.acc_y) {
      return false;
    }
    if (this->acc_z != other.acc_z) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->by_wire_enabled != other.by_wire_enabled) {
      return false;
    }
    if (this->throttle_cmd != other.throttle_cmd) {
      return false;
    }
    if (this->throttle_input != other.throttle_input) {
      return false;
    }
    if (this->throttle_state != other.throttle_state) {
      return false;
    }
    if (this->throttle_enabled != other.throttle_enabled) {
      return false;
    }
    if (this->throttle_override != other.throttle_override) {
      return false;
    }
    if (this->throttle_driver != other.throttle_driver) {
      return false;
    }
    if (this->throttle_timeout != other.throttle_timeout) {
      return false;
    }
    if (this->brake_cmd != other.brake_cmd) {
      return false;
    }
    if (this->brake_input != other.brake_input) {
      return false;
    }
    if (this->brake_state != other.brake_state) {
      return false;
    }
    if (this->brake_torq_cmd != other.brake_torq_cmd) {
      return false;
    }
    if (this->brake_torq_input != other.brake_torq_input) {
      return false;
    }
    if (this->brake_torq_state != other.brake_torq_state) {
      return false;
    }
    if (this->brake_boo_output != other.brake_boo_output) {
      return false;
    }
    if (this->brake_enabled != other.brake_enabled) {
      return false;
    }
    if (this->brake_override != other.brake_override) {
      return false;
    }
    if (this->brake_driver != other.brake_driver) {
      return false;
    }
    if (this->brake_timeout != other.brake_timeout) {
      return false;
    }
    if (this->steer_cmd != other.steer_cmd) {
      return false;
    }
    if (this->steer_state != other.steer_state) {
      return false;
    }
    if (this->steer_torque != other.steer_torque) {
      return false;
    }
    if (this->steer_enabled != other.steer_enabled) {
      return false;
    }
    if (this->steer_override != other.steer_override) {
      return false;
    }
    if (this->steer_timeout != other.steer_timeout) {
      return false;
    }
    if (this->gear_pos != other.gear_pos) {
      return false;
    }
    if (this->wheel_v_front_left != other.wheel_v_front_left) {
      return false;
    }
    if (this->wheel_v_front_right != other.wheel_v_front_right) {
      return false;
    }
    if (this->wheel_v_rear_left != other.wheel_v_rear_left) {
      return false;
    }
    if (this->wheel_v_rear_right != other.wheel_v_rear_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleState_

// alias to use template instance with default allocator
using VehicleState =
  mcity_msgs::msg::VehicleState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mcity_msgs

#endif  // MCITY_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_
