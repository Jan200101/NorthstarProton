/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamInput_SteamInput001.h"

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_Init, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetConnectedControllers, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetActionSetHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_ActivateActionSet, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetCurrentActionSet, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_ActivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_DeactivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_DeactivateAllActionSetLayers, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetActiveActionSetLayers, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetDigitalActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetDigitalActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetDigitalActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetAnalogActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetAnalogActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetAnalogActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetGlyphForActionOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetStringForActionOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_StopAnalogActionMomentum, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetMotionData, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_TriggerVibration, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_SetLEDColor, 28)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_TriggerHapticPulse, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_TriggerRepeatedHapticPulse, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_ShowBindingPanel, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetInputTypeForHandle, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetControllerForGamepadIndex, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetGamepadIndexForController, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetStringForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetGlyphForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetActionOriginFromXboxOrigin, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_TranslateActionOrigin, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetDeviceBindingRevision, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetRemotePlaySessionID, 12)

bool __thiscall winISteamInput_SteamInput001_Init(struct w_steam_iface *_this)
{
    struct cppISteamInput_SteamInput001_Init_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_Init( &params );
    return params._ret;
}

bool __thiscall winISteamInput_SteamInput001_Shutdown(struct w_steam_iface *_this)
{
    struct cppISteamInput_SteamInput001_Shutdown_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_Shutdown( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput001_RunFrame(struct w_steam_iface *_this)
{
    struct cppISteamInput_SteamInput001_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_RunFrame( &params );
}

int __thiscall winISteamInput_SteamInput001_GetConnectedControllers(struct w_steam_iface *_this, InputHandle_t *handlesOut)
{
    struct cppISteamInput_SteamInput001_GetConnectedControllers_params params =
    {
        .linux_side = _this->u_iface,
        .handlesOut = handlesOut,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetConnectedControllers( &params );
    return params._ret;
}

InputActionSetHandle_t __thiscall winISteamInput_SteamInput001_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    struct cppISteamInput_SteamInput001_GetActionSetHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionSetName = pszActionSetName,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetActionSetHandle( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput001_ActivateActionSet(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)
{
    struct cppISteamInput_SteamInput001_ActivateActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetHandle = actionSetHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_ActivateActionSet( &params );
}

InputActionSetHandle_t __thiscall winISteamInput_SteamInput001_GetCurrentActionSet(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput001_GetCurrentActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetCurrentActionSet( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput001_ActivateActionSetLayer(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    struct cppISteamInput_SteamInput001_ActivateActionSetLayer_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetLayerHandle = actionSetLayerHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_ActivateActionSetLayer( &params );
}

void __thiscall winISteamInput_SteamInput001_DeactivateActionSetLayer(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    struct cppISteamInput_SteamInput001_DeactivateActionSetLayer_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetLayerHandle = actionSetLayerHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_DeactivateActionSetLayer( &params );
}

void __thiscall winISteamInput_SteamInput001_DeactivateAllActionSetLayers(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput001_DeactivateAllActionSetLayers_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_DeactivateAllActionSetLayers( &params );
}

int __thiscall winISteamInput_SteamInput001_GetActiveActionSetLayers(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t *handlesOut)
{
    struct cppISteamInput_SteamInput001_GetActiveActionSetLayers_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .handlesOut = handlesOut,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetActiveActionSetLayers( &params );
    return params._ret;
}

InputDigitalActionHandle_t __thiscall winISteamInput_SteamInput001_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct cppISteamInput_SteamInput001_GetDigitalActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetDigitalActionHandle( &params );
    return params._ret;
}

InputDigitalActionData_t * __thiscall winISteamInput_SteamInput001_GetDigitalActionData(struct w_steam_iface *_this, InputDigitalActionData_t *_ret, InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)
{
    struct cppISteamInput_SteamInput001_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .inputHandle = inputHandle,
        .digitalActionHandle = digitalActionHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetDigitalActionData( &params );
    return params._ret;
}

int __thiscall winISteamInput_SteamInput001_GetDigitalActionOrigins(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin *originsOut)
{
    struct cppISteamInput_SteamInput001_GetDigitalActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetHandle = actionSetHandle,
        .digitalActionHandle = digitalActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetDigitalActionOrigins( &params );
    return params._ret;
}

InputAnalogActionHandle_t __thiscall winISteamInput_SteamInput001_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct cppISteamInput_SteamInput001_GetAnalogActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetAnalogActionHandle( &params );
    return params._ret;
}

InputAnalogActionData_t * __thiscall winISteamInput_SteamInput001_GetAnalogActionData(struct w_steam_iface *_this, InputAnalogActionData_t *_ret, InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)
{
    struct cppISteamInput_SteamInput001_GetAnalogActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .inputHandle = inputHandle,
        .analogActionHandle = analogActionHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetAnalogActionData( &params );
    return params._ret;
}

int __thiscall winISteamInput_SteamInput001_GetAnalogActionOrigins(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin *originsOut)
{
    struct cppISteamInput_SteamInput001_GetAnalogActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetHandle = actionSetHandle,
        .analogActionHandle = analogActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetAnalogActionOrigins( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput001_GetGlyphForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin)
{
    struct cppISteamInput_SteamInput001_GetGlyphForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetGlyphForActionOrigin( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput001_GetStringForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin)
{
    struct cppISteamInput_SteamInput001_GetStringForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetStringForActionOrigin( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput001_StopAnalogActionMomentum(struct w_steam_iface *_this, InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)
{
    struct cppISteamInput_SteamInput001_StopAnalogActionMomentum_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_StopAnalogActionMomentum( &params );
}

InputMotionData_t * __thiscall winISteamInput_SteamInput001_GetMotionData(struct w_steam_iface *_this, InputMotionData_t *_ret, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput001_GetMotionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetMotionData( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput001_TriggerVibration(struct w_steam_iface *_this, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    struct cppISteamInput_SteamInput001_TriggerVibration_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .usLeftSpeed = usLeftSpeed,
        .usRightSpeed = usRightSpeed,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_TriggerVibration( &params );
}

void __thiscall winISteamInput_SteamInput001_SetLEDColor(struct w_steam_iface *_this, InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    struct cppISteamInput_SteamInput001_SetLEDColor_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .nColorR = nColorR,
        .nColorG = nColorG,
        .nColorB = nColorB,
        .nFlags = nFlags,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_SetLEDColor( &params );
}

void __thiscall winISteamInput_SteamInput001_TriggerHapticPulse(struct w_steam_iface *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    struct cppISteamInput_SteamInput001_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_TriggerHapticPulse( &params );
}

void __thiscall winISteamInput_SteamInput001_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    struct cppISteamInput_SteamInput001_TriggerRepeatedHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
        .usOffMicroSec = usOffMicroSec,
        .unRepeat = unRepeat,
        .nFlags = nFlags,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_TriggerRepeatedHapticPulse( &params );
}

bool __thiscall winISteamInput_SteamInput001_ShowBindingPanel(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput001_ShowBindingPanel_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_ShowBindingPanel( &params );
    return params._ret;
}

ESteamInputType __thiscall winISteamInput_SteamInput001_GetInputTypeForHandle(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput001_GetInputTypeForHandle_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetInputTypeForHandle( &params );
    return params._ret;
}

InputHandle_t __thiscall winISteamInput_SteamInput001_GetControllerForGamepadIndex(struct w_steam_iface *_this, int nIndex)
{
    struct cppISteamInput_SteamInput001_GetControllerForGamepadIndex_params params =
    {
        .linux_side = _this->u_iface,
        .nIndex = nIndex,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetControllerForGamepadIndex( &params );
    return params._ret;
}

int __thiscall winISteamInput_SteamInput001_GetGamepadIndexForController(struct w_steam_iface *_this, InputHandle_t ulinputHandle)
{
    struct cppISteamInput_SteamInput001_GetGamepadIndexForController_params params =
    {
        .linux_side = _this->u_iface,
        .ulinputHandle = ulinputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetGamepadIndexForController( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput001_GetStringForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    struct cppISteamInput_SteamInput001_GetStringForXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetStringForXboxOrigin( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput001_GetGlyphForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    struct cppISteamInput_SteamInput001_GetGlyphForXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetGlyphForXboxOrigin( &params );
    return params._ret;
}

EInputActionOrigin __thiscall winISteamInput_SteamInput001_GetActionOriginFromXboxOrigin(struct w_steam_iface *_this, InputHandle_t inputHandle, EXboxOrigin eOrigin)
{
    struct cppISteamInput_SteamInput001_GetActionOriginFromXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetActionOriginFromXboxOrigin( &params );
    return params._ret;
}

EInputActionOrigin __thiscall winISteamInput_SteamInput001_TranslateActionOrigin(struct w_steam_iface *_this, ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)
{
    struct cppISteamInput_SteamInput001_TranslateActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eDestinationInputType = eDestinationInputType,
        .eSourceOrigin = eSourceOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_TranslateActionOrigin( &params );
    return params._ret;
}

bool __thiscall winISteamInput_SteamInput001_GetDeviceBindingRevision(struct w_steam_iface *_this, InputHandle_t inputHandle, int *pMajor, int *pMinor)
{
    struct cppISteamInput_SteamInput001_GetDeviceBindingRevision_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .pMajor = pMajor,
        .pMinor = pMinor,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetDeviceBindingRevision( &params );
    return params._ret;
}

uint32 __thiscall winISteamInput_SteamInput001_GetRemotePlaySessionID(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput001_GetRemotePlaySessionID_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_GetRemotePlaySessionID( &params );
    return params._ret;
}

extern vtable_ptr winISteamInput_SteamInput001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamInput_SteamInput001,
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_Init)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_Shutdown)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_RunFrame)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetConnectedControllers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetActionSetHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_ActivateActionSet)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetCurrentActionSet)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_ActivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_DeactivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_DeactivateAllActionSetLayers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetActiveActionSetLayers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetDigitalActionHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetDigitalActionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetDigitalActionOrigins)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetAnalogActionHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetAnalogActionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetAnalogActionOrigins)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetGlyphForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetStringForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_StopAnalogActionMomentum)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetMotionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_TriggerVibration)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_SetLEDColor)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_TriggerRepeatedHapticPulse)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_ShowBindingPanel)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetInputTypeForHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetControllerForGamepadIndex)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetGamepadIndexForController)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetStringForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetGlyphForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetActionOriginFromXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_TranslateActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetDeviceBindingRevision)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetRemotePlaySessionID)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamInput_SteamInput001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamInput001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamInput_SteamInput001_vtable, 35, "SteamInput001");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamInput_SteamInput002.h"

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_Init, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetConnectedControllers, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetActionSetHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_ActivateActionSet, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetCurrentActionSet, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_ActivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_DeactivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_DeactivateAllActionSetLayers, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetActiveActionSetLayers, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetDigitalActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetDigitalActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetDigitalActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetAnalogActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetAnalogActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetAnalogActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetGlyphForActionOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetStringForActionOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_StopAnalogActionMomentum, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetMotionData, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_TriggerVibration, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_SetLEDColor, 28)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_TriggerHapticPulse, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_TriggerRepeatedHapticPulse, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_ShowBindingPanel, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetInputTypeForHandle, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetControllerForGamepadIndex, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetGamepadIndexForController, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetStringForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetGlyphForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetActionOriginFromXboxOrigin, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_TranslateActionOrigin, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetDeviceBindingRevision, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetRemotePlaySessionID, 12)

