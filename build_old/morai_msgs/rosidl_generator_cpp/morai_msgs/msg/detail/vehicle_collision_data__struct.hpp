// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/VehicleCollisionData.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION_DATA__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION_DATA__STRUCT_HPP_

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
// Member 'collisions'
#include "morai_msgs/msg/detail/vehicle_collision__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__VehicleCollisionData __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__VehicleCollisionData __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleCollisionData_
{
  using Type = VehicleCollisionData_<ContainerAllocator>;

  explicit VehicleCollisionData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit VehicleCollisionData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _collisions_type =
    std::vector<morai_msgs::msg::VehicleCollision_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::VehicleCollision_<ContainerAllocator>>>;
  _collisions_type collisions;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__collisions(
    const std::vector<morai_msgs::msg::VehicleCollision_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::VehicleCollision_<ContainerAllocator>>> & _arg)
  {
    this->collisions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::VehicleCollisionData_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::VehicleCollisionData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::VehicleCollisionData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::VehicleCollisionData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::VehicleCollisionData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::VehicleCollisionData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::VehicleCollisionData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::VehicleCollisionData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::VehicleCollisionData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::VehicleCollisionData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__VehicleCollisionData
    std::shared_ptr<morai_msgs::msg::VehicleCollisionData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__VehicleCollisionData
    std::shared_ptr<morai_msgs::msg::VehicleCollisionData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleCollisionData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->collisions != other.collisions) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleCollisionData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleCollisionData_

// alias to use template instance with default allocator
using VehicleCollisionData =
  morai_msgs::msg::VehicleCollisionData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION_DATA__STRUCT_HPP_
