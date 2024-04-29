// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosbridge_test_msgs:srv/TestNestedService.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_NESTED_SERVICE__STRUCT_HPP_
#define ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_NESTED_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__srv__TestNestedService_Request __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__srv__TestNestedService_Request __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TestNestedService_Request_
{
  using Type = TestNestedService_Request_<ContainerAllocator>;

  explicit TestNestedService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    (void)_init;
  }

  explicit TestNestedService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosbridge_test_msgs::srv::TestNestedService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::srv::TestNestedService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::srv::TestNestedService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::srv::TestNestedService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::srv::TestNestedService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::srv::TestNestedService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::srv::TestNestedService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::srv::TestNestedService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::srv::TestNestedService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::srv::TestNestedService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__srv__TestNestedService_Request
    std::shared_ptr<rosbridge_test_msgs::srv::TestNestedService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__srv__TestNestedService_Request
    std::shared_ptr<rosbridge_test_msgs::srv::TestNestedService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestNestedService_Request_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestNestedService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestNestedService_Request_

// alias to use template instance with default allocator
using TestNestedService_Request =
  rosbridge_test_msgs::srv::TestNestedService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosbridge_test_msgs


// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/float64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__srv__TestNestedService_Response __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__srv__TestNestedService_Response __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TestNestedService_Response_
{
  using Type = TestNestedService_Response_<ContainerAllocator>;

  explicit TestNestedService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_init)
  {
    (void)_init;
  }

  explicit TestNestedService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _data_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosbridge_test_msgs::srv::TestNestedService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::srv::TestNestedService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::srv::TestNestedService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::srv::TestNestedService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::srv::TestNestedService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::srv::TestNestedService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::srv::TestNestedService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::srv::TestNestedService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::srv::TestNestedService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::srv::TestNestedService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__srv__TestNestedService_Response
    std::shared_ptr<rosbridge_test_msgs::srv::TestNestedService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__srv__TestNestedService_Response
    std::shared_ptr<rosbridge_test_msgs::srv::TestNestedService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestNestedService_Response_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestNestedService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestNestedService_Response_

// alias to use template instance with default allocator
using TestNestedService_Response =
  rosbridge_test_msgs::srv::TestNestedService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosbridge_test_msgs

namespace rosbridge_test_msgs
{

namespace srv
{

struct TestNestedService
{
  using Request = rosbridge_test_msgs::srv::TestNestedService_Request;
  using Response = rosbridge_test_msgs::srv::TestNestedService_Response;
};

}  // namespace srv

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_NESTED_SERVICE__STRUCT_HPP_
