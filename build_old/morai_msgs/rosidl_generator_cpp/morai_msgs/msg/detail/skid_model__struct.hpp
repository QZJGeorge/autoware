// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/SkidModel.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SKID_MODEL__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__SKID_MODEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'rpm'
#include "morai_msgs/msg/detail/wheel_rpm__struct.hpp"
// Member 'torque'
#include "morai_msgs/msg/detail/wheel_torque__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__SkidModel __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__SkidModel __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SkidModel_
{
  using Type = SkidModel_<ContainerAllocator>;

  explicit SkidModel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rpm(_init),
    torque(_init)
  {
    (void)_init;
  }

  explicit SkidModel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rpm(_alloc, _init),
    torque(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _rpm_type =
    morai_msgs::msg::WheelRpm_<ContainerAllocator>;
  _rpm_type rpm;
  using _torque_type =
    morai_msgs::msg::WheelTorque_<ContainerAllocator>;
  _torque_type torque;

  // setters for named parameter idiom
  Type & set__rpm(
    const morai_msgs::msg::WheelRpm_<ContainerAllocator> & _arg)
  {
    this->rpm = _arg;
    return *this;
  }
  Type & set__torque(
    const morai_msgs::msg::WheelTorque_<ContainerAllocator> & _arg)
  {
    this->torque = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::SkidModel_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::SkidModel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::SkidModel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::SkidModel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SkidModel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SkidModel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SkidModel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SkidModel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::SkidModel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::SkidModel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__SkidModel
    std::shared_ptr<morai_msgs::msg::SkidModel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__SkidModel
    std::shared_ptr<morai_msgs::msg::SkidModel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SkidModel_ & other) const
  {
    if (this->rpm != other.rpm) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    return true;
  }
  bool operator!=(const SkidModel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SkidModel_

// alias to use template instance with default allocator
using SkidModel =
  morai_msgs::msg::SkidModel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SKID_MODEL__STRUCT_HPP_
