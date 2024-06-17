// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from static_centerline_optimizer:srv/PlanRoute.idl
// generated code does not contain a copyright notice

#ifndef STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_ROUTE__STRUCT_HPP_
#define STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_ROUTE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__static_centerline_optimizer__srv__PlanRoute_Request __attribute__((deprecated))
#else
# define DEPRECATED__static_centerline_optimizer__srv__PlanRoute_Request __declspec(deprecated)
#endif

namespace static_centerline_optimizer
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanRoute_Request_
{
  using Type = PlanRoute_Request_<ContainerAllocator>;

  explicit PlanRoute_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_lane_id = 0ul;
      this->end_lane_id = 0ul;
    }
  }

  explicit PlanRoute_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_lane_id = 0ul;
      this->end_lane_id = 0ul;
    }
  }

  // field types and members
  using _start_lane_id_type =
    uint32_t;
  _start_lane_id_type start_lane_id;
  using _end_lane_id_type =
    uint32_t;
  _end_lane_id_type end_lane_id;

  // setters for named parameter idiom
  Type & set__start_lane_id(
    const uint32_t & _arg)
  {
    this->start_lane_id = _arg;
    return *this;
  }
  Type & set__end_lane_id(
    const uint32_t & _arg)
  {
    this->end_lane_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    static_centerline_optimizer::srv::PlanRoute_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const static_centerline_optimizer::srv::PlanRoute_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<static_centerline_optimizer::srv::PlanRoute_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<static_centerline_optimizer::srv::PlanRoute_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      static_centerline_optimizer::srv::PlanRoute_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<static_centerline_optimizer::srv::PlanRoute_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      static_centerline_optimizer::srv::PlanRoute_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<static_centerline_optimizer::srv::PlanRoute_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<static_centerline_optimizer::srv::PlanRoute_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<static_centerline_optimizer::srv::PlanRoute_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__static_centerline_optimizer__srv__PlanRoute_Request
    std::shared_ptr<static_centerline_optimizer::srv::PlanRoute_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__static_centerline_optimizer__srv__PlanRoute_Request
    std::shared_ptr<static_centerline_optimizer::srv::PlanRoute_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanRoute_Request_ & other) const
  {
    if (this->start_lane_id != other.start_lane_id) {
      return false;
    }
    if (this->end_lane_id != other.end_lane_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanRoute_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanRoute_Request_

// alias to use template instance with default allocator
using PlanRoute_Request =
  static_centerline_optimizer::srv::PlanRoute_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace static_centerline_optimizer


#ifndef _WIN32
# define DEPRECATED__static_centerline_optimizer__srv__PlanRoute_Response __attribute__((deprecated))
#else
# define DEPRECATED__static_centerline_optimizer__srv__PlanRoute_Response __declspec(deprecated)
#endif

namespace static_centerline_optimizer
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanRoute_Response_
{
  using Type = PlanRoute_Response_<ContainerAllocator>;

  explicit PlanRoute_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  explicit PlanRoute_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  // field types and members
  using _lane_ids_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _lane_ids_type lane_ids;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__lane_ids(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->lane_ids = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    static_centerline_optimizer::srv::PlanRoute_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const static_centerline_optimizer::srv::PlanRoute_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<static_centerline_optimizer::srv::PlanRoute_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<static_centerline_optimizer::srv::PlanRoute_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      static_centerline_optimizer::srv::PlanRoute_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<static_centerline_optimizer::srv::PlanRoute_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      static_centerline_optimizer::srv::PlanRoute_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<static_centerline_optimizer::srv::PlanRoute_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<static_centerline_optimizer::srv::PlanRoute_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<static_centerline_optimizer::srv::PlanRoute_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__static_centerline_optimizer__srv__PlanRoute_Response
    std::shared_ptr<static_centerline_optimizer::srv::PlanRoute_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__static_centerline_optimizer__srv__PlanRoute_Response
    std::shared_ptr<static_centerline_optimizer::srv::PlanRoute_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanRoute_Response_ & other) const
  {
    if (this->lane_ids != other.lane_ids) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanRoute_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanRoute_Response_

// alias to use template instance with default allocator
using PlanRoute_Response =
  static_centerline_optimizer::srv::PlanRoute_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace static_centerline_optimizer

namespace static_centerline_optimizer
{

namespace srv
{

struct PlanRoute
{
  using Request = static_centerline_optimizer::srv::PlanRoute_Request;
  using Response = static_centerline_optimizer::srv::PlanRoute_Response;
};

}  // namespace srv

}  // namespace static_centerline_optimizer

#endif  // STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_ROUTE__STRUCT_HPP_
