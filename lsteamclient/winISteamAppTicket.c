/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001.h"

DEFINE_THISCALL_WRAPPER(winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData, 32)

uint32 __thiscall winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData(struct w_steam_iface *_this, uint32 nAppID, void *pvBuffer, uint32 cbBufferLength, uint32 *piAppId, uint32 *piSteamId, uint32 *piSignature, uint32 *pcbSignature)
{
    struct cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
        .pvBuffer = pvBuffer,
        .cbBufferLength = cbBufferLength,
        .piAppId = piAppId,
        .piSteamId = piSteamId,
        .piSignature = piSignature,
        .pcbSignature = pcbSignature,
    };
    TRACE("%p\n", _this);
    cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData( &params );
    return params._ret;
}

extern vtable_ptr winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMAPPTICKET_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_vtable, 1, "STEAMAPPTICKET_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

