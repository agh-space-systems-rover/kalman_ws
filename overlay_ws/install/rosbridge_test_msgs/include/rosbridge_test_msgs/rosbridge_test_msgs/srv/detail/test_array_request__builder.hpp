// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosbridge_test_msgs:srv/TestArrayRequest.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_ARRAY_REQUEST__BUILDER_HPP_
#define ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_ARRAY_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosbridge_test_msgs/srv/detail/test_array_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosbridge_test_msgs
{

namespace srv
{

namespace builder
{

class Init_TestArrayRequest_Request_int_values
{
public:
  Init_TestArrayRequest_Request_int_values()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosbridge_test_msgs::srv::TestArrayRequest_Request int_values(::rosbridge_test_msgs::srv::TestArrayRequest_Request::_int_values_type arg)
  {
    msg_.int_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbridge_test_msgs::srv::TestArrayRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::srv::TestArrayRequest_Request>()
{
  return rosbridge_test_msgs::srv::builder::Init_TestArrayRequest_Request_int_values();
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
auto build<::rosbridge_test_msgs::srv::TestArrayRequest_Response>()
{
  return ::rosbridge_test_msgs::srv::TestArrayRequest_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_ARRAY_REQUEST__BUILDER_HPP_
