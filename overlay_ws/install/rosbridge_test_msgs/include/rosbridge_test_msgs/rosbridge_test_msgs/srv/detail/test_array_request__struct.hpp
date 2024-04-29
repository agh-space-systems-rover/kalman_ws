// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosbridge_test_msgs:srv/TestArrayRequest.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_ARRAY_REQUEST__STRUCT_HPP_
#define ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_ARRAY_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__srv__TestArrayRequest_Request __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__srv__TestArrayRequest_Request __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TestArrayRequest_Request_
{
  using Type = TestArrayRequest_Request_<ContainerAllocator>;

  explicit TestArrayRequest_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TestArrayRequest_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _int_values_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _int_values_type int_values;

  // setters for named parameter idiom
  Type & set__int_values(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->int_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosbridge_test_msgs::srv::TestArrayRequest_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::srv::TestArrayRequest_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::srv::TestArrayRequest_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::srv::TestArrayRequest_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::srv::TestArrayRequest_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::srv::TestArrayRequest_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::srv::TestArrayRequest_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::srv::TestArrayRequest_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::srv::TestArrayRequest_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::srv::TestArrayRequest_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__srv__TestArrayRequest_Request
    std::shared_ptr<rosbridge_test_msgs::srv::TestArrayRequest_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__srv__TestArrayRequest_Request
    std::shared_ptr<rosbridge_test_msgs::srv::TestArrayRequest_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestArrayRequest_Request_ & other) const
  {
    if (this->int_values != other.int_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestArrayRequest_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestArrayRequest_Request_

// alias to use template instance with default allocator
using TestArrayRequest_Request =
  rosbridge_test_msgs::srv::TestArrayRequest_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosbridge_test_msgs


#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__srv__TestArrayRequest_Response __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__srv__TestArrayRequest_Response __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TestArrayRequest_Response_
{
  using Type = TestArrayRequest_Response_<ContainerAllocator>;

  explicit TestArrayRequest_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TestArrayRequest_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    rosbridge_test_msgs::srv::TestArrayRequest_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::srv::TestArrayRequest_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::srv::TestArrayRequest_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::srv::TestArrayRequest_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::srv::TestArrayRequest_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::srv::TestArrayRequest_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::srv::TestArrayRequest_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::srv::TestArrayRequest_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::srv::TestArrayRequest_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::srv::TestArrayRequest_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__srv__TestArrayRequest_Response
    std::shared_ptr<rosbridge_test_msgs::srv::TestArrayRequest_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__srv__TestArrayRequest_Response
    std::shared_ptr<rosbridge_test_msgs::srv::TestArrayRequest_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestArrayRequest_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestArrayRequest_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestArrayRequest_Response_

// alias to use template instance with default allocator
using TestArrayRequest_Response =
  rosbridge_test_msgs::srv::TestArrayRequest_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosbridge_test_msgs

namespace rosbridge_test_msgs
{

namespace srv
{

struct TestArrayRequest
{
  using Request = rosbridge_test_msgs::srv::TestArrayRequest_Request;
  using Response = rosbridge_test_msgs::srv::TestArrayRequest_Response;
};

}  // namespace srv

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_ARRAY_REQUEST__STRUCT_HPP_
