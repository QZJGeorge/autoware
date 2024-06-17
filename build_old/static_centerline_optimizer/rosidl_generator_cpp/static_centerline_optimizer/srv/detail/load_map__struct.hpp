// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from static_centerline_optimizer:srv/LoadMap.idl
// generated code does not contain a copyright notice

#ifndef STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__LOAD_MAP__STRUCT_HPP_
#define STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__LOAD_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__static_centerline_optimizer__srv__LoadMap_Request __attribute__((deprecated))
#else
# define DEPRECATED__static_centerline_optimizer__srv__LoadMap_Request __declspec(deprecated)
#endif

namespace static_centerline_optimizer
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadMap_Request_
{
  using Type = LoadMap_Request_<ContainerAllocator>;

  explicit LoadMap_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map = "";
    }
  }

  explicit LoadMap_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map = "";
    }
  }

  // field types and members
  using _map_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_type map;

  // setters for named parameter idiom
  Type & set__map(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    static_centerline_optimizer::srv::LoadMap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const static_centerline_optimizer::srv::LoadMap_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<static_centerline_optimizer::srv::LoadMap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<static_centerline_optimizer::srv::LoadMap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      static_centerline_optimizer::srv::LoadMap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<static_centerline_optimizer::srv::LoadMap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      static_centerline_optimizer::srv::LoadMap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<static_centerline_optimizer::srv::LoadMap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<static_centerline_optimizer::srv::LoadMap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<static_centerline_optimizer::srv::LoadMap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__static_centerline_optimizer__srv__LoadMap_Request
    std::shared_ptr<static_centerline_optimizer::srv::LoadMap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__static_centerline_optimizer__srv__LoadMap_Request
    std::shared_ptr<static_centerline_optimizer::srv::LoadMap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadMap_Request_ & other) const
  {
    if (this->map != other.map) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadMap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadMap_Request_

// alias to use template instance with default allocator
using LoadMap_Request =
  static_centerline_optimizer::srv::LoadMap_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace static_centerline_optimizer


#ifndef _WIN32
# define DEPRECATED__static_centerline_optimizer__srv__LoadMap_Response __attribute__((deprecated))
#else
# define DEPRECATED__static_centerline_optimizer__srv__LoadMap_Response __declspec(deprecated)
#endif

namespace static_centerline_optimizer
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadMap_Response_
{
  using Type = LoadMap_Response_<ContainerAllocator>;

  explicit LoadMap_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  explicit LoadMap_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    static_centerline_optimizer::srv::LoadMap_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const static_centerline_optimizer::srv::LoadMap_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<static_centerline_optimizer::srv::LoadMap_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<static_centerline_optimizer::srv::LoadMap_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      static_centerline_optimizer::srv::LoadMap_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<static_centerline_optimizer::srv::LoadMap_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      static_centerline_optimizer::srv::LoadMap_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<static_centerline_optimizer::srv::LoadMap_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<static_centerline_optimizer::srv::LoadMap_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<static_centerline_optimizer::srv::LoadMap_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__static_centerline_optimizer__srv__LoadMap_Response
    std::shared_ptr<static_centerline_optimizer::srv::LoadMap_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__static_centerline_optimizer__srv__LoadMap_Response
    std::shared_ptr<static_centerline_optimizer::srv::LoadMap_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadMap_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadMap_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadMap_Response_

// alias to use template instance with default allocator
using LoadMap_Response =
  static_centerline_optimizer::srv::LoadMap_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace static_centerline_optimizer

namespace static_centerline_optimizer
{

namespace srv
{

struct LoadMap
{
  using Request = static_centerline_optimizer::srv::LoadMap_Request;
  using Response = static_centerline_optimizer::srv::LoadMap_Response;
};

}  // namespace srv

}  // namespace static_centerline_optimizer

#endif  // STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__LOAD_MAP__STRUCT_HPP_
