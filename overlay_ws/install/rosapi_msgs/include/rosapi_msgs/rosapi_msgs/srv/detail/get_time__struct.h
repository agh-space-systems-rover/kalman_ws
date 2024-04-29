// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosapi_msgs:srv/GetTime.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__GET_TIME__STRUCT_H_
#define ROSAPI_MSGS__SRV__DETAIL__GET_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetTime in the package rosapi_msgs.
typedef struct rosapi_msgs__srv__GetTime_Request
{
  uint8_t structure_needs_at_least_one_member;
} rosapi_msgs__srv__GetTime_Request;

// Struct for a sequence of rosapi_msgs__srv__GetTime_Request.
typedef struct rosapi_msgs__srv__GetTime_Request__Sequence
{
  rosapi_msgs__srv__GetTime_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi_msgs__srv__GetTime_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in srv/GetTime in the package rosapi_msgs.
typedef struct rosapi_msgs__srv__GetTime_Response
{
  builtin_interfaces__msg__Time time;
} rosapi_msgs__srv__GetTime_Response;

// Struct for a sequence of rosapi_msgs__srv__GetTime_Response.
typedef struct rosapi_msgs__srv__GetTime_Response__Sequence
{
  rosapi_msgs__srv__GetTime_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi_msgs__srv__GetTime_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSAPI_MSGS__SRV__DETAIL__GET_TIME__STRUCT_H_
