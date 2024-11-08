// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from mission_action:action/MissionAction.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mission_action/action/detail/mission_action__struct.h"
#include "mission_action/action/detail/mission_action__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mission_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MissionAction_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MissionAction_Goal_type_support_ids_t;

static const _MissionAction_Goal_type_support_ids_t _MissionAction_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MissionAction_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MissionAction_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MissionAction_Goal_type_support_symbol_names_t _MissionAction_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_action, action, MissionAction_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_action, action, MissionAction_Goal)),
  }
};

typedef struct _MissionAction_Goal_type_support_data_t
{
  void * data[2];
} _MissionAction_Goal_type_support_data_t;

static _MissionAction_Goal_type_support_data_t _MissionAction_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MissionAction_Goal_message_typesupport_map = {
  2,
  "mission_action",
  &_MissionAction_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MissionAction_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MissionAction_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MissionAction_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MissionAction_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mission_action, action, MissionAction_Goal)() {
  return &::mission_action::action::rosidl_typesupport_c::MissionAction_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_action/action/detail/mission_action__struct.h"
// already included above
// #include "mission_action/action/detail/mission_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MissionAction_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MissionAction_Result_type_support_ids_t;

static const _MissionAction_Result_type_support_ids_t _MissionAction_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MissionAction_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MissionAction_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MissionAction_Result_type_support_symbol_names_t _MissionAction_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_action, action, MissionAction_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_action, action, MissionAction_Result)),
  }
};

typedef struct _MissionAction_Result_type_support_data_t
{
  void * data[2];
} _MissionAction_Result_type_support_data_t;

static _MissionAction_Result_type_support_data_t _MissionAction_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MissionAction_Result_message_typesupport_map = {
  2,
  "mission_action",
  &_MissionAction_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MissionAction_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MissionAction_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MissionAction_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MissionAction_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mission_action, action, MissionAction_Result)() {
  return &::mission_action::action::rosidl_typesupport_c::MissionAction_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_action/action/detail/mission_action__struct.h"
// already included above
// #include "mission_action/action/detail/mission_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MissionAction_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MissionAction_Feedback_type_support_ids_t;

static const _MissionAction_Feedback_type_support_ids_t _MissionAction_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MissionAction_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MissionAction_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MissionAction_Feedback_type_support_symbol_names_t _MissionAction_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_action, action, MissionAction_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_action, action, MissionAction_Feedback)),
  }
};

typedef struct _MissionAction_Feedback_type_support_data_t
{
  void * data[2];
} _MissionAction_Feedback_type_support_data_t;

static _MissionAction_Feedback_type_support_data_t _MissionAction_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MissionAction_Feedback_message_typesupport_map = {
  2,
  "mission_action",
  &_MissionAction_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MissionAction_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MissionAction_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MissionAction_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MissionAction_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mission_action, action, MissionAction_Feedback)() {
  return &::mission_action::action::rosidl_typesupport_c::MissionAction_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_action/action/detail/mission_action__struct.h"
// already included above
// #include "mission_action/action/detail/mission_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MissionAction_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MissionAction_SendGoal_Request_type_support_ids_t;

static const _MissionAction_SendGoal_Request_type_support_ids_t _MissionAction_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MissionAction_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MissionAction_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MissionAction_SendGoal_Request_type_support_symbol_names_t _MissionAction_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_action, action, MissionAction_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_action, action, MissionAction_SendGoal_Request)),
  }
};

typedef struct _MissionAction_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MissionAction_SendGoal_Request_type_support_data_t;

static _MissionAction_SendGoal_Request_type_support_data_t _MissionAction_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MissionAction_SendGoal_Request_message_typesupport_map = {
  2,
  "mission_action",
  &_MissionAction_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MissionAction_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MissionAction_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MissionAction_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MissionAction_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mission_action, action, MissionAction_SendGoal_Request)() {
  return &::mission_action::action::rosidl_typesupport_c::MissionAction_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_action/action/detail/mission_action__struct.h"
// already included above
// #include "mission_action/action/detail/mission_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MissionAction_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MissionAction_SendGoal_Response_type_support_ids_t;

static const _MissionAction_SendGoal_Response_type_support_ids_t _MissionAction_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MissionAction_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MissionAction_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MissionAction_SendGoal_Response_type_support_symbol_names_t _MissionAction_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_action, action, MissionAction_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_action, action, MissionAction_SendGoal_Response)),
  }
};

typedef struct _MissionAction_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MissionAction_SendGoal_Response_type_support_data_t;

static _MissionAction_SendGoal_Response_type_support_data_t _MissionAction_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MissionAction_SendGoal_Response_message_typesupport_map = {
  2,
  "mission_action",
  &_MissionAction_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MissionAction_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MissionAction_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MissionAction_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MissionAction_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mission_action, action, MissionAction_SendGoal_Response)() {
  return &::mission_action::action::rosidl_typesupport_c::MissionAction_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mission_action/action/detail/mission_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MissionAction_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MissionAction_SendGoal_type_support_ids_t;

static const _MissionAction_SendGoal_type_support_ids_t _MissionAction_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MissionAction_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MissionAction_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MissionAction_SendGoal_type_support_symbol_names_t _MissionAction_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_action, action, MissionAction_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_action, action, MissionAction_SendGoal)),
  }
};

