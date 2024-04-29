// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosbridge_test_msgs:srv/TestEmpty.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_EMPTY__BUILDER_HPP_
#define ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_EMPTY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosbridge_test_msgs/srv/detail/test_empty__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosbridge_test_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::srv::TestEmpty_Request>()
{
  return ::rosbridge_test_msgs::srv::TestEmpty_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosbridge_test_msgs


namespace rosbridge_test_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::srv::TestEmpty_Response>()
{
  return ::rosbridge_test_msgs::srv::TestEmpty_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_EMPTY__BUILDER_HPP_
