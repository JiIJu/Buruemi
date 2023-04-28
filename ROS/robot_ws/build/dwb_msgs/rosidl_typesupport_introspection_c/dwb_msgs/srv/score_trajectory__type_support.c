// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dwb_msgs:srv/ScoreTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dwb_msgs/srv/score_trajectory__rosidl_typesupport_introspection_c.h"
#include "dwb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dwb_msgs/srv/score_trajectory__struct.h"


// Include directives for member types
// Member `pose`
#include "nav_2d_msgs/msg/pose2_d_stamped.h"
// Member `pose`
#include "nav_2d_msgs/msg/pose2_d_stamped__rosidl_typesupport_introspection_c.h"
// Member `velocity`
#include "nav_2d_msgs/msg/twist2_d.h"
// Member `velocity`
#include "nav_2d_msgs/msg/twist2_d__rosidl_typesupport_introspection_c.h"
// Member `global_plan`
#include "nav_2d_msgs/msg/path2_d.h"
// Member `global_plan`
#include "nav_2d_msgs/msg/path2_d__rosidl_typesupport_introspection_c.h"
// Member `traj`
#include "dwb_msgs/msg/trajectory2_d.h"
// Member `traj`
#include "dwb_msgs/msg/trajectory2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ScoreTrajectory_Request__rosidl_typesupport_introspection_c__ScoreTrajectory_Request_message_member_array[4] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__srv__ScoreTrajectory_Request, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__srv__ScoreTrajectory_Request, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "global_plan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__srv__ScoreTrajectory_Request, global_plan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "traj",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__srv__ScoreTrajectory_Request, traj),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ScoreTrajectory_Request__rosidl_typesupport_introspection_c__ScoreTrajectory_Request_message_members = {
  "dwb_msgs__srv",  // message namespace
  "ScoreTrajectory_Request",  // message name
  4,  // number of fields
  sizeof(dwb_msgs__srv__ScoreTrajectory_Request),
  ScoreTrajectory_Request__rosidl_typesupport_introspection_c__ScoreTrajectory_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ScoreTrajectory_Request__rosidl_typesupport_introspection_c__ScoreTrajectory_Request_message_type_support_handle = {
  0,
  &ScoreTrajectory_Request__rosidl_typesupport_introspection_c__ScoreTrajectory_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dwb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, srv, ScoreTrajectory_Request)() {
  ScoreTrajectory_Request__rosidl_typesupport_introspection_c__ScoreTrajectory_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_2d_msgs, msg, Pose2DStamped)();
  ScoreTrajectory_Request__rosidl_typesupport_introspection_c__ScoreTrajectory_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_2d_msgs, msg, Twist2D)();
  ScoreTrajectory_Request__rosidl_typesupport_introspection_c__ScoreTrajectory_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_2d_msgs, msg, Path2D)();
  ScoreTrajectory_Request__rosidl_typesupport_introspection_c__ScoreTrajectory_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, msg, Trajectory2D)();
  if (!ScoreTrajectory_Request__rosidl_typesupport_introspection_c__ScoreTrajectory_Request_message_type_support_handle.typesupport_identifier) {
    ScoreTrajectory_Request__rosidl_typesupport_introspection_c__ScoreTrajectory_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ScoreTrajectory_Request__rosidl_typesupport_introspection_c__ScoreTrajectory_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dwb_msgs/srv/score_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dwb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dwb_msgs/srv/score_trajectory__struct.h"


// Include directives for member types
// Member `score`
#include "dwb_msgs/msg/trajectory_score.h"
// Member `score`
#include "dwb_msgs/msg/trajectory_score__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ScoreTrajectory_Response__rosidl_typesupport_introspection_c__ScoreTrajectory_Response_message_member_array[1] = {
  {
    "score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__srv__ScoreTrajectory_Response, score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ScoreTrajectory_Response__rosidl_typesupport_introspection_c__ScoreTrajectory_Response_message_members = {
  "dwb_msgs__srv",  // message namespace
  "ScoreTrajectory_Response",  // message name
  1,  // number of fields
  sizeof(dwb_msgs__srv__ScoreTrajectory_Response),
  ScoreTrajectory_Response__rosidl_typesupport_introspection_c__ScoreTrajectory_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ScoreTrajectory_Response__rosidl_typesupport_introspection_c__ScoreTrajectory_Response_message_type_support_handle = {
  0,
  &ScoreTrajectory_Response__rosidl_typesupport_introspection_c__ScoreTrajectory_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dwb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, srv, ScoreTrajectory_Response)() {
  ScoreTrajectory_Response__rosidl_typesupport_introspection_c__ScoreTrajectory_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, msg, TrajectoryScore)();
  if (!ScoreTrajectory_Response__rosidl_typesupport_introspection_c__ScoreTrajectory_Response_message_type_support_handle.typesupport_identifier) {
    ScoreTrajectory_Response__rosidl_typesupport_introspection_c__ScoreTrajectory_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ScoreTrajectory_Response__rosidl_typesupport_introspection_c__ScoreTrajectory_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "dwb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "dwb_msgs/srv/score_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers dwb_msgs__srv__score_trajectory__rosidl_typesupport_introspection_c__ScoreTrajectory_service_members = {
  "dwb_msgs__srv",  // service namespace
  "ScoreTrajectory",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // dwb_msgs__srv__score_trajectory__rosidl_typesupport_introspection_c__ScoreTrajectory_Request_message_type_support_handle,
  NULL  // response message
  // dwb_msgs__srv__score_trajectory__rosidl_typesupport_introspection_c__ScoreTrajectory_Response_message_type_support_handle
};

static rosidl_service_type_support_t dwb_msgs__srv__score_trajectory__rosidl_typesupport_introspection_c__ScoreTrajectory_service_type_support_handle = {
  0,
  &dwb_msgs__srv__score_trajectory__rosidl_typesupport_introspection_c__ScoreTrajectory_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, srv, ScoreTrajectory_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, srv, ScoreTrajectory_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dwb_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, srv, ScoreTrajectory)() {
  if (!dwb_msgs__srv__score_trajectory__rosidl_typesupport_introspection_c__ScoreTrajectory_service_type_support_handle.typesupport_identifier) {
    dwb_msgs__srv__score_trajectory__rosidl_typesupport_introspection_c__ScoreTrajectory_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)dwb_msgs__srv__score_trajectory__rosidl_typesupport_introspection_c__ScoreTrajectory_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, srv, ScoreTrajectory_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, srv, ScoreTrajectory_Response)()->data;
  }

  return &dwb_msgs__srv__score_trajectory__rosidl_typesupport_introspection_c__ScoreTrajectory_service_type_support_handle;
}
