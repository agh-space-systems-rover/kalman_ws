// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from spatio_temporal_voxel_layer:srv/SaveGrid.idl
// generated code does not contain a copyright notice
#include "spatio_temporal_voxel_layer/srv/detail/save_grid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `file_name`
#include "rosidl_runtime_c/string_functions.h"

bool
spatio_temporal_voxel_layer__srv__SaveGrid_Request__init(spatio_temporal_voxel_layer__srv__SaveGrid_Request * msg)
{
  if (!msg) {
    return false;
  }
  // file_name
  if (!rosidl_runtime_c__String__init(&msg->file_name)) {
    spatio_temporal_voxel_layer__srv__SaveGrid_Request__fini(msg);
    return false;
  }
  return true;
}

void
spatio_temporal_voxel_layer__srv__SaveGrid_Request__fini(spatio_temporal_voxel_layer__srv__SaveGrid_Request * msg)
{
  if (!msg) {
    return;
  }
  // file_name
  rosidl_runtime_c__String__fini(&msg->file_name);
}

bool
spatio_temporal_voxel_layer__srv__SaveGrid_Request__are_equal(const spatio_temporal_voxel_layer__srv__SaveGrid_Request * lhs, const spatio_temporal_voxel_layer__srv__SaveGrid_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // file_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->file_name), &(rhs->file_name)))
  {
    return false;
  }
  return true;
}

bool
spatio_temporal_voxel_layer__srv__SaveGrid_Request__copy(
  const spatio_temporal_voxel_layer__srv__SaveGrid_Request * input,
  spatio_temporal_voxel_layer__srv__SaveGrid_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // file_name
  if (!rosidl_runtime_c__String__copy(
      &(input->file_name), &(output->file_name)))
  {
    return false;
  }
  return true;
}

spatio_temporal_voxel_layer__srv__SaveGrid_Request *
spatio_temporal_voxel_layer__srv__SaveGrid_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spatio_temporal_voxel_layer__srv__SaveGrid_Request * msg = (spatio_temporal_voxel_layer__srv__SaveGrid_Request *)allocator.allocate(sizeof(spatio_temporal_voxel_layer__srv__SaveGrid_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spatio_temporal_voxel_layer__srv__SaveGrid_Request));
  bool success = spatio_temporal_voxel_layer__srv__SaveGrid_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
spatio_temporal_voxel_layer__srv__SaveGrid_Request__destroy(spatio_temporal_voxel_layer__srv__SaveGrid_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    spatio_temporal_voxel_layer__srv__SaveGrid_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence__init(spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spatio_temporal_voxel_layer__srv__SaveGrid_Request * data = NULL;

  if (size) {
    data = (spatio_temporal_voxel_layer__srv__SaveGrid_Request *)allocator.zero_allocate(size, sizeof(spatio_temporal_voxel_layer__srv__SaveGrid_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spatio_temporal_voxel_layer__srv__SaveGrid_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spatio_temporal_voxel_layer__srv__SaveGrid_Request__fini(&data[i - 1]);
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
spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence__fini(spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence * array)
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
      spatio_temporal_voxel_layer__srv__SaveGrid_Request__fini(&array->data[i]);
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

spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence *
spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence * array = (spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence *)allocator.allocate(sizeof(spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence__destroy(spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence__are_equal(const spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence * lhs, const spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spatio_temporal_voxel_layer__srv__SaveGrid_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence__copy(
  const spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence * input,
  spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spatio_temporal_voxel_layer__srv__SaveGrid_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    spatio_temporal_voxel_layer__srv__SaveGrid_Request * data =
      (spatio_temporal_voxel_layer__srv__SaveGrid_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spatio_temporal_voxel_layer__srv__SaveGrid_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          spatio_temporal_voxel_layer__srv__SaveGrid_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!spatio_temporal_voxel_layer__srv__SaveGrid_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
spatio_temporal_voxel_layer__srv__SaveGrid_Response__init(spatio_temporal_voxel_layer__srv__SaveGrid_Response * msg)
{
  if (!msg) {
    return false;
  }
  // map_size_bytes
  // status
  return true;
}

void
spatio_temporal_voxel_layer__srv__SaveGrid_Response__fini(spatio_temporal_voxel_layer__srv__SaveGrid_Response * msg)
{
  if (!msg) {
    return;
  }
  // map_size_bytes
  // status
}

bool
spatio_temporal_voxel_layer__srv__SaveGrid_Response__are_equal(const spatio_temporal_voxel_layer__srv__SaveGrid_Response * lhs, const spatio_temporal_voxel_layer__srv__SaveGrid_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map_size_bytes
  if (lhs->map_size_bytes != rhs->map_size_bytes) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
spatio_temporal_voxel_layer__srv__SaveGrid_Response__copy(
  const spatio_temporal_voxel_layer__srv__SaveGrid_Response * input,
  spatio_temporal_voxel_layer__srv__SaveGrid_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // map_size_bytes
  output->map_size_bytes = input->map_size_bytes;
  // status
  output->status = input->status;
  return true;
}

spatio_temporal_voxel_layer__srv__SaveGrid_Response *
spatio_temporal_voxel_layer__srv__SaveGrid_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spatio_temporal_voxel_layer__srv__SaveGrid_Response * msg = (spatio_temporal_voxel_layer__srv__SaveGrid_Response *)allocator.allocate(sizeof(spatio_temporal_voxel_layer__srv__SaveGrid_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(spatio_temporal_voxel_layer__srv__SaveGrid_Response));
  bool success = spatio_temporal_voxel_layer__srv__SaveGrid_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
spatio_temporal_voxel_layer__srv__SaveGrid_Response__destroy(spatio_temporal_voxel_layer__srv__SaveGrid_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    spatio_temporal_voxel_layer__srv__SaveGrid_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence__init(spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spatio_temporal_voxel_layer__srv__SaveGrid_Response * data = NULL;

  if (size) {
    data = (spatio_temporal_voxel_layer__srv__SaveGrid_Response *)allocator.zero_allocate(size, sizeof(spatio_temporal_voxel_layer__srv__SaveGrid_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = spatio_temporal_voxel_layer__srv__SaveGrid_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        spatio_temporal_voxel_layer__srv__SaveGrid_Response__fini(&data[i - 1]);
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
spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence__fini(spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence * array)
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
      spatio_temporal_voxel_layer__srv__SaveGrid_Response__fini(&array->data[i]);
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

spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence *
spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence * array = (spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence *)allocator.allocate(sizeof(spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence__destroy(spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence__are_equal(const spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence * lhs, const spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!spatio_temporal_voxel_layer__srv__SaveGrid_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence__copy(
  const spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence * input,
  spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(spatio_temporal_voxel_layer__srv__SaveGrid_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    spatio_temporal_voxel_layer__srv__SaveGrid_Response * data =
      (spatio_temporal_voxel_layer__srv__SaveGrid_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!spatio_temporal_voxel_layer__srv__SaveGrid_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          spatio_temporal_voxel_layer__srv__SaveGrid_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!spatio_temporal_voxel_layer__srv__SaveGrid_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
