// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi_msgs:srv/Publishers.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__PUBLISHERS__BUILDER_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__PUBLISHERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosapi_msgs/srv/detail/publishers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_Publishers_Request_topic
{
public:
  Init_Publishers_Request_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi_msgs::srv::Publishers_Request topic(::rosapi_msgs::srv::Publishers_Request::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::Publishers_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::Publishers_Request>()
{
  return rosapi_msgs::srv::builder::Init_Publishers_Request_topic();
}

}  // namespace rosapi_msgs


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_Publishers_Response_publishers
{
public:
  Init_Publishers_Response_publishers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi_msgs::srv::Publishers_Response publishers(::rosapi_msgs::srv::Publishers_Response::_publishers_type arg)
  {
    msg_.publishers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::Publishers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::Publishers_Response>()
{
  return rosapi_msgs::srv::builder::Init_Publishers_Response_publishers();
}

}  // namespace rosapi_msgs

#endif  // ROSAPI_MSGS__SRV__DETAIL__PUBLISHERS__BUILDER_HPP_
