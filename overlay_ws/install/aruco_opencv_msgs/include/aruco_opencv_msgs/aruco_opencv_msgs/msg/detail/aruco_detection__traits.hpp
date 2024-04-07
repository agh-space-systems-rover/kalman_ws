// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aruco_opencv_msgs:msg/ArucoDetection.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_OPENCV_MSGS__MSG__DETAIL__ARUCO_DETECTION__TRAITS_HPP_
#define ARUCO_OPENCV_MSGS__MSG__DETAIL__ARUCO_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aruco_opencv_msgs/msg/detail/aruco_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'markers'
#include "aruco_opencv_msgs/msg/detail/marker_pose__traits.hpp"
// Member 'boards'
#include "aruco_opencv_msgs/msg/detail/board_pose__traits.hpp"

namespace aruco_opencv_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArucoDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: markers
  {
    if (msg.markers.size() == 0) {
      out << "markers: []";
    } else {
      out << "markers: [";
      size_t pending_items = msg.markers.size();
      for (auto item : msg.markers) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: boards
  {
    if (msg.boards.size() == 0) {
      out << "boards: []";
    } else {
      out << "boards: [";
      size_t pending_items = msg.boards.size();
      for (auto item : msg.boards) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArucoDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: markers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.markers.size() == 0) {
      out << "markers: []\n";
    } else {
      out << "markers:\n";
      for (auto item : msg.markers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: boards
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.boards.size() == 0) {
      out << "boards: []\n";
    } else {
      out << "boards:\n";
      for (auto item : msg.boards) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArucoDetection & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace aruco_opencv_msgs

namespace rosidl_generator_traits
{

[[deprecated("use aruco_opencv_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aruco_opencv_msgs::msg::ArucoDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  aruco_opencv_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aruco_opencv_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aruco_opencv_msgs::msg::ArucoDetection & msg)
{
  return aruco_opencv_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aruco_opencv_msgs::msg::ArucoDetection>()
{
  return "aruco_opencv_msgs::msg::ArucoDetection";
}

template<>
inline const char * name<aruco_opencv_msgs::msg::ArucoDetection>()
{
  return "aruco_opencv_msgs/msg/ArucoDetection";
}

template<>
struct has_fixed_size<aruco_opencv_msgs::msg::ArucoDetection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aruco_opencv_msgs::msg::ArucoDetection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aruco_opencv_msgs::msg::ArucoDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARUCO_OPENCV_MSGS__MSG__DETAIL__ARUCO_DETECTION__TRAITS_HPP_
