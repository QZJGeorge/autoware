// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/PRCtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__PR_CTRL_CMD__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__PR_CTRL_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__PRCtrlCmd __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__PRCtrlCmd __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PRCtrlCmd_
{
  using Type = PRCtrlCmd_<ContainerAllocator>;

  explicit PRCtrlCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longitudinal_velocity = 0.0;
      this->latitudinal_velocity = 0.0;
      this->angular_velocity = 0.0;
    }
  }

  explicit PRCtrlCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longitudinal_velocity = 0.0;
      this->latitudinal_velocity = 0.0;
      this->angular_velocity = 0.0;
    }
  }

  // field types and members
  using _longitudinal_velocity_type =
    double;
  _longitudinal_velocity_type longitudinal_velocity;
  using _latitudinal_velocity_type =
    double;
  _latitudinal_velocity_type latitudinal_velocity;
  using _angular_velocity_type =
    double;
  _angular_velocity_type angular_velocity;

  // setters for named parameter idiom
  Type & set__longitudinal_velocity(
    const double & _arg)
  {
    this->longitudinal_velocity = _arg;
    return *this;
  }
  Type & set__latitudinal_velocity(
    const double & _arg)
  {
    this->latitudinal_velocity = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const double & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::PRCtrlCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::PRCtrlCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::PRCtrlCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::PRCtrlCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::PRCtrlCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::PRCtrlCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::PRCtrlCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::PRCtrlCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::PRCtrlCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::PRCtrlCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__PRCtrlCmd
    std::shared_ptr<morai_msgs::msg::PRCtrlCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__PRCtrlCmd
    std::shared_ptr<morai_msgs::msg::PRCtrlCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PRCtrlCmd_ & other) const
  {
    if (this->longitudinal_velocity != other.longitudinal_velocity) {
      return false;
    }
    if (this->latitudinal_velocity != other.latitudinal_velocity) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const PRCtrlCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PRCtrlCmd_

// alias to use template instance with default allocator
using PRCtrlCmd =
  morai_msgs::msg::PRCtrlCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__PR_CTRL_CMD__STRUCT_HPP_
