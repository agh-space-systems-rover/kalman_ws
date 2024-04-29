// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi_msgs:srv/Subscribers.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__SUBSCRIBERS__BUILDER_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__SUBSCRIBERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosapi_msgs/srv/detail/subscribers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_Subscribers_Request_topic
{
public:
  Init_Subscribers_Request_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi_msgs::srv::Subscribers_Request topic(::rosapi_msgs::srv::Subscribers_Request::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::Subscribers_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::Subscribers_Request>()
{
  return rosapi_msgs::srv::builder::Init_Subscribers_Request_topic();
}

}  // namespace rosapi_msgs


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_Subscribers_Response_subscribers
{
public:
  Init_Subscribers_Response_subscribers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi_msgs::srv::Subscribers_Response subscribers(::rosapi_msgs::srv::Subscribers_Response::_subscribers_type arg)
  {
    msg_.subscribers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::Subscribers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::Subscribers_Response>()
{
  return rosapi_msgs::srv::builder::Init_Subscribers_Response_subscribers();
}

}  // namespace rosapi_msgs

#endif  // ROSAPI_MSGS__SRV__DETAIL__SUBSCRIBERS__BUILDER_HPP_
