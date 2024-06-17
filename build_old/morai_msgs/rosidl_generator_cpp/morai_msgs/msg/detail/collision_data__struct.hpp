// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/CollisionData.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__COLLISION_DATA__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__COLLISION_DATA__STRUCT_HPP_

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
// Member 'collision_object'
#include "morai_msgs/msg/detail/object_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__CollisionData __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__CollisionData __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CollisionData_
{
  using Type = CollisionData_<ContainerAllocator>;

  explicit CollisionData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->global_offset_x = 0.0;
      this->global_offset_y = 0.0;
      this->global_offset_z = 0.0;
    }
  }

  explicit CollisionData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->global_offset_x = 0.0;
      this->global_offset_y = 0.0;
      this->global_offset_z = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _global_offset_x_type =
    double;
  _global_offset_x_type global_offset_x;
  using _global_offset_y_type =
    double;
  _global_offset_y_type global_offset_y;
  using _global_offset_z_type =
    double;
  _global_offset_z_type global_offset_z;
  using _collision_object_type =
    std::vector<morai_msgs::msg::ObjectStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::ObjectStatus_<ContainerAllocator>>>;
  _collision_object_type collision_object;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__global_offset_x(
    const double & _arg)
  {
    this->global_offset_x = _arg;
    return *this;
  }
  Type & set__global_offset_y(
    const double & _arg)
  {
    this->global_offset_y = _arg;
    return *this;
  }
  Type & set__global_offset_z(
    const double & _arg)
  {
    this->global_offset_z = _arg;
    return *this;
  }
  Type & set__collision_object(
    const std::vector<morai_msgs::msg::ObjectStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::ObjectStatus_<ContainerAllocator>>> & _arg)
  {
    this->collision_object = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::CollisionData_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::CollisionData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::CollisionData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::CollisionData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::CollisionData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::CollisionData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::CollisionData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::CollisionData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::CollisionData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::CollisionData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__CollisionData
    std::shared_ptr<morai_msgs::msg::CollisionData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__CollisionData
    std::shared_ptr<morai_msgs::msg::CollisionData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollisionData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->global_offset_x != other.global_offset_x) {
      return false;
    }
    if (this->global_offset_y != other.global_offset_y) {
      return false;
    }
    if (this->global_offset_z != other.global_offset_z) {
      return false;
    }
    if (this->collision_object != other.collision_object) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollisionData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollisionData_

// alias to use template instance with default allocator
using CollisionData =
  morai_msgs::msg::CollisionData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__COLLISION_DATA__STRUCT_HPP_
