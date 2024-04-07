// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_opencv_msgs:msg/ArucoDetection.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_OPENCV_MSGS__MSG__DETAIL__ARUCO_DETECTION__STRUCT_H_
#define ARUCO_OPENCV_MSGS__MSG__DETAIL__ARUCO_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'markers'
#include "aruco_opencv_msgs/msg/detail/marker_pose__struct.h"
// Member 'boards'
#include "aruco_opencv_msgs/msg/detail/board_pose__struct.h"

/// Struct defined in msg/ArucoDetection in the package aruco_opencv_msgs.
typedef struct aruco_opencv_msgs__msg__ArucoDetection
{
  std_msgs__msg__Header header;
  aruco_opencv_msgs__msg__MarkerPose__Sequence markers;
  aruco_opencv_msgs__msg__BoardPose__Sequence boards;
} aruco_opencv_msgs__msg__ArucoDetection;

// Struct for a sequence of aruco_opencv_msgs__msg__ArucoDetection.
typedef struct aruco_opencv_msgs__msg__ArucoDetection__Sequence
{
  aruco_opencv_msgs__msg__ArucoDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_opencv_msgs__msg__ArucoDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_OPENCV_MSGS__MSG__DETAIL__ARUCO_DETECTION__STRUCT_H_
