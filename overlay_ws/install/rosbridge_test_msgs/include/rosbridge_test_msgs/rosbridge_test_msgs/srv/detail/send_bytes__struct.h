// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_test_msgs:srv/SendBytes.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__DETAIL__SEND_BYTES__STRUCT_H_
#define ROSBRIDGE_TEST_MSGS__SRV__DETAIL__SEND_BYTES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SendBytes in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__srv__SendBytes_Request
{
  int64_t count;
} rosbridge_test_msgs__srv__SendBytes_Request;

// Struct for a sequence of rosbridge_test_msgs__srv__SendBytes_Request.
typedef struct rosbridge_test_msgs__srv__SendBytes_Request__Sequence
{
  rosbridge_test_msgs__srv__SendBytes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__srv__SendBytes_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SendBytes in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__srv__SendBytes_Response
{
  rosidl_runtime_c__String data;
} rosbridge_test_msgs__srv__SendBytes_Response;

// Struct for a sequence of rosbridge_test_msgs__srv__SendBytes_Response.
typedef struct rosbridge_test_msgs__srv__SendBytes_Response__Sequence
{
  rosbridge_test_msgs__srv__SendBytes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__srv__SendBytes_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__SRV__DETAIL__SEND_BYTES__STRUCT_H_
