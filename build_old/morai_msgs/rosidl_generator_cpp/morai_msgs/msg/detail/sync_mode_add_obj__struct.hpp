// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/SyncModeAddObj.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_ADD_OBJ__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_ADD_OBJ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__SyncModeAddObj __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__SyncModeAddObj __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SyncModeAddObj_
{
  using Type = SyncModeAddObj_<ContainerAllocator>;

  explicit SyncModeAddObj_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->heading = 0.0;
      this->frame = 0ull;
    }
  }

  explicit SyncModeAddObj_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->heading = 0.0;
      this->frame = 0ull;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_type position;
  using _heading_type =
    double;
  _heading_type heading;
  using _frame_type =
    uint64_t;
  _frame_type frame;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__frame(
    const uint64_t & _arg)
  {
    this->frame = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::SyncModeAddObj_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::SyncModeAddObj_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::SyncModeAddObj_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::SyncModeAddObj_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SyncModeAddObj_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SyncModeAddObj_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SyncModeAddObj_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SyncModeAddObj_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::SyncModeAddObj_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::SyncModeAddObj_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__SyncModeAddObj
    std::shared_ptr<morai_msgs::msg::SyncModeAddObj_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__SyncModeAddObj
    std::shared_ptr<morai_msgs::msg::SyncModeAddObj_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SyncModeAddObj_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->frame != other.frame) {
      return false;
    }
    return true;
  }
  bool operator!=(const SyncModeAddObj_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SyncModeAddObj_

// alias to use template instance with default allocator
using SyncModeAddObj =
  morai_msgs::msg::SyncModeAddObj_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_ADD_OBJ__STRUCT_HPP_
