// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dwb_msgs:srv/GenerateTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__SRV__GENERATE_TRAJECTORY__FUNCTIONS_H_
#define DWB_MSGS__SRV__GENERATE_TRAJECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "dwb_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "dwb_msgs/srv/generate_trajectory__struct.h"

/// Initialize srv/GenerateTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dwb_msgs__srv__GenerateTrajectory_Request
 * )) before or use
 * dwb_msgs__srv__GenerateTrajectory_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__srv__GenerateTrajectory_Request__init(dwb_msgs__srv__GenerateTrajectory_Request * msg);

/// Finalize srv/GenerateTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__srv__GenerateTrajectory_Request__fini(dwb_msgs__srv__GenerateTrajectory_Request * msg);

/// Create srv/GenerateTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dwb_msgs__srv__GenerateTrajectory_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
dwb_msgs__srv__GenerateTrajectory_Request *
dwb_msgs__srv__GenerateTrajectory_Request__create();

/// Destroy srv/GenerateTrajectory message.
/**
 * It calls
 * dwb_msgs__srv__GenerateTrajectory_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__srv__GenerateTrajectory_Request__destroy(dwb_msgs__srv__GenerateTrajectory_Request * msg);


/// Initialize array of srv/GenerateTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * dwb_msgs__srv__GenerateTrajectory_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__srv__GenerateTrajectory_Request__Sequence__init(dwb_msgs__srv__GenerateTrajectory_Request__Sequence * array, size_t size);

/// Finalize array of srv/GenerateTrajectory messages.
/**
 * It calls
 * dwb_msgs__srv__GenerateTrajectory_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__srv__GenerateTrajectory_Request__Sequence__fini(dwb_msgs__srv__GenerateTrajectory_Request__Sequence * array);

/// Create array of srv/GenerateTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * dwb_msgs__srv__GenerateTrajectory_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
dwb_msgs__srv__GenerateTrajectory_Request__Sequence *
dwb_msgs__srv__GenerateTrajectory_Request__Sequence__create(size_t size);

/// Destroy array of srv/GenerateTrajectory messages.
/**
 * It calls
 * dwb_msgs__srv__GenerateTrajectory_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__srv__GenerateTrajectory_Request__Sequence__destroy(dwb_msgs__srv__GenerateTrajectory_Request__Sequence * array);

/// Initialize srv/GenerateTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dwb_msgs__srv__GenerateTrajectory_Response
 * )) before or use
 * dwb_msgs__srv__GenerateTrajectory_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__srv__GenerateTrajectory_Response__init(dwb_msgs__srv__GenerateTrajectory_Response * msg);

/// Finalize srv/GenerateTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__srv__GenerateTrajectory_Response__fini(dwb_msgs__srv__GenerateTrajectory_Response * msg);

/// Create srv/GenerateTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dwb_msgs__srv__GenerateTrajectory_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
dwb_msgs__srv__GenerateTrajectory_Response *
dwb_msgs__srv__GenerateTrajectory_Response__create();

/// Destroy srv/GenerateTrajectory message.
/**
 * It calls
 * dwb_msgs__srv__GenerateTrajectory_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__srv__GenerateTrajectory_Response__destroy(dwb_msgs__srv__GenerateTrajectory_Response * msg);


/// Initialize array of srv/GenerateTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * dwb_msgs__srv__GenerateTrajectory_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
bool
dwb_msgs__srv__GenerateTrajectory_Response__Sequence__init(dwb_msgs__srv__GenerateTrajectory_Response__Sequence * array, size_t size);

/// Finalize array of srv/GenerateTrajectory messages.
/**
 * It calls
 * dwb_msgs__srv__GenerateTrajectory_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__srv__GenerateTrajectory_Response__Sequence__fini(dwb_msgs__srv__GenerateTrajectory_Response__Sequence * array);

/// Create array of srv/GenerateTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * dwb_msgs__srv__GenerateTrajectory_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
dwb_msgs__srv__GenerateTrajectory_Response__Sequence *
dwb_msgs__srv__GenerateTrajectory_Response__Sequence__create(size_t size);

/// Destroy array of srv/GenerateTrajectory messages.
/**
 * It calls
 * dwb_msgs__srv__GenerateTrajectory_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dwb_msgs
void
dwb_msgs__srv__GenerateTrajectory_Response__Sequence__destroy(dwb_msgs__srv__GenerateTrajectory_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // DWB_MSGS__SRV__GENERATE_TRAJECTORY__FUNCTIONS_H_
