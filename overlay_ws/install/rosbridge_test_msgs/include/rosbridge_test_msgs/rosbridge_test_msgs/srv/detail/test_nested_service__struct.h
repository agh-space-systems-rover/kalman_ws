// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_test_msgs:srv/TestNestedService.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_NESTED_SERVICE__STRUCT_H_
#define ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_NESTED_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/TestNestedService in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__srv__TestNestedService_Request
{
  geometry_msgs__msg__Pose pose;
} rosbridge_test_msgs__srv__TestNestedService_Request;

// Struct for a sequence of rosbridge_test_msgs__srv__TestNestedService_Request.
typedef struct rosbridge_test_msgs__srv__TestNestedService_Request__Sequence
{
  rosbridge_test_msgs__srv__TestNestedService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__srv__TestNestedService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/float64__struct.h"

/// Struct defined in srv/TestNestedService in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__srv__TestNestedService_Response
{
  std_msgs__msg__Float64 data;
} rosbridge_test_msgs__srv__TestNestedService_Response;

// Struct for a sequence of rosbridge_test_msgs__srv__TestNestedService_Response.
typedef struct rosbridge_test_msgs__srv__TestNestedService_Response__Sequence
{
  rosbridge_test_msgs__srv__TestNestedService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__srv__TestNestedService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_NESTED_SERVICE__STRUCT_H_
