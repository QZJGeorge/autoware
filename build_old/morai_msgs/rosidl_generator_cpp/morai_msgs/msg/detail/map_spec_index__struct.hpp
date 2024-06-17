// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/MapSpecIndex.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MAP_SPEC_INDEX__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__MAP_SPEC_INDEX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__MapSpecIndex __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__MapSpecIndex __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MapSpecIndex_
{
  using Type = MapSpecIndex_<ContainerAllocator>;

  explicit MapSpecIndex_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->load_map_data = false;
    }
  }

  explicit MapSpecIndex_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->load_map_data = false;
    }
  }

  // field types and members
  using _load_map_data_type =
    bool;
  _load_map_data_type load_map_data;

  // setters for named parameter idiom
  Type & set__load_map_data(
    const bool & _arg)
  {
    this->load_map_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::MapSpecIndex_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::MapSpecIndex_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::MapSpecIndex_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::MapSpecIndex_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::MapSpecIndex_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::MapSpecIndex_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::MapSpecIndex_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::MapSpecIndex_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::MapSpecIndex_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::MapSpecIndex_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__MapSpecIndex
    std::shared_ptr<morai_msgs::msg::MapSpecIndex_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__MapSpecIndex
    std::shared_ptr<morai_msgs::msg::MapSpecIndex_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapSpecIndex_ & other) const
  {
    if (this->load_map_data != other.load_map_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapSpecIndex_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapSpecIndex_

// alias to use template instance with default allocator
using MapSpecIndex =
  morai_msgs::msg::MapSpecIndex_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__MAP_SPEC_INDEX__STRUCT_HPP_
