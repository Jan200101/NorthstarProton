/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamGameStats_SteamGameStats001.h"

DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_GetNewSession, 24)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_EndSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddSessionAttributeInt, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddSessionAttributeString, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddSessionAttributeFloat, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddNewRow, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_CommitRow, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_CommitOutstandingRows, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddRowAttributeInt, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddRowAtributeString, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddRowAttributeFloat, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddSessionAttributeInt64, 24)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddRowAttributeInt64, 24)

SteamAPICall_t __thiscall winISteamGameStats_SteamGameStats001_GetNewSession(struct w_steam_iface *_this, int8 nAccountType, uint64 ulAccountID, int32 nAppID, RTime32 rtTimeStarted)
{
    struct cppISteamGameStats_SteamGameStats001_GetNewSession_params params =
    {
        .linux_side = _this->u_iface,
        .nAccountType = nAccountType,
        .ulAccountID = ulAccountID,
        .nAppID = nAppID,
        .rtTimeStarted = rtTimeStarted,
    };
    TRACE("%p\n", _this);
    cppISteamGameStats_SteamGameStats001_GetNewSession( &params );
    return params._ret;
}

SteamAPICall_t __thiscall winISteamGameStats_SteamGameStats001_EndSession(struct w_steam_iface *_this, uint64 ulSessionID, RTime32 rtTimeEnded, int nReasonCode)
{
    struct cppISteamGameStats_SteamGameStats001_EndSession_params params =
    {
        .linux_side = _this->u_iface,
        .ulSessionID = ulSessionID,
        .rtTimeEnded = rtTimeEnded,
        .nReasonCode = nReasonCode,
    };
    TRACE("%p\n", _this);
    cppISteamGameStats_SteamGameStats001_EndSession( &params );
    return params._ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_AddSessionAttributeInt(struct w_steam_iface *_this, uint64 ulSessionID, const char *pstrName, int32 nData)
{
    struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt_params params =
    {
        .linux_side = _this->u_iface,
        .ulSessionID = ulSessionID,
        .pstrName = pstrName,
        .nData = nData,
    };
    TRACE("%p\n", _this);
    cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt( &params );
    return params._ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_AddSessionAttributeString(struct w_steam_iface *_this, uint64 ulSessionID, const char *pstrName, const char *pstrData)
{
    struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeString_params params =
    {
        .linux_side = _this->u_iface,
        .ulSessionID = ulSessionID,
        .pstrName = pstrName,
        .pstrData = pstrData,
    };
    TRACE("%p\n", _this);
    cppISteamGameStats_SteamGameStats001_AddSessionAttributeString( &params );
    return params._ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_AddSessionAttributeFloat(struct w_steam_iface *_this, uint64 ulSessionID, const char *pstrName, float fData)
{
    struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeFloat_params params =
    {
        .linux_side = _this->u_iface,
        .ulSessionID = ulSessionID,
        .pstrName = pstrName,
        .fData = fData,
    };
    TRACE("%p\n", _this);
    cppISteamGameStats_SteamGameStats001_AddSessionAttributeFloat( &params );
    return params._ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_AddNewRow(struct w_steam_iface *_this, uint64 *pulRowID, uint64 ulSessionID, const char *pstrTableName)
{
    struct cppISteamGameStats_SteamGameStats001_AddNewRow_params params =
    {
        .linux_side = _this->u_iface,
        .pulRowID = pulRowID,
        .ulSessionID = ulSessionID,
        .pstrTableName = pstrTableName,
    };
    TRACE("%p\n", _this);
    cppISteamGameStats_SteamGameStats001_AddNewRow( &params );
    return params._ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_CommitRow(struct w_steam_iface *_this, uint64 ulRowID)
{
    struct cppISteamGameStats_SteamGameStats001_CommitRow_params params =
    {
        .linux_side = _this->u_iface,
        .ulRowID = ulRowID,
    };
    TRACE("%p\n", _this);
    cppISteamGameStats_SteamGameStats001_CommitRow( &params );
    return params._ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_CommitOutstandingRows(struct w_steam_iface *_this, uint64 ulSessionID)
{
    struct cppISteamGameStats_SteamGameStats001_CommitOutstandingRows_params params =
    {
        .linux_side = _this->u_iface,
        .ulSessionID = ulSessionID,
    };
    TRACE("%p\n", _this);
    cppISteamGameStats_SteamGameStats001_CommitOutstandingRows( &params );
    return params._ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_AddRowAttributeInt(struct w_steam_iface *_this, uint64 ulRowID, const char *pstrName, int32 nData)
{
    struct cppISteamGameStats_SteamGameStats001_AddRowAttributeInt_params params =
    {
        .linux_side = _this->u_iface,
        .ulRowID = ulRowID,
        .pstrName = pstrName,
        .nData = nData,
    };
    TRACE("%p\n", _this);
    cppISteamGameStats_SteamGameStats001_AddRowAttributeInt( &params );
    return params._ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_AddRowAtributeString(struct w_steam_iface *_this, uint64 ulRowID, const char *pstrName, const char *pstrData)
{
    struct cppISteamGameStats_SteamGameStats001_AddRowAtributeString_params params =
    {
        .linux_side = _this->u_iface,
        .ulRowID = ulRowID,
        .pstrName = pstrName,
        .pstrData = pstrData,
    };
    TRACE("%p\n", _this);
    cppISteamGameStats_SteamGameStats001_AddRowAtributeString( &params );
    return params._ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_AddRowAttributeFloat(struct w_steam_iface *_this, uint64 ulRowID, const char *pstrName, float fData)
{
    struct cppISteamGameStats_SteamGameStats001_AddRowAttributeFloat_params params =
    {
        .linux_side = _this->u_iface,
        .ulRowID = ulRowID,
        .pstrName = pstrName,
        .fData = fData,
    };
    TRACE("%p\n", _this);
    cppISteamGameStats_SteamGameStats001_AddRowAttributeFloat( &params );
    return params._ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_AddSessionAttributeInt64(struct w_steam_iface *_this, uint64 ulSessionID, const char *pstrName, int64 llData)
{
    struct cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt64_params params =
    {
        .linux_side = _this->u_iface,
        .ulSessionID = ulSessionID,
        .pstrName = pstrName,
        .llData = llData,
    };
    TRACE("%p\n", _this);
    cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt64( &params );
    return params._ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_AddRowAttributeInt64(struct w_steam_iface *_this, uint64 ulRowID, const char *pstrName, int64 llData)
{
    struct cppISteamGameStats_SteamGameStats001_AddRowAttributeInt64_params params =
    {
        .linux_side = _this->u_iface,
        .ulRowID = ulRowID,
        .pstrName = pstrName,
        .llData = llData,
    };
    TRACE("%p\n", _this);
    cppISteamGameStats_SteamGameStats001_AddRowAttributeInt64( &params );
    return params._ret;
}

extern vtable_ptr winISteamGameStats_SteamGameStats001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamGameStats_SteamGameStats001,
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_GetNewSession)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_EndSession)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_AddSessionAttributeInt)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_AddSessionAttributeString)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_AddSessionAttributeFloat)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_AddNewRow)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_CommitRow)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_CommitOutstandingRows)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_AddRowAttributeInt)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_AddRowAtributeString)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_AddRowAttributeFloat)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_AddSessionAttributeInt64)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_AddRowAttributeInt64)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamGameStats_SteamGameStats001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameStats001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameStats_SteamGameStats001_vtable, 13, "SteamGameStats001");
    r->u_iface = u_iface;
    return r;
}

