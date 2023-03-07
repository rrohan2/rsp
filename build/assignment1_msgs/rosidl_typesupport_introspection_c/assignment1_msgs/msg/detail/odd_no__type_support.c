// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from assignment1_msgs:msg/OddNo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "assignment1_msgs/msg/detail/odd_no__rosidl_typesupport_introspection_c.h"
#include "assignment1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "assignment1_msgs/msg/detail/odd_no__functions.h"
#include "assignment1_msgs/msg/detail/odd_no__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void OddNo__rosidl_typesupport_introspection_c__OddNo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  assignment1_msgs__msg__OddNo__init(message_memory);
}

void OddNo__rosidl_typesupport_introspection_c__OddNo_fini_function(void * message_memory)
{
  assignment1_msgs__msg__OddNo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OddNo__rosidl_typesupport_introspection_c__OddNo_message_member_array[1] = {
  {
    "oddnos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assignment1_msgs__msg__OddNo, oddnos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OddNo__rosidl_typesupport_introspection_c__OddNo_message_members = {
  "assignment1_msgs__msg",  // message namespace
  "OddNo",  // message name
  1,  // number of fields
  sizeof(assignment1_msgs__msg__OddNo),
  OddNo__rosidl_typesupport_introspection_c__OddNo_message_member_array,  // message members
  OddNo__rosidl_typesupport_introspection_c__OddNo_init_function,  // function to initialize message memory (memory has to be allocated)
  OddNo__rosidl_typesupport_introspection_c__OddNo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OddNo__rosidl_typesupport_introspection_c__OddNo_message_type_support_handle = {
  0,
  &OddNo__rosidl_typesupport_introspection_c__OddNo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_assignment1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assignment1_msgs, msg, OddNo)() {
  if (!OddNo__rosidl_typesupport_introspection_c__OddNo_message_type_support_handle.typesupport_identifier) {
    OddNo__rosidl_typesupport_introspection_c__OddNo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OddNo__rosidl_typesupport_introspection_c__OddNo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
