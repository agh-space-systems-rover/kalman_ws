// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aruco_opencv_msgs:msg/ArucoDetection.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_OPENCV_MSGS__MSG__DETAIL__ARUCO_DETECTION__BUILDER_HPP_
#define ARUCO_OPENCV_MSGS__MSG__DETAIL__ARUCO_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aruco_opencv_msgs/msg/detail/aruco_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aruco_opencv_msgs
{

namespace msg
{

namespace builder
{

class Init_ArucoDetection_boards
{
public:
  explicit Init_ArucoDetection_boards(::aruco_opencv_msgs::msg::ArucoDetection & msg)
  : msg_(msg)
  {}
  ::aruco_opencv_msgs::msg::ArucoDetection boards(::aruco_opencv_msgs::msg::ArucoDetection::_boards_type arg)
  {
    msg_.boards = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aruco_opencv_msgs::msg::ArucoDetection msg_;
};

class Init_ArucoDetection_markers
{
public:
  explicit Init_ArucoDetection_markers(::aruco_opencv_msgs::msg::ArucoDetection & msg)
  : msg_(msg)
  {}
  Init_ArucoDetection_boards markers(::aruco_opencv_msgs::msg::ArucoDetection::_markers_type arg)
  {
    msg_.markers = std::move(arg);
    return Init_ArucoDetection_boards(msg_);
  }

private:
  ::aruco_opencv_msgs::msg::ArucoDetection msg_;
};

class Init_ArucoDetection_header
{
public:
  Init_ArucoDetection_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArucoDetection_markers header(::aruco_opencv_msgs::msg::ArucoDetection::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ArucoDetection_markers(msg_);
  }

private:
  ::aruco_opencv_msgs::msg::ArucoDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aruco_opencv_msgs::msg::ArucoDetection>()
{
  return aruco_opencv_msgs::msg::builder::Init_ArucoDetection_header();
}

}  // namespace aruco_opencv_msgs

#endif  // ARUCO_OPENCV_MSGS__MSG__DETAIL__ARUCO_DETECTION__BUILDER_HPP_
