// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosapi_msgs:srv/GetParamNames.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__GET_PARAM_NAMES__STRUCT_H_
#define ROSAPI_MSGS__SRV__DETAIL__GET_PARAM_NAMES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetParamNames in the package rosapi_msgs.
typedef struct rosapi_msgs__srv__GetParamNames_Request
{
  uint8_t structure_needs_at_least_one_member;
} rosapi_msgs__srv__GetParamNames_Request;

// Struct for a sequence of rosapi_msgs__srv__GetParamNames_Request.
typedef struct rosapi_msgs__srv__GetParamNames_Request__Sequence
{
  rosapi_msgs__srv__GetParamNames_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi_msgs__srv__GetParamNames_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'names'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetParamNames in the package rosapi_msgs.
typedef struct rosapi_msgs__srv__GetParamNames_Response
{
  rosidl_runtime_c__String__Sequence names;
} rosapi_msgs__srv__GetParamNames_Response;

// Struct for a sequence of rosapi_msgs__srv__GetParamNames_Response.
typedef struct rosapi_msgs__srv__GetParamNames_Response__Sequence
{
  rosapi_msgs__srv__GetParamNames_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi_msgs__srv__GetParamNames_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSAPI_MSGS__SRV__DETAIL__GET_PARAM_NAMES__STRUCT_H_
