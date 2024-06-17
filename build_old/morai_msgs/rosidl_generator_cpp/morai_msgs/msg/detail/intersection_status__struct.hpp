// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/IntersectionStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__INTERSECTION_STATUS__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__INTERSECTION_STATUS__STRUCT_HPP_

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
# define DEPRECATED__morai_msgs__msg__IntersectionStatus __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__IntersectionStatus __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IntersectionStatus_
{
  using Type = IntersectionStatus_<ContainerAllocator>;

  explicit IntersectionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->intersection_index = 0l;
      this->intersection_status = 0;
      this->intersection_status_time = 0.0f;
    }
  }

  explicit IntersectionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->intersection_index = 0l;
      this->intersection_status = 0;
      this->intersection_status_time = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _intersection_index_type =
    int32_t;
  _intersection_index_type intersection_index;
  using _intersection_status_type =
    int16_t;
  _intersection_status_type intersection_status;
  using _intersection_status_time_type =
    float;
  _intersection_status_time_type intersection_status_time;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__intersection_index(
    const int32_t & _arg)
  {
    this->intersection_index = _arg;
    return *this;
  }
  Type & set__intersection_status(
    const int16_t & _arg)
  {
    this->intersection_status = _arg;
    return *this;
  }
  Type & set__intersection_status_time(
    const float & _arg)
  {
    this->intersection_status_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::IntersectionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::IntersectionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::IntersectionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::IntersectionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::IntersectionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::IntersectionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::IntersectionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::IntersectionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::IntersectionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::IntersectionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__IntersectionStatus
    std::shared_ptr<morai_msgs::msg::IntersectionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__IntersectionStatus
    std::shared_ptr<morai_msgs::msg::IntersectionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntersectionStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->intersection_index != other.intersection_index) {
      return false;
    }
    if (this->intersection_status != other.intersection_status) {
      return false;
    }
    if (this->intersection_status_time != other.intersection_status_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntersectionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IntersectionStatus_

// alias to use template instance with default allocator
using IntersectionStatus =
  morai_msgs::msg::IntersectionStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__INTERSECTION_STATUS__STRUCT_HPP_
