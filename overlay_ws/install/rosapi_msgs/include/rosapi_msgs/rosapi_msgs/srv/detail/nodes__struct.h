// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosapi_msgs:srv/Nodes.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__NODES__STRUCT_H_
#define ROSAPI_MSGS__SRV__DETAIL__NODES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Nodes in the package rosapi_msgs.
typedef struct rosapi_msgs__srv__Nodes_Request
{
  uint8_t structure_needs_at_least_one_member;
} rosapi_msgs__srv__Nodes_Request;

// Struct for a sequence of rosapi_msgs__srv__Nodes_Request.
typedef struct rosapi_msgs__srv__Nodes_Request__Sequence
{
  rosapi_msgs__srv__Nodes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi_msgs__srv__Nodes_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'nodes'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Nodes in the package rosapi_msgs.
typedef struct rosapi_msgs__srv__Nodes_Response
{
  rosidl_runtime_c__String__Sequence nodes;
} rosapi_msgs__srv__Nodes_Response;

// Struct for a sequence of rosapi_msgs__srv__Nodes_Response.
typedef struct rosapi_msgs__srv__Nodes_Response__Sequence
{
  rosapi_msgs__srv__Nodes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi_msgs__srv__Nodes_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSAPI_MSGS__SRV__DETAIL__NODES__STRUCT_H_
