// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/ObjectStatusList.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__OBJECT_STATUS_LIST__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__OBJECT_STATUS_LIST__STRUCT_HPP_

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
// Member 'npc_list'
// Member 'pedestrian_list'
// Member 'obstacle_list'
#include "morai_msgs/msg/detail/object_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__ObjectStatusList __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__ObjectStatusList __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectStatusList_
{
  using Type = ObjectStatusList_<ContainerAllocator>;

  explicit ObjectStatusList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_of_npcs = 0l;
      this->num_of_pedestrian = 0l;
      this->num_of_obstacle = 0l;
    }
  }

  explicit ObjectStatusList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_of_npcs = 0l;
      this->num_of_pedestrian = 0l;
      this->num_of_obstacle = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _num_of_npcs_type =
    int32_t;
  _num_of_npcs_type num_of_npcs;
  using _num_of_pedestrian_type =
    int32_t;
  _num_of_pedestrian_type num_of_pedestrian;
  using _num_of_obstacle_type =
    int32_t;
  _num_of_obstacle_type num_of_obstacle;
  using _npc_list_type =
    std::vector<morai_msgs::msg::ObjectStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::ObjectStatus_<ContainerAllocator>>>;
  _npc_list_type npc_list;
  using _pedestrian_list_type =
    std::vector<morai_msgs::msg::ObjectStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::ObjectStatus_<ContainerAllocator>>>;
  _pedestrian_list_type pedestrian_list;
  using _obstacle_list_type =
    std::vector<morai_msgs::msg::ObjectStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::ObjectStatus_<ContainerAllocator>>>;
  _obstacle_list_type obstacle_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__num_of_npcs(
    const int32_t & _arg)
  {
    this->num_of_npcs = _arg;
    return *this;
  }
  Type & set__num_of_pedestrian(
    const int32_t & _arg)
  {
    this->num_of_pedestrian = _arg;
    return *this;
  }
  Type & set__num_of_obstacle(
    const int32_t & _arg)
  {
    this->num_of_obstacle = _arg;
    return *this;
  }
  Type & set__npc_list(
    const std::vector<morai_msgs::msg::ObjectStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::ObjectStatus_<ContainerAllocator>>> & _arg)
  {
    this->npc_list = _arg;
    return *this;
  }
  Type & set__pedestrian_list(
    const std::vector<morai_msgs::msg::ObjectStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::ObjectStatus_<ContainerAllocator>>> & _arg)
  {
    this->pedestrian_list = _arg;
    return *this;
  }
  Type & set__obstacle_list(
    const std::vector<morai_msgs::msg::ObjectStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::ObjectStatus_<ContainerAllocator>>> & _arg)
  {
    this->obstacle_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::ObjectStatusList_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::ObjectStatusList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::ObjectStatusList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::ObjectStatusList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::ObjectStatusList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::ObjectStatusList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::ObjectStatusList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::ObjectStatusList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::ObjectStatusList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::ObjectStatusList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__ObjectStatusList
    std::shared_ptr<morai_msgs::msg::ObjectStatusList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__ObjectStatusList
    std::shared_ptr<morai_msgs::msg::ObjectStatusList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectStatusList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->num_of_npcs != other.num_of_npcs) {
      return false;
    }
    if (this->num_of_pedestrian != other.num_of_pedestrian) {
      return false;
    }
    if (this->num_of_obstacle != other.num_of_obstacle) {
      return false;
    }
    if (this->npc_list != other.npc_list) {
      return false;
    }
    if (this->pedestrian_list != other.pedestrian_list) {
      return false;
    }
    if (this->obstacle_list != other.obstacle_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectStatusList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectStatusList_

// alias to use template instance with default allocator
using ObjectStatusList =
  morai_msgs::msg::ObjectStatusList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__OBJECT_STATUS_LIST__STRUCT_HPP_
