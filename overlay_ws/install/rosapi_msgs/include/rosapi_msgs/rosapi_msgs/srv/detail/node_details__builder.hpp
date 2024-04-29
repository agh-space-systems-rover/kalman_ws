// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi_msgs:srv/NodeDetails.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__NODE_DETAILS__BUILDER_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__NODE_DETAILS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosapi_msgs/srv/detail/node_details__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_NodeDetails_Request_node
{
public:
  Init_NodeDetails_Request_node()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi_msgs::srv::NodeDetails_Request node(::rosapi_msgs::srv::NodeDetails_Request::_node_type arg)
  {
    msg_.node = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::NodeDetails_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::NodeDetails_Request>()
{
  return rosapi_msgs::srv::builder::Init_NodeDetails_Request_node();
}

}  // namespace rosapi_msgs


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_NodeDetails_Response_services
{
public:
  explicit Init_NodeDetails_Response_services(::rosapi_msgs::srv::NodeDetails_Response & msg)
  : msg_(msg)
  {}
  ::rosapi_msgs::srv::NodeDetails_Response services(::rosapi_msgs::srv::NodeDetails_Response::_services_type arg)
  {
    msg_.services = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::NodeDetails_Response msg_;
};

class Init_NodeDetails_Response_publishing
{
public:
  explicit Init_NodeDetails_Response_publishing(::rosapi_msgs::srv::NodeDetails_Response & msg)
  : msg_(msg)
  {}
  Init_NodeDetails_Response_services publishing(::rosapi_msgs::srv::NodeDetails_Response::_publishing_type arg)
  {
    msg_.publishing = std::move(arg);
    return Init_NodeDetails_Response_services(msg_);
  }

private:
  ::rosapi_msgs::srv::NodeDetails_Response msg_;
};

class Init_NodeDetails_Response_subscribing
{
public:
  Init_NodeDetails_Response_subscribing()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeDetails_Response_publishing subscribing(::rosapi_msgs::srv::NodeDetails_Response::_subscribing_type arg)
  {
    msg_.subscribing = std::move(arg);
    return Init_NodeDetails_Response_publishing(msg_);
  }

private:
  ::rosapi_msgs::srv::NodeDetails_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::NodeDetails_Response>()
{
  return rosapi_msgs::srv::builder::Init_NodeDetails_Response_subscribing();
}

}  // namespace rosapi_msgs

#endif  // ROSAPI_MSGS__SRV__DETAIL__NODE_DETAILS__BUILDER_HPP_
