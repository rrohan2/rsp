// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pnp_msgs:action/Gripper.idl
// generated code does not contain a copyright notice

#ifndef PNP_MSGS__ACTION__DETAIL__GRIPPER__STRUCT_H_
#define PNP_MSGS__ACTION__DETAIL__GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Gripper in the package pnp_msgs.
typedef struct pnp_msgs__action__Gripper_Goal
{
  uint8_t gripper_position;
} pnp_msgs__action__Gripper_Goal;

// Struct for a sequence of pnp_msgs__action__Gripper_Goal.
typedef struct pnp_msgs__action__Gripper_Goal__Sequence
{
  pnp_msgs__action__Gripper_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pnp_msgs__action__Gripper_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/Gripper in the package pnp_msgs.
typedef struct pnp_msgs__action__Gripper_Result
{
  uint8_t result;
} pnp_msgs__action__Gripper_Result;

// Struct for a sequence of pnp_msgs__action__Gripper_Result.
typedef struct pnp_msgs__action__Gripper_Result__Sequence
{
  pnp_msgs__action__Gripper_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pnp_msgs__action__Gripper_Result__Sequence;


// Constants defined in the message

// Struct defined in action/Gripper in the package pnp_msgs.
typedef struct pnp_msgs__action__Gripper_Feedback
{
  float gripper_progress;
} pnp_msgs__action__Gripper_Feedback;

// Struct for a sequence of pnp_msgs__action__Gripper_Feedback.
typedef struct pnp_msgs__action__Gripper_Feedback__Sequence
{
  pnp_msgs__action__Gripper_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pnp_msgs__action__Gripper_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "pnp_msgs/action/detail/gripper__struct.h"

// Struct defined in action/Gripper in the package pnp_msgs.
typedef struct pnp_msgs__action__Gripper_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  pnp_msgs__action__Gripper_Goal goal;
} pnp_msgs__action__Gripper_SendGoal_Request;

// Struct for a sequence of pnp_msgs__action__Gripper_SendGoal_Request.
typedef struct pnp_msgs__action__Gripper_SendGoal_Request__Sequence
{
  pnp_msgs__action__Gripper_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pnp_msgs__action__Gripper_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Gripper in the package pnp_msgs.
typedef struct pnp_msgs__action__Gripper_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} pnp_msgs__action__Gripper_SendGoal_Response;

// Struct for a sequence of pnp_msgs__action__Gripper_SendGoal_Response.
typedef struct pnp_msgs__action__Gripper_SendGoal_Response__Sequence
{
  pnp_msgs__action__Gripper_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pnp_msgs__action__Gripper_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Gripper in the package pnp_msgs.
typedef struct pnp_msgs__action__Gripper_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} pnp_msgs__action__Gripper_GetResult_Request;

// Struct for a sequence of pnp_msgs__action__Gripper_GetResult_Request.
typedef struct pnp_msgs__action__Gripper_GetResult_Request__Sequence
{
  pnp_msgs__action__Gripper_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pnp_msgs__action__Gripper_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "pnp_msgs/action/detail/gripper__struct.h"

// Struct defined in action/Gripper in the package pnp_msgs.
typedef struct pnp_msgs__action__Gripper_GetResult_Response
{
  int8_t status;
  pnp_msgs__action__Gripper_Result result;
} pnp_msgs__action__Gripper_GetResult_Response;

// Struct for a sequence of pnp_msgs__action__Gripper_GetResult_Response.
typedef struct pnp_msgs__action__Gripper_GetResult_Response__Sequence
{
  pnp_msgs__action__Gripper_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pnp_msgs__action__Gripper_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "pnp_msgs/action/detail/gripper__struct.h"

// Struct defined in action/Gripper in the package pnp_msgs.
typedef struct pnp_msgs__action__Gripper_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  pnp_msgs__action__Gripper_Feedback feedback;
} pnp_msgs__action__Gripper_FeedbackMessage;

// Struct for a sequence of pnp_msgs__action__Gripper_FeedbackMessage.
typedef struct pnp_msgs__action__Gripper_FeedbackMessage__Sequence
{
  pnp_msgs__action__Gripper_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pnp_msgs__action__Gripper_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PNP_MSGS__ACTION__DETAIL__GRIPPER__STRUCT_H_
