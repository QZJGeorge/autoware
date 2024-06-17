// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_adapi_v1_msgs:msg/DynamicObject.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__STRUCT_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__STRUCT_HPP_

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
// Member 'classification'
#include "autoware_adapi_v1_msgs/msg/detail/object_classification__struct.hpp"
// Member 'kinematics'
#include "autoware_adapi_v1_msgs/msg/detail/dynamic_object_kinematics__struct.hpp"
// Member 'shape'
#include "shape_msgs/msg/detail/solid_primitive__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_adapi_v1_msgs__msg__DynamicObject __attribute__((deprecated))
#else
# define DEPRECATED__autoware_adapi_v1_msgs__msg__DynamicObject __declspec(deprecated)
#endif

namespace autoware_adapi_v1_msgs
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
    kinematics(_init),
    shape(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->existence_probability = 0.0;
    }
  }

  explicit DynamicObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init),
    kinematics(_alloc, _init),
    shape(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->existence_probability = 0.0;
    }
  }

  // field types and members
  using _id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _id_type id;
  using _existence_probability_type =
    double;
  _existence_probability_type existence_probability;
  using _classification_type =
    std::vector<autoware_adapi_v1_msgs::msg::ObjectClassification_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_adapi_v1_msgs::msg::ObjectClassification_<ContainerAllocator>>>;
  _classification_type classification;
  using _kinematics_type =
    autoware_adapi_v1_msgs::msg::DynamicObjectKinematics_<ContainerAllocator>;
  _kinematics_type kinematics;
  using _shape_type =
    shape_msgs::msg::SolidPrimitive_<ContainerAllocator>;
  _shape_type shape;

  // setters for named parameter idiom
  Type & set__id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__existence_probability(
    const double & _arg)
  {
    this->existence_probability = _arg;
    return *this;
  }
  Type & set__classification(
    const std::vector<autoware_adapi_v1_msgs::msg::ObjectClassification_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_adapi_v1_msgs::msg::ObjectClassification_<ContainerAllocator>>> & _arg)
  {
    this->classification = _arg;
    return *this;
  }
  Type & set__kinematics(
    const autoware_adapi_v1_msgs::msg::DynamicObjectKinematics_<ContainerAllocator> & _arg)
  {
    this->kinematics = _arg;
    return *this;
  }
  Type & set__shape(
    const shape_msgs::msg::SolidPrimitive_<ContainerAllocator> & _arg)
  {
    this->shape = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_adapi_v1_msgs::msg::DynamicObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_adapi_v1_msgs::msg::DynamicObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::DynamicObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::DynamicObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::DynamicObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::DynamicObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::DynamicObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::DynamicObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::DynamicObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::DynamicObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__DynamicObject
    std::shared_ptr<autoware_adapi_v1_msgs::msg::DynamicObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__DynamicObject
    std::shared_ptr<autoware_adapi_v1_msgs::msg::DynamicObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamicObject_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->existence_probability != other.existence_probability) {
      return false;
    }
    if (this->classification != other.classification) {
      return false;
    }
    if (this->kinematics != other.kinematics) {
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
  autoware_adapi_v1_msgs::msg::DynamicObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__STRUCT_HPP_
