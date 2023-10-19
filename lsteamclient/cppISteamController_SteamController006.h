struct cppISteamController_SteamController006_Init_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamController_SteamController006_Init( struct cppISteamController_SteamController006_Init_params *params );

struct cppISteamController_SteamController006_Shutdown_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamController_SteamController006_Shutdown( struct cppISteamController_SteamController006_Shutdown_params *params );

struct cppISteamController_SteamController006_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamController_SteamController006_RunFrame( struct cppISteamController_SteamController006_RunFrame_params *params );

struct cppISteamController_SteamController006_GetConnectedControllers_params
{
    void *linux_side;
    int _ret;
    ControllerHandle_t *handlesOut;
};
extern void cppISteamController_SteamController006_GetConnectedControllers( struct cppISteamController_SteamController006_GetConnectedControllers_params *params );

struct cppISteamController_SteamController006_ShowBindingPanel_params
{
    void *linux_side;
    bool _ret;
    ControllerHandle_t controllerHandle;
};
extern void cppISteamController_SteamController006_ShowBindingPanel( struct cppISteamController_SteamController006_ShowBindingPanel_params *params );

struct cppISteamController_SteamController006_GetActionSetHandle_params
{
    void *linux_side;
    ControllerActionSetHandle_t _ret;
    const char *pszActionSetName;
};
extern void cppISteamController_SteamController006_GetActionSetHandle( struct cppISteamController_SteamController006_GetActionSetHandle_params *params );

struct cppISteamController_SteamController006_ActivateActionSet_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    ControllerActionSetHandle_t actionSetHandle;
};
extern void cppISteamController_SteamController006_ActivateActionSet( struct cppISteamController_SteamController006_ActivateActionSet_params *params );

struct cppISteamController_SteamController006_GetCurrentActionSet_params
{
    void *linux_side;
    ControllerActionSetHandle_t _ret;
    ControllerHandle_t controllerHandle;
};
extern void cppISteamController_SteamController006_GetCurrentActionSet( struct cppISteamController_SteamController006_GetCurrentActionSet_params *params );

struct cppISteamController_SteamController006_ActivateActionSetLayer_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    ControllerActionSetHandle_t actionSetLayerHandle;
};
extern void cppISteamController_SteamController006_ActivateActionSetLayer( struct cppISteamController_SteamController006_ActivateActionSetLayer_params *params );

struct cppISteamController_SteamController006_DeactivateActionSetLayer_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    ControllerActionSetHandle_t actionSetLayerHandle;
};
extern void cppISteamController_SteamController006_DeactivateActionSetLayer( struct cppISteamController_SteamController006_DeactivateActionSetLayer_params *params );

struct cppISteamController_SteamController006_DeactivateAllActionSetLayers_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
};
extern void cppISteamController_SteamController006_DeactivateAllActionSetLayers( struct cppISteamController_SteamController006_DeactivateAllActionSetLayers_params *params );

struct cppISteamController_SteamController006_GetActiveActionSetLayers_params
{
    void *linux_side;
    int _ret;
    ControllerHandle_t controllerHandle;
    ControllerActionSetHandle_t *handlesOut;
};
extern void cppISteamController_SteamController006_GetActiveActionSetLayers( struct cppISteamController_SteamController006_GetActiveActionSetLayers_params *params );

struct cppISteamController_SteamController006_GetDigitalActionHandle_params
{
    void *linux_side;
    ControllerDigitalActionHandle_t _ret;
    const char *pszActionName;
};
extern void cppISteamController_SteamController006_GetDigitalActionHandle( struct cppISteamController_SteamController006_GetDigitalActionHandle_params *params );

struct cppISteamController_SteamController006_GetDigitalActionData_params
{
    void *linux_side;
    ControllerDigitalActionData_t *_ret;
    ControllerHandle_t controllerHandle;
    ControllerDigitalActionHandle_t digitalActionHandle;
};
extern void cppISteamController_SteamController006_GetDigitalActionData( struct cppISteamController_SteamController006_GetDigitalActionData_params *params );

struct cppISteamController_SteamController006_GetDigitalActionOrigins_params
{
    void *linux_side;
    int _ret;
    ControllerHandle_t controllerHandle;
    ControllerActionSetHandle_t actionSetHandle;
    ControllerDigitalActionHandle_t digitalActionHandle;
    EControllerActionOrigin *originsOut;
};
extern void cppISteamController_SteamController006_GetDigitalActionOrigins( struct cppISteamController_SteamController006_GetDigitalActionOrigins_params *params );

struct cppISteamController_SteamController006_GetAnalogActionHandle_params
{
    void *linux_side;
    ControllerAnalogActionHandle_t _ret;
    const char *pszActionName;
};
extern void cppISteamController_SteamController006_GetAnalogActionHandle( struct cppISteamController_SteamController006_GetAnalogActionHandle_params *params );

struct cppISteamController_SteamController006_GetAnalogActionData_params
{
    void *linux_side;
    ControllerAnalogActionData_t *_ret;
    ControllerHandle_t controllerHandle;
    ControllerAnalogActionHandle_t analogActionHandle;
};
extern void cppISteamController_SteamController006_GetAnalogActionData( struct cppISteamController_SteamController006_GetAnalogActionData_params *params );

