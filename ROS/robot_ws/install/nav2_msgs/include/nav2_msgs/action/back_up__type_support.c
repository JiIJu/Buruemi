// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav2_msgs:action/BackUp.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav2_msgs/action/back_up__rosidl_typesupport_introspection_c.h"
#include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav2_msgs/action/back_up__struct.h"


// Include directives for member types
// Member `target`
#include "geometry_msgs/msg/point.h"
// Member `target`
#include "geometry_msgs/msg/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember BackUp_Goal__rosidl_typesupport_introspection_c__BackUp_Goal_message_member_array[1] = {
  {
    "target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__BackUp_Goal, target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BackUp_Goal__rosidl_typesupport_introspection_c__BackUp_Goal_message_members = {
  "nav2_msgs__action",  // message namespace
  "BackUp_Goal",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__BackUp_Goal),
  BackUp_Goal__rosidl_typesupport_introspection_c__BackUp_Goal_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BackUp_Goal__rosidl_typesupport_introspection_c__BackUp_Goal_message_type_support_handle = {
  0,
  &BackUp_Goal__rosidl_typesupport_introspection_c__BackUp_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_Goal)() {
  BackUp_Goal__rosidl_typesupport_introspection_c__BackUp_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!BackUp_Goal__rosidl_typesupport_introspection_c__BackUp_Goal_message_type_support_handle.typesupport_identifier) {
    BackUp_Goal__rosidl_typesupport_introspection_c__BackUp_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BackUp_Goal__rosidl_typesupport_introspection_c__BackUp_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/back_up__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/back_up__struct.h"


// Include directives for member types
// Member `result`
#include "std_msgs/msg/empty.h"
// Member `result`
#include "std_msgs/msg/empty__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember BackUp_Result__rosidl_typesupport_introspection_c__BackUp_Result_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__BackUp_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BackUp_Result__rosidl_typesupport_introspection_c__BackUp_Result_message_members = {
  "nav2_msgs__action",  // message namespace
  "BackUp_Result",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__BackUp_Result),
  BackUp_Result__rosidl_typesupport_introspection_c__BackUp_Result_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BackUp_Result__rosidl_typesupport_introspection_c__BackUp_Result_message_type_support_handle = {
  0,
  &BackUp_Result__rosidl_typesupport_introspection_c__BackUp_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_Result)() {
  BackUp_Result__rosidl_typesupport_introspection_c__BackUp_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Empty)();
  if (!BackUp_Result__rosidl_typesupport_introspection_c__BackUp_Result_message_type_support_handle.typesupport_identifier) {
    BackUp_Result__rosidl_typesupport_introspection_c__BackUp_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BackUp_Result__rosidl_typesupport_introspection_c__BackUp_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/back_up__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/back_up__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember BackUp_Feedback__rosidl_typesupport_introspection_c__BackUp_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__BackUp_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BackUp_Feedback__rosidl_typesupport_introspection_c__BackUp_Feedback_message_members = {
  "nav2_msgs__action",  // message namespace
  "BackUp_Feedback",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__BackUp_Feedback),
  BackUp_Feedback__rosidl_typesupport_introspection_c__BackUp_Feedback_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BackUp_Feedback__rosidl_typesupport_introspection_c__BackUp_Feedback_message_type_support_handle = {
  0,
  &BackUp_Feedback__rosidl_typesupport_introspection_c__BackUp_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_Feedback)() {
  if (!BackUp_Feedback__rosidl_typesupport_introspection_c__BackUp_Feedback_message_type_support_handle.typesupport_identifier) {
    BackUp_Feedback__rosidl_typesupport_introspection_c__BackUp_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BackUp_Feedback__rosidl_typesupport_introspection_c__BackUp_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/back_up__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/back_up__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "nav2_msgs/action/back_up.h"
// Member `goal`
// already included above
// #include "nav2_msgs/action/back_up__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember BackUp_SendGoal_Request__rosidl_typesupport_introspection_c__BackUp_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__BackUp_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(nav2_msgs__action__BackUp_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BackUp_SendGoal_Request__rosidl_typesupport_introspection_c__BackUp_SendGoal_Request_message_members = {
  "nav2_msgs__action",  // message namespace
  "BackUp_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__BackUp_SendGoal_Request),
  BackUp_SendGoal_Request__rosidl_typesupport_introspection_c__BackUp_SendGoal_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BackUp_SendGoal_Request__rosidl_typesupport_introspection_c__BackUp_SendGoal_Request_message_type_support_handle = {
  0,
  &BackUp_SendGoal_Request__rosidl_typesupport_introspection_c__BackUp_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_SendGoal_Request)() {
  BackUp_SendGoal_Request__rosidl_typesupport_introspection_c__BackUp_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  BackUp_SendGoal_Request__rosidl_typesupport_introspection_c__BackUp_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_Goal)();
  if (!BackUp_SendGoal_Request__rosidl_typesupport_introspection_c__BackUp_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    BackUp_SendGoal_Request__rosidl_typesupport_introspection_c__BackUp_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BackUp_SendGoal_Request__rosidl_typesupport_introspection_c__BackUp_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/back_up__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/back_up__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember BackUp_SendGoal_Response__rosidl_typesupport_introspection_c__BackUp_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__BackUp_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(nav2_msgs__action__BackUp_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BackUp_SendGoal_Response__rosidl_typesupport_introspection_c__BackUp_SendGoal_Response_message_members = {
  "nav2_msgs__action",  // message namespace
  "BackUp_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__BackUp_SendGoal_Response),
  BackUp_SendGoal_Response__rosidl_typesupport_introspection_c__BackUp_SendGoal_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BackUp_SendGoal_Response__rosidl_typesupport_introspection_c__BackUp_SendGoal_Response_message_type_support_handle = {
  0,
  &BackUp_SendGoal_Response__rosidl_typesupport_introspection_c__BackUp_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_SendGoal_Response)() {
  BackUp_SendGoal_Response__rosidl_typesupport_introspection_c__BackUp_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!BackUp_SendGoal_Response__rosidl_typesupport_introspection_c__BackUp_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    BackUp_SendGoal_Response__rosidl_typesupport_introspection_c__BackUp_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BackUp_SendGoal_Response__rosidl_typesupport_introspection_c__BackUp_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/back_up__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nav2_msgs__action__back_up__rosidl_typesupport_introspection_c__BackUp_SendGoal_service_members = {
  "nav2_msgs__action",  // service namespace
  "BackUp_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nav2_msgs__action__back_up__rosidl_typesupport_introspection_c__BackUp_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // nav2_msgs__action__back_up__rosidl_typesupport_introspection_c__BackUp_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t nav2_msgs__action__back_up__rosidl_typesupport_introspection_c__BackUp_SendGoal_service_type_support_handle = {
  0,
  &nav2_msgs__action__back_up__rosidl_typesupport_introspection_c__BackUp_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_SendGoal)() {
  if (!nav2_msgs__action__back_up__rosidl_typesupport_introspection_c__BackUp_SendGoal_service_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__back_up__rosidl_typesupport_introspection_c__BackUp_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nav2_msgs__action__back_up__rosidl_typesupport_introspection_c__BackUp_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_SendGoal_Response)()->data;
  }

  return &nav2_msgs__action__back_up__rosidl_typesupport_introspection_c__BackUp_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/back_up__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/back_up__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember BackUp_GetResult_Request__rosidl_typesupport_introspection_c__BackUp_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__BackUp_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BackUp_GetResult_Request__rosidl_typesupport_introspection_c__BackUp_GetResult_Request_message_members = {
  "nav2_msgs__action",  // message namespace
  "BackUp_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__BackUp_GetResult_Request),
  BackUp_GetResult_Request__rosidl_typesupport_introspection_c__BackUp_GetResult_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BackUp_GetResult_Request__rosidl_typesupport_introspection_c__BackUp_GetResult_Request_message_type_support_handle = {
  0,
  &BackUp_GetResult_Request__rosidl_typesupport_introspection_c__BackUp_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_GetResult_Request)() {
  BackUp_GetResult_Request__rosidl_typesupport_introspection_c__BackUp_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!BackUp_GetResult_Request__rosidl_typesupport_introspection_c__BackUp_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    BackUp_GetResult_Request__rosidl_typesupport_introspection_c__BackUp_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BackUp_GetResult_Request__rosidl_typesupport_introspection_c__BackUp_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/back_up__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/back_up__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "nav2_msgs/action/back_up.h"
// Member `result`
// already included above
// #include "nav2_msgs/action/back_up__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember BackUp_GetResult_Response__rosidl_typesupport_introspection_c__BackUp_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__BackUp_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(nav2_msgs__action__BackUp_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BackUp_GetResult_Response__rosidl_typesupport_introspection_c__BackUp_GetResult_Response_message_members = {
  "nav2_msgs__action",  // message namespace
  "BackUp_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__BackUp_GetResult_Response),
  BackUp_GetResult_Response__rosidl_typesupport_introspection_c__BackUp_GetResult_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BackUp_GetResult_Response__rosidl_typesupport_introspection_c__BackUp_GetResult_Response_message_type_support_handle = {
  0,
  &BackUp_GetResult_Response__rosidl_typesupport_introspection_c__BackUp_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_GetResult_Response)() {
  BackUp_GetResult_Response__rosidl_typesupport_introspection_c__BackUp_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_Result)();
  if (!BackUp_GetResult_Response__rosidl_typesupport_introspection_c__BackUp_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    BackUp_GetResult_Response__rosidl_typesupport_introspection_c__BackUp_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BackUp_GetResult_Response__rosidl_typesupport_introspection_c__BackUp_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/back_up__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nav2_msgs__action__back_up__rosidl_typesupport_introspection_c__BackUp_GetResult_service_members = {
  "nav2_msgs__action",  // service namespace
  "BackUp_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nav2_msgs__action__back_up__rosidl_typesupport_introspection_c__BackUp_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // nav2_msgs__action__back_up__rosidl_typesupport_introspection_c__BackUp_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t nav2_msgs__action__back_up__rosidl_typesupport_introspection_c__BackUp_GetResult_service_type_support_handle = {
  0,
  &nav2_msgs__action__back_up__rosidl_typesupport_introspection_c__BackUp_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_GetResult)() {
  if (!nav2_msgs__action__back_up__rosidl_typesupport_introspection_c__BackUp_GetResult_service_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__back_up__rosidl_typesupport_introspection_c__BackUp_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nav2_msgs__action__back_up__rosidl_typesupport_introspection_c__BackUp_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_GetResult_Response)()->data;
  }

  return &nav2_msgs__action__back_up__rosidl_typesupport_introspection_c__BackUp_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/back_up__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/back_up__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "nav2_msgs/action/back_up.h"
// Member `feedback`
// already included above
// #include "nav2_msgs/action/back_up__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember BackUp_FeedbackMessage__rosidl_typesupport_introspection_c__BackUp_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__BackUp_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(nav2_msgs__action__BackUp_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BackUp_FeedbackMessage__rosidl_typesupport_introspection_c__BackUp_FeedbackMessage_message_members = {
  "nav2_msgs__action",  // message namespace
  "BackUp_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__BackUp_FeedbackMessage),
  BackUp_FeedbackMessage__rosidl_typesupport_introspection_c__BackUp_FeedbackMessage_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BackUp_FeedbackMessage__rosidl_typesupport_introspection_c__BackUp_FeedbackMessage_message_type_support_handle = {
  0,
  &BackUp_FeedbackMessage__rosidl_typesupport_introspection_c__BackUp_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_FeedbackMessage)() {
  BackUp_FeedbackMessage__rosidl_typesupport_introspection_c__BackUp_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  BackUp_FeedbackMessage__rosidl_typesupport_introspection_c__BackUp_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, BackUp_Feedback)();
  if (!BackUp_FeedbackMessage__rosidl_typesupport_introspection_c__BackUp_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    BackUp_FeedbackMessage__rosidl_typesupport_introspection_c__BackUp_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BackUp_FeedbackMessage__rosidl_typesupport_introspection_c__BackUp_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
