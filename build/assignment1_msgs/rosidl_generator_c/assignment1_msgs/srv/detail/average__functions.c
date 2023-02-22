// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from assignment1_msgs:srv/Average.idl
// generated code does not contain a copyright notice
#include "assignment1_msgs/srv/detail/average__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
assignment1_msgs__srv__Average_Request__init(assignment1_msgs__srv__Average_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  return true;
}

void
assignment1_msgs__srv__Average_Request__fini(assignment1_msgs__srv__Average_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
}

bool
assignment1_msgs__srv__Average_Request__are_equal(const assignment1_msgs__srv__Average_Request * lhs, const assignment1_msgs__srv__Average_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // c
  if (lhs->c != rhs->c) {
    return false;
  }
  return true;
}

bool
assignment1_msgs__srv__Average_Request__copy(
  const assignment1_msgs__srv__Average_Request * input,
  assignment1_msgs__srv__Average_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  // c
  output->c = input->c;
  return true;
}

assignment1_msgs__srv__Average_Request *
assignment1_msgs__srv__Average_Request__create()
{
  assignment1_msgs__srv__Average_Request * msg = (assignment1_msgs__srv__Average_Request *)malloc(sizeof(assignment1_msgs__srv__Average_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assignment1_msgs__srv__Average_Request));
  bool success = assignment1_msgs__srv__Average_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
assignment1_msgs__srv__Average_Request__destroy(assignment1_msgs__srv__Average_Request * msg)
{
  if (msg) {
    assignment1_msgs__srv__Average_Request__fini(msg);
  }
  free(msg);
}


bool
assignment1_msgs__srv__Average_Request__Sequence__init(assignment1_msgs__srv__Average_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  assignment1_msgs__srv__Average_Request * data = NULL;
  if (size) {
    data = (assignment1_msgs__srv__Average_Request *)calloc(size, sizeof(assignment1_msgs__srv__Average_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assignment1_msgs__srv__Average_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assignment1_msgs__srv__Average_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
assignment1_msgs__srv__Average_Request__Sequence__fini(assignment1_msgs__srv__Average_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      assignment1_msgs__srv__Average_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

assignment1_msgs__srv__Average_Request__Sequence *
assignment1_msgs__srv__Average_Request__Sequence__create(size_t size)
{
  assignment1_msgs__srv__Average_Request__Sequence * array = (assignment1_msgs__srv__Average_Request__Sequence *)malloc(sizeof(assignment1_msgs__srv__Average_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = assignment1_msgs__srv__Average_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
assignment1_msgs__srv__Average_Request__Sequence__destroy(assignment1_msgs__srv__Average_Request__Sequence * array)
{
  if (array) {
    assignment1_msgs__srv__Average_Request__Sequence__fini(array);
  }
  free(array);
}

bool
assignment1_msgs__srv__Average_Request__Sequence__are_equal(const assignment1_msgs__srv__Average_Request__Sequence * lhs, const assignment1_msgs__srv__Average_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!assignment1_msgs__srv__Average_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
assignment1_msgs__srv__Average_Request__Sequence__copy(
  const assignment1_msgs__srv__Average_Request__Sequence * input,
  assignment1_msgs__srv__Average_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(assignment1_msgs__srv__Average_Request);
    assignment1_msgs__srv__Average_Request * data =
      (assignment1_msgs__srv__Average_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!assignment1_msgs__srv__Average_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          assignment1_msgs__srv__Average_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!assignment1_msgs__srv__Average_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
assignment1_msgs__srv__Average_Response__init(assignment1_msgs__srv__Average_Response * msg)
{
  if (!msg) {
    return false;
  }
  // average
  return true;
}

void
assignment1_msgs__srv__Average_Response__fini(assignment1_msgs__srv__Average_Response * msg)
{
  if (!msg) {
    return;
  }
  // average
}

bool
assignment1_msgs__srv__Average_Response__are_equal(const assignment1_msgs__srv__Average_Response * lhs, const assignment1_msgs__srv__Average_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // average
  if (lhs->average != rhs->average) {
    return false;
  }
  return true;
}

bool
assignment1_msgs__srv__Average_Response__copy(
  const assignment1_msgs__srv__Average_Response * input,
  assignment1_msgs__srv__Average_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // average
  output->average = input->average;
  return true;
}

assignment1_msgs__srv__Average_Response *
assignment1_msgs__srv__Average_Response__create()
{
  assignment1_msgs__srv__Average_Response * msg = (assignment1_msgs__srv__Average_Response *)malloc(sizeof(assignment1_msgs__srv__Average_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assignment1_msgs__srv__Average_Response));
  bool success = assignment1_msgs__srv__Average_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
assignment1_msgs__srv__Average_Response__destroy(assignment1_msgs__srv__Average_Response * msg)
{
  if (msg) {
    assignment1_msgs__srv__Average_Response__fini(msg);
  }
  free(msg);
}


bool
assignment1_msgs__srv__Average_Response__Sequence__init(assignment1_msgs__srv__Average_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  assignment1_msgs__srv__Average_Response * data = NULL;
  if (size) {
    data = (assignment1_msgs__srv__Average_Response *)calloc(size, sizeof(assignment1_msgs__srv__Average_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assignment1_msgs__srv__Average_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assignment1_msgs__srv__Average_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
assignment1_msgs__srv__Average_Response__Sequence__fini(assignment1_msgs__srv__Average_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      assignment1_msgs__srv__Average_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

assignment1_msgs__srv__Average_Response__Sequence *
assignment1_msgs__srv__Average_Response__Sequence__create(size_t size)
{
  assignment1_msgs__srv__Average_Response__Sequence * array = (assignment1_msgs__srv__Average_Response__Sequence *)malloc(sizeof(assignment1_msgs__srv__Average_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = assignment1_msgs__srv__Average_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
assignment1_msgs__srv__Average_Response__Sequence__destroy(assignment1_msgs__srv__Average_Response__Sequence * array)
{
  if (array) {
    assignment1_msgs__srv__Average_Response__Sequence__fini(array);
  }
  free(array);
}

bool
assignment1_msgs__srv__Average_Response__Sequence__are_equal(const assignment1_msgs__srv__Average_Response__Sequence * lhs, const assignment1_msgs__srv__Average_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!assignment1_msgs__srv__Average_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
assignment1_msgs__srv__Average_Response__Sequence__copy(
  const assignment1_msgs__srv__Average_Response__Sequence * input,
  assignment1_msgs__srv__Average_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(assignment1_msgs__srv__Average_Response);
    assignment1_msgs__srv__Average_Response * data =
      (assignment1_msgs__srv__Average_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!assignment1_msgs__srv__Average_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          assignment1_msgs__srv__Average_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!assignment1_msgs__srv__Average_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
