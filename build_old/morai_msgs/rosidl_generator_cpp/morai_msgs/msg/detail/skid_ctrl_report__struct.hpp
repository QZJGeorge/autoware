// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/SkidCtrlReport.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SKID_CTRL_REPORT__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__SKID_CTRL_REPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'acceleration'
// Member 'position'
// Member 'velocity'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'skid_model_report'
#include "morai_msgs/msg/detail/skid_model__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__SkidCtrlReport __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__SkidCtrlReport __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SkidCtrlReport_
{
  using Type = SkidCtrlReport_<ContainerAllocator>;

  explicit SkidCtrlReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    acceleration(_init),
    position(_init),
    velocity(_init),
    angular_velocity(_init),
    skid_model_report(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ctrl_mode = 0l;
      this->heading = 0.0f;
      this->cmd_type = 0l;
    }
  }

  explicit SkidCtrlReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    acceleration(_alloc, _init),
    position(_alloc, _init),
    velocity(_alloc, _init),
    angular_velocity(_alloc, _init),
    skid_model_report(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ctrl_mode = 0l;
      this->heading = 0.0f;
      this->cmd_type = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ctrl_mode_type =
    int32_t;
  _ctrl_mode_type ctrl_mode;
  using _acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_type position;
  using _velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_type velocity;
  using _angular_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;
  using _heading_type =
    float;
  _heading_type heading;
  using _cmd_type_type =
    int32_t;
  _cmd_type_type cmd_type;
  using _skid_model_report_type =
    morai_msgs::msg::SkidModel_<ContainerAllocator>;
  _skid_model_report_type skid_model_report;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ctrl_mode(
    const int32_t & _arg)
  {
    this->ctrl_mode = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__cmd_type(
    const int32_t & _arg)
  {
    this->cmd_type = _arg;
    return *this;
  }
  Type & set__skid_model_report(
    const morai_msgs::msg::SkidModel_<ContainerAllocator> & _arg)
  {
    this->skid_model_report = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::SkidCtrlReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::SkidCtrlReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::SkidCtrlReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::SkidCtrlReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SkidCtrlReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SkidCtrlReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SkidCtrlReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SkidCtrlReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::SkidCtrlReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::SkidCtrlReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__SkidCtrlReport
    std::shared_ptr<morai_msgs::msg::SkidCtrlReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__SkidCtrlReport
    std::shared_ptr<morai_msgs::msg::SkidCtrlReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SkidCtrlReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ctrl_mode != other.ctrl_mode) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->cmd_type != other.cmd_type) {
      return false;
    }
    if (this->skid_model_report != other.skid_model_report) {
      return false;
    }
    return true;
  }
  bool operator!=(const SkidCtrlReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SkidCtrlReport_

// alias to use template instance with default allocator
using SkidCtrlReport =
  morai_msgs::msg::SkidCtrlReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SKID_CTRL_REPORT__STRUCT_HPP_