typedef struct _MissionAction_SendGoal_type_support_data_t
{
  void * data[2];
} _MissionAction_SendGoal_type_support_data_t;

static _MissionAction_SendGoal_type_support_data_t _MissionAction_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MissionAction_SendGoal_service_typesupport_map = {
  2,
  "mission_action",
  &_MissionAction_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MissionAction_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MissionAction_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MissionAction_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MissionAction_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, mission_action, action, MissionAction_SendGoal)() {
  return &::mission_action::action::rosidl_typesupport_c::MissionAction_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_action/action/detail/mission_action__struct.h"
// already included above
// #include "mission_action/action/detail/mission_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MissionAction_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MissionAction_GetResult_Request_type_support_ids_t;

static const _MissionAction_GetResult_Request_type_support_ids_t _MissionAction_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MissionAction_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MissionAction_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MissionAction_GetResult_Request_type_support_symbol_names_t _MissionAction_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_action, action, MissionAction_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_action, action, MissionAction_GetResult_Request)),
  }
};

typedef struct _MissionAction_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MissionAction_GetResult_Request_type_support_data_t;

static _MissionAction_GetResult_Request_type_support_data_t _MissionAction_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MissionAction_GetResult_Request_message_typesupport_map = {
  2,
  "mission_action",
  &_MissionAction_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MissionAction_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MissionAction_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MissionAction_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MissionAction_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mission_action, action, MissionAction_GetResult_Request)() {
  return &::mission_action::action::rosidl_typesupport_c::MissionAction_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_action/action/detail/mission_action__struct.h"
// already included above
// #include "mission_action/action/detail/mission_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MissionAction_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MissionAction_GetResult_Response_type_support_ids_t;

static const _MissionAction_GetResult_Response_type_support_ids_t _MissionAction_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MissionAction_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MissionAction_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MissionAction_GetResult_Response_type_support_symbol_names_t _MissionAction_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_action, action, MissionAction_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_action, action, MissionAction_GetResult_Response)),
  }
};

typedef struct _MissionAction_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MissionAction_GetResult_Response_type_support_data_t;

static _MissionAction_GetResult_Response_type_support_data_t _MissionAction_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MissionAction_GetResult_Response_message_typesupport_map = {
  2,
  "mission_action",
  &_MissionAction_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MissionAction_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MissionAction_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MissionAction_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MissionAction_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mission_action, action, MissionAction_GetResult_Response)() {
  return &::mission_action::action::rosidl_typesupport_c::MissionAction_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mission_action/action/detail/mission_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MissionAction_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MissionAction_GetResult_type_support_ids_t;

static const _MissionAction_GetResult_type_support_ids_t _MissionAction_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MissionAction_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MissionAction_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MissionAction_GetResult_type_support_symbol_names_t _MissionAction_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_action, action, MissionAction_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_action, action, MissionAction_GetResult)),
  }
};

typedef struct _MissionAction_GetResult_type_support_data_t
{
  void * data[2];
} _MissionAction_GetResult_type_support_data_t;

static _MissionAction_GetResult_type_support_data_t _MissionAction_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MissionAction_GetResult_service_typesupport_map = {
  2,
  "mission_action",
  &_MissionAction_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MissionAction_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MissionAction_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MissionAction_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MissionAction_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, mission_action, action, MissionAction_GetResult)() {
  return &::mission_action::action::rosidl_typesupport_c::MissionAction_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_action/action/detail/mission_action__struct.h"
// already included above
// #include "mission_action/action/detail/mission_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_action
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MissionAction_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MissionAction_FeedbackMessage_type_support_ids_t;

static const _MissionAction_FeedbackMessage_type_support_ids_t _MissionAction_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MissionAction_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MissionAction_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MissionAction_FeedbackMessage_type_support_symbol_names_t _MissionAction_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_action, action, MissionAction_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_action, action, MissionAction_FeedbackMessage)),
  }
};

typedef struct _MissionAction_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MissionAction_FeedbackMessage_type_support_data_t;

static _MissionAction_FeedbackMessage_type_support_data_t _MissionAction_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MissionAction_FeedbackMessage_message_typesupport_map = {
  2,
  "mission_action",
  &_MissionAction_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MissionAction_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MissionAction_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MissionAction_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MissionAction_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_action

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mission_action, action, MissionAction_FeedbackMessage)() {
  return &::mission_action::action::rosidl_typesupport_c::MissionAction_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "mission_action/action/mission_action.h"
// already included above
// #include "mission_action/action/detail/mission_action__type_support.h"

static rosidl_action_type_support_t _mission_action__action__MissionAction__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, mission_action, action, MissionAction)()
{
  // Thread-safe by always writing the same values to the static struct
  _mission_action__action__MissionAction__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, mission_action, action, MissionAction_SendGoal)();
  _mission_action__action__MissionAction__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, mission_action, action, MissionAction_GetResult)();
  _mission_action__action__MissionAction__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _mission_action__action__MissionAction__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, mission_action, action, MissionAction_FeedbackMessage)();
  _mission_action__action__MissionAction__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_mission_action__action__MissionAction__typesupport_c;
}

#ifdef __cplusplus
}
#endif
