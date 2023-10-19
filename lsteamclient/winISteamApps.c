/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION001.h"

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData, 20)

int __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData(struct w_steam_iface *_this, AppId_t nAppID, const char *pchKey, char *pchValue, int cchValueMax)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .pchKey = pchKey,
        .pchValue = pchValue,
        .cchValueMax = cchValueMax,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData( &params );
    return params._ret;
}

extern vtable_ptr winISteamApps_STEAMAPPS_INTERFACE_VERSION001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamApps_STEAMAPPS_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamApps_STEAMAPPS_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMAPPS_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamApps_STEAMAPPS_INTERFACE_VERSION001_vtable, 1, "STEAMAPPS_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION002.h"

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp, 8)

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned( &params );
    return params._ret;
}

const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage( &params );
    return params._ret;
}

const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp(struct w_steam_iface *_this, AppId_t appID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp( &params );
    return params._ret;
}

extern vtable_ptr winISteamApps_STEAMAPPS_INTERFACE_VERSION002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamApps_STEAMAPPS_INTERFACE_VERSION002,
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamApps_STEAMAPPS_INTERFACE_VERSION002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMAPPS_INTERFACE_VERSION002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamApps_STEAMAPPS_INTERFACE_VERSION002_vtable, 7, "STEAMAPPS_INTERFACE_VERSION002");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION003.h"

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsDlcInstalled, 8)

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned( &params );
    return params._ret;
}

const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage( &params );
    return params._ret;
}

const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp(struct w_steam_iface *_this, AppId_t appID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsDlcInstalled(struct w_steam_iface *_this, AppId_t appID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsDlcInstalled_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsDlcInstalled( &params );
    return params._ret;
}

extern vtable_ptr winISteamApps_STEAMAPPS_INTERFACE_VERSION003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamApps_STEAMAPPS_INTERFACE_VERSION003,
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsDlcInstalled)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamApps_STEAMAPPS_INTERFACE_VERSION003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMAPPS_INTERFACE_VERSION003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamApps_STEAMAPPS_INTERFACE_VERSION003_vtable, 8, "STEAMAPPS_INTERFACE_VERSION003");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION004.h"

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex, 24)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC, 8)

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned( &params );
    return params._ret;
}

const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage( &params );
    return params._ret;
}

const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp(struct w_steam_iface *_this, AppId_t appID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled(struct w_steam_iface *_this, AppId_t appID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled( &params );
    return params._ret;
}

uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend( &params );
    return params._ret;
}

int __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex(struct w_steam_iface *_this, int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .iDLC = iDLC,
        .pAppID = pAppID,
        .pbAvailable = pbAvailable,
        .pchName = pchName,
        .cchNameBufferSize = cchNameBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex( &params );
    return params._ret;
}

void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC( &params );
}

void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC( &params );
}

