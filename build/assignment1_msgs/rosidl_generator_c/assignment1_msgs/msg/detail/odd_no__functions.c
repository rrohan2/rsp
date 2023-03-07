// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from assignment1_msgs:msg/OddNo.idl
// generated code does not contain a copyright notice
#include "assignment1_msgs/msg/detail/odd_no__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
assignment1_msgs__msg__OddNo__init(assignment1_msgs__msg__OddNo * msg)
{
  if (!msg) {
    return false;
  }
  // oddnos
  return true;
}

void
assignment1_msgs__msg__OddNo__fini(assignment1_msgs__msg__OddNo * msg)
{
  if (!msg) {
    return;
  }
  // oddnos
}

bool
assignment1_msgs__msg__OddNo__are_equal(const assignment1_msgs__msg__OddNo * lhs, const assignment1_msgs__msg__OddNo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // oddnos
  if (lhs->oddnos != rhs->oddnos) {
    return false;
  }
  return true;
}

bool
assignment1_msgs__msg__OddNo__copy(
  const assignment1_msgs__msg__OddNo * input,
  assignment1_msgs__msg__OddNo * output)
{
  if (!input || !output) {
    return false;
  }
  // oddnos
  output->oddnos = input->oddnos;
  return true;
}

assignment1_msgs__msg__OddNo *
assignment1_msgs__msg__OddNo__create()
{
  assignment1_msgs__msg__OddNo * msg = (assignment1_msgs__msg__OddNo *)malloc(sizeof(assignment1_msgs__msg__OddNo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(assignment1_msgs__msg__OddNo));
  bool success = assignment1_msgs__msg__OddNo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
assignment1_msgs__msg__OddNo__destroy(assignment1_msgs__msg__OddNo * msg)
{
  if (msg) {
    assignment1_msgs__msg__OddNo__fini(msg);
  }
  free(msg);
}


bool
assignment1_msgs__msg__OddNo__Sequence__init(assignment1_msgs__msg__OddNo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  assignment1_msgs__msg__OddNo * data = NULL;
  if (size) {
    data = (assignment1_msgs__msg__OddNo *)calloc(size, sizeof(assignment1_msgs__msg__OddNo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = assignment1_msgs__msg__OddNo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        assignment1_msgs__msg__OddNo__fini(&data[i - 1]);
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
assignment1_msgs__msg__OddNo__Sequence__fini(assignment1_msgs__msg__OddNo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      assignment1_msgs__msg__OddNo__fini(&array->data[i]);
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

assignment1_msgs__msg__OddNo__Sequence *
assignment1_msgs__msg__OddNo__Sequence__create(size_t size)
{
  assignment1_msgs__msg__OddNo__Sequence * array = (assignment1_msgs__msg__OddNo__Sequence *)malloc(sizeof(assignment1_msgs__msg__OddNo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = assignment1_msgs__msg__OddNo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
assignment1_msgs__msg__OddNo__Sequence__destroy(assignment1_msgs__msg__OddNo__Sequence * array)
{
  if (array) {
    assignment1_msgs__msg__OddNo__Sequence__fini(array);
  }
  free(array);
}

bool
assignment1_msgs__msg__OddNo__Sequence__are_equal(const assignment1_msgs__msg__OddNo__Sequence * lhs, const assignment1_msgs__msg__OddNo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!assignment1_msgs__msg__OddNo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
assignment1_msgs__msg__OddNo__Sequence__copy(
  const assignment1_msgs__msg__OddNo__Sequence * input,
  assignment1_msgs__msg__OddNo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(assignment1_msgs__msg__OddNo);
    assignment1_msgs__msg__OddNo * data =
      (assignment1_msgs__msg__OddNo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!assignment1_msgs__msg__OddNo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          assignment1_msgs__msg__OddNo__fini(&data[i]);
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
    if (!assignment1_msgs__msg__OddNo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
