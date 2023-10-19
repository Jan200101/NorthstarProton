struct cppISteamInput_SteamInput001_Init_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamInput_SteamInput001_Init( struct cppISteamInput_SteamInput001_Init_params *params );

struct cppISteamInput_SteamInput001_Shutdown_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamInput_SteamInput001_Shutdown( struct cppISteamInput_SteamInput001_Shutdown_params *params );

struct cppISteamInput_SteamInput001_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamInput_SteamInput001_RunFrame( struct cppISteamInput_SteamInput001_RunFrame_params *params );

struct cppISteamInput_SteamInput001_GetConnectedControllers_params
{
    void *linux_side;
    int _ret;
    InputHandle_t *handlesOut;
};
extern void cppISteamInput_SteamInput001_GetConnectedControllers( struct cppISteamInput_SteamInput001_GetConnectedControllers_params *params );

struct cppISteamInput_SteamInput001_GetActionSetHandle_params
{
    void *linux_side;
    InputActionSetHandle_t _ret;
    const char *pszActionSetName;
};
extern void cppISteamInput_SteamInput001_GetActionSetHandle( struct cppISteamInput_SteamInput001_GetActionSetHandle_params *params );

struct cppISteamInput_SteamInput001_ActivateActionSet_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetHandle;
};
extern void cppISteamInput_SteamInput001_ActivateActionSet( struct cppISteamInput_SteamInput001_ActivateActionSet_params *params );

struct cppISteamInput_SteamInput001_GetCurrentActionSet_params
{
    void *linux_side;
    InputActionSetHandle_t _ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput001_GetCurrentActionSet( struct cppISteamInput_SteamInput001_GetCurrentActionSet_params *params );

struct cppISteamInput_SteamInput001_ActivateActionSetLayer_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetLayerHandle;
};
extern void cppISteamInput_SteamInput001_ActivateActionSetLayer( struct cppISteamInput_SteamInput001_ActivateActionSetLayer_params *params );

struct cppISteamInput_SteamInput001_DeactivateActionSetLayer_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetLayerHandle;
};
extern void cppISteamInput_SteamInput001_DeactivateActionSetLayer( struct cppISteamInput_SteamInput001_DeactivateActionSetLayer_params *params );

struct cppISteamInput_SteamInput001_DeactivateAllActionSetLayers_params
{
    void *linux_side;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput001_DeactivateAllActionSetLayers( struct cppISteamInput_SteamInput001_DeactivateAllActionSetLayers_params *params );

struct cppISteamInput_SteamInput001_GetActiveActionSetLayers_params
{
    void *linux_side;
    int _ret;
    InputHandle_t inputHandle;
    InputActionSetHandle_t *handlesOut;
};
extern void cppISteamInput_SteamInput001_GetActiveActionSetLayers( struct cppISteamInput_SteamInput001_GetActiveActionSetLayers_params *params );

struct cppISteamInput_SteamInput001_GetDigitalActionHandle_params
{
    void *linux_side;
    InputDigitalActionHandle_t _ret;
    const char *pszActionName;
};
extern void cppISteamInput_SteamInput001_GetDigitalActionHandle( struct cppISteamInput_SteamInput001_GetDigitalActionHandle_params *params );

struct cppISteamInput_SteamInput001_GetDigitalActionData_params
{
    void *linux_side;
    InputDigitalActionData_t *_ret;
    InputHandle_t inputHandle;
    InputDigitalActionHandle_t digitalActionHandle;
};
extern void cppISteamInput_SteamInput001_GetDigitalActionData( struct cppISteamInput_SteamInput001_GetDigitalActionData_params *params );

struct cppISteamInput_SteamInput001_GetDigitalActionOrigins_params
{
    void *linux_side;
    int _ret;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetHandle;
    InputDigitalActionHandle_t digitalActionHandle;
    EInputActionOrigin *originsOut;
};
extern void cppISteamInput_SteamInput001_GetDigitalActionOrigins( struct cppISteamInput_SteamInput001_GetDigitalActionOrigins_params *params );

struct cppISteamInput_SteamInput001_GetAnalogActionHandle_params
{
    void *linux_side;
    InputAnalogActionHandle_t _ret;
    const char *pszActionName;
};
extern void cppISteamInput_SteamInput001_GetAnalogActionHandle( struct cppISteamInput_SteamInput001_GetAnalogActionHandle_params *params );

struct cppISteamInput_SteamInput001_GetAnalogActionData_params
{
    void *linux_side;
    InputAnalogActionData_t *_ret;
    InputHandle_t inputHandle;
    InputAnalogActionHandle_t analogActionHandle;
};
extern void cppISteamInput_SteamInput001_GetAnalogActionData( struct cppISteamInput_SteamInput001_GetAnalogActionData_params *params );

struct cppISteamInput_SteamInput001_GetAnalogActionOrigins_params
{
    void *linux_side;
    int _ret;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetHandle;
    InputAnalogActionHandle_t analogActionHandle;
    EInputActionOrigin *originsOut;
};
extern void cppISteamInput_SteamInput001_GetAnalogActionOrigins( struct cppISteamInput_SteamInput001_GetAnalogActionOrigins_params *params );

struct cppISteamInput_SteamInput001_GetGlyphForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    EInputActionOrigin eOrigin;
};
extern void cppISteamInput_SteamInput001_GetGlyphForActionOrigin( struct cppISteamInput_SteamInput001_GetGlyphForActionOrigin_params *params );

