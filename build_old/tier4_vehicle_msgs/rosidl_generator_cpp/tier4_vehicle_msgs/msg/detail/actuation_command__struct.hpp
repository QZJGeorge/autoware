// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_vehicle_msgs:msg/ActuationCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND__STRUCT_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_vehicle_msgs__msg__ActuationCommand __attribute__((deprecated))
#else
# define DEPRECATED__tier4_vehicle_msgs__msg__ActuationCommand __declspec(deprecated)
#endif

namespace tier4_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActuationCommand_
{
  using Type = ActuationCommand_<ContainerAllocator>;

  explicit ActuationCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accel_cmd = 0.0;
      this->brake_cmd = 0.0;
      this->steer_cmd = 0.0;
    }
  }

  explicit ActuationCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accel_cmd = 0.0;
      this->brake_cmd = 0.0;
      this->steer_cmd = 0.0;
    }
  }

  // field types and members
  using _accel_cmd_type =
    double;
  _accel_cmd_type accel_cmd;
  using _brake_cmd_type =
    double;
  _brake_cmd_type brake_cmd;
  using _steer_cmd_type =
    double;
  _steer_cmd_type steer_cmd;

  // setters for named parameter idiom
  Type & set__accel_cmd(
    const double & _arg)
  {
    this->accel_cmd = _arg;
    return *this;
  }
  Type & set__brake_cmd(
    const double & _arg)
  {
    this->brake_cmd = _arg;
    return *this;
  }
  Type & set__steer_cmd(
    const double & _arg)
  {
    this->steer_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_vehicle_msgs::msg::ActuationCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_vehicle_msgs::msg::ActuationCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_vehicle_msgs::msg::ActuationCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_vehicle_msgs::msg::ActuationCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_vehicle_msgs::msg::ActuationCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_vehicle_msgs::msg::ActuationCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_vehicle_msgs::msg::ActuationCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_vehicle_msgs::msg::ActuationCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_vehicle_msgs::msg::ActuationCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_vehicle_msgs::msg::ActuationCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_vehicle_msgs__msg__ActuationCommand
    std::shared_ptr<tier4_vehicle_msgs::msg::ActuationCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_vehicle_msgs__msg__ActuationCommand
    std::shared_ptr<tier4_vehicle_msgs::msg::ActuationCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuationCommand_ & other) const
  {
    if (this->accel_cmd != other.accel_cmd) {
      return false;
    }
    if (this->brake_cmd != other.brake_cmd) {
      return false;
    }
    if (this->steer_cmd != other.steer_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuationCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuationCommand_

// alias to use template instance with default allocator
using ActuationCommand =
  tier4_vehicle_msgs::msg::ActuationCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_vehicle_msgs

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND__STRUCT_HPP_
