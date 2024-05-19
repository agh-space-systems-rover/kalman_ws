// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:srv/GetGroupUrdf.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_GROUP_URDF__STRUCT_H_
#define MOVEIT_MSGS__SRV__DETAIL__GET_GROUP_URDF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'group_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetGroupUrdf in the package moveit_msgs.
typedef struct moveit_msgs__srv__GetGroupUrdf_Request
{
  rosidl_runtime_c__String group_name;
} moveit_msgs__srv__GetGroupUrdf_Request;

// Struct for a sequence of moveit_msgs__srv__GetGroupUrdf_Request.
typedef struct moveit_msgs__srv__GetGroupUrdf_Request__Sequence
{
  moveit_msgs__srv__GetGroupUrdf_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__GetGroupUrdf_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.h"
// Member 'urdf_string'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetGroupUrdf in the package moveit_msgs.
typedef struct moveit_msgs__srv__GetGroupUrdf_Response
{
  moveit_msgs__msg__MoveItErrorCodes error_code;
  /// URDF of the requested group. Empty if request was not successful e.g. because the group does not exist
  rosidl_runtime_c__String urdf_string;
} moveit_msgs__srv__GetGroupUrdf_Response;

// Struct for a sequence of moveit_msgs__srv__GetGroupUrdf_Response.
typedef struct moveit_msgs__srv__GetGroupUrdf_Response__Sequence
{
  moveit_msgs__srv__GetGroupUrdf_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__GetGroupUrdf_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_GROUP_URDF__STRUCT_H_
