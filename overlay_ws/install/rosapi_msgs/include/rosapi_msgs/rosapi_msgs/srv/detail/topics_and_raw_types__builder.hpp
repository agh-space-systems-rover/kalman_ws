// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi_msgs:srv/TopicsAndRawTypes.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__TOPICS_AND_RAW_TYPES__BUILDER_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__TOPICS_AND_RAW_TYPES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosapi_msgs/srv/detail/topics_and_raw_types__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosapi_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::TopicsAndRawTypes_Request>()
{
  return ::rosapi_msgs::srv::TopicsAndRawTypes_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosapi_msgs


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_TopicsAndRawTypes_Response_typedefs_full_text
{
public:
  explicit Init_TopicsAndRawTypes_Response_typedefs_full_text(::rosapi_msgs::srv::TopicsAndRawTypes_Response & msg)
  : msg_(msg)
  {}
  ::rosapi_msgs::srv::TopicsAndRawTypes_Response typedefs_full_text(::rosapi_msgs::srv::TopicsAndRawTypes_Response::_typedefs_full_text_type arg)
  {
    msg_.typedefs_full_text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::TopicsAndRawTypes_Response msg_;
};

class Init_TopicsAndRawTypes_Response_types
{
public:
  explicit Init_TopicsAndRawTypes_Response_types(::rosapi_msgs::srv::TopicsAndRawTypes_Response & msg)
  : msg_(msg)
  {}
  Init_TopicsAndRawTypes_Response_typedefs_full_text types(::rosapi_msgs::srv::TopicsAndRawTypes_Response::_types_type arg)
  {
    msg_.types = std::move(arg);
    return Init_TopicsAndRawTypes_Response_typedefs_full_text(msg_);
  }

private:
  ::rosapi_msgs::srv::TopicsAndRawTypes_Response msg_;
};

class Init_TopicsAndRawTypes_Response_topics
{
public:
  Init_TopicsAndRawTypes_Response_topics()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TopicsAndRawTypes_Response_types topics(::rosapi_msgs::srv::TopicsAndRawTypes_Response::_topics_type arg)
  {
    msg_.topics = std::move(arg);
    return Init_TopicsAndRawTypes_Response_types(msg_);
  }

private:
  ::rosapi_msgs::srv::TopicsAndRawTypes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::TopicsAndRawTypes_Response>()
{
  return rosapi_msgs::srv::builder::Init_TopicsAndRawTypes_Response_topics();
}

}  // namespace rosapi_msgs

#endif  // ROSAPI_MSGS__SRV__DETAIL__TOPICS_AND_RAW_TYPES__BUILDER_HPP_
