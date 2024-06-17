// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_perception_msgs:msg/DetectedObjectWithFeature.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_WITH_FEATURE__STRUCT_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_WITH_FEATURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'object'
#include "autoware_auto_perception_msgs/msg/detail/detected_object__struct.hpp"
// Member 'feature'
#include "tier4_perception_msgs/msg/detail/feature__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_perception_msgs__msg__DetectedObjectWithFeature __attribute__((deprecated))
#else
# define DEPRECATED__tier4_perception_msgs__msg__DetectedObjectWithFeature __declspec(deprecated)
#endif

namespace tier4_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectedObjectWithFeature_
{
  using Type = DetectedObjectWithFeature_<ContainerAllocator>;

  explicit DetectedObjectWithFeature_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object(_init),
    feature(_init)
  {
    (void)_init;
  }

  explicit DetectedObjectWithFeature_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object(_alloc, _init),
    feature(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _object_type =
    autoware_auto_perception_msgs::msg::DetectedObject_<ContainerAllocator>;
  _object_type object;
  using _feature_type =
    tier4_perception_msgs::msg::Feature_<ContainerAllocator>;
  _feature_type feature;

  // setters for named parameter idiom
  Type & set__object(
    const autoware_auto_perception_msgs::msg::DetectedObject_<ContainerAllocator> & _arg)
  {
    this->object = _arg;
    return *this;
  }
  Type & set__feature(
    const tier4_perception_msgs::msg::Feature_<ContainerAllocator> & _arg)
  {
    this->feature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_perception_msgs::msg::DetectedObjectWithFeature_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_perception_msgs::msg::DetectedObjectWithFeature_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_perception_msgs::msg::DetectedObjectWithFeature_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_perception_msgs::msg::DetectedObjectWithFeature_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_perception_msgs::msg::DetectedObjectWithFeature_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_perception_msgs::msg::DetectedObjectWithFeature_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_perception_msgs::msg::DetectedObjectWithFeature_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_perception_msgs::msg::DetectedObjectWithFeature_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_perception_msgs::msg::DetectedObjectWithFeature_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_perception_msgs::msg::DetectedObjectWithFeature_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_perception_msgs__msg__DetectedObjectWithFeature
    std::shared_ptr<tier4_perception_msgs::msg::DetectedObjectWithFeature_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_perception_msgs__msg__DetectedObjectWithFeature
    std::shared_ptr<tier4_perception_msgs::msg::DetectedObjectWithFeature_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectedObjectWithFeature_ & other) const
  {
    if (this->object != other.object) {
      return false;
    }
    if (this->feature != other.feature) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectedObjectWithFeature_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectedObjectWithFeature_

// alias to use template instance with default allocator
using DetectedObjectWithFeature =
  tier4_perception_msgs::msg::DetectedObjectWithFeature_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_perception_msgs

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_WITH_FEATURE__STRUCT_HPP_