struct cppISteamInput_SteamInput001_GetStringForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    EInputActionOrigin eOrigin;
};
extern void cppISteamInput_SteamInput001_GetStringForActionOrigin( struct cppISteamInput_SteamInput001_GetStringForActionOrigin_params *params );

struct cppISteamInput_SteamInput001_StopAnalogActionMomentum_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    InputAnalogActionHandle_t eAction;
};
extern void cppISteamInput_SteamInput001_StopAnalogActionMomentum( struct cppISteamInput_SteamInput001_StopAnalogActionMomentum_params *params );

struct cppISteamInput_SteamInput001_GetMotionData_params
{
    void *linux_side;
    InputMotionData_t *_ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput001_GetMotionData( struct cppISteamInput_SteamInput001_GetMotionData_params *params );

struct cppISteamInput_SteamInput001_TriggerVibration_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    unsigned short usLeftSpeed;
    unsigned short usRightSpeed;
};
extern void cppISteamInput_SteamInput001_TriggerVibration( struct cppISteamInput_SteamInput001_TriggerVibration_params *params );

struct cppISteamInput_SteamInput001_SetLEDColor_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    uint8 nColorR;
    uint8 nColorG;
    uint8 nColorB;
    unsigned int nFlags;
};
extern void cppISteamInput_SteamInput001_SetLEDColor( struct cppISteamInput_SteamInput001_SetLEDColor_params *params );

struct cppISteamInput_SteamInput001_TriggerHapticPulse_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    ESteamControllerPad eTargetPad;
    unsigned short usDurationMicroSec;
};
extern void cppISteamInput_SteamInput001_TriggerHapticPulse( struct cppISteamInput_SteamInput001_TriggerHapticPulse_params *params );

struct cppISteamInput_SteamInput001_TriggerRepeatedHapticPulse_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    ESteamControllerPad eTargetPad;
    unsigned short usDurationMicroSec;
    unsigned short usOffMicroSec;
    unsigned short unRepeat;
    unsigned int nFlags;
};
extern void cppISteamInput_SteamInput001_TriggerRepeatedHapticPulse( struct cppISteamInput_SteamInput001_TriggerRepeatedHapticPulse_params *params );

struct cppISteamInput_SteamInput001_ShowBindingPanel_params
{
    void *linux_side;
    bool _ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput001_ShowBindingPanel( struct cppISteamInput_SteamInput001_ShowBindingPanel_params *params );

struct cppISteamInput_SteamInput001_GetInputTypeForHandle_params
{
    void *linux_side;
    ESteamInputType _ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput001_GetInputTypeForHandle( struct cppISteamInput_SteamInput001_GetInputTypeForHandle_params *params );

struct cppISteamInput_SteamInput001_GetControllerForGamepadIndex_params
{
    void *linux_side;
    InputHandle_t _ret;
    int nIndex;
};
extern void cppISteamInput_SteamInput001_GetControllerForGamepadIndex( struct cppISteamInput_SteamInput001_GetControllerForGamepadIndex_params *params );

struct cppISteamInput_SteamInput001_GetGamepadIndexForController_params
{
    void *linux_side;
    int _ret;
    InputHandle_t ulinputHandle;
};
extern void cppISteamInput_SteamInput001_GetGamepadIndexForController( struct cppISteamInput_SteamInput001_GetGamepadIndexForController_params *params );

struct cppISteamInput_SteamInput001_GetStringForXboxOrigin_params
{
    void *linux_side;
    const char *_ret;
    EXboxOrigin eOrigin;
};
extern void cppISteamInput_SteamInput001_GetStringForXboxOrigin( struct cppISteamInput_SteamInput001_GetStringForXboxOrigin_params *params );

struct cppISteamInput_SteamInput001_GetGlyphForXboxOrigin_params
{
    void *linux_side;
    const char *_ret;
    EXboxOrigin eOrigin;
};
extern void cppISteamInput_SteamInput001_GetGlyphForXboxOrigin( struct cppISteamInput_SteamInput001_GetGlyphForXboxOrigin_params *params );

struct cppISteamInput_SteamInput001_GetActionOriginFromXboxOrigin_params
{
    void *linux_side;
    EInputActionOrigin _ret;
    InputHandle_t inputHandle;
    EXboxOrigin eOrigin;
};
extern void cppISteamInput_SteamInput001_GetActionOriginFromXboxOrigin( struct cppISteamInput_SteamInput001_GetActionOriginFromXboxOrigin_params *params );

struct cppISteamInput_SteamInput001_TranslateActionOrigin_params
{
    void *linux_side;
    EInputActionOrigin _ret;
    ESteamInputType eDestinationInputType;
    EInputActionOrigin eSourceOrigin;
};
extern void cppISteamInput_SteamInput001_TranslateActionOrigin( struct cppISteamInput_SteamInput001_TranslateActionOrigin_params *params );

struct cppISteamInput_SteamInput001_GetDeviceBindingRevision_params
{
    void *linux_side;
    bool _ret;
    InputHandle_t inputHandle;
    int *pMajor;
    int *pMinor;
};
extern void cppISteamInput_SteamInput001_GetDeviceBindingRevision( struct cppISteamInput_SteamInput001_GetDeviceBindingRevision_params *params );

struct cppISteamInput_SteamInput001_GetRemotePlaySessionID_params
{
    void *linux_side;
    uint32 _ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput001_GetRemotePlaySessionID( struct cppISteamInput_SteamInput001_GetRemotePlaySessionID_params *params );