extern vtable_ptr winISteamApps_STEAMAPPS_INTERFACE_VERSION004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamApps_STEAMAPPS_INTERFACE_VERSION004,
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamApps_STEAMAPPS_INTERFACE_VERSION004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMAPPS_INTERFACE_VERSION004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamApps_STEAMAPPS_INTERFACE_VERSION004_vtable, 14, "STEAMAPPS_INTERFACE_VERSION004");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION005.h"

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribed, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsLowViolence, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsCybercafe, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsVACBanned, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentGameLanguage, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAvailableGameLanguages, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedApp, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsDlcInstalled, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetEarliestPurchaseUnixTime, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedFromFreeWeekend, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetDLCCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BGetDLCDataByIndex, 24)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_InstallDLC, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_UninstallDLC, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_RequestAppProofOfPurchaseKey, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentBetaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_MarkContentCorrupt, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetInstalledDepots, 12)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAppInstallDir, 16)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsAppInstalled, 8)

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribed(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribed_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribed( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsLowViolence(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsLowViolence_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsLowViolence( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsCybercafe(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsCybercafe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsCybercafe( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsVACBanned(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsVACBanned_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsVACBanned( &params );
    return params._ret;
}

const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentGameLanguage(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentGameLanguage_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentGameLanguage( &params );
    return params._ret;
}

const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAvailableGameLanguages(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAvailableGameLanguages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAvailableGameLanguages( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedApp(struct w_steam_iface *_this, AppId_t appID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedApp_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedApp( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsDlcInstalled(struct w_steam_iface *_this, AppId_t appID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsDlcInstalled_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsDlcInstalled( &params );
    return params._ret;
}

uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetEarliestPurchaseUnixTime(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetEarliestPurchaseUnixTime_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetEarliestPurchaseUnixTime( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedFromFreeWeekend(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedFromFreeWeekend_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedFromFreeWeekend( &params );
    return params._ret;
}

int __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetDLCCount(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetDLCCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetDLCCount( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BGetDLCDataByIndex(struct w_steam_iface *_this, int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BGetDLCDataByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .iDLC = iDLC,
        .pAppID = pAppID,
        .pbAvailable = pbAvailable,
        .pchName = pchName,
        .cchNameBufferSize = cchNameBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BGetDLCDataByIndex( &params );
    return params._ret;
}

void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_InstallDLC(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_InstallDLC_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_InstallDLC( &params );
}

void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_UninstallDLC(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_UninstallDLC_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_UninstallDLC( &params );
}

void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_RequestAppProofOfPurchaseKey(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_RequestAppProofOfPurchaseKey_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_RequestAppProofOfPurchaseKey( &params );
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentBetaName(struct w_steam_iface *_this, char *pchName, int cchNameBufferSize)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentBetaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .cchNameBufferSize = cchNameBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentBetaName( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_MarkContentCorrupt(struct w_steam_iface *_this, bool bMissingFilesOnly)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_MarkContentCorrupt_params params =
    {
        .linux_side = _this->u_iface,
        .bMissingFilesOnly = bMissingFilesOnly,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_MarkContentCorrupt( &params );
    return params._ret;
}

uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetInstalledDepots(struct w_steam_iface *_this, DepotId_t *pvecDepots, uint32 cMaxDepots)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetInstalledDepots_params params =
    {
        .linux_side = _this->u_iface,
        .pvecDepots = pvecDepots,
        .cMaxDepots = cMaxDepots,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetInstalledDepots( &params );
    return params._ret;
}

uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAppInstallDir(struct w_steam_iface *_this, AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAppInstallDir_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
        .pchFolder = pchFolder,
        .cchFolderBufferSize = cchFolderBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAppInstallDir( &params );
    params._ret = steamclient_unix_path_to_dos_path( params._ret, pchFolder, pchFolder, cchFolderBufferSize, 0 );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsAppInstalled(struct w_steam_iface *_this, AppId_t appID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsAppInstalled_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsAppInstalled( &params );
    return params._ret;
}

extern vtable_ptr winISteamApps_STEAMAPPS_INTERFACE_VERSION005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamApps_STEAMAPPS_INTERFACE_VERSION005,
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribed)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsLowViolence)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsCybercafe)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsVACBanned)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentGameLanguage)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAvailableGameLanguages)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedApp)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsDlcInstalled)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetEarliestPurchaseUnixTime)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedFromFreeWeekend)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetDLCCount)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BGetDLCDataByIndex)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_InstallDLC)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_UninstallDLC)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_RequestAppProofOfPurchaseKey)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentBetaName)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_MarkContentCorrupt)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetInstalledDepots)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAppInstallDir)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsAppInstalled)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamApps_STEAMAPPS_INTERFACE_VERSION005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMAPPS_INTERFACE_VERSION005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamApps_STEAMAPPS_INTERFACE_VERSION005_vtable, 20, "STEAMAPPS_INTERFACE_VERSION005");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION006.h"

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex, 24)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots, 16)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir, 16)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam, 8)

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned( &params );
    return params._ret;
}

const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage( &params );
    return params._ret;
}

const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp(struct w_steam_iface *_this, AppId_t appID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled(struct w_steam_iface *_this, AppId_t appID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled( &params );
    return params._ret;
}

uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend( &params );
    return params._ret;
}

int __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex(struct w_steam_iface *_this, int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .iDLC = iDLC,
        .pAppID = pAppID,
        .pbAvailable = pbAvailable,
        .pchName = pchName,
        .cchNameBufferSize = cchNameBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex( &params );
    return params._ret;
}

void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC( &params );
}

void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC( &params );
}

