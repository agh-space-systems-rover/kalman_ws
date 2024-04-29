// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_test_msgs:msg/TestFloat32BoundedArray.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_FLOAT32_BOUNDED_ARRAY__STRUCT_H_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_FLOAT32_BOUNDED_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TestFloat32BoundedArray in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__msg__TestFloat32BoundedArray
{
  float data[16];
} rosbridge_test_msgs__msg__TestFloat32BoundedArray;

// Struct for a sequence of rosbridge_test_msgs__msg__TestFloat32BoundedArray.
typedef struct rosbridge_test_msgs__msg__TestFloat32BoundedArray__Sequence
{
  rosbridge_test_msgs__msg__TestFloat32BoundedArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__msg__TestFloat32BoundedArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_FLOAT32_BOUNDED_ARRAY__STRUCT_H_
