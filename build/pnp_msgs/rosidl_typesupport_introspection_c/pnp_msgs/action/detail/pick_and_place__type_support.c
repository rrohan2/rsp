// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pnp_msgs:action/PickAndPlace.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pnp_msgs/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
#include "pnp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pnp_msgs/action/detail/pick_and_place__functions.h"
#include "pnp_msgs/action/detail/pick_and_place__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pnp_msgs__action__PickAndPlace_Goal__init(message_memory);
}

void PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_fini_function(void * message_memory)
{
  pnp_msgs__action__PickAndPlace_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_message_member_array[2] = {
  {
    "pick_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(pnp_msgs__action__PickAndPlace_Goal, pick_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "place_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(pnp_msgs__action__PickAndPlace_Goal, place_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_message_members = {
  "pnp_msgs__action",  // message namespace
  "PickAndPlace_Goal",  // message name
  2,  // number of fields
  sizeof(pnp_msgs__action__PickAndPlace_Goal),
  PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_message_member_array,  // message members
  PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_message_type_support_handle = {
  0,
  &PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pnp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_Goal)() {
  if (!PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_message_type_support_handle.typesupport_identifier) {
    PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PickAndPlace_Goal__rosidl_typesupport_introspection_c__PickAndPlace_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pnp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__functions.h"
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pnp_msgs__action__PickAndPlace_Result__init(message_memory);
}

void PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_fini_function(void * message_memory)
{
  pnp_msgs__action__PickAndPlace_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pnp_msgs__action__PickAndPlace_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_message_members = {
  "pnp_msgs__action",  // message namespace
  "PickAndPlace_Result",  // message name
  1,  // number of fields
  sizeof(pnp_msgs__action__PickAndPlace_Result),
  PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_message_member_array,  // message members
  PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_message_type_support_handle = {
  0,
  &PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pnp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_Result)() {
  if (!PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_message_type_support_handle.typesupport_identifier) {
    PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PickAndPlace_Result__rosidl_typesupport_introspection_c__PickAndPlace_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pnp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__functions.h"
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__struct.h"


// Include directives for member types
// Member `robot_gripper_position`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pnp_msgs__action__PickAndPlace_Feedback__init(message_memory);
}

void PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_fini_function(void * message_memory)
{
  pnp_msgs__action__PickAndPlace_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_member_array[1] = {
  {
    "robot_gripper_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pnp_msgs__action__PickAndPlace_Feedback, robot_gripper_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_members = {
  "pnp_msgs__action",  // message namespace
  "PickAndPlace_Feedback",  // message name
  1,  // number of fields
  sizeof(pnp_msgs__action__PickAndPlace_Feedback),
  PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_member_array,  // message members
  PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_type_support_handle = {
  0,
  &PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pnp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_Feedback)() {
  if (!PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_type_support_handle.typesupport_identifier) {
    PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PickAndPlace_Feedback__rosidl_typesupport_introspection_c__PickAndPlace_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pnp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__functions.h"
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "pnp_msgs/action/pick_and_place.h"
// Member `goal`
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pnp_msgs__action__PickAndPlace_SendGoal_Request__init(message_memory);
}

void PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_fini_function(void * message_memory)
{
  pnp_msgs__action__PickAndPlace_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pnp_msgs__action__PickAndPlace_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pnp_msgs__action__PickAndPlace_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_members = {
  "pnp_msgs__action",  // message namespace
  "PickAndPlace_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(pnp_msgs__action__PickAndPlace_SendGoal_Request),
  PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_member_array,  // message members
  PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_type_support_handle = {
  0,
  &PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pnp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_SendGoal_Request)() {
  PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_Goal)();
  if (!PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PickAndPlace_SendGoal_Request__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pnp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__functions.h"
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pnp_msgs__action__PickAndPlace_SendGoal_Response__init(message_memory);
}

void PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_fini_function(void * message_memory)
{
  pnp_msgs__action__PickAndPlace_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pnp_msgs__action__PickAndPlace_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pnp_msgs__action__PickAndPlace_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_members = {
  "pnp_msgs__action",  // message namespace
  "PickAndPlace_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(pnp_msgs__action__PickAndPlace_SendGoal_Response),
  PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_member_array,  // message members
  PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_type_support_handle = {
  0,
  &PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pnp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_SendGoal_Response)() {
  PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PickAndPlace_SendGoal_Response__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pnp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pnp_msgs__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_service_members = {
  "pnp_msgs__action",  // service namespace
  "PickAndPlace_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // pnp_msgs__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // pnp_msgs__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t pnp_msgs__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_service_type_support_handle = {
  0,
  &pnp_msgs__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pnp_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_SendGoal)() {
  if (!pnp_msgs__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_service_type_support_handle.typesupport_identifier) {
    pnp_msgs__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pnp_msgs__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_SendGoal_Response)()->data;
  }

  return &pnp_msgs__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pnp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__functions.h"
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pnp_msgs__action__PickAndPlace_GetResult_Request__init(message_memory);
}

void PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_fini_function(void * message_memory)
{
  pnp_msgs__action__PickAndPlace_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pnp_msgs__action__PickAndPlace_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_members = {
  "pnp_msgs__action",  // message namespace
  "PickAndPlace_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(pnp_msgs__action__PickAndPlace_GetResult_Request),
  PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_member_array,  // message members
  PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_type_support_handle = {
  0,
  &PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pnp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_GetResult_Request)() {
  PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PickAndPlace_GetResult_Request__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pnp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__functions.h"
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "pnp_msgs/action/pick_and_place.h"
// Member `result`
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pnp_msgs__action__PickAndPlace_GetResult_Response__init(message_memory);
}

void PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_fini_function(void * message_memory)
{
  pnp_msgs__action__PickAndPlace_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pnp_msgs__action__PickAndPlace_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pnp_msgs__action__PickAndPlace_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_members = {
  "pnp_msgs__action",  // message namespace
  "PickAndPlace_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(pnp_msgs__action__PickAndPlace_GetResult_Response),
  PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_member_array,  // message members
  PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_type_support_handle = {
  0,
  &PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pnp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_GetResult_Response)() {
  PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_Result)();
  if (!PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PickAndPlace_GetResult_Response__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pnp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pnp_msgs__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_service_members = {
  "pnp_msgs__action",  // service namespace
  "PickAndPlace_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // pnp_msgs__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // pnp_msgs__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t pnp_msgs__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_service_type_support_handle = {
  0,
  &pnp_msgs__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pnp_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_GetResult)() {
  if (!pnp_msgs__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_service_type_support_handle.typesupport_identifier) {
    pnp_msgs__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pnp_msgs__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_GetResult_Response)()->data;
  }

  return &pnp_msgs__action__detail__pick_and_place__rosidl_typesupport_introspection_c__PickAndPlace_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pnp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__functions.h"
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "pnp_msgs/action/pick_and_place.h"
// Member `feedback`
// already included above
// #include "pnp_msgs/action/detail/pick_and_place__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pnp_msgs__action__PickAndPlace_FeedbackMessage__init(message_memory);
}

void PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_fini_function(void * message_memory)
{
  pnp_msgs__action__PickAndPlace_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pnp_msgs__action__PickAndPlace_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pnp_msgs__action__PickAndPlace_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_members = {
  "pnp_msgs__action",  // message namespace
  "PickAndPlace_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(pnp_msgs__action__PickAndPlace_FeedbackMessage),
  PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_member_array,  // message members
  PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_type_support_handle = {
  0,
  &PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pnp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_FeedbackMessage)() {
  PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pnp_msgs, action, PickAndPlace_Feedback)();
  if (!PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PickAndPlace_FeedbackMessage__rosidl_typesupport_introspection_c__PickAndPlace_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
