// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pnp_msgs:action/Gripper.idl
// generated code does not contain a copyright notice
#include "pnp_msgs/action/detail/gripper__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
pnp_msgs__action__Gripper_Goal__init(pnp_msgs__action__Gripper_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // gripper_position
  return true;
}

void
pnp_msgs__action__Gripper_Goal__fini(pnp_msgs__action__Gripper_Goal * msg)
{
  if (!msg) {
    return;
  }
  // gripper_position
}

bool
pnp_msgs__action__Gripper_Goal__are_equal(const pnp_msgs__action__Gripper_Goal * lhs, const pnp_msgs__action__Gripper_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gripper_position
  if (lhs->gripper_position != rhs->gripper_position) {
    return false;
  }
  return true;
}

bool
pnp_msgs__action__Gripper_Goal__copy(
  const pnp_msgs__action__Gripper_Goal * input,
  pnp_msgs__action__Gripper_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // gripper_position
  output->gripper_position = input->gripper_position;
  return true;
}

pnp_msgs__action__Gripper_Goal *
pnp_msgs__action__Gripper_Goal__create()
{
  pnp_msgs__action__Gripper_Goal * msg = (pnp_msgs__action__Gripper_Goal *)malloc(sizeof(pnp_msgs__action__Gripper_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pnp_msgs__action__Gripper_Goal));
  bool success = pnp_msgs__action__Gripper_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pnp_msgs__action__Gripper_Goal__destroy(pnp_msgs__action__Gripper_Goal * msg)
{
  if (msg) {
    pnp_msgs__action__Gripper_Goal__fini(msg);
  }
  free(msg);
}


bool
pnp_msgs__action__Gripper_Goal__Sequence__init(pnp_msgs__action__Gripper_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pnp_msgs__action__Gripper_Goal * data = NULL;
  if (size) {
    data = (pnp_msgs__action__Gripper_Goal *)calloc(size, sizeof(pnp_msgs__action__Gripper_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pnp_msgs__action__Gripper_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pnp_msgs__action__Gripper_Goal__fini(&data[i - 1]);
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
pnp_msgs__action__Gripper_Goal__Sequence__fini(pnp_msgs__action__Gripper_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pnp_msgs__action__Gripper_Goal__fini(&array->data[i]);
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

pnp_msgs__action__Gripper_Goal__Sequence *
pnp_msgs__action__Gripper_Goal__Sequence__create(size_t size)
{
  pnp_msgs__action__Gripper_Goal__Sequence * array = (pnp_msgs__action__Gripper_Goal__Sequence *)malloc(sizeof(pnp_msgs__action__Gripper_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pnp_msgs__action__Gripper_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pnp_msgs__action__Gripper_Goal__Sequence__destroy(pnp_msgs__action__Gripper_Goal__Sequence * array)
{
  if (array) {
    pnp_msgs__action__Gripper_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
pnp_msgs__action__Gripper_Goal__Sequence__are_equal(const pnp_msgs__action__Gripper_Goal__Sequence * lhs, const pnp_msgs__action__Gripper_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pnp_msgs__action__Gripper_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pnp_msgs__action__Gripper_Goal__Sequence__copy(
  const pnp_msgs__action__Gripper_Goal__Sequence * input,
  pnp_msgs__action__Gripper_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pnp_msgs__action__Gripper_Goal);
    pnp_msgs__action__Gripper_Goal * data =
      (pnp_msgs__action__Gripper_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pnp_msgs__action__Gripper_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pnp_msgs__action__Gripper_Goal__fini(&data[i]);
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
    if (!pnp_msgs__action__Gripper_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
pnp_msgs__action__Gripper_Result__init(pnp_msgs__action__Gripper_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
pnp_msgs__action__Gripper_Result__fini(pnp_msgs__action__Gripper_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
pnp_msgs__action__Gripper_Result__are_equal(const pnp_msgs__action__Gripper_Result * lhs, const pnp_msgs__action__Gripper_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
pnp_msgs__action__Gripper_Result__copy(
  const pnp_msgs__action__Gripper_Result * input,
  pnp_msgs__action__Gripper_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

pnp_msgs__action__Gripper_Result *
pnp_msgs__action__Gripper_Result__create()
{
  pnp_msgs__action__Gripper_Result * msg = (pnp_msgs__action__Gripper_Result *)malloc(sizeof(pnp_msgs__action__Gripper_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pnp_msgs__action__Gripper_Result));
  bool success = pnp_msgs__action__Gripper_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pnp_msgs__action__Gripper_Result__destroy(pnp_msgs__action__Gripper_Result * msg)
{
  if (msg) {
    pnp_msgs__action__Gripper_Result__fini(msg);
  }
  free(msg);
}


bool
pnp_msgs__action__Gripper_Result__Sequence__init(pnp_msgs__action__Gripper_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pnp_msgs__action__Gripper_Result * data = NULL;
  if (size) {
    data = (pnp_msgs__action__Gripper_Result *)calloc(size, sizeof(pnp_msgs__action__Gripper_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pnp_msgs__action__Gripper_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pnp_msgs__action__Gripper_Result__fini(&data[i - 1]);
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
pnp_msgs__action__Gripper_Result__Sequence__fini(pnp_msgs__action__Gripper_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pnp_msgs__action__Gripper_Result__fini(&array->data[i]);
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

pnp_msgs__action__Gripper_Result__Sequence *
pnp_msgs__action__Gripper_Result__Sequence__create(size_t size)
{
  pnp_msgs__action__Gripper_Result__Sequence * array = (pnp_msgs__action__Gripper_Result__Sequence *)malloc(sizeof(pnp_msgs__action__Gripper_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pnp_msgs__action__Gripper_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pnp_msgs__action__Gripper_Result__Sequence__destroy(pnp_msgs__action__Gripper_Result__Sequence * array)
{
  if (array) {
    pnp_msgs__action__Gripper_Result__Sequence__fini(array);
  }
  free(array);
}

bool
pnp_msgs__action__Gripper_Result__Sequence__are_equal(const pnp_msgs__action__Gripper_Result__Sequence * lhs, const pnp_msgs__action__Gripper_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pnp_msgs__action__Gripper_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pnp_msgs__action__Gripper_Result__Sequence__copy(
  const pnp_msgs__action__Gripper_Result__Sequence * input,
  pnp_msgs__action__Gripper_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pnp_msgs__action__Gripper_Result);
    pnp_msgs__action__Gripper_Result * data =
      (pnp_msgs__action__Gripper_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pnp_msgs__action__Gripper_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pnp_msgs__action__Gripper_Result__fini(&data[i]);
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
    if (!pnp_msgs__action__Gripper_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
pnp_msgs__action__Gripper_Feedback__init(pnp_msgs__action__Gripper_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // gripper_progress
  return true;
}

void
pnp_msgs__action__Gripper_Feedback__fini(pnp_msgs__action__Gripper_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // gripper_progress
}

bool
pnp_msgs__action__Gripper_Feedback__are_equal(const pnp_msgs__action__Gripper_Feedback * lhs, const pnp_msgs__action__Gripper_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gripper_progress
  if (lhs->gripper_progress != rhs->gripper_progress) {
    return false;
  }
  return true;
}

bool
pnp_msgs__action__Gripper_Feedback__copy(
  const pnp_msgs__action__Gripper_Feedback * input,
  pnp_msgs__action__Gripper_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // gripper_progress
  output->gripper_progress = input->gripper_progress;
  return true;
}

pnp_msgs__action__Gripper_Feedback *
pnp_msgs__action__Gripper_Feedback__create()
{
  pnp_msgs__action__Gripper_Feedback * msg = (pnp_msgs__action__Gripper_Feedback *)malloc(sizeof(pnp_msgs__action__Gripper_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pnp_msgs__action__Gripper_Feedback));
  bool success = pnp_msgs__action__Gripper_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pnp_msgs__action__Gripper_Feedback__destroy(pnp_msgs__action__Gripper_Feedback * msg)
{
  if (msg) {
    pnp_msgs__action__Gripper_Feedback__fini(msg);
  }
  free(msg);
}


bool
pnp_msgs__action__Gripper_Feedback__Sequence__init(pnp_msgs__action__Gripper_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pnp_msgs__action__Gripper_Feedback * data = NULL;
  if (size) {
    data = (pnp_msgs__action__Gripper_Feedback *)calloc(size, sizeof(pnp_msgs__action__Gripper_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pnp_msgs__action__Gripper_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pnp_msgs__action__Gripper_Feedback__fini(&data[i - 1]);
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
pnp_msgs__action__Gripper_Feedback__Sequence__fini(pnp_msgs__action__Gripper_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pnp_msgs__action__Gripper_Feedback__fini(&array->data[i]);
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

pnp_msgs__action__Gripper_Feedback__Sequence *
pnp_msgs__action__Gripper_Feedback__Sequence__create(size_t size)
{
  pnp_msgs__action__Gripper_Feedback__Sequence * array = (pnp_msgs__action__Gripper_Feedback__Sequence *)malloc(sizeof(pnp_msgs__action__Gripper_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pnp_msgs__action__Gripper_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pnp_msgs__action__Gripper_Feedback__Sequence__destroy(pnp_msgs__action__Gripper_Feedback__Sequence * array)
{
  if (array) {
    pnp_msgs__action__Gripper_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
pnp_msgs__action__Gripper_Feedback__Sequence__are_equal(const pnp_msgs__action__Gripper_Feedback__Sequence * lhs, const pnp_msgs__action__Gripper_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pnp_msgs__action__Gripper_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pnp_msgs__action__Gripper_Feedback__Sequence__copy(
  const pnp_msgs__action__Gripper_Feedback__Sequence * input,
  pnp_msgs__action__Gripper_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pnp_msgs__action__Gripper_Feedback);
    pnp_msgs__action__Gripper_Feedback * data =
      (pnp_msgs__action__Gripper_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pnp_msgs__action__Gripper_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pnp_msgs__action__Gripper_Feedback__fini(&data[i]);
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
    if (!pnp_msgs__action__Gripper_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "pnp_msgs/action/detail/gripper__functions.h"

bool
pnp_msgs__action__Gripper_SendGoal_Request__init(pnp_msgs__action__Gripper_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pnp_msgs__action__Gripper_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!pnp_msgs__action__Gripper_Goal__init(&msg->goal)) {
    pnp_msgs__action__Gripper_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
pnp_msgs__action__Gripper_SendGoal_Request__fini(pnp_msgs__action__Gripper_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  pnp_msgs__action__Gripper_Goal__fini(&msg->goal);
}

bool
pnp_msgs__action__Gripper_SendGoal_Request__are_equal(const pnp_msgs__action__Gripper_SendGoal_Request * lhs, const pnp_msgs__action__Gripper_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!pnp_msgs__action__Gripper_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
pnp_msgs__action__Gripper_SendGoal_Request__copy(
  const pnp_msgs__action__Gripper_SendGoal_Request * input,
  pnp_msgs__action__Gripper_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!pnp_msgs__action__Gripper_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

pnp_msgs__action__Gripper_SendGoal_Request *
pnp_msgs__action__Gripper_SendGoal_Request__create()
{
  pnp_msgs__action__Gripper_SendGoal_Request * msg = (pnp_msgs__action__Gripper_SendGoal_Request *)malloc(sizeof(pnp_msgs__action__Gripper_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pnp_msgs__action__Gripper_SendGoal_Request));
  bool success = pnp_msgs__action__Gripper_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pnp_msgs__action__Gripper_SendGoal_Request__destroy(pnp_msgs__action__Gripper_SendGoal_Request * msg)
{
  if (msg) {
    pnp_msgs__action__Gripper_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
pnp_msgs__action__Gripper_SendGoal_Request__Sequence__init(pnp_msgs__action__Gripper_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pnp_msgs__action__Gripper_SendGoal_Request * data = NULL;
  if (size) {
    data = (pnp_msgs__action__Gripper_SendGoal_Request *)calloc(size, sizeof(pnp_msgs__action__Gripper_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pnp_msgs__action__Gripper_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pnp_msgs__action__Gripper_SendGoal_Request__fini(&data[i - 1]);
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
pnp_msgs__action__Gripper_SendGoal_Request__Sequence__fini(pnp_msgs__action__Gripper_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pnp_msgs__action__Gripper_SendGoal_Request__fini(&array->data[i]);
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

pnp_msgs__action__Gripper_SendGoal_Request__Sequence *
pnp_msgs__action__Gripper_SendGoal_Request__Sequence__create(size_t size)
{
  pnp_msgs__action__Gripper_SendGoal_Request__Sequence * array = (pnp_msgs__action__Gripper_SendGoal_Request__Sequence *)malloc(sizeof(pnp_msgs__action__Gripper_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pnp_msgs__action__Gripper_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pnp_msgs__action__Gripper_SendGoal_Request__Sequence__destroy(pnp_msgs__action__Gripper_SendGoal_Request__Sequence * array)
{
  if (array) {
    pnp_msgs__action__Gripper_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
pnp_msgs__action__Gripper_SendGoal_Request__Sequence__are_equal(const pnp_msgs__action__Gripper_SendGoal_Request__Sequence * lhs, const pnp_msgs__action__Gripper_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pnp_msgs__action__Gripper_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pnp_msgs__action__Gripper_SendGoal_Request__Sequence__copy(
  const pnp_msgs__action__Gripper_SendGoal_Request__Sequence * input,
  pnp_msgs__action__Gripper_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pnp_msgs__action__Gripper_SendGoal_Request);
    pnp_msgs__action__Gripper_SendGoal_Request * data =
      (pnp_msgs__action__Gripper_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pnp_msgs__action__Gripper_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pnp_msgs__action__Gripper_SendGoal_Request__fini(&data[i]);
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
    if (!pnp_msgs__action__Gripper_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
pnp_msgs__action__Gripper_SendGoal_Response__init(pnp_msgs__action__Gripper_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    pnp_msgs__action__Gripper_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
pnp_msgs__action__Gripper_SendGoal_Response__fini(pnp_msgs__action__Gripper_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
pnp_msgs__action__Gripper_SendGoal_Response__are_equal(const pnp_msgs__action__Gripper_SendGoal_Response * lhs, const pnp_msgs__action__Gripper_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
pnp_msgs__action__Gripper_SendGoal_Response__copy(
  const pnp_msgs__action__Gripper_SendGoal_Response * input,
  pnp_msgs__action__Gripper_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

pnp_msgs__action__Gripper_SendGoal_Response *
pnp_msgs__action__Gripper_SendGoal_Response__create()
{
  pnp_msgs__action__Gripper_SendGoal_Response * msg = (pnp_msgs__action__Gripper_SendGoal_Response *)malloc(sizeof(pnp_msgs__action__Gripper_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pnp_msgs__action__Gripper_SendGoal_Response));
  bool success = pnp_msgs__action__Gripper_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pnp_msgs__action__Gripper_SendGoal_Response__destroy(pnp_msgs__action__Gripper_SendGoal_Response * msg)
{
  if (msg) {
    pnp_msgs__action__Gripper_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
pnp_msgs__action__Gripper_SendGoal_Response__Sequence__init(pnp_msgs__action__Gripper_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pnp_msgs__action__Gripper_SendGoal_Response * data = NULL;
  if (size) {
    data = (pnp_msgs__action__Gripper_SendGoal_Response *)calloc(size, sizeof(pnp_msgs__action__Gripper_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pnp_msgs__action__Gripper_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pnp_msgs__action__Gripper_SendGoal_Response__fini(&data[i - 1]);
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
pnp_msgs__action__Gripper_SendGoal_Response__Sequence__fini(pnp_msgs__action__Gripper_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pnp_msgs__action__Gripper_SendGoal_Response__fini(&array->data[i]);
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

pnp_msgs__action__Gripper_SendGoal_Response__Sequence *
pnp_msgs__action__Gripper_SendGoal_Response__Sequence__create(size_t size)
{
  pnp_msgs__action__Gripper_SendGoal_Response__Sequence * array = (pnp_msgs__action__Gripper_SendGoal_Response__Sequence *)malloc(sizeof(pnp_msgs__action__Gripper_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pnp_msgs__action__Gripper_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pnp_msgs__action__Gripper_SendGoal_Response__Sequence__destroy(pnp_msgs__action__Gripper_SendGoal_Response__Sequence * array)
{
  if (array) {
    pnp_msgs__action__Gripper_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
pnp_msgs__action__Gripper_SendGoal_Response__Sequence__are_equal(const pnp_msgs__action__Gripper_SendGoal_Response__Sequence * lhs, const pnp_msgs__action__Gripper_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pnp_msgs__action__Gripper_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pnp_msgs__action__Gripper_SendGoal_Response__Sequence__copy(
  const pnp_msgs__action__Gripper_SendGoal_Response__Sequence * input,
  pnp_msgs__action__Gripper_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pnp_msgs__action__Gripper_SendGoal_Response);
    pnp_msgs__action__Gripper_SendGoal_Response * data =
      (pnp_msgs__action__Gripper_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pnp_msgs__action__Gripper_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pnp_msgs__action__Gripper_SendGoal_Response__fini(&data[i]);
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
    if (!pnp_msgs__action__Gripper_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
pnp_msgs__action__Gripper_GetResult_Request__init(pnp_msgs__action__Gripper_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pnp_msgs__action__Gripper_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
pnp_msgs__action__Gripper_GetResult_Request__fini(pnp_msgs__action__Gripper_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
pnp_msgs__action__Gripper_GetResult_Request__are_equal(const pnp_msgs__action__Gripper_GetResult_Request * lhs, const pnp_msgs__action__Gripper_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
pnp_msgs__action__Gripper_GetResult_Request__copy(
  const pnp_msgs__action__Gripper_GetResult_Request * input,
  pnp_msgs__action__Gripper_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

pnp_msgs__action__Gripper_GetResult_Request *
pnp_msgs__action__Gripper_GetResult_Request__create()
{
  pnp_msgs__action__Gripper_GetResult_Request * msg = (pnp_msgs__action__Gripper_GetResult_Request *)malloc(sizeof(pnp_msgs__action__Gripper_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pnp_msgs__action__Gripper_GetResult_Request));
  bool success = pnp_msgs__action__Gripper_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pnp_msgs__action__Gripper_GetResult_Request__destroy(pnp_msgs__action__Gripper_GetResult_Request * msg)
{
  if (msg) {
    pnp_msgs__action__Gripper_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
pnp_msgs__action__Gripper_GetResult_Request__Sequence__init(pnp_msgs__action__Gripper_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pnp_msgs__action__Gripper_GetResult_Request * data = NULL;
  if (size) {
    data = (pnp_msgs__action__Gripper_GetResult_Request *)calloc(size, sizeof(pnp_msgs__action__Gripper_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pnp_msgs__action__Gripper_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pnp_msgs__action__Gripper_GetResult_Request__fini(&data[i - 1]);
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
pnp_msgs__action__Gripper_GetResult_Request__Sequence__fini(pnp_msgs__action__Gripper_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pnp_msgs__action__Gripper_GetResult_Request__fini(&array->data[i]);
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

pnp_msgs__action__Gripper_GetResult_Request__Sequence *
pnp_msgs__action__Gripper_GetResult_Request__Sequence__create(size_t size)
{
  pnp_msgs__action__Gripper_GetResult_Request__Sequence * array = (pnp_msgs__action__Gripper_GetResult_Request__Sequence *)malloc(sizeof(pnp_msgs__action__Gripper_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pnp_msgs__action__Gripper_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pnp_msgs__action__Gripper_GetResult_Request__Sequence__destroy(pnp_msgs__action__Gripper_GetResult_Request__Sequence * array)
{
  if (array) {
    pnp_msgs__action__Gripper_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
pnp_msgs__action__Gripper_GetResult_Request__Sequence__are_equal(const pnp_msgs__action__Gripper_GetResult_Request__Sequence * lhs, const pnp_msgs__action__Gripper_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pnp_msgs__action__Gripper_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pnp_msgs__action__Gripper_GetResult_Request__Sequence__copy(
  const pnp_msgs__action__Gripper_GetResult_Request__Sequence * input,
  pnp_msgs__action__Gripper_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pnp_msgs__action__Gripper_GetResult_Request);
    pnp_msgs__action__Gripper_GetResult_Request * data =
      (pnp_msgs__action__Gripper_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pnp_msgs__action__Gripper_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pnp_msgs__action__Gripper_GetResult_Request__fini(&data[i]);
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
    if (!pnp_msgs__action__Gripper_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "pnp_msgs/action/detail/gripper__functions.h"

bool
pnp_msgs__action__Gripper_GetResult_Response__init(pnp_msgs__action__Gripper_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!pnp_msgs__action__Gripper_Result__init(&msg->result)) {
    pnp_msgs__action__Gripper_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
pnp_msgs__action__Gripper_GetResult_Response__fini(pnp_msgs__action__Gripper_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  pnp_msgs__action__Gripper_Result__fini(&msg->result);
}

bool
pnp_msgs__action__Gripper_GetResult_Response__are_equal(const pnp_msgs__action__Gripper_GetResult_Response * lhs, const pnp_msgs__action__Gripper_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!pnp_msgs__action__Gripper_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
pnp_msgs__action__Gripper_GetResult_Response__copy(
  const pnp_msgs__action__Gripper_GetResult_Response * input,
  pnp_msgs__action__Gripper_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!pnp_msgs__action__Gripper_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

pnp_msgs__action__Gripper_GetResult_Response *
pnp_msgs__action__Gripper_GetResult_Response__create()
{
  pnp_msgs__action__Gripper_GetResult_Response * msg = (pnp_msgs__action__Gripper_GetResult_Response *)malloc(sizeof(pnp_msgs__action__Gripper_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pnp_msgs__action__Gripper_GetResult_Response));
  bool success = pnp_msgs__action__Gripper_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pnp_msgs__action__Gripper_GetResult_Response__destroy(pnp_msgs__action__Gripper_GetResult_Response * msg)
{
  if (msg) {
    pnp_msgs__action__Gripper_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
pnp_msgs__action__Gripper_GetResult_Response__Sequence__init(pnp_msgs__action__Gripper_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pnp_msgs__action__Gripper_GetResult_Response * data = NULL;
  if (size) {
    data = (pnp_msgs__action__Gripper_GetResult_Response *)calloc(size, sizeof(pnp_msgs__action__Gripper_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pnp_msgs__action__Gripper_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pnp_msgs__action__Gripper_GetResult_Response__fini(&data[i - 1]);
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
pnp_msgs__action__Gripper_GetResult_Response__Sequence__fini(pnp_msgs__action__Gripper_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pnp_msgs__action__Gripper_GetResult_Response__fini(&array->data[i]);
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

pnp_msgs__action__Gripper_GetResult_Response__Sequence *
pnp_msgs__action__Gripper_GetResult_Response__Sequence__create(size_t size)
{
  pnp_msgs__action__Gripper_GetResult_Response__Sequence * array = (pnp_msgs__action__Gripper_GetResult_Response__Sequence *)malloc(sizeof(pnp_msgs__action__Gripper_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pnp_msgs__action__Gripper_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pnp_msgs__action__Gripper_GetResult_Response__Sequence__destroy(pnp_msgs__action__Gripper_GetResult_Response__Sequence * array)
{
  if (array) {
    pnp_msgs__action__Gripper_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
pnp_msgs__action__Gripper_GetResult_Response__Sequence__are_equal(const pnp_msgs__action__Gripper_GetResult_Response__Sequence * lhs, const pnp_msgs__action__Gripper_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pnp_msgs__action__Gripper_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pnp_msgs__action__Gripper_GetResult_Response__Sequence__copy(
  const pnp_msgs__action__Gripper_GetResult_Response__Sequence * input,
  pnp_msgs__action__Gripper_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pnp_msgs__action__Gripper_GetResult_Response);
    pnp_msgs__action__Gripper_GetResult_Response * data =
      (pnp_msgs__action__Gripper_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pnp_msgs__action__Gripper_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pnp_msgs__action__Gripper_GetResult_Response__fini(&data[i]);
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
    if (!pnp_msgs__action__Gripper_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "pnp_msgs/action/detail/gripper__functions.h"

bool
pnp_msgs__action__Gripper_FeedbackMessage__init(pnp_msgs__action__Gripper_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pnp_msgs__action__Gripper_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!pnp_msgs__action__Gripper_Feedback__init(&msg->feedback)) {
    pnp_msgs__action__Gripper_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
pnp_msgs__action__Gripper_FeedbackMessage__fini(pnp_msgs__action__Gripper_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  pnp_msgs__action__Gripper_Feedback__fini(&msg->feedback);
}

bool
pnp_msgs__action__Gripper_FeedbackMessage__are_equal(const pnp_msgs__action__Gripper_FeedbackMessage * lhs, const pnp_msgs__action__Gripper_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!pnp_msgs__action__Gripper_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
pnp_msgs__action__Gripper_FeedbackMessage__copy(
  const pnp_msgs__action__Gripper_FeedbackMessage * input,
  pnp_msgs__action__Gripper_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!pnp_msgs__action__Gripper_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

pnp_msgs__action__Gripper_FeedbackMessage *
pnp_msgs__action__Gripper_FeedbackMessage__create()
{
  pnp_msgs__action__Gripper_FeedbackMessage * msg = (pnp_msgs__action__Gripper_FeedbackMessage *)malloc(sizeof(pnp_msgs__action__Gripper_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pnp_msgs__action__Gripper_FeedbackMessage));
  bool success = pnp_msgs__action__Gripper_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pnp_msgs__action__Gripper_FeedbackMessage__destroy(pnp_msgs__action__Gripper_FeedbackMessage * msg)
{
  if (msg) {
    pnp_msgs__action__Gripper_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
pnp_msgs__action__Gripper_FeedbackMessage__Sequence__init(pnp_msgs__action__Gripper_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pnp_msgs__action__Gripper_FeedbackMessage * data = NULL;
  if (size) {
    data = (pnp_msgs__action__Gripper_FeedbackMessage *)calloc(size, sizeof(pnp_msgs__action__Gripper_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pnp_msgs__action__Gripper_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pnp_msgs__action__Gripper_FeedbackMessage__fini(&data[i - 1]);
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
pnp_msgs__action__Gripper_FeedbackMessage__Sequence__fini(pnp_msgs__action__Gripper_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pnp_msgs__action__Gripper_FeedbackMessage__fini(&array->data[i]);
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

pnp_msgs__action__Gripper_FeedbackMessage__Sequence *
pnp_msgs__action__Gripper_FeedbackMessage__Sequence__create(size_t size)
{
  pnp_msgs__action__Gripper_FeedbackMessage__Sequence * array = (pnp_msgs__action__Gripper_FeedbackMessage__Sequence *)malloc(sizeof(pnp_msgs__action__Gripper_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pnp_msgs__action__Gripper_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pnp_msgs__action__Gripper_FeedbackMessage__Sequence__destroy(pnp_msgs__action__Gripper_FeedbackMessage__Sequence * array)
{
  if (array) {
    pnp_msgs__action__Gripper_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
pnp_msgs__action__Gripper_FeedbackMessage__Sequence__are_equal(const pnp_msgs__action__Gripper_FeedbackMessage__Sequence * lhs, const pnp_msgs__action__Gripper_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pnp_msgs__action__Gripper_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pnp_msgs__action__Gripper_FeedbackMessage__Sequence__copy(
  const pnp_msgs__action__Gripper_FeedbackMessage__Sequence * input,
  pnp_msgs__action__Gripper_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pnp_msgs__action__Gripper_FeedbackMessage);
    pnp_msgs__action__Gripper_FeedbackMessage * data =
      (pnp_msgs__action__Gripper_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pnp_msgs__action__Gripper_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pnp_msgs__action__Gripper_FeedbackMessage__fini(&data[i]);
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
    if (!pnp_msgs__action__Gripper_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
