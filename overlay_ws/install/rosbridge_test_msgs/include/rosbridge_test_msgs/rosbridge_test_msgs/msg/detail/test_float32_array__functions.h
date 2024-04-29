// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rosbridge_test_msgs:msg/TestFloat32Array.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_FLOAT32_ARRAY__FUNCTIONS_H_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_FLOAT32_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rosbridge_test_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rosbridge_test_msgs/msg/detail/test_float32_array__struct.h"

/// Initialize msg/TestFloat32Array message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_test_msgs__msg__TestFloat32Array
 * )) before or use
 * rosbridge_test_msgs__msg__TestFloat32Array__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__msg__TestFloat32Array__init(rosbridge_test_msgs__msg__TestFloat32Array * msg);

/// Finalize msg/TestFloat32Array message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__msg__TestFloat32Array__fini(rosbridge_test_msgs__msg__TestFloat32Array * msg);

/// Create msg/TestFloat32Array message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_test_msgs__msg__TestFloat32Array__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__msg__TestFloat32Array *
rosbridge_test_msgs__msg__TestFloat32Array__create();

/// Destroy msg/TestFloat32Array message.
/**
 * It calls
 * rosbridge_test_msgs__msg__TestFloat32Array__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__msg__TestFloat32Array__destroy(rosbridge_test_msgs__msg__TestFloat32Array * msg);

/// Check for msg/TestFloat32Array message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__msg__TestFloat32Array__are_equal(const rosbridge_test_msgs__msg__TestFloat32Array * lhs, const rosbridge_test_msgs__msg__TestFloat32Array * rhs);

/// Copy a msg/TestFloat32Array message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__msg__TestFloat32Array__copy(
  const rosbridge_test_msgs__msg__TestFloat32Array * input,
  rosbridge_test_msgs__msg__TestFloat32Array * output);

/// Initialize array of msg/TestFloat32Array messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_test_msgs__msg__TestFloat32Array__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__msg__TestFloat32Array__Sequence__init(rosbridge_test_msgs__msg__TestFloat32Array__Sequence * array, size_t size);

/// Finalize array of msg/TestFloat32Array messages.
/**
 * It calls
 * rosbridge_test_msgs__msg__TestFloat32Array__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__msg__TestFloat32Array__Sequence__fini(rosbridge_test_msgs__msg__TestFloat32Array__Sequence * array);

/// Create array of msg/TestFloat32Array messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_test_msgs__msg__TestFloat32Array__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
rosbridge_test_msgs__msg__TestFloat32Array__Sequence *
rosbridge_test_msgs__msg__TestFloat32Array__Sequence__create(size_t size);

/// Destroy array of msg/TestFloat32Array messages.
/**
 * It calls
 * rosbridge_test_msgs__msg__TestFloat32Array__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
void
rosbridge_test_msgs__msg__TestFloat32Array__Sequence__destroy(rosbridge_test_msgs__msg__TestFloat32Array__Sequence * array);

/// Check for msg/TestFloat32Array message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__msg__TestFloat32Array__Sequence__are_equal(const rosbridge_test_msgs__msg__TestFloat32Array__Sequence * lhs, const rosbridge_test_msgs__msg__TestFloat32Array__Sequence * rhs);

/// Copy an array of msg/TestFloat32Array messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_test_msgs
bool
rosbridge_test_msgs__msg__TestFloat32Array__Sequence__copy(
  const rosbridge_test_msgs__msg__TestFloat32Array__Sequence * input,
  rosbridge_test_msgs__msg__TestFloat32Array__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_FLOAT32_ARRAY__FUNCTIONS_H_
