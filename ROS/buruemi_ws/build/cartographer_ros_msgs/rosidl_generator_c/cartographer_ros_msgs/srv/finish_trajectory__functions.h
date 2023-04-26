// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:srv/FinishTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__FINISH_TRAJECTORY__FUNCTIONS_H_
#define CARTOGRAPHER_ROS_MSGS__SRV__FINISH_TRAJECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "cartographer_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "cartographer_ros_msgs/srv/finish_trajectory__struct.h"

/// Initialize srv/FinishTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cartographer_ros_msgs__srv__FinishTrajectory_Request
 * )) before or use
 * cartographer_ros_msgs__srv__FinishTrajectory_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
bool
cartographer_ros_msgs__srv__FinishTrajectory_Request__init(cartographer_ros_msgs__srv__FinishTrajectory_Request * msg);

/// Finalize srv/FinishTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__srv__FinishTrajectory_Request__fini(cartographer_ros_msgs__srv__FinishTrajectory_Request * msg);

/// Create srv/FinishTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cartographer_ros_msgs__srv__FinishTrajectory_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
cartographer_ros_msgs__srv__FinishTrajectory_Request *
cartographer_ros_msgs__srv__FinishTrajectory_Request__create();

/// Destroy srv/FinishTrajectory message.
/**
 * It calls
 * cartographer_ros_msgs__srv__FinishTrajectory_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__srv__FinishTrajectory_Request__destroy(cartographer_ros_msgs__srv__FinishTrajectory_Request * msg);


/// Initialize array of srv/FinishTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * cartographer_ros_msgs__srv__FinishTrajectory_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
bool
cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence__init(cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence * array, size_t size);

/// Finalize array of srv/FinishTrajectory messages.
/**
 * It calls
 * cartographer_ros_msgs__srv__FinishTrajectory_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence__fini(cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence * array);

/// Create array of srv/FinishTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence *
cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence__create(size_t size);

/// Destroy array of srv/FinishTrajectory messages.
/**
 * It calls
 * cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence__destroy(cartographer_ros_msgs__srv__FinishTrajectory_Request__Sequence * array);

/// Initialize srv/FinishTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cartographer_ros_msgs__srv__FinishTrajectory_Response
 * )) before or use
 * cartographer_ros_msgs__srv__FinishTrajectory_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
bool
cartographer_ros_msgs__srv__FinishTrajectory_Response__init(cartographer_ros_msgs__srv__FinishTrajectory_Response * msg);

/// Finalize srv/FinishTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__srv__FinishTrajectory_Response__fini(cartographer_ros_msgs__srv__FinishTrajectory_Response * msg);

/// Create srv/FinishTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cartographer_ros_msgs__srv__FinishTrajectory_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
cartographer_ros_msgs__srv__FinishTrajectory_Response *
cartographer_ros_msgs__srv__FinishTrajectory_Response__create();

/// Destroy srv/FinishTrajectory message.
/**
 * It calls
 * cartographer_ros_msgs__srv__FinishTrajectory_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__srv__FinishTrajectory_Response__destroy(cartographer_ros_msgs__srv__FinishTrajectory_Response * msg);


/// Initialize array of srv/FinishTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * cartographer_ros_msgs__srv__FinishTrajectory_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
bool
cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence__init(cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence * array, size_t size);

/// Finalize array of srv/FinishTrajectory messages.
/**
 * It calls
 * cartographer_ros_msgs__srv__FinishTrajectory_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence__fini(cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence * array);

/// Create array of srv/FinishTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence *
cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence__create(size_t size);

/// Destroy array of srv/FinishTrajectory messages.
/**
 * It calls
 * cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence__destroy(cartographer_ros_msgs__srv__FinishTrajectory_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__FINISH_TRAJECTORY__FUNCTIONS_H_
