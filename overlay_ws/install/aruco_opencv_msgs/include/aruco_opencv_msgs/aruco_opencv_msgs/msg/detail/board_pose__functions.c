// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aruco_opencv_msgs:msg/BoardPose.idl
// generated code does not contain a copyright notice
#include "aruco_opencv_msgs/msg/detail/board_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `board_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
aruco_opencv_msgs__msg__BoardPose__init(aruco_opencv_msgs__msg__BoardPose * msg)
{
  if (!msg) {
    return false;
  }
  // board_name
  if (!rosidl_runtime_c__String__init(&msg->board_name)) {
    aruco_opencv_msgs__msg__BoardPose__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    aruco_opencv_msgs__msg__BoardPose__fini(msg);
    return false;
  }
  return true;
}

void
aruco_opencv_msgs__msg__BoardPose__fini(aruco_opencv_msgs__msg__BoardPose * msg)
{
  if (!msg) {
    return;
  }
  // board_name
  rosidl_runtime_c__String__fini(&msg->board_name);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
aruco_opencv_msgs__msg__BoardPose__are_equal(const aruco_opencv_msgs__msg__BoardPose * lhs, const aruco_opencv_msgs__msg__BoardPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // board_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->board_name), &(rhs->board_name)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
aruco_opencv_msgs__msg__BoardPose__copy(
  const aruco_opencv_msgs__msg__BoardPose * input,
  aruco_opencv_msgs__msg__BoardPose * output)
{
  if (!input || !output) {
    return false;
  }
  // board_name
  if (!rosidl_runtime_c__String__copy(
      &(input->board_name), &(output->board_name)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

aruco_opencv_msgs__msg__BoardPose *
aruco_opencv_msgs__msg__BoardPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_opencv_msgs__msg__BoardPose * msg = (aruco_opencv_msgs__msg__BoardPose *)allocator.allocate(sizeof(aruco_opencv_msgs__msg__BoardPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aruco_opencv_msgs__msg__BoardPose));
  bool success = aruco_opencv_msgs__msg__BoardPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aruco_opencv_msgs__msg__BoardPose__destroy(aruco_opencv_msgs__msg__BoardPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aruco_opencv_msgs__msg__BoardPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aruco_opencv_msgs__msg__BoardPose__Sequence__init(aruco_opencv_msgs__msg__BoardPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_opencv_msgs__msg__BoardPose * data = NULL;

  if (size) {
    data = (aruco_opencv_msgs__msg__BoardPose *)allocator.zero_allocate(size, sizeof(aruco_opencv_msgs__msg__BoardPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aruco_opencv_msgs__msg__BoardPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aruco_opencv_msgs__msg__BoardPose__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aruco_opencv_msgs__msg__BoardPose__Sequence__fini(aruco_opencv_msgs__msg__BoardPose__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aruco_opencv_msgs__msg__BoardPose__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aruco_opencv_msgs__msg__BoardPose__Sequence *
aruco_opencv_msgs__msg__BoardPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_opencv_msgs__msg__BoardPose__Sequence * array = (aruco_opencv_msgs__msg__BoardPose__Sequence *)allocator.allocate(sizeof(aruco_opencv_msgs__msg__BoardPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aruco_opencv_msgs__msg__BoardPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aruco_opencv_msgs__msg__BoardPose__Sequence__destroy(aruco_opencv_msgs__msg__BoardPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aruco_opencv_msgs__msg__BoardPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aruco_opencv_msgs__msg__BoardPose__Sequence__are_equal(const aruco_opencv_msgs__msg__BoardPose__Sequence * lhs, const aruco_opencv_msgs__msg__BoardPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aruco_opencv_msgs__msg__BoardPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aruco_opencv_msgs__msg__BoardPose__Sequence__copy(
  const aruco_opencv_msgs__msg__BoardPose__Sequence * input,
  aruco_opencv_msgs__msg__BoardPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aruco_opencv_msgs__msg__BoardPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aruco_opencv_msgs__msg__BoardPose * data =
      (aruco_opencv_msgs__msg__BoardPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aruco_opencv_msgs__msg__BoardPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aruco_opencv_msgs__msg__BoardPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aruco_opencv_msgs__msg__BoardPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
