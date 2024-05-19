// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/PipelineState.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PIPELINE_STATE__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__PIPELINE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'request'
#include "moveit_msgs/msg/detail/motion_plan_request__struct.hpp"
// Member 'response'
#include "moveit_msgs/msg/detail/motion_plan_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__PipelineState __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__PipelineState __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PipelineState_
{
  using Type = PipelineState_<ContainerAllocator>;

  explicit PipelineState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init),
    response(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pipeline_stage = "";
    }
  }

  explicit PipelineState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init),
    response(_alloc, _init),
    pipeline_stage(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pipeline_stage = "";
    }
  }

  // field types and members
  using _request_type =
    moveit_msgs::msg::MotionPlanRequest_<ContainerAllocator>;
  _request_type request;
  using _response_type =
    moveit_msgs::msg::MotionPlanResponse_<ContainerAllocator>;
  _response_type response;
  using _pipeline_stage_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pipeline_stage_type pipeline_stage;

  // setters for named parameter idiom
  Type & set__request(
    const moveit_msgs::msg::MotionPlanRequest_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const moveit_msgs::msg::MotionPlanResponse_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }
  Type & set__pipeline_stage(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pipeline_stage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::PipelineState_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::PipelineState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::PipelineState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::PipelineState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::PipelineState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::PipelineState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::PipelineState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::PipelineState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::PipelineState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::PipelineState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__PipelineState
    std::shared_ptr<moveit_msgs::msg::PipelineState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__PipelineState
    std::shared_ptr<moveit_msgs::msg::PipelineState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PipelineState_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    if (this->pipeline_stage != other.pipeline_stage) {
      return false;
    }
    return true;
  }
  bool operator!=(const PipelineState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PipelineState_

// alias to use template instance with default allocator
using PipelineState =
  moveit_msgs::msg::PipelineState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__PIPELINE_STATE__STRUCT_HPP_
