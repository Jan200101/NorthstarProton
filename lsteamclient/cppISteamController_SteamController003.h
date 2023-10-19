struct cppISteamController_SteamController003_Init_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamController_SteamController003_Init( struct cppISteamController_SteamController003_Init_params *params );

struct cppISteamController_SteamController003_Shutdown_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamController_SteamController003_Shutdown( struct cppISteamController_SteamController003_Shutdown_params *params );

struct cppISteamController_SteamController003_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamController_SteamController003_RunFrame( struct cppISteamController_SteamController003_RunFrame_params *params );

struct cppISteamController_SteamController003_GetConnectedControllers_params
{
    void *linux_side;
    int _ret;
    ControllerHandle_t *handlesOut;
};
extern void cppISteamController_SteamController003_GetConnectedControllers( struct cppISteamController_SteamController003_GetConnectedControllers_params *params );

struct cppISteamController_SteamController003_ShowBindingPanel_params
{
    void *linux_side;
    bool _ret;
    ControllerHandle_t controllerHandle;
};
extern void cppISteamController_SteamController003_ShowBindingPanel( struct cppISteamController_SteamController003_ShowBindingPanel_params *params );

struct cppISteamController_SteamController003_GetActionSetHandle_params
{
    void *linux_side;
    ControllerActionSetHandle_t _ret;
    const char *pszActionSetName;
};
extern void cppISteamController_SteamController003_GetActionSetHandle( struct cppISteamController_SteamController003_GetActionSetHandle_params *params );

struct cppISteamController_SteamController003_ActivateActionSet_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    ControllerActionSetHandle_t actionSetHandle;
};
extern void cppISteamController_SteamController003_ActivateActionSet( struct cppISteamController_SteamController003_ActivateActionSet_params *params );

struct cppISteamController_SteamController003_GetCurrentActionSet_params
{
    void *linux_side;
    ControllerActionSetHandle_t _ret;
    ControllerHandle_t controllerHandle;
};
extern void cppISteamController_SteamController003_GetCurrentActionSet( struct cppISteamController_SteamController003_GetCurrentActionSet_params *params );

struct cppISteamController_SteamController003_GetDigitalActionHandle_params
{
    void *linux_side;
    ControllerDigitalActionHandle_t _ret;
    const char *pszActionName;
};
extern void cppISteamController_SteamController003_GetDigitalActionHandle( struct cppISteamController_SteamController003_GetDigitalActionHandle_params *params );

struct cppISteamController_SteamController003_GetDigitalActionData_params
{
    void *linux_side;
    ControllerDigitalActionData_t *_ret;
    ControllerHandle_t controllerHandle;
    ControllerDigitalActionHandle_t digitalActionHandle;
};
extern void cppISteamController_SteamController003_GetDigitalActionData( struct cppISteamController_SteamController003_GetDigitalActionData_params *params );

struct cppISteamController_SteamController003_GetDigitalActionOrigins_params
{
    void *linux_side;
    int _ret;
    ControllerHandle_t controllerHandle;
    ControllerActionSetHandle_t actionSetHandle;
    ControllerDigitalActionHandle_t digitalActionHandle;
    EControllerActionOrigin *originsOut;
};
extern void cppISteamController_SteamController003_GetDigitalActionOrigins( struct cppISteamController_SteamController003_GetDigitalActionOrigins_params *params );

struct cppISteamController_SteamController003_GetAnalogActionHandle_params
{
    void *linux_side;
    ControllerAnalogActionHandle_t _ret;
    const char *pszActionName;
};
extern void cppISteamController_SteamController003_GetAnalogActionHandle( struct cppISteamController_SteamController003_GetAnalogActionHandle_params *params );

struct cppISteamController_SteamController003_GetAnalogActionData_params
{
    void *linux_side;
    ControllerAnalogActionData_t *_ret;
    ControllerHandle_t controllerHandle;
    ControllerAnalogActionHandle_t analogActionHandle;
};
extern void cppISteamController_SteamController003_GetAnalogActionData( struct cppISteamController_SteamController003_GetAnalogActionData_params *params );

struct cppISteamController_SteamController003_GetAnalogActionOrigins_params
{
    void *linux_side;
    int _ret;
    ControllerHandle_t controllerHandle;
    ControllerActionSetHandle_t actionSetHandle;
    ControllerAnalogActionHandle_t analogActionHandle;
    EControllerActionOrigin *originsOut;
};
extern void cppISteamController_SteamController003_GetAnalogActionOrigins( struct cppISteamController_SteamController003_GetAnalogActionOrigins_params *params );

struct cppISteamController_SteamController003_StopAnalogActionMomentum_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    ControllerAnalogActionHandle_t eAction;
};
extern void cppISteamController_SteamController003_StopAnalogActionMomentum( struct cppISteamController_SteamController003_StopAnalogActionMomentum_params *params );

struct cppISteamController_SteamController003_TriggerHapticPulse_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    ESteamControllerPad eTargetPad;
    unsigned short usDurationMicroSec;
};
extern void cppISteamController_SteamController003_TriggerHapticPulse( struct cppISteamController_SteamController003_TriggerHapticPulse_params *params );

struct cppISteamController_SteamController003_TriggerRepeatedHapticPulse_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    ESteamControllerPad eTargetPad;
    unsigned short usDurationMicroSec;
    unsigned short usOffMicroSec;
    unsigned short unRepeat;
    unsigned int nFlags;
};
extern void cppISteamController_SteamController003_TriggerRepeatedHapticPulse( struct cppISteamController_SteamController003_TriggerRepeatedHapticPulse_params *params );

