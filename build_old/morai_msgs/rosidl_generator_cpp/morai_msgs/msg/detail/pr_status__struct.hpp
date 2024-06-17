// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/PRStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__PR_STATUS__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__PR_STATUS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__PRStatus __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__PRStatus __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PRStatus_
{
  using Type = PRStatus_<ContainerAllocator>;

  explicit PRStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position_x = 0.0f;
      this->position_y = 0.0f;
      this->position_z = 0.0f;
      this->heading = 0.0;
      this->mount_status = false;
    }
  }

  explicit PRStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position_x = 0.0f;
      this->position_y = 0.0f;
      this->position_z = 0.0f;
      this->heading = 0.0;
      this->mount_status = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _position_x_type =
    float;
  _position_x_type position_x;
  using _position_y_type =
    float;
  _position_y_type position_y;
  using _position_z_type =
    float;
  _position_z_type position_z;
  using _heading_type =
    double;
  _heading_type heading;
  using _mount_status_type =
    bool;
  _mount_status_type mount_status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__position_x(
    const float & _arg)
  {
    this->position_x = _arg;
    return *this;
  }
  Type & set__position_y(
    const float & _arg)
  {
    this->position_y = _arg;
    return *this;
  }
  Type & set__position_z(
    const float & _arg)
  {
    this->position_z = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__mount_status(
    const bool & _arg)
  {
    this->mount_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::PRStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::PRStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::PRStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::PRStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::PRStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::PRStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::PRStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::PRStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::PRStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::PRStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__PRStatus
    std::shared_ptr<morai_msgs::msg::PRStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__PRStatus
    std::shared_ptr<morai_msgs::msg::PRStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PRStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->position_x != other.position_x) {
      return false;
    }
    if (this->position_y != other.position_y) {
      return false;
    }
    if (this->position_z != other.position_z) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->mount_status != other.mount_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const PRStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PRStatus_

// alias to use template instance with default allocator
using PRStatus =
  morai_msgs::msg::PRStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__PR_STATUS__STRUCT_HPP_