void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey( &params );
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName(struct w_steam_iface *_this, char *pchName, int cchNameBufferSize)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .cchNameBufferSize = cchNameBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt(struct w_steam_iface *_this, bool bMissingFilesOnly)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt_params params =
    {
        .linux_side = _this->u_iface,
        .bMissingFilesOnly = bMissingFilesOnly,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt( &params );
    return params._ret;
}

uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots(struct w_steam_iface *_this, AppId_t appID, DepotId_t *pvecDepots, uint32 cMaxDepots)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
        .pvecDepots = pvecDepots,
        .cMaxDepots = cMaxDepots,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots( &params );
    return params._ret;
}

uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir(struct w_steam_iface *_this, AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
        .pchFolder = pchFolder,
        .cchFolderBufferSize = cchFolderBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir( &params );
    params._ret = steamclient_unix_path_to_dos_path( params._ret, pchFolder, pchFolder, cchFolderBufferSize, 0 );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled(struct w_steam_iface *_this, AppId_t appID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner( &params );
    return params._ret;
}

const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam(struct w_steam_iface *_this, const char *pchKey)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam_params params =
    {
        .linux_side = _this->u_iface,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam( &params );
    return params._ret;
}

extern vtable_ptr winISteamApps_STEAMAPPS_INTERFACE_VERSION006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamApps_STEAMAPPS_INTERFACE_VERSION006,
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamApps_STEAMAPPS_INTERFACE_VERSION006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMAPPS_INTERFACE_VERSION006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamApps_STEAMAPPS_INTERFACE_VERSION006_vtable, 22, "STEAMAPPS_INTERFACE_VERSION006");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION007.h"

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex, 24)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots, 16)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir, 16)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress, 16)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId, 4)

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned( &params );
    return params._ret;
}

const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage( &params );
    return params._ret;
}

const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp(struct w_steam_iface *_this, AppId_t appID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled(struct w_steam_iface *_this, AppId_t appID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled( &params );
    return params._ret;
}

uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend( &params );
    return params._ret;
}

int __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex(struct w_steam_iface *_this, int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .iDLC = iDLC,
        .pAppID = pAppID,
        .pbAvailable = pbAvailable,
        .pchName = pchName,
        .cchNameBufferSize = cchNameBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex( &params );
    return params._ret;
}

void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC( &params );
}

void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC( &params );
}

void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey( &params );
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName(struct w_steam_iface *_this, char *pchName, int cchNameBufferSize)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .cchNameBufferSize = cchNameBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt(struct w_steam_iface *_this, bool bMissingFilesOnly)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt_params params =
    {
        .linux_side = _this->u_iface,
        .bMissingFilesOnly = bMissingFilesOnly,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt( &params );
    return params._ret;
}

uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots(struct w_steam_iface *_this, AppId_t appID, DepotId_t *pvecDepots, uint32 cMaxDepots)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
        .pvecDepots = pvecDepots,
        .cMaxDepots = cMaxDepots,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots( &params );
    return params._ret;
}

uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir(struct w_steam_iface *_this, AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
        .pchFolder = pchFolder,
        .cchFolderBufferSize = cchFolderBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir( &params );
    params._ret = steamclient_unix_path_to_dos_path( params._ret, pchFolder, pchFolder, cchFolderBufferSize, 0 );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled(struct w_steam_iface *_this, AppId_t appID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner( &params );
    return params._ret;
}

const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam(struct w_steam_iface *_this, const char *pchKey)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam_params params =
    {
        .linux_side = _this->u_iface,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress(struct w_steam_iface *_this, AppId_t nAppID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .punBytesDownloaded = punBytesDownloaded,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress( &params );
    return params._ret;
}

int __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId( &params );
    return params._ret;
}

extern vtable_ptr winISteamApps_STEAMAPPS_INTERFACE_VERSION007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamApps_STEAMAPPS_INTERFACE_VERSION007,
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamApps_STEAMAPPS_INTERFACE_VERSION007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMAPPS_INTERFACE_VERSION007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamApps_STEAMAPPS_INTERFACE_VERSION007_vtable, 24, "STEAMAPPS_INTERFACE_VERSION007");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamApps_STEAMAPPS_INTERFACE_VERSION008.h"

DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex, 24)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName, 12)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots, 16)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir, 16)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress, 16)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails, 8)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine, 12)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing, 4)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial, 12)
DEFINE_THISCALL_WRAPPER(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext, 8)

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned( &params );
    return params._ret;
}

const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage( &params );
    return params._ret;
}

const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp(struct w_steam_iface *_this, AppId_t appID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled(struct w_steam_iface *_this, AppId_t appID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled( &params );
    return params._ret;
}

uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend( &params );
    return params._ret;
}

int __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex(struct w_steam_iface *_this, int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .iDLC = iDLC,
        .pAppID = pAppID,
        .pbAvailable = pbAvailable,
        .pchName = pchName,
        .cchNameBufferSize = cchNameBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex( &params );
    return params._ret;
}

void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC( &params );
}

void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC( &params );
}

void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey( &params );
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName(struct w_steam_iface *_this, char *pchName, int cchNameBufferSize)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName_params params =
    {
        .linux_side = _this->u_iface,
        .pchName = pchName,
        .cchNameBufferSize = cchNameBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt(struct w_steam_iface *_this, bool bMissingFilesOnly)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt_params params =
    {
        .linux_side = _this->u_iface,
        .bMissingFilesOnly = bMissingFilesOnly,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt( &params );
    return params._ret;
}

uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots(struct w_steam_iface *_this, AppId_t appID, DepotId_t *pvecDepots, uint32 cMaxDepots)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
        .pvecDepots = pvecDepots,
        .cMaxDepots = cMaxDepots,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots( &params );
    return params._ret;
}

uint32 __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir(struct w_steam_iface *_this, AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
        .pchFolder = pchFolder,
        .cchFolderBufferSize = cchFolderBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir( &params );
    params._ret = steamclient_unix_path_to_dos_path( params._ret, pchFolder, pchFolder, cchFolderBufferSize, 0 );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled(struct w_steam_iface *_this, AppId_t appID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled_params params =
    {
        .linux_side = _this->u_iface,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner( &params );
    return params._ret;
}

const char * __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam(struct w_steam_iface *_this, const char *pchKey)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam_params params =
    {
        .linux_side = _this->u_iface,
        .pchKey = pchKey,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress(struct w_steam_iface *_this, AppId_t nAppID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .punBytesDownloaded = punBytesDownloaded,
        .punBytesTotal = punBytesTotal,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress( &params );
    return params._ret;
}

int __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId( &params );
    return params._ret;
}

void __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys( &params );
}

SteamAPICall_t __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails(struct w_steam_iface *_this, const char *pszFileName)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails_params params =
    {
        .linux_side = _this->u_iface,
        .pszFileName = pszFileName,
    };
    params.pszFileName = steamclient_dos_to_unix_path( pszFileName, 0 );
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails( &params );
    steamclient_free_path( params.pszFileName );
    return params._ret;
}

int __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine(struct w_steam_iface *_this, char *pszCommandLine, int cubCommandLine)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine_params params =
    {
        .linux_side = _this->u_iface,
        .pszCommandLine = pszCommandLine,
        .cubCommandLine = cubCommandLine,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing(struct w_steam_iface *_this)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial(struct w_steam_iface *_this, uint32 *punSecondsAllowed, uint32 *punSecondsPlayed)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial_params params =
    {
        .linux_side = _this->u_iface,
        .punSecondsAllowed = punSecondsAllowed,
        .punSecondsPlayed = punSecondsPlayed,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial( &params );
    return params._ret;
}

bool __thiscall winISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext(struct w_steam_iface *_this, AppId_t nAppID)
{
    struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext( &params );
    return params._ret;
}

extern vtable_ptr winISteamApps_STEAMAPPS_INTERFACE_VERSION008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamApps_STEAMAPPS_INTERFACE_VERSION008,
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial)
        VTABLE_ADD_FUNC(winISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamApps_STEAMAPPS_INTERFACE_VERSION008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMAPPS_INTERFACE_VERSION008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamApps_STEAMAPPS_INTERFACE_VERSION008_vtable, 30, "STEAMAPPS_INTERFACE_VERSION008");
    r->u_iface = u_iface;
    return r;
}

