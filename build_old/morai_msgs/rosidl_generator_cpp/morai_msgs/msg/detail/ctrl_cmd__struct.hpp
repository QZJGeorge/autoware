// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/CtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__CTRL_CMD__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__CTRL_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__CtrlCmd __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__CtrlCmd __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CtrlCmd_
{
  using Type = CtrlCmd_<ContainerAllocator>;

  explicit CtrlCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longl_cmd_type = 0l;
      this->accel = 0.0;
      this->brake = 0.0;
      this->steering = 0.0;
      this->velocity = 0.0;
      this->acceleration = 0.0;
    }
  }

  explicit CtrlCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longl_cmd_type = 0l;
      this->accel = 0.0;
      this->brake = 0.0;
      this->steering = 0.0;
      this->velocity = 0.0;
      this->acceleration = 0.0;
    }
  }

  // field types and members
  using _longl_cmd_type_type =
    int32_t;
  _longl_cmd_type_type longl_cmd_type;
  using _accel_type =
    double;
  _accel_type accel;
  using _brake_type =
    double;
  _brake_type brake;
  using _steering_type =
    double;
  _steering_type steering;
  using _velocity_type =
    double;
  _velocity_type velocity;
  using _acceleration_type =
    double;
  _acceleration_type acceleration;

  // setters for named parameter idiom
  Type & set__longl_cmd_type(
    const int32_t & _arg)
  {
    this->longl_cmd_type = _arg;
    return *this;
  }
  Type & set__accel(
    const double & _arg)
  {
    this->accel = _arg;
    return *this;
  }
  Type & set__brake(
    const double & _arg)
  {
    this->brake = _arg;
    return *this;
  }
  Type & set__steering(
    const double & _arg)
  {
    this->steering = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const double & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::CtrlCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::CtrlCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::CtrlCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::CtrlCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::CtrlCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::CtrlCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::CtrlCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::CtrlCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::CtrlCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::CtrlCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__CtrlCmd
    std::shared_ptr<morai_msgs::msg::CtrlCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__CtrlCmd
    std::shared_ptr<morai_msgs::msg::CtrlCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CtrlCmd_ & other) const
  {
    if (this->longl_cmd_type != other.longl_cmd_type) {
      return false;
    }
    if (this->accel != other.accel) {
      return false;
    }
    if (this->brake != other.brake) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const CtrlCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CtrlCmd_

// alias to use template instance with default allocator
using CtrlCmd =
  morai_msgs::msg::CtrlCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__CTRL_CMD__STRUCT_HPP_
