// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_perception_msgs:msg/DynamicObject.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__STRUCT_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'semantic'
#include "tier4_perception_msgs/msg/detail/semantic__struct.hpp"
// Member 'state'
#include "tier4_perception_msgs/msg/detail/state__struct.hpp"
// Member 'shape'
#include "tier4_perception_msgs/msg/detail/shape__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_perception_msgs__msg__DynamicObject __attribute__((deprecated))
#else
# define DEPRECATED__tier4_perception_msgs__msg__DynamicObject __declspec(deprecated)
#endif

namespace tier4_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DynamicObject_
{
  using Type = DynamicObject_<ContainerAllocator>;

  explicit DynamicObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    semantic(_init),
    state(_init),
    shape(_init)
  {
    (void)_init;
  }

  explicit DynamicObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init),
    semantic(_alloc, _init),
    state(_alloc, _init),
    shape(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _id_type id;
  using _semantic_type =
    tier4_perception_msgs::msg::Semantic_<ContainerAllocator>;
  _semantic_type semantic;
  using _state_type =
    tier4_perception_msgs::msg::State_<ContainerAllocator>;
  _state_type state;
  using _shape_type =
    tier4_perception_msgs::msg::Shape_<ContainerAllocator>;
  _shape_type shape;

  // setters for named parameter idiom
  Type & set__id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__semantic(
    const tier4_perception_msgs::msg::Semantic_<ContainerAllocator> & _arg)
  {
    this->semantic = _arg;
    return *this;
  }
  Type & set__state(
    const tier4_perception_msgs::msg::State_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__shape(
    const tier4_perception_msgs::msg::Shape_<ContainerAllocator> & _arg)
  {
    this->shape = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_perception_msgs::msg::DynamicObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_perception_msgs::msg::DynamicObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_perception_msgs::msg::DynamicObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_perception_msgs::msg::DynamicObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_perception_msgs::msg::DynamicObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_perception_msgs::msg::DynamicObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_perception_msgs::msg::DynamicObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_perception_msgs::msg::DynamicObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_perception_msgs::msg::DynamicObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_perception_msgs::msg::DynamicObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_perception_msgs__msg__DynamicObject
    std::shared_ptr<tier4_perception_msgs::msg::DynamicObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_perception_msgs__msg__DynamicObject
    std::shared_ptr<tier4_perception_msgs::msg::DynamicObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamicObject_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->semantic != other.semantic) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->shape != other.shape) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamicObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamicObject_

// alias to use template instance with default allocator
using DynamicObject =
  tier4_perception_msgs::msg::DynamicObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_perception_msgs

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__STRUCT_HPP_
