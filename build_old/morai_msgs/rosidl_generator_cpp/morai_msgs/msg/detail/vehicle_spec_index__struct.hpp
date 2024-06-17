// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/VehicleSpecIndex.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC_INDEX__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC_INDEX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__VehicleSpecIndex __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__VehicleSpecIndex __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleSpecIndex_
{
  using Type = VehicleSpecIndex_<ContainerAllocator>;

  explicit VehicleSpecIndex_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unique_id = 0l;
    }
  }

  explicit VehicleSpecIndex_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unique_id = 0l;
    }
  }

  // field types and members
  using _unique_id_type =
    int32_t;
  _unique_id_type unique_id;

  // setters for named parameter idiom
  Type & set__unique_id(
    const int32_t & _arg)
  {
    this->unique_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::VehicleSpecIndex_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::VehicleSpecIndex_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::VehicleSpecIndex_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::VehicleSpecIndex_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::VehicleSpecIndex_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::VehicleSpecIndex_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::VehicleSpecIndex_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::VehicleSpecIndex_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::VehicleSpecIndex_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::VehicleSpecIndex_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__VehicleSpecIndex
    std::shared_ptr<morai_msgs::msg::VehicleSpecIndex_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__VehicleSpecIndex
    std::shared_ptr<morai_msgs::msg::VehicleSpecIndex_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleSpecIndex_ & other) const
  {
    if (this->unique_id != other.unique_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleSpecIndex_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleSpecIndex_

// alias to use template instance with default allocator
using VehicleSpecIndex =
  morai_msgs::msg::VehicleSpecIndex_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC_INDEX__STRUCT_HPP_
