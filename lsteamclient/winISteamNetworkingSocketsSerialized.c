/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002.h"

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg, 12)

void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous(struct w_steam_iface *_this, CSteamID steamIDRemote, uint32 unConnectionIDSrc, const void *pMsgRendezvous, uint32 cbRendezvous)
{
    struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
        .unConnectionIDSrc = unConnectionIDSrc,
        .pMsgRendezvous = pMsgRendezvous,
        .cbRendezvous = cbRendezvous,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous( &params );
}

void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure(struct w_steam_iface *_this, CSteamID steamIDRemote, uint32 unConnectionIDDest, uint32 nReason, const char *pszReason)
{
    struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
        .unConnectionIDDest = unConnectionIDDest,
        .nReason = nReason,
        .pszReason = pszReason,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure( &params );
}

SteamAPICall_t __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON(struct w_steam_iface *_this, void *buf, uint32 cbBuf)
{
    struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON_params params =
    {
        .linux_side = _this->u_iface,
        .buf = buf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket(struct w_steam_iface *_this, const void *pTicket, uint32 cbTicket)
{
    struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbTicket = cbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket( &params );
}

uint32 __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket(struct w_steam_iface *_this, uint32 idxTicket, void *buf, uint32 cbBuf)
{
    struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket_params params =
    {
        .linux_side = _this->u_iface,
        .idxTicket = idxTicket,
        .buf = buf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg(struct w_steam_iface *_this, const void *pMsg, uint32 cbMsg)
{
    struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg_params params =
    {
        .linux_side = _this->u_iface,
        .pMsg = pMsg,
        .cbMsg = cbMsg,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg( &params );
}

extern vtable_ptr winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002,
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PRendezvous)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_SendP2PConnectionFailure)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCertAsync)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetNetworkConfigJSON)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_CacheRelayTicket)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicketCount)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_GetCachedRelayTicket)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_PostConnectionStateMsg)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingSocketsSerialized002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized002_vtable, 8, "SteamNetworkingSocketsSerialized002");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003.h"

DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure, 24)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg, 12)

void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous(struct w_steam_iface *_this, CSteamID steamIDRemote, uint32 unConnectionIDSrc, const void *pMsgRendezvous, uint32 cbRendezvous)
{
    struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
        .unConnectionIDSrc = unConnectionIDSrc,
        .pMsgRendezvous = pMsgRendezvous,
        .cbRendezvous = cbRendezvous,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous( &params );
}

void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure(struct w_steam_iface *_this, CSteamID steamIDRemote, uint32 unConnectionIDDest, uint32 nReason, const char *pszReason)
{
    struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDRemote = steamIDRemote,
        .unConnectionIDDest = unConnectionIDDest,
        .nReason = nReason,
        .pszReason = pszReason,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure( &params );
}

SteamAPICall_t __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON(struct w_steam_iface *_this, void *buf, uint32 cbBuf, const char *pszLauncherPartner)
{
    struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON_params params =
    {
        .linux_side = _this->u_iface,
        .buf = buf,
        .cbBuf = cbBuf,
        .pszLauncherPartner = pszLauncherPartner,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket(struct w_steam_iface *_this, const void *pTicket, uint32 cbTicket)
{
    struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbTicket = cbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket( &params );
}

uint32 __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount(struct w_steam_iface *_this)
{
    struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount( &params );
    return params._ret;
}

int __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket(struct w_steam_iface *_this, uint32 idxTicket, void *buf, uint32 cbBuf)
{
    struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket_params params =
    {
        .linux_side = _this->u_iface,
        .idxTicket = idxTicket,
        .buf = buf,
        .cbBuf = cbBuf,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket( &params );
    return params._ret;
}

void __thiscall winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg(struct w_steam_iface *_this, const void *pMsg, uint32 cbMsg)
{
    struct cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg_params params =
    {
        .linux_side = _this->u_iface,
        .pMsg = pMsg,
        .cbMsg = cbMsg,
    };
    TRACE("%p\n", _this);
    cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg( &params );
}

extern vtable_ptr winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003,
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket)
        VTABLE_ADD_FUNC(winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamNetworkingSocketsSerialized003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_vtable, 8, "SteamNetworkingSocketsSerialized003");
    r->u_iface = u_iface;
    return r;
}

