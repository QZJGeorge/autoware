// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dummy_perception_publisher:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__OBJECT__STRUCT_HPP_
#define DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__OBJECT__STRUCT_HPP_

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
// Member 'id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'initial_state'
#include "dummy_perception_publisher/msg/detail/initial_state__struct.hpp"
// Member 'classification'
#include "autoware_auto_perception_msgs/msg/detail/object_classification__struct.hpp"
// Member 'shape'
#include "autoware_auto_perception_msgs/msg/detail/shape__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dummy_perception_publisher__msg__Object __attribute__((deprecated))
#else
# define DEPRECATED__dummy_perception_publisher__msg__Object __declspec(deprecated)
#endif

namespace dummy_perception_publisher
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object_
{
  using Type = Object_<ContainerAllocator>;

  explicit Object_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    id(_init),
    initial_state(_init),
    classification(_init),
    shape(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_velocity = 0.0f;
      this->min_velocity = 0.0f;
      this->action = 0l;
    }
  }

  explicit Object_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    id(_alloc, _init),
    initial_state(_alloc, _init),
    classification(_alloc, _init),
    shape(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_velocity = 0.0f;
      this->min_velocity = 0.0f;
      this->action = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _id_type id;
  using _initial_state_type =
    dummy_perception_publisher::msg::InitialState_<ContainerAllocator>;
  _initial_state_type initial_state;
  using _classification_type =
    autoware_auto_perception_msgs::msg::ObjectClassification_<ContainerAllocator>;
  _classification_type classification;
  using _shape_type =
    autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator>;
  _shape_type shape;
  using _max_velocity_type =
    float;
  _max_velocity_type max_velocity;
  using _min_velocity_type =
    float;
  _min_velocity_type min_velocity;
  using _action_type =
    int32_t;
  _action_type action;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__initial_state(
    const dummy_perception_publisher::msg::InitialState_<ContainerAllocator> & _arg)
  {
    this->initial_state = _arg;
    return *this;
  }
  Type & set__classification(
    const autoware_auto_perception_msgs::msg::ObjectClassification_<ContainerAllocator> & _arg)
  {
    this->classification = _arg;
    return *this;
  }
  Type & set__shape(
    const autoware_auto_perception_msgs::msg::Shape_<ContainerAllocator> & _arg)
  {
    this->shape = _arg;
    return *this;
  }
  Type & set__max_velocity(
    const float & _arg)
  {
    this->max_velocity = _arg;
    return *this;
  }
  Type & set__min_velocity(
    const float & _arg)
  {
    this->min_velocity = _arg;
    return *this;
  }
  Type & set__action(
    const int32_t & _arg)
  {
    this->action = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ADD =
    0u;
  static constexpr uint8_t MODIFY =
    1u;
  // guard against 'DELETE' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(DELETE)
#    pragma push_macro("DELETE")
#    undef DELETE
#  endif
#endif
  static constexpr uint8_t DELETE =
    2u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("DELETE")
#endif
  static constexpr uint8_t DELETEALL =
    3u;

  // pointer types
  using RawPtr =
    dummy_perception_publisher::msg::Object_<ContainerAllocator> *;
  using ConstRawPtr =
    const dummy_perception_publisher::msg::Object_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dummy_perception_publisher::msg::Object_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dummy_perception_publisher::msg::Object_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dummy_perception_publisher::msg::Object_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dummy_perception_publisher::msg::Object_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dummy_perception_publisher::msg::Object_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dummy_perception_publisher::msg::Object_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dummy_perception_publisher::msg::Object_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dummy_perception_publisher::msg::Object_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dummy_perception_publisher__msg__Object
    std::shared_ptr<dummy_perception_publisher::msg::Object_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dummy_perception_publisher__msg__Object
    std::shared_ptr<dummy_perception_publisher::msg::Object_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->initial_state != other.initial_state) {
      return false;
    }
    if (this->classification != other.classification) {
      return false;
    }
    if (this->shape != other.shape) {
      return false;
    }
    if (this->max_velocity != other.max_velocity) {
      return false;
    }
    if (this->min_velocity != other.min_velocity) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    return true;
  }
  bool operator!=(const Object_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Object_

// alias to use template instance with default allocator
using Object =
  dummy_perception_publisher::msg::Object_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Object_<ContainerAllocator>::ADD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Object_<ContainerAllocator>::MODIFY;
#endif  // __cplusplus < 201703L
// guard against 'DELETE' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(DELETE)
#    pragma push_macro("DELETE")
#    undef DELETE
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Object_<ContainerAllocator>::DELETE;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("DELETE")
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Object_<ContainerAllocator>::DELETEALL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace dummy_perception_publisher

#endif  // DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__OBJECT__STRUCT_HPP_
