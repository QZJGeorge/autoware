// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/PREvent.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__PR_EVENT__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__PR_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__PREvent __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__PREvent __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PREvent_
{
  using Type = PREvent_<ContainerAllocator>;

  explicit PREvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mount_vehicle = false;
    }
  }

  explicit PREvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mount_vehicle = false;
    }
  }

  // field types and members
  using _mount_vehicle_type =
    bool;
  _mount_vehicle_type mount_vehicle;

  // setters for named parameter idiom
  Type & set__mount_vehicle(
    const bool & _arg)
  {
    this->mount_vehicle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::PREvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::PREvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::PREvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::PREvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::PREvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::PREvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::PREvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::PREvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::PREvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::PREvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__PREvent
    std::shared_ptr<morai_msgs::msg::PREvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__PREvent
    std::shared_ptr<morai_msgs::msg::PREvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PREvent_ & other) const
  {
    if (this->mount_vehicle != other.mount_vehicle) {
      return false;
    }
    return true;
  }
  bool operator!=(const PREvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PREvent_

// alias to use template instance with default allocator
using PREvent =
  morai_msgs::msg::PREvent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__PR_EVENT__STRUCT_HPP_
