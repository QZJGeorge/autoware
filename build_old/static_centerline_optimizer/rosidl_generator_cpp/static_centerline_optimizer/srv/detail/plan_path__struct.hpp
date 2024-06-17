// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from static_centerline_optimizer:srv/PlanPath.idl
// generated code does not contain a copyright notice

#ifndef STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_PATH__STRUCT_HPP_
#define STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__static_centerline_optimizer__srv__PlanPath_Request __attribute__((deprecated))
#else
# define DEPRECATED__static_centerline_optimizer__srv__PlanPath_Request __declspec(deprecated)
#endif

namespace static_centerline_optimizer
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanPath_Request_
{
  using Type = PlanPath_Request_<ContainerAllocator>;

  explicit PlanPath_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_id = 0ul;
    }
  }

  explicit PlanPath_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_id = 0ul;
    }
  }

  // field types and members
  using _map_id_type =
    uint32_t;
  _map_id_type map_id;
  using _route_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _route_type route;

  // setters for named parameter idiom
  Type & set__map_id(
    const uint32_t & _arg)
  {
    this->map_id = _arg;
    return *this;
  }
  Type & set__route(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->route = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    static_centerline_optimizer::srv::PlanPath_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const static_centerline_optimizer::srv::PlanPath_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<static_centerline_optimizer::srv::PlanPath_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<static_centerline_optimizer::srv::PlanPath_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      static_centerline_optimizer::srv::PlanPath_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<static_centerline_optimizer::srv::PlanPath_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      static_centerline_optimizer::srv::PlanPath_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<static_centerline_optimizer::srv::PlanPath_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<static_centerline_optimizer::srv::PlanPath_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<static_centerline_optimizer::srv::PlanPath_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__static_centerline_optimizer__srv__PlanPath_Request
    std::shared_ptr<static_centerline_optimizer::srv::PlanPath_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__static_centerline_optimizer__srv__PlanPath_Request
    std::shared_ptr<static_centerline_optimizer::srv::PlanPath_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanPath_Request_ & other) const
  {
    if (this->map_id != other.map_id) {
      return false;
    }
    if (this->route != other.route) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanPath_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanPath_Request_

// alias to use template instance with default allocator
using PlanPath_Request =
  static_centerline_optimizer::srv::PlanPath_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace static_centerline_optimizer


// Include directives for member types
// Member 'points_with_lane_ids'
#include "static_centerline_optimizer/msg/detail/points_with_lane_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__static_centerline_optimizer__srv__PlanPath_Response __attribute__((deprecated))
#else
# define DEPRECATED__static_centerline_optimizer__srv__PlanPath_Response __declspec(deprecated)
#endif

namespace static_centerline_optimizer
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanPath_Response_
{
  using Type = PlanPath_Response_<ContainerAllocator>;

  explicit PlanPath_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  explicit PlanPath_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  // field types and members
  using _points_with_lane_ids_type =
    std::vector<static_centerline_optimizer::msg::PointsWithLaneId_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<static_centerline_optimizer::msg::PointsWithLaneId_<ContainerAllocator>>>;
  _points_with_lane_ids_type points_with_lane_ids;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _unconnected_lane_ids_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _unconnected_lane_ids_type unconnected_lane_ids;

  // setters for named parameter idiom
  Type & set__points_with_lane_ids(
    const std::vector<static_centerline_optimizer::msg::PointsWithLaneId_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<static_centerline_optimizer::msg::PointsWithLaneId_<ContainerAllocator>>> & _arg)
  {
    this->points_with_lane_ids = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__unconnected_lane_ids(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->unconnected_lane_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    static_centerline_optimizer::srv::PlanPath_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const static_centerline_optimizer::srv::PlanPath_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<static_centerline_optimizer::srv::PlanPath_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<static_centerline_optimizer::srv::PlanPath_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      static_centerline_optimizer::srv::PlanPath_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<static_centerline_optimizer::srv::PlanPath_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      static_centerline_optimizer::srv::PlanPath_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<static_centerline_optimizer::srv::PlanPath_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<static_centerline_optimizer::srv::PlanPath_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<static_centerline_optimizer::srv::PlanPath_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__static_centerline_optimizer__srv__PlanPath_Response
    std::shared_ptr<static_centerline_optimizer::srv::PlanPath_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__static_centerline_optimizer__srv__PlanPath_Response
    std::shared_ptr<static_centerline_optimizer::srv::PlanPath_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanPath_Response_ & other) const
  {
    if (this->points_with_lane_ids != other.points_with_lane_ids) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->unconnected_lane_ids != other.unconnected_lane_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanPath_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanPath_Response_

// alias to use template instance with default allocator
using PlanPath_Response =
  static_centerline_optimizer::srv::PlanPath_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace static_centerline_optimizer

namespace static_centerline_optimizer
{

namespace srv
{

struct PlanPath
{
  using Request = static_centerline_optimizer::srv::PlanPath_Request;
  using Response = static_centerline_optimizer::srv::PlanPath_Response;
};

}  // namespace srv

}  // namespace static_centerline_optimizer

#endif  // STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_PATH__STRUCT_HPP_
