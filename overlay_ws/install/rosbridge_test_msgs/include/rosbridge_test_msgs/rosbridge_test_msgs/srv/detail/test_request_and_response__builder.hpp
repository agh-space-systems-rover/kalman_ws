// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosbridge_test_msgs:srv/TestRequestAndResponse.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_REQUEST_AND_RESPONSE__BUILDER_HPP_
#define ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_REQUEST_AND_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosbridge_test_msgs/srv/detail/test_request_and_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosbridge_test_msgs
{

namespace srv
{

namespace builder
{

class Init_TestRequestAndResponse_Request_data
{
public:
  Init_TestRequestAndResponse_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosbridge_test_msgs::srv::TestRequestAndResponse_Request data(::rosbridge_test_msgs::srv::TestRequestAndResponse_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbridge_test_msgs::srv::TestRequestAndResponse_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::srv::TestRequestAndResponse_Request>()
{
  return rosbridge_test_msgs::srv::builder::Init_TestRequestAndResponse_Request_data();
}

}  // namespace rosbridge_test_msgs


namespace rosbridge_test_msgs
{

namespace srv
{

namespace builder
{

class Init_TestRequestAndResponse_Response_data
{
public:
  Init_TestRequestAndResponse_Response_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosbridge_test_msgs::srv::TestRequestAndResponse_Response data(::rosbridge_test_msgs::srv::TestRequestAndResponse_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbridge_test_msgs::srv::TestRequestAndResponse_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::srv::TestRequestAndResponse_Response>()
{
  return rosbridge_test_msgs::srv::builder::Init_TestRequestAndResponse_Response_data();
}

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_REQUEST_AND_RESPONSE__BUILDER_HPP_