bool __thiscall winISteamInput_SteamInput002_Init(struct w_steam_iface *_this)
{
    struct cppISteamInput_SteamInput002_Init_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_Init( &params );
    return params._ret;
}

bool __thiscall winISteamInput_SteamInput002_Shutdown(struct w_steam_iface *_this)
{
    struct cppISteamInput_SteamInput002_Shutdown_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_Shutdown( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput002_RunFrame(struct w_steam_iface *_this)
{
    struct cppISteamInput_SteamInput002_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_RunFrame( &params );
}

int __thiscall winISteamInput_SteamInput002_GetConnectedControllers(struct w_steam_iface *_this, InputHandle_t *handlesOut)
{
    struct cppISteamInput_SteamInput002_GetConnectedControllers_params params =
    {
        .linux_side = _this->u_iface,
        .handlesOut = handlesOut,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetConnectedControllers( &params );
    return params._ret;
}

InputActionSetHandle_t __thiscall winISteamInput_SteamInput002_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    struct cppISteamInput_SteamInput002_GetActionSetHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionSetName = pszActionSetName,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetActionSetHandle( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput002_ActivateActionSet(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)
{
    struct cppISteamInput_SteamInput002_ActivateActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetHandle = actionSetHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_ActivateActionSet( &params );
}

InputActionSetHandle_t __thiscall winISteamInput_SteamInput002_GetCurrentActionSet(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput002_GetCurrentActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetCurrentActionSet( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput002_ActivateActionSetLayer(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    struct cppISteamInput_SteamInput002_ActivateActionSetLayer_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetLayerHandle = actionSetLayerHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_ActivateActionSetLayer( &params );
}

void __thiscall winISteamInput_SteamInput002_DeactivateActionSetLayer(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    struct cppISteamInput_SteamInput002_DeactivateActionSetLayer_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetLayerHandle = actionSetLayerHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_DeactivateActionSetLayer( &params );
}

void __thiscall winISteamInput_SteamInput002_DeactivateAllActionSetLayers(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput002_DeactivateAllActionSetLayers_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_DeactivateAllActionSetLayers( &params );
}

int __thiscall winISteamInput_SteamInput002_GetActiveActionSetLayers(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t *handlesOut)
{
    struct cppISteamInput_SteamInput002_GetActiveActionSetLayers_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .handlesOut = handlesOut,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetActiveActionSetLayers( &params );
    return params._ret;
}

InputDigitalActionHandle_t __thiscall winISteamInput_SteamInput002_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct cppISteamInput_SteamInput002_GetDigitalActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetDigitalActionHandle( &params );
    return params._ret;
}

InputDigitalActionData_t * __thiscall winISteamInput_SteamInput002_GetDigitalActionData(struct w_steam_iface *_this, InputDigitalActionData_t *_ret, InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)
{
    struct cppISteamInput_SteamInput002_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .inputHandle = inputHandle,
        .digitalActionHandle = digitalActionHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetDigitalActionData( &params );
    return params._ret;
}

int __thiscall winISteamInput_SteamInput002_GetDigitalActionOrigins(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin *originsOut)
{
    struct cppISteamInput_SteamInput002_GetDigitalActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetHandle = actionSetHandle,
        .digitalActionHandle = digitalActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetDigitalActionOrigins( &params );
    return params._ret;
}

InputAnalogActionHandle_t __thiscall winISteamInput_SteamInput002_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct cppISteamInput_SteamInput002_GetAnalogActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetAnalogActionHandle( &params );
    return params._ret;
}

InputAnalogActionData_t * __thiscall winISteamInput_SteamInput002_GetAnalogActionData(struct w_steam_iface *_this, InputAnalogActionData_t *_ret, InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)
{
    struct cppISteamInput_SteamInput002_GetAnalogActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .inputHandle = inputHandle,
        .analogActionHandle = analogActionHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetAnalogActionData( &params );
    return params._ret;
}

int __thiscall winISteamInput_SteamInput002_GetAnalogActionOrigins(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin *originsOut)
{
    struct cppISteamInput_SteamInput002_GetAnalogActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetHandle = actionSetHandle,
        .analogActionHandle = analogActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetAnalogActionOrigins( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput002_GetGlyphForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin)
{
    struct cppISteamInput_SteamInput002_GetGlyphForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetGlyphForActionOrigin( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput002_GetStringForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin)
{
    struct cppISteamInput_SteamInput002_GetStringForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetStringForActionOrigin( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput002_StopAnalogActionMomentum(struct w_steam_iface *_this, InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)
{
    struct cppISteamInput_SteamInput002_StopAnalogActionMomentum_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_StopAnalogActionMomentum( &params );
}

InputMotionData_t * __thiscall winISteamInput_SteamInput002_GetMotionData(struct w_steam_iface *_this, InputMotionData_t *_ret, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput002_GetMotionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetMotionData( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput002_TriggerVibration(struct w_steam_iface *_this, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    struct cppISteamInput_SteamInput002_TriggerVibration_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .usLeftSpeed = usLeftSpeed,
        .usRightSpeed = usRightSpeed,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_TriggerVibration( &params );
}

void __thiscall winISteamInput_SteamInput002_SetLEDColor(struct w_steam_iface *_this, InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    struct cppISteamInput_SteamInput002_SetLEDColor_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .nColorR = nColorR,
        .nColorG = nColorG,
        .nColorB = nColorB,
        .nFlags = nFlags,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_SetLEDColor( &params );
}

void __thiscall winISteamInput_SteamInput002_TriggerHapticPulse(struct w_steam_iface *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    struct cppISteamInput_SteamInput002_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_TriggerHapticPulse( &params );
}

void __thiscall winISteamInput_SteamInput002_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    struct cppISteamInput_SteamInput002_TriggerRepeatedHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
        .usOffMicroSec = usOffMicroSec,
        .unRepeat = unRepeat,
        .nFlags = nFlags,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_TriggerRepeatedHapticPulse( &params );
}

bool __thiscall winISteamInput_SteamInput002_ShowBindingPanel(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput002_ShowBindingPanel_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_ShowBindingPanel( &params );
    return params._ret;
}

ESteamInputType __thiscall winISteamInput_SteamInput002_GetInputTypeForHandle(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput002_GetInputTypeForHandle_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetInputTypeForHandle( &params );
    return params._ret;
}

InputHandle_t __thiscall winISteamInput_SteamInput002_GetControllerForGamepadIndex(struct w_steam_iface *_this, int nIndex)
{
    struct cppISteamInput_SteamInput002_GetControllerForGamepadIndex_params params =
    {
        .linux_side = _this->u_iface,
        .nIndex = nIndex,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetControllerForGamepadIndex( &params );
    return params._ret;
}

int __thiscall winISteamInput_SteamInput002_GetGamepadIndexForController(struct w_steam_iface *_this, InputHandle_t ulinputHandle)
{
    struct cppISteamInput_SteamInput002_GetGamepadIndexForController_params params =
    {
        .linux_side = _this->u_iface,
        .ulinputHandle = ulinputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetGamepadIndexForController( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput002_GetStringForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    struct cppISteamInput_SteamInput002_GetStringForXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetStringForXboxOrigin( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput002_GetGlyphForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    struct cppISteamInput_SteamInput002_GetGlyphForXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetGlyphForXboxOrigin( &params );
    return params._ret;
}

EInputActionOrigin __thiscall winISteamInput_SteamInput002_GetActionOriginFromXboxOrigin(struct w_steam_iface *_this, InputHandle_t inputHandle, EXboxOrigin eOrigin)
{
    struct cppISteamInput_SteamInput002_GetActionOriginFromXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetActionOriginFromXboxOrigin( &params );
    return params._ret;
}

EInputActionOrigin __thiscall winISteamInput_SteamInput002_TranslateActionOrigin(struct w_steam_iface *_this, ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)
{
    struct cppISteamInput_SteamInput002_TranslateActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eDestinationInputType = eDestinationInputType,
        .eSourceOrigin = eSourceOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_TranslateActionOrigin( &params );
    return params._ret;
}

bool __thiscall winISteamInput_SteamInput002_GetDeviceBindingRevision(struct w_steam_iface *_this, InputHandle_t inputHandle, int *pMajor, int *pMinor)
{
    struct cppISteamInput_SteamInput002_GetDeviceBindingRevision_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .pMajor = pMajor,
        .pMinor = pMinor,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetDeviceBindingRevision( &params );
    return params._ret;
}

uint32 __thiscall winISteamInput_SteamInput002_GetRemotePlaySessionID(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput002_GetRemotePlaySessionID_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_GetRemotePlaySessionID( &params );
    return params._ret;
}

extern vtable_ptr winISteamInput_SteamInput002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamInput_SteamInput002,
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_Init)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_Shutdown)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_RunFrame)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetConnectedControllers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetActionSetHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_ActivateActionSet)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetCurrentActionSet)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_ActivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_DeactivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_DeactivateAllActionSetLayers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetActiveActionSetLayers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetDigitalActionHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetDigitalActionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetDigitalActionOrigins)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetAnalogActionHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetAnalogActionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetAnalogActionOrigins)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetGlyphForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetStringForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_StopAnalogActionMomentum)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetMotionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_TriggerVibration)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_SetLEDColor)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_TriggerRepeatedHapticPulse)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_ShowBindingPanel)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetInputTypeForHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetControllerForGamepadIndex)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetGamepadIndexForController)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetStringForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetGlyphForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetActionOriginFromXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_TranslateActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetDeviceBindingRevision)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetRemotePlaySessionID)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamInput_SteamInput002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamInput002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamInput_SteamInput002_vtable, 35, "SteamInput002");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamInput_SteamInput005.h"

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_Init, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_SetInputActionManifestFilePath, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_RunFrame, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_BWaitForData, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_BNewDataAvailable, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetConnectedControllers, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_EnableDeviceCallbacks, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_EnableActionEventCallbacks, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetActionSetHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_ActivateActionSet, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetCurrentActionSet, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_ActivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_DeactivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_DeactivateAllActionSetLayers, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetActiveActionSetLayers, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetDigitalActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetDigitalActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetDigitalActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetStringForDigitalActionName, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetAnalogActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetAnalogActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetAnalogActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetGlyphPNGForActionOrigin, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetGlyphSVGForActionOrigin, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetStringForActionOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetStringForAnalogActionName, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_StopAnalogActionMomentum, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetMotionData, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_TriggerVibration, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_TriggerVibrationExtended, 28)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_TriggerSimpleHapticEvent, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_SetLEDColor, 28)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_Legacy_TriggerHapticPulse, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_ShowBindingPanel, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetInputTypeForHandle, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetControllerForGamepadIndex, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetGamepadIndexForController, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetStringForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetGlyphForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetActionOriginFromXboxOrigin, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_TranslateActionOrigin, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetDeviceBindingRevision, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetRemotePlaySessionID, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetSessionInputConfigurationSettings, 4)

bool __thiscall winISteamInput_SteamInput005_Init(struct w_steam_iface *_this, bool bExplicitlyCallRunFrame)
{
    struct cppISteamInput_SteamInput005_Init_params params =
    {
        .linux_side = _this->u_iface,
        .bExplicitlyCallRunFrame = bExplicitlyCallRunFrame,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_Init( &params );
    return params._ret;
}

bool __thiscall winISteamInput_SteamInput005_Shutdown(struct w_steam_iface *_this)
{
    struct cppISteamInput_SteamInput005_Shutdown_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_Shutdown( &params );
    return params._ret;
}

bool __thiscall winISteamInput_SteamInput005_SetInputActionManifestFilePath(struct w_steam_iface *_this, const char *pchInputActionManifestAbsolutePath)
{
    struct cppISteamInput_SteamInput005_SetInputActionManifestFilePath_params params =
    {
        .linux_side = _this->u_iface,
        .pchInputActionManifestAbsolutePath = pchInputActionManifestAbsolutePath,
    };
    params.pchInputActionManifestAbsolutePath = steamclient_dos_to_unix_path( pchInputActionManifestAbsolutePath, 0 );
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_SetInputActionManifestFilePath( &params );
    steamclient_free_path( params.pchInputActionManifestAbsolutePath );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput005_RunFrame(struct w_steam_iface *_this, bool bReservedValue)
{
    struct cppISteamInput_SteamInput005_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
        .bReservedValue = bReservedValue,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_RunFrame( &params );
}

bool __thiscall winISteamInput_SteamInput005_BWaitForData(struct w_steam_iface *_this, bool bWaitForever, uint32 unTimeout)
{
    struct cppISteamInput_SteamInput005_BWaitForData_params params =
    {
        .linux_side = _this->u_iface,
        .bWaitForever = bWaitForever,
        .unTimeout = unTimeout,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_BWaitForData( &params );
    return params._ret;
}

bool __thiscall winISteamInput_SteamInput005_BNewDataAvailable(struct w_steam_iface *_this)
{
    struct cppISteamInput_SteamInput005_BNewDataAvailable_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_BNewDataAvailable( &params );
    return params._ret;
}

int __thiscall winISteamInput_SteamInput005_GetConnectedControllers(struct w_steam_iface *_this, InputHandle_t *handlesOut)
{
    struct cppISteamInput_SteamInput005_GetConnectedControllers_params params =
    {
        .linux_side = _this->u_iface,
        .handlesOut = handlesOut,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetConnectedControllers( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput005_EnableDeviceCallbacks(struct w_steam_iface *_this)
{
    struct cppISteamInput_SteamInput005_EnableDeviceCallbacks_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_EnableDeviceCallbacks( &params );
}

void __thiscall winISteamInput_SteamInput005_EnableActionEventCallbacks(struct w_steam_iface *_this, SteamInputActionEventCallbackPointer pCallback)
{
    struct cppISteamInput_SteamInput005_EnableActionEventCallbacks_params params =
    {
        .linux_side = _this->u_iface,
        .pCallback = pCallback,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_EnableActionEventCallbacks( &params );
}

InputActionSetHandle_t __thiscall winISteamInput_SteamInput005_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    struct cppISteamInput_SteamInput005_GetActionSetHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionSetName = pszActionSetName,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetActionSetHandle( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput005_ActivateActionSet(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)
{
    struct cppISteamInput_SteamInput005_ActivateActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetHandle = actionSetHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_ActivateActionSet( &params );
}

InputActionSetHandle_t __thiscall winISteamInput_SteamInput005_GetCurrentActionSet(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput005_GetCurrentActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetCurrentActionSet( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput005_ActivateActionSetLayer(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    struct cppISteamInput_SteamInput005_ActivateActionSetLayer_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetLayerHandle = actionSetLayerHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_ActivateActionSetLayer( &params );
}

void __thiscall winISteamInput_SteamInput005_DeactivateActionSetLayer(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    struct cppISteamInput_SteamInput005_DeactivateActionSetLayer_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetLayerHandle = actionSetLayerHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_DeactivateActionSetLayer( &params );
}

void __thiscall winISteamInput_SteamInput005_DeactivateAllActionSetLayers(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput005_DeactivateAllActionSetLayers_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_DeactivateAllActionSetLayers( &params );
}

int __thiscall winISteamInput_SteamInput005_GetActiveActionSetLayers(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t *handlesOut)
{
    struct cppISteamInput_SteamInput005_GetActiveActionSetLayers_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .handlesOut = handlesOut,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetActiveActionSetLayers( &params );
    return params._ret;
}

InputDigitalActionHandle_t __thiscall winISteamInput_SteamInput005_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct cppISteamInput_SteamInput005_GetDigitalActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetDigitalActionHandle( &params );
    return params._ret;
}

InputDigitalActionData_t * __thiscall winISteamInput_SteamInput005_GetDigitalActionData(struct w_steam_iface *_this, InputDigitalActionData_t *_ret, InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)
{
    struct cppISteamInput_SteamInput005_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .inputHandle = inputHandle,
        .digitalActionHandle = digitalActionHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetDigitalActionData( &params );
    return params._ret;
}

int __thiscall winISteamInput_SteamInput005_GetDigitalActionOrigins(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin *originsOut)
{
    struct cppISteamInput_SteamInput005_GetDigitalActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetHandle = actionSetHandle,
        .digitalActionHandle = digitalActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetDigitalActionOrigins( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput005_GetStringForDigitalActionName(struct w_steam_iface *_this, InputDigitalActionHandle_t eActionHandle)
{
    struct cppISteamInput_SteamInput005_GetStringForDigitalActionName_params params =
    {
        .linux_side = _this->u_iface,
        .eActionHandle = eActionHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetStringForDigitalActionName( &params );
    return params._ret;
}

InputAnalogActionHandle_t __thiscall winISteamInput_SteamInput005_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct cppISteamInput_SteamInput005_GetAnalogActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetAnalogActionHandle( &params );
    return params._ret;
}

InputAnalogActionData_t * __thiscall winISteamInput_SteamInput005_GetAnalogActionData(struct w_steam_iface *_this, InputAnalogActionData_t *_ret, InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)
{
    struct cppISteamInput_SteamInput005_GetAnalogActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .inputHandle = inputHandle,
        .analogActionHandle = analogActionHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetAnalogActionData( &params );
    return params._ret;
}

int __thiscall winISteamInput_SteamInput005_GetAnalogActionOrigins(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin *originsOut)
{
    struct cppISteamInput_SteamInput005_GetAnalogActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetHandle = actionSetHandle,
        .analogActionHandle = analogActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetAnalogActionOrigins( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput005_GetGlyphPNGForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin, ESteamInputGlyphSize eSize, uint32 unFlags)
{
    struct cppISteamInput_SteamInput005_GetGlyphPNGForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .eSize = eSize,
        .unFlags = unFlags,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetGlyphPNGForActionOrigin( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput005_GetGlyphSVGForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin, uint32 unFlags)
{
    struct cppISteamInput_SteamInput005_GetGlyphSVGForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unFlags = unFlags,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetGlyphSVGForActionOrigin( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy(struct w_steam_iface *_this, EInputActionOrigin eOrigin)
{
    struct cppISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput005_GetStringForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin)
{
    struct cppISteamInput_SteamInput005_GetStringForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetStringForActionOrigin( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput005_GetStringForAnalogActionName(struct w_steam_iface *_this, InputAnalogActionHandle_t eActionHandle)
{
    struct cppISteamInput_SteamInput005_GetStringForAnalogActionName_params params =
    {
        .linux_side = _this->u_iface,
        .eActionHandle = eActionHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetStringForAnalogActionName( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput005_StopAnalogActionMomentum(struct w_steam_iface *_this, InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)
{
    struct cppISteamInput_SteamInput005_StopAnalogActionMomentum_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_StopAnalogActionMomentum( &params );
}

InputMotionData_t * __thiscall winISteamInput_SteamInput005_GetMotionData(struct w_steam_iface *_this, InputMotionData_t *_ret, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput005_GetMotionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetMotionData( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput005_TriggerVibration(struct w_steam_iface *_this, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    struct cppISteamInput_SteamInput005_TriggerVibration_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .usLeftSpeed = usLeftSpeed,
        .usRightSpeed = usRightSpeed,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_TriggerVibration( &params );
}

void __thiscall winISteamInput_SteamInput005_TriggerVibrationExtended(struct w_steam_iface *_this, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed, unsigned short usLeftTriggerSpeed, unsigned short usRightTriggerSpeed)
{
    struct cppISteamInput_SteamInput005_TriggerVibrationExtended_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .usLeftSpeed = usLeftSpeed,
        .usRightSpeed = usRightSpeed,
        .usLeftTriggerSpeed = usLeftTriggerSpeed,
        .usRightTriggerSpeed = usRightTriggerSpeed,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_TriggerVibrationExtended( &params );
}

void __thiscall winISteamInput_SteamInput005_TriggerSimpleHapticEvent(struct w_steam_iface *_this, InputHandle_t inputHandle, EControllerHapticLocation eHapticLocation, uint8 nIntensity, char nGainDB, uint8 nOtherIntensity, char nOtherGainDB)
{
    struct cppISteamInput_SteamInput005_TriggerSimpleHapticEvent_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .eHapticLocation = eHapticLocation,
        .nIntensity = nIntensity,
        .nGainDB = nGainDB,
        .nOtherIntensity = nOtherIntensity,
        .nOtherGainDB = nOtherGainDB,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_TriggerSimpleHapticEvent( &params );
}

void __thiscall winISteamInput_SteamInput005_SetLEDColor(struct w_steam_iface *_this, InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    struct cppISteamInput_SteamInput005_SetLEDColor_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .nColorR = nColorR,
        .nColorG = nColorG,
        .nColorB = nColorB,
        .nFlags = nFlags,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_SetLEDColor( &params );
}

void __thiscall winISteamInput_SteamInput005_Legacy_TriggerHapticPulse(struct w_steam_iface *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    struct cppISteamInput_SteamInput005_Legacy_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_Legacy_TriggerHapticPulse( &params );
}

void __thiscall winISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    struct cppISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
        .usOffMicroSec = usOffMicroSec,
        .unRepeat = unRepeat,
        .nFlags = nFlags,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse( &params );
}

bool __thiscall winISteamInput_SteamInput005_ShowBindingPanel(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput005_ShowBindingPanel_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_ShowBindingPanel( &params );
    return params._ret;
}

ESteamInputType __thiscall winISteamInput_SteamInput005_GetInputTypeForHandle(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput005_GetInputTypeForHandle_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetInputTypeForHandle( &params );
    return params._ret;
}

InputHandle_t __thiscall winISteamInput_SteamInput005_GetControllerForGamepadIndex(struct w_steam_iface *_this, int nIndex)
{
    struct cppISteamInput_SteamInput005_GetControllerForGamepadIndex_params params =
    {
        .linux_side = _this->u_iface,
        .nIndex = nIndex,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetControllerForGamepadIndex( &params );
    return params._ret;
}

int __thiscall winISteamInput_SteamInput005_GetGamepadIndexForController(struct w_steam_iface *_this, InputHandle_t ulinputHandle)
{
    struct cppISteamInput_SteamInput005_GetGamepadIndexForController_params params =
    {
        .linux_side = _this->u_iface,
        .ulinputHandle = ulinputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetGamepadIndexForController( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput005_GetStringForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    struct cppISteamInput_SteamInput005_GetStringForXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetStringForXboxOrigin( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput005_GetGlyphForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    struct cppISteamInput_SteamInput005_GetGlyphForXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetGlyphForXboxOrigin( &params );
    return params._ret;
}

EInputActionOrigin __thiscall winISteamInput_SteamInput005_GetActionOriginFromXboxOrigin(struct w_steam_iface *_this, InputHandle_t inputHandle, EXboxOrigin eOrigin)
{
    struct cppISteamInput_SteamInput005_GetActionOriginFromXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetActionOriginFromXboxOrigin( &params );
    return params._ret;
}

EInputActionOrigin __thiscall winISteamInput_SteamInput005_TranslateActionOrigin(struct w_steam_iface *_this, ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)
{
    struct cppISteamInput_SteamInput005_TranslateActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eDestinationInputType = eDestinationInputType,
        .eSourceOrigin = eSourceOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_TranslateActionOrigin( &params );
    return params._ret;
}

bool __thiscall winISteamInput_SteamInput005_GetDeviceBindingRevision(struct w_steam_iface *_this, InputHandle_t inputHandle, int *pMajor, int *pMinor)
{
    struct cppISteamInput_SteamInput005_GetDeviceBindingRevision_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .pMajor = pMajor,
        .pMinor = pMinor,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetDeviceBindingRevision( &params );
    return params._ret;
}

uint32 __thiscall winISteamInput_SteamInput005_GetRemotePlaySessionID(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput005_GetRemotePlaySessionID_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetRemotePlaySessionID( &params );
    return params._ret;
}

uint16 __thiscall winISteamInput_SteamInput005_GetSessionInputConfigurationSettings(struct w_steam_iface *_this)
{
    struct cppISteamInput_SteamInput005_GetSessionInputConfigurationSettings_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_GetSessionInputConfigurationSettings( &params );
    return params._ret;
}

extern vtable_ptr winISteamInput_SteamInput005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamInput_SteamInput005,
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_Init)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_Shutdown)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_SetInputActionManifestFilePath)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_RunFrame)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_BWaitForData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_BNewDataAvailable)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetConnectedControllers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_EnableDeviceCallbacks)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_EnableActionEventCallbacks)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetActionSetHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_ActivateActionSet)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetCurrentActionSet)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_ActivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_DeactivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_DeactivateAllActionSetLayers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetActiveActionSetLayers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetDigitalActionHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetDigitalActionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetDigitalActionOrigins)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetStringForDigitalActionName)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetAnalogActionHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetAnalogActionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetAnalogActionOrigins)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetGlyphPNGForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetGlyphSVGForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetStringForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetStringForAnalogActionName)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_StopAnalogActionMomentum)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetMotionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_TriggerVibration)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_TriggerVibrationExtended)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_TriggerSimpleHapticEvent)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_SetLEDColor)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_Legacy_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_ShowBindingPanel)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetInputTypeForHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetControllerForGamepadIndex)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetGamepadIndexForController)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetStringForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetGlyphForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetActionOriginFromXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_TranslateActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetDeviceBindingRevision)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetRemotePlaySessionID)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetSessionInputConfigurationSettings)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamInput_SteamInput005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamInput005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamInput_SteamInput005_vtable, 47, "SteamInput005");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamInput_SteamInput006.h"

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_Init, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_SetInputActionManifestFilePath, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_RunFrame, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_BWaitForData, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_BNewDataAvailable, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetConnectedControllers, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_EnableDeviceCallbacks, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_EnableActionEventCallbacks, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetActionSetHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_ActivateActionSet, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetCurrentActionSet, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_ActivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_DeactivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_DeactivateAllActionSetLayers, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetActiveActionSetLayers, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetDigitalActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetDigitalActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetDigitalActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetStringForDigitalActionName, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetAnalogActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetAnalogActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetAnalogActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetGlyphPNGForActionOrigin, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetGlyphSVGForActionOrigin, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetStringForActionOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetStringForAnalogActionName, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_StopAnalogActionMomentum, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetMotionData, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_TriggerVibration, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_TriggerVibrationExtended, 28)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_TriggerSimpleHapticEvent, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_SetLEDColor, 28)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_Legacy_TriggerHapticPulse, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_Legacy_TriggerRepeatedHapticPulse, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_ShowBindingPanel, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetInputTypeForHandle, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetControllerForGamepadIndex, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetGamepadIndexForController, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetStringForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetGlyphForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetActionOriginFromXboxOrigin, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_TranslateActionOrigin, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetDeviceBindingRevision, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetRemotePlaySessionID, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetSessionInputConfigurationSettings, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_SetDualSenseTriggerEffect, 16)