struct cppISteamController_SteamController006_GetAnalogActionOrigins_params
{
    void *linux_side;
    int _ret;
    ControllerHandle_t controllerHandle;
    ControllerActionSetHandle_t actionSetHandle;
    ControllerAnalogActionHandle_t analogActionHandle;
    EControllerActionOrigin *originsOut;
};
extern void cppISteamController_SteamController006_GetAnalogActionOrigins( struct cppISteamController_SteamController006_GetAnalogActionOrigins_params *params );

struct cppISteamController_SteamController006_StopAnalogActionMomentum_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    ControllerAnalogActionHandle_t eAction;
};
extern void cppISteamController_SteamController006_StopAnalogActionMomentum( struct cppISteamController_SteamController006_StopAnalogActionMomentum_params *params );

struct cppISteamController_SteamController006_TriggerHapticPulse_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    ESteamControllerPad eTargetPad;
    unsigned short usDurationMicroSec;
};
extern void cppISteamController_SteamController006_TriggerHapticPulse( struct cppISteamController_SteamController006_TriggerHapticPulse_params *params );

struct cppISteamController_SteamController006_TriggerRepeatedHapticPulse_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    ESteamControllerPad eTargetPad;
    unsigned short usDurationMicroSec;
    unsigned short usOffMicroSec;
    unsigned short unRepeat;
    unsigned int nFlags;
};
extern void cppISteamController_SteamController006_TriggerRepeatedHapticPulse( struct cppISteamController_SteamController006_TriggerRepeatedHapticPulse_params *params );

struct cppISteamController_SteamController006_TriggerVibration_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    unsigned short usLeftSpeed;
    unsigned short usRightSpeed;
};
extern void cppISteamController_SteamController006_TriggerVibration( struct cppISteamController_SteamController006_TriggerVibration_params *params );

struct cppISteamController_SteamController006_SetLEDColor_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    uint8 nColorR;
    uint8 nColorG;
    uint8 nColorB;
    unsigned int nFlags;
};
extern void cppISteamController_SteamController006_SetLEDColor( struct cppISteamController_SteamController006_SetLEDColor_params *params );

struct cppISteamController_SteamController006_GetGamepadIndexForController_params
{
    void *linux_side;
    int _ret;
    ControllerHandle_t ulControllerHandle;
};
extern void cppISteamController_SteamController006_GetGamepadIndexForController( struct cppISteamController_SteamController006_GetGamepadIndexForController_params *params );

struct cppISteamController_SteamController006_GetControllerForGamepadIndex_params
{
    void *linux_side;
    ControllerHandle_t _ret;
    int nIndex;
};
extern void cppISteamController_SteamController006_GetControllerForGamepadIndex( struct cppISteamController_SteamController006_GetControllerForGamepadIndex_params *params );

struct cppISteamController_SteamController006_GetMotionData_params
{
    void *linux_side;
    ControllerMotionData_t *_ret;
    ControllerHandle_t controllerHandle;
};
extern void cppISteamController_SteamController006_GetMotionData( struct cppISteamController_SteamController006_GetMotionData_params *params );

struct cppISteamController_SteamController006_ShowDigitalActionOrigins_params
{
    void *linux_side;
    bool _ret;
    ControllerHandle_t controllerHandle;
    ControllerDigitalActionHandle_t digitalActionHandle;
    float flScale;
    float flXPosition;
    float flYPosition;
};
extern void cppISteamController_SteamController006_ShowDigitalActionOrigins( struct cppISteamController_SteamController006_ShowDigitalActionOrigins_params *params );

struct cppISteamController_SteamController006_ShowAnalogActionOrigins_params
{
    void *linux_side;
    bool _ret;
    ControllerHandle_t controllerHandle;
    ControllerAnalogActionHandle_t analogActionHandle;
    float flScale;
    float flXPosition;
    float flYPosition;
};
extern void cppISteamController_SteamController006_ShowAnalogActionOrigins( struct cppISteamController_SteamController006_ShowAnalogActionOrigins_params *params );

struct cppISteamController_SteamController006_GetStringForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    EControllerActionOrigin eOrigin;
};
extern void cppISteamController_SteamController006_GetStringForActionOrigin( struct cppISteamController_SteamController006_GetStringForActionOrigin_params *params );

struct cppISteamController_SteamController006_GetGlyphForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    EControllerActionOrigin eOrigin;
};
extern void cppISteamController_SteamController006_GetGlyphForActionOrigin( struct cppISteamController_SteamController006_GetGlyphForActionOrigin_params *params );

struct cppISteamController_SteamController006_GetInputTypeForHandle_params
{
    void *linux_side;
    ESteamInputType _ret;
    ControllerHandle_t controllerHandle;
};
extern void cppISteamController_SteamController006_GetInputTypeForHandle( struct cppISteamController_SteamController006_GetInputTypeForHandle_params *params );

