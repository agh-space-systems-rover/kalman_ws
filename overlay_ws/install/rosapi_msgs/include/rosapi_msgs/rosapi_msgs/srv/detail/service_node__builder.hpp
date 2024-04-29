// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi_msgs:srv/ServiceNode.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__SERVICE_NODE__BUILDER_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__SERVICE_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosapi_msgs/srv/detail/service_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_ServiceNode_Request_service
{
public:
  Init_ServiceNode_Request_service()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi_msgs::srv::ServiceNode_Request service(::rosapi_msgs::srv::ServiceNode_Request::_service_type arg)
  {
    msg_.service = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::ServiceNode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::ServiceNode_Request>()
{
  return rosapi_msgs::srv::builder::Init_ServiceNode_Request_service();
}

}  // namespace rosapi_msgs


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_ServiceNode_Response_node
{
public:
  Init_ServiceNode_Response_node()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi_msgs::srv::ServiceNode_Response node(::rosapi_msgs::srv::ServiceNode_Response::_node_type arg)
  {
    msg_.node = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::ServiceNode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::ServiceNode_Response>()
{
  return rosapi_msgs::srv::builder::Init_ServiceNode_Response_node();
}

}  // namespace rosapi_msgs

#endif  // ROSAPI_MSGS__SRV__DETAIL__SERVICE_NODE__BUILDER_HPP_