bool __thiscall winISteamInput_SteamInput006_Init(struct w_steam_iface *_this, bool bExplicitlyCallRunFrame)
{
    struct cppISteamInput_SteamInput006_Init_params params =
    {
        .linux_side = _this->u_iface,
        .bExplicitlyCallRunFrame = bExplicitlyCallRunFrame,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_Init( &params );
    return params._ret;
}

bool __thiscall winISteamInput_SteamInput006_Shutdown(struct w_steam_iface *_this)
{
    struct cppISteamInput_SteamInput006_Shutdown_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_Shutdown( &params );
    return params._ret;
}

bool __thiscall winISteamInput_SteamInput006_SetInputActionManifestFilePath(struct w_steam_iface *_this, const char *pchInputActionManifestAbsolutePath)
{
    struct cppISteamInput_SteamInput006_SetInputActionManifestFilePath_params params =
    {
        .linux_side = _this->u_iface,
        .pchInputActionManifestAbsolutePath = pchInputActionManifestAbsolutePath,
    };
    params.pchInputActionManifestAbsolutePath = steamclient_dos_to_unix_path( pchInputActionManifestAbsolutePath, 0 );
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_SetInputActionManifestFilePath( &params );
    steamclient_free_path( params.pchInputActionManifestAbsolutePath );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput006_RunFrame(struct w_steam_iface *_this, bool bReservedValue)
{
    struct cppISteamInput_SteamInput006_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
        .bReservedValue = bReservedValue,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_RunFrame( &params );
}

bool __thiscall winISteamInput_SteamInput006_BWaitForData(struct w_steam_iface *_this, bool bWaitForever, uint32 unTimeout)
{
    struct cppISteamInput_SteamInput006_BWaitForData_params params =
    {
        .linux_side = _this->u_iface,
        .bWaitForever = bWaitForever,
        .unTimeout = unTimeout,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_BWaitForData( &params );
    return params._ret;
}

bool __thiscall winISteamInput_SteamInput006_BNewDataAvailable(struct w_steam_iface *_this)
{
    struct cppISteamInput_SteamInput006_BNewDataAvailable_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_BNewDataAvailable( &params );
    return params._ret;
}

int __thiscall winISteamInput_SteamInput006_GetConnectedControllers(struct w_steam_iface *_this, InputHandle_t *handlesOut)
{
    struct cppISteamInput_SteamInput006_GetConnectedControllers_params params =
    {
        .linux_side = _this->u_iface,
        .handlesOut = handlesOut,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetConnectedControllers( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput006_EnableDeviceCallbacks(struct w_steam_iface *_this)
{
    struct cppISteamInput_SteamInput006_EnableDeviceCallbacks_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_EnableDeviceCallbacks( &params );
}

void __thiscall winISteamInput_SteamInput006_EnableActionEventCallbacks(struct w_steam_iface *_this, SteamInputActionEventCallbackPointer pCallback)
{
    struct cppISteamInput_SteamInput006_EnableActionEventCallbacks_params params =
    {
        .linux_side = _this->u_iface,
        .pCallback = pCallback,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_EnableActionEventCallbacks( &params );
}

InputActionSetHandle_t __thiscall winISteamInput_SteamInput006_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    struct cppISteamInput_SteamInput006_GetActionSetHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionSetName = pszActionSetName,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetActionSetHandle( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput006_ActivateActionSet(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)
{
    struct cppISteamInput_SteamInput006_ActivateActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetHandle = actionSetHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_ActivateActionSet( &params );
}

InputActionSetHandle_t __thiscall winISteamInput_SteamInput006_GetCurrentActionSet(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput006_GetCurrentActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetCurrentActionSet( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput006_ActivateActionSetLayer(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    struct cppISteamInput_SteamInput006_ActivateActionSetLayer_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetLayerHandle = actionSetLayerHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_ActivateActionSetLayer( &params );
}

void __thiscall winISteamInput_SteamInput006_DeactivateActionSetLayer(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    struct cppISteamInput_SteamInput006_DeactivateActionSetLayer_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetLayerHandle = actionSetLayerHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_DeactivateActionSetLayer( &params );
}

void __thiscall winISteamInput_SteamInput006_DeactivateAllActionSetLayers(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput006_DeactivateAllActionSetLayers_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_DeactivateAllActionSetLayers( &params );
}

int __thiscall winISteamInput_SteamInput006_GetActiveActionSetLayers(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t *handlesOut)
{
    struct cppISteamInput_SteamInput006_GetActiveActionSetLayers_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .handlesOut = handlesOut,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetActiveActionSetLayers( &params );
    return params._ret;
}

InputDigitalActionHandle_t __thiscall winISteamInput_SteamInput006_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct cppISteamInput_SteamInput006_GetDigitalActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetDigitalActionHandle( &params );
    return params._ret;
}

InputDigitalActionData_t * __thiscall winISteamInput_SteamInput006_GetDigitalActionData(struct w_steam_iface *_this, InputDigitalActionData_t *_ret, InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)
{
    struct cppISteamInput_SteamInput006_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .inputHandle = inputHandle,
        .digitalActionHandle = digitalActionHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetDigitalActionData( &params );
    return params._ret;
}

int __thiscall winISteamInput_SteamInput006_GetDigitalActionOrigins(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin *originsOut)
{
    struct cppISteamInput_SteamInput006_GetDigitalActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetHandle = actionSetHandle,
        .digitalActionHandle = digitalActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetDigitalActionOrigins( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput006_GetStringForDigitalActionName(struct w_steam_iface *_this, InputDigitalActionHandle_t eActionHandle)
{
    struct cppISteamInput_SteamInput006_GetStringForDigitalActionName_params params =
    {
        .linux_side = _this->u_iface,
        .eActionHandle = eActionHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetStringForDigitalActionName( &params );
    return params._ret;
}

InputAnalogActionHandle_t __thiscall winISteamInput_SteamInput006_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct cppISteamInput_SteamInput006_GetAnalogActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetAnalogActionHandle( &params );
    return params._ret;
}

InputAnalogActionData_t * __thiscall winISteamInput_SteamInput006_GetAnalogActionData(struct w_steam_iface *_this, InputAnalogActionData_t *_ret, InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)
{
    struct cppISteamInput_SteamInput006_GetAnalogActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .inputHandle = inputHandle,
        .analogActionHandle = analogActionHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetAnalogActionData( &params );
    return params._ret;
}

int __thiscall winISteamInput_SteamInput006_GetAnalogActionOrigins(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin *originsOut)
{
    struct cppISteamInput_SteamInput006_GetAnalogActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .actionSetHandle = actionSetHandle,
        .analogActionHandle = analogActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetAnalogActionOrigins( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput006_GetGlyphPNGForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin, ESteamInputGlyphSize eSize, uint32 unFlags)
{
    struct cppISteamInput_SteamInput006_GetGlyphPNGForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .eSize = eSize,
        .unFlags = unFlags,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetGlyphPNGForActionOrigin( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput006_GetGlyphSVGForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin, uint32 unFlags)
{
    struct cppISteamInput_SteamInput006_GetGlyphSVGForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .unFlags = unFlags,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetGlyphSVGForActionOrigin( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy(struct w_steam_iface *_this, EInputActionOrigin eOrigin)
{
    struct cppISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput006_GetStringForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin)
{
    struct cppISteamInput_SteamInput006_GetStringForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetStringForActionOrigin( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput006_GetStringForAnalogActionName(struct w_steam_iface *_this, InputAnalogActionHandle_t eActionHandle)
{
    struct cppISteamInput_SteamInput006_GetStringForAnalogActionName_params params =
    {
        .linux_side = _this->u_iface,
        .eActionHandle = eActionHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetStringForAnalogActionName( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput006_StopAnalogActionMomentum(struct w_steam_iface *_this, InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)
{
    struct cppISteamInput_SteamInput006_StopAnalogActionMomentum_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_StopAnalogActionMomentum( &params );
}

InputMotionData_t * __thiscall winISteamInput_SteamInput006_GetMotionData(struct w_steam_iface *_this, InputMotionData_t *_ret, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput006_GetMotionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetMotionData( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput006_TriggerVibration(struct w_steam_iface *_this, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    struct cppISteamInput_SteamInput006_TriggerVibration_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .usLeftSpeed = usLeftSpeed,
        .usRightSpeed = usRightSpeed,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_TriggerVibration( &params );
}

void __thiscall winISteamInput_SteamInput006_TriggerVibrationExtended(struct w_steam_iface *_this, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed, unsigned short usLeftTriggerSpeed, unsigned short usRightTriggerSpeed)
{
    struct cppISteamInput_SteamInput006_TriggerVibrationExtended_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .usLeftSpeed = usLeftSpeed,
        .usRightSpeed = usRightSpeed,
        .usLeftTriggerSpeed = usLeftTriggerSpeed,
        .usRightTriggerSpeed = usRightTriggerSpeed,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_TriggerVibrationExtended( &params );
}

void __thiscall winISteamInput_SteamInput006_TriggerSimpleHapticEvent(struct w_steam_iface *_this, InputHandle_t inputHandle, EControllerHapticLocation eHapticLocation, uint8 nIntensity, char nGainDB, uint8 nOtherIntensity, char nOtherGainDB)
{
    struct cppISteamInput_SteamInput006_TriggerSimpleHapticEvent_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .eHapticLocation = eHapticLocation,
        .nIntensity = nIntensity,
        .nGainDB = nGainDB,
        .nOtherIntensity = nOtherIntensity,
        .nOtherGainDB = nOtherGainDB,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_TriggerSimpleHapticEvent( &params );
}

void __thiscall winISteamInput_SteamInput006_SetLEDColor(struct w_steam_iface *_this, InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    struct cppISteamInput_SteamInput006_SetLEDColor_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .nColorR = nColorR,
        .nColorG = nColorG,
        .nColorB = nColorB,
        .nFlags = nFlags,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_SetLEDColor( &params );
}

void __thiscall winISteamInput_SteamInput006_Legacy_TriggerHapticPulse(struct w_steam_iface *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    struct cppISteamInput_SteamInput006_Legacy_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_Legacy_TriggerHapticPulse( &params );
}

void __thiscall winISteamInput_SteamInput006_Legacy_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    struct cppISteamInput_SteamInput006_Legacy_TriggerRepeatedHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
        .usOffMicroSec = usOffMicroSec,
        .unRepeat = unRepeat,
        .nFlags = nFlags,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_Legacy_TriggerRepeatedHapticPulse( &params );
}

bool __thiscall winISteamInput_SteamInput006_ShowBindingPanel(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput006_ShowBindingPanel_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_ShowBindingPanel( &params );
    return params._ret;
}

ESteamInputType __thiscall winISteamInput_SteamInput006_GetInputTypeForHandle(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput006_GetInputTypeForHandle_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetInputTypeForHandle( &params );
    return params._ret;
}

InputHandle_t __thiscall winISteamInput_SteamInput006_GetControllerForGamepadIndex(struct w_steam_iface *_this, int nIndex)
{
    struct cppISteamInput_SteamInput006_GetControllerForGamepadIndex_params params =
    {
        .linux_side = _this->u_iface,
        .nIndex = nIndex,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetControllerForGamepadIndex( &params );
    return params._ret;
}

int __thiscall winISteamInput_SteamInput006_GetGamepadIndexForController(struct w_steam_iface *_this, InputHandle_t ulinputHandle)
{
    struct cppISteamInput_SteamInput006_GetGamepadIndexForController_params params =
    {
        .linux_side = _this->u_iface,
        .ulinputHandle = ulinputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetGamepadIndexForController( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput006_GetStringForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    struct cppISteamInput_SteamInput006_GetStringForXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetStringForXboxOrigin( &params );
    return params._ret;
}

const char * __thiscall winISteamInput_SteamInput006_GetGlyphForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    struct cppISteamInput_SteamInput006_GetGlyphForXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetGlyphForXboxOrigin( &params );
    return params._ret;
}

EInputActionOrigin __thiscall winISteamInput_SteamInput006_GetActionOriginFromXboxOrigin(struct w_steam_iface *_this, InputHandle_t inputHandle, EXboxOrigin eOrigin)
{
    struct cppISteamInput_SteamInput006_GetActionOriginFromXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetActionOriginFromXboxOrigin( &params );
    return params._ret;
}

EInputActionOrigin __thiscall winISteamInput_SteamInput006_TranslateActionOrigin(struct w_steam_iface *_this, ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)
{
    struct cppISteamInput_SteamInput006_TranslateActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eDestinationInputType = eDestinationInputType,
        .eSourceOrigin = eSourceOrigin,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_TranslateActionOrigin( &params );
    return params._ret;
}

bool __thiscall winISteamInput_SteamInput006_GetDeviceBindingRevision(struct w_steam_iface *_this, InputHandle_t inputHandle, int *pMajor, int *pMinor)
{
    struct cppISteamInput_SteamInput006_GetDeviceBindingRevision_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .pMajor = pMajor,
        .pMinor = pMinor,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetDeviceBindingRevision( &params );
    return params._ret;
}

uint32 __thiscall winISteamInput_SteamInput006_GetRemotePlaySessionID(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    struct cppISteamInput_SteamInput006_GetRemotePlaySessionID_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetRemotePlaySessionID( &params );
    return params._ret;
}

uint16 __thiscall winISteamInput_SteamInput006_GetSessionInputConfigurationSettings(struct w_steam_iface *_this)
{
    struct cppISteamInput_SteamInput006_GetSessionInputConfigurationSettings_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_GetSessionInputConfigurationSettings( &params );
    return params._ret;
}

void __thiscall winISteamInput_SteamInput006_SetDualSenseTriggerEffect(struct w_steam_iface *_this, InputHandle_t inputHandle, const ScePadTriggerEffectParam *pParam)
{
    struct cppISteamInput_SteamInput006_SetDualSenseTriggerEffect_params params =
    {
        .linux_side = _this->u_iface,
        .inputHandle = inputHandle,
        .pParam = pParam,
    };
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_SetDualSenseTriggerEffect( &params );
}

extern vtable_ptr winISteamInput_SteamInput006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamInput_SteamInput006,
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_Init)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_Shutdown)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_SetInputActionManifestFilePath)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_RunFrame)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_BWaitForData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_BNewDataAvailable)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetConnectedControllers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_EnableDeviceCallbacks)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_EnableActionEventCallbacks)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetActionSetHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_ActivateActionSet)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetCurrentActionSet)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_ActivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_DeactivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_DeactivateAllActionSetLayers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetActiveActionSetLayers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetDigitalActionHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetDigitalActionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetDigitalActionOrigins)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetStringForDigitalActionName)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetAnalogActionHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetAnalogActionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetAnalogActionOrigins)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetGlyphPNGForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetGlyphSVGForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetStringForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetStringForAnalogActionName)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_StopAnalogActionMomentum)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetMotionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_TriggerVibration)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_TriggerVibrationExtended)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_TriggerSimpleHapticEvent)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_SetLEDColor)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_Legacy_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_Legacy_TriggerRepeatedHapticPulse)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_ShowBindingPanel)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetInputTypeForHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetControllerForGamepadIndex)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetGamepadIndexForController)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetStringForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetGlyphForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetActionOriginFromXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_TranslateActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetDeviceBindingRevision)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetRemotePlaySessionID)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetSessionInputConfigurationSettings)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_SetDualSenseTriggerEffect)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamInput_SteamInput006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamInput006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamInput_SteamInput006_vtable, 48, "SteamInput006");
    r->u_iface = u_iface;
    return r;
}

