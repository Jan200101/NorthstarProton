/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamUser_SteamUser004.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_LogOn, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_GetLogonState, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_BConnected, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_IsVACBanned, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_RequireShowVACBannedMessage, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_AcknowledgeVACBanning, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_NClientGameIDAdd, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_RemoveClientGame, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_SetClientGameServer, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_SetSteam2Ticket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_AddServerNetAddress, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_SetEmail, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_GetSteamGameConnectToken, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_SetRegistryString, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_GetRegistryString, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_SetRegistryInt, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_GetRegistryInt, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_InitiateGameConnection, 36)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_IsPrimaryChatDestination, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser004_RequestLegacyCDKey, 8)

HSteamUser __thiscall winISteamUser_SteamUser004_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser004_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_GetHSteamUser( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser004_LogOn(struct w_steam_iface *_this, CSteamID steamID)
{
    struct cppISteamUser_SteamUser004_LogOn_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_LogOn( &params );
}

void __thiscall winISteamUser_SteamUser004_LogOff(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser004_LogOff_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_LogOff( &params );
}

bool __thiscall winISteamUser_SteamUser004_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser004_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_BLoggedOn( &params );
    return params._ret;
}

ELogonState __thiscall winISteamUser_SteamUser004_GetLogonState(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser004_GetLogonState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_GetLogonState( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser004_BConnected(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser004_BConnected_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_BConnected( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser004_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser004_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_GetSteamID( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser004_IsVACBanned(struct w_steam_iface *_this, int nGameID)
{
    struct cppISteamUser_SteamUser004_IsVACBanned_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_IsVACBanned( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser004_RequireShowVACBannedMessage(struct w_steam_iface *_this, int nGameID)
{
    struct cppISteamUser_SteamUser004_RequireShowVACBannedMessage_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_RequireShowVACBannedMessage( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser004_AcknowledgeVACBanning(struct w_steam_iface *_this, int nGameID)
{
    struct cppISteamUser_SteamUser004_AcknowledgeVACBanning_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_AcknowledgeVACBanning( &params );
}

int __thiscall winISteamUser_SteamUser004_NClientGameIDAdd(struct w_steam_iface *_this, int nGameID)
{
    struct cppISteamUser_SteamUser004_NClientGameIDAdd_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_NClientGameIDAdd( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser004_RemoveClientGame(struct w_steam_iface *_this, int nClientGameID)
{
    struct cppISteamUser_SteamUser004_RemoveClientGame_params params =
    {
        .linux_side = _this->u_iface,
        .nClientGameID = nClientGameID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_RemoveClientGame( &params );
}

void __thiscall winISteamUser_SteamUser004_SetClientGameServer(struct w_steam_iface *_this, int nClientGameID, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser004_SetClientGameServer_params params =
    {
        .linux_side = _this->u_iface,
        .nClientGameID = nClientGameID,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_SetClientGameServer( &params );
}

void __thiscall winISteamUser_SteamUser004_SetSteam2Ticket(struct w_steam_iface *_this, uint8 *pubTicket, int cubTicket)
{
    struct cppISteamUser_SteamUser004_SetSteam2Ticket_params params =
    {
        .linux_side = _this->u_iface,
        .pubTicket = pubTicket,
        .cubTicket = cubTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_SetSteam2Ticket( &params );
}

void __thiscall winISteamUser_SteamUser004_AddServerNetAddress(struct w_steam_iface *_this, uint32 unIP, uint16 unPort)
{
    struct cppISteamUser_SteamUser004_AddServerNetAddress_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .unPort = unPort,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_AddServerNetAddress( &params );
}

bool __thiscall winISteamUser_SteamUser004_SetEmail(struct w_steam_iface *_this, const char *pchEmail)
{
    struct cppISteamUser_SteamUser004_SetEmail_params params =
    {
        .linux_side = _this->u_iface,
        .pchEmail = pchEmail,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_SetEmail( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser004_GetSteamGameConnectToken(struct w_steam_iface *_this, void *pBlob, int cbMaxBlob)
{
    struct cppISteamUser_SteamUser004_GetSteamGameConnectToken_params params =
    {
        .linux_side = _this->u_iface,
        .pBlob = pBlob,
        .cbMaxBlob = cbMaxBlob,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_GetSteamGameConnectToken( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser004_SetRegistryString(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, const char *pchValue)
{
    struct cppISteamUser_SteamUser004_SetRegistryString_params params =
    {
        .linux_side = _this->u_iface,
        .eRegistrySubTree = eRegistrySubTree,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_SetRegistryString( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser004_GetRegistryString(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, char *pchValue, int cbValue)
{
    struct cppISteamUser_SteamUser004_GetRegistryString_params params =
    {
        .linux_side = _this->u_iface,
        .eRegistrySubTree = eRegistrySubTree,
        .pchKey = pchKey,
        .pchValue = pchValue,
        .cbValue = cbValue,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_GetRegistryString( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser004_SetRegistryInt(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, int iValue)
{
    struct cppISteamUser_SteamUser004_SetRegistryInt_params params =
    {
        .linux_side = _this->u_iface,
        .eRegistrySubTree = eRegistrySubTree,
        .pchKey = pchKey,
        .iValue = iValue,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_SetRegistryInt( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser004_GetRegistryInt(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, int *piValue)
{
    struct cppISteamUser_SteamUser004_GetRegistryInt_params params =
    {
        .linux_side = _this->u_iface,
        .eRegistrySubTree = eRegistrySubTree,
        .pchKey = pchKey,
        .piValue = piValue,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_GetRegistryInt( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser004_InitiateGameConnection(struct w_steam_iface *_this, void *pBlob, int cbMaxBlob, CSteamID steamID, int nGameAppID, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    struct cppISteamUser_SteamUser004_InitiateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .pBlob = pBlob,
        .cbMaxBlob = cbMaxBlob,
        .steamID = steamID,
        .nGameAppID = nGameAppID,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_InitiateGameConnection( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser004_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser004_TerminateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_TerminateGameConnection( &params );
}

void __thiscall winISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination( &params );
}

bool __thiscall winISteamUser_SteamUser004_IsPrimaryChatDestination(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser004_IsPrimaryChatDestination_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_IsPrimaryChatDestination( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser004_RequestLegacyCDKey(struct w_steam_iface *_this, uint32 iAppID)
{
    struct cppISteamUser_SteamUser004_RequestLegacyCDKey_params params =
    {
        .linux_side = _this->u_iface,
        .iAppID = iAppID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser004_RequestLegacyCDKey( &params );
}

extern vtable_ptr winISteamUser_SteamUser004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser004,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_LogOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_LogOff)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_GetLogonState)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_BConnected)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_IsVACBanned)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_RequireShowVACBannedMessage)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_AcknowledgeVACBanning)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_NClientGameIDAdd)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_RemoveClientGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_SetClientGameServer)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_SetSteam2Ticket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_AddServerNetAddress)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_SetEmail)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_GetSteamGameConnectToken)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_SetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_GetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_SetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_GetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_IsPrimaryChatDestination)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser004_RequestLegacyCDKey)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser004_vtable, 26, "SteamUser004");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser005.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_LogOn, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetLogonState, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_BConnected, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_IsVACBanned, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_RequireShowVACBannedMessage, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_AcknowledgeVACBanning, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetSteam2Ticket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_AddServerNetAddress, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetEmail, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetRegistryString, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetRegistryString, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetRegistryInt, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetRegistryInt, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_InitiateGameConnection, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_IsPrimaryChatDestination, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_RequestLegacyCDKey, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SendGuestPassByEmail, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SendGuestPassByAccountID, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_AckGuestPass, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_RedeemGuestPass, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassToGiveCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassToRedeemCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassLastUpdateTime, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassToGiveInfo, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassToRedeemInfo, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_GetGuestPassToRedeemSenderName, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_AcknowledgeMessageByGID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetLanguage, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetAccountName, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetPassword, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser005_SetAccountCreationTime, 8)

HSteamUser __thiscall winISteamUser_SteamUser005_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser005_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_GetHSteamUser( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser005_LogOn(struct w_steam_iface *_this, CSteamID steamID)
{
    struct cppISteamUser_SteamUser005_LogOn_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_LogOn( &params );
}

void __thiscall winISteamUser_SteamUser005_LogOff(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser005_LogOff_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_LogOff( &params );
}

bool __thiscall winISteamUser_SteamUser005_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser005_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_BLoggedOn( &params );
    return params._ret;
}

ELogonState __thiscall winISteamUser_SteamUser005_GetLogonState(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser005_GetLogonState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_GetLogonState( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser005_BConnected(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser005_BConnected_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_BConnected( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser005_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser005_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_GetSteamID( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser005_IsVACBanned(struct w_steam_iface *_this, int nGameID)
{
    struct cppISteamUser_SteamUser005_IsVACBanned_params params =
    {
        .linux_side = _this->u_iface,
        .nGameID = nGameID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_IsVACBanned( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser005_RequireShowVACBannedMessage(struct w_steam_iface *_this, int nAppID)
{
    struct cppISteamUser_SteamUser005_RequireShowVACBannedMessage_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_RequireShowVACBannedMessage( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser005_AcknowledgeVACBanning(struct w_steam_iface *_this, int nAppID)
{
    struct cppISteamUser_SteamUser005_AcknowledgeVACBanning_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_AcknowledgeVACBanning( &params );
}

void __thiscall winISteamUser_SteamUser005_SetSteam2Ticket(struct w_steam_iface *_this, uint8 *pubTicket, int cubTicket)
{
    struct cppISteamUser_SteamUser005_SetSteam2Ticket_params params =
    {
        .linux_side = _this->u_iface,
        .pubTicket = pubTicket,
        .cubTicket = cubTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SetSteam2Ticket( &params );
}

void __thiscall winISteamUser_SteamUser005_AddServerNetAddress(struct w_steam_iface *_this, uint32 unIP, uint16 unPort)
{
    struct cppISteamUser_SteamUser005_AddServerNetAddress_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .unPort = unPort,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_AddServerNetAddress( &params );
}

bool __thiscall winISteamUser_SteamUser005_SetEmail(struct w_steam_iface *_this, const char *pchEmail)
{
    struct cppISteamUser_SteamUser005_SetEmail_params params =
    {
        .linux_side = _this->u_iface,
        .pchEmail = pchEmail,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SetEmail( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser005_SetRegistryString(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, const char *pchValue)
{
    struct cppISteamUser_SteamUser005_SetRegistryString_params params =
    {
        .linux_side = _this->u_iface,
        .eRegistrySubTree = eRegistrySubTree,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SetRegistryString( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser005_GetRegistryString(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, char *pchValue, int cbValue)
{
    struct cppISteamUser_SteamUser005_GetRegistryString_params params =
    {
        .linux_side = _this->u_iface,
        .eRegistrySubTree = eRegistrySubTree,
        .pchKey = pchKey,
        .pchValue = pchValue,
        .cbValue = cbValue,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_GetRegistryString( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser005_SetRegistryInt(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, int iValue)
{
    struct cppISteamUser_SteamUser005_SetRegistryInt_params params =
    {
        .linux_side = _this->u_iface,
        .eRegistrySubTree = eRegistrySubTree,
        .pchKey = pchKey,
        .iValue = iValue,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SetRegistryInt( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser005_GetRegistryInt(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, int *piValue)
{
    struct cppISteamUser_SteamUser005_GetRegistryInt_params params =
    {
        .linux_side = _this->u_iface,
        .eRegistrySubTree = eRegistrySubTree,
        .pchKey = pchKey,
        .piValue = piValue,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_GetRegistryInt( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser005_InitiateGameConnection(struct w_steam_iface *_this, void *pBlob, int cbMaxBlob, CSteamID steamID, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    struct cppISteamUser_SteamUser005_InitiateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .pBlob = pBlob,
        .cbMaxBlob = cbMaxBlob,
        .steamID = steamID,
        .gameID = gameID,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_InitiateGameConnection( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser005_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser005_TerminateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_TerminateGameConnection( &params );
}

void __thiscall winISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination( &params );
}

bool __thiscall winISteamUser_SteamUser005_IsPrimaryChatDestination(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser005_IsPrimaryChatDestination_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_IsPrimaryChatDestination( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser005_RequestLegacyCDKey(struct w_steam_iface *_this, uint32 nAppID)
{
    struct cppISteamUser_SteamUser005_RequestLegacyCDKey_params params =
    {
        .linux_side = _this->u_iface,
        .nAppID = nAppID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_RequestLegacyCDKey( &params );
}

bool __thiscall winISteamUser_SteamUser005_SendGuestPassByEmail(struct w_steam_iface *_this, const char *pchEmailAccount, GID_t gidGuestPassID, bool bResending)
{
    struct cppISteamUser_SteamUser005_SendGuestPassByEmail_params params =
    {
        .linux_side = _this->u_iface,
        .pchEmailAccount = pchEmailAccount,
        .gidGuestPassID = gidGuestPassID,
        .bResending = bResending,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SendGuestPassByEmail( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser005_SendGuestPassByAccountID(struct w_steam_iface *_this, uint32 uAccountID, GID_t gidGuestPassID, bool bResending)
{
    struct cppISteamUser_SteamUser005_SendGuestPassByAccountID_params params =
    {
        .linux_side = _this->u_iface,
        .uAccountID = uAccountID,
        .gidGuestPassID = gidGuestPassID,
        .bResending = bResending,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SendGuestPassByAccountID( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser005_AckGuestPass(struct w_steam_iface *_this, const char *pchGuestPassCode)
{
    struct cppISteamUser_SteamUser005_AckGuestPass_params params =
    {
        .linux_side = _this->u_iface,
        .pchGuestPassCode = pchGuestPassCode,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_AckGuestPass( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser005_RedeemGuestPass(struct w_steam_iface *_this, const char *pchGuestPassCode)
{
    struct cppISteamUser_SteamUser005_RedeemGuestPass_params params =
    {
        .linux_side = _this->u_iface,
        .pchGuestPassCode = pchGuestPassCode,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_RedeemGuestPass( &params );
    return params._ret;
}

uint32 __thiscall winISteamUser_SteamUser005_GetGuestPassToGiveCount(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser005_GetGuestPassToGiveCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_GetGuestPassToGiveCount( &params );
    return params._ret;
}

uint32 __thiscall winISteamUser_SteamUser005_GetGuestPassToRedeemCount(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser005_GetGuestPassToRedeemCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_GetGuestPassToRedeemCount( &params );
    return params._ret;
}

RTime32 __thiscall winISteamUser_SteamUser005_GetGuestPassLastUpdateTime(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser005_GetGuestPassLastUpdateTime_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_GetGuestPassLastUpdateTime( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser005_GetGuestPassToGiveInfo(struct w_steam_iface *_this, uint32 nPassIndex, GID_t *pgidGuestPassID, PackageId_t *pnPackageID, RTime32 *pRTime32Created, RTime32 *pRTime32Expiration, RTime32 *pRTime32Sent, RTime32 *pRTime32Redeemed, char *pchRecipientAddress, int cRecipientAddressSize)
{
    struct cppISteamUser_SteamUser005_GetGuestPassToGiveInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPassIndex = nPassIndex,
        .pgidGuestPassID = pgidGuestPassID,
        .pnPackageID = pnPackageID,
        .pRTime32Created = pRTime32Created,
        .pRTime32Expiration = pRTime32Expiration,
        .pRTime32Sent = pRTime32Sent,
        .pRTime32Redeemed = pRTime32Redeemed,
        .pchRecipientAddress = pchRecipientAddress,
        .cRecipientAddressSize = cRecipientAddressSize,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_GetGuestPassToGiveInfo( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser005_GetGuestPassToRedeemInfo(struct w_steam_iface *_this, uint32 nPassIndex, GID_t *pgidGuestPassID, PackageId_t *pnPackageID, RTime32 *pRTime32Created, RTime32 *pRTime32Expiration, RTime32 *pRTime32Sent, RTime32 *pRTime32Redeemed)
{
    struct cppISteamUser_SteamUser005_GetGuestPassToRedeemInfo_params params =
    {
        .linux_side = _this->u_iface,
        .nPassIndex = nPassIndex,
        .pgidGuestPassID = pgidGuestPassID,
        .pnPackageID = pnPackageID,
        .pRTime32Created = pRTime32Created,
        .pRTime32Expiration = pRTime32Expiration,
        .pRTime32Sent = pRTime32Sent,
        .pRTime32Redeemed = pRTime32Redeemed,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_GetGuestPassToRedeemInfo( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress(struct w_steam_iface *_this, uint32 nPassIndex, char *pchSenderAddress, int cSenderAddressSize)
{
    struct cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress_params params =
    {
        .linux_side = _this->u_iface,
        .nPassIndex = nPassIndex,
        .pchSenderAddress = pchSenderAddress,
        .cSenderAddressSize = cSenderAddressSize,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser005_GetGuestPassToRedeemSenderName(struct w_steam_iface *_this, uint32 nPassIndex, char *pchSenderName, int cSenderNameSize)
{
    struct cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderName_params params =
    {
        .linux_side = _this->u_iface,
        .nPassIndex = nPassIndex,
        .pchSenderName = pchSenderName,
        .cSenderNameSize = cSenderNameSize,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_GetGuestPassToRedeemSenderName( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser005_AcknowledgeMessageByGID(struct w_steam_iface *_this, const char *pchMessageGID)
{
    struct cppISteamUser_SteamUser005_AcknowledgeMessageByGID_params params =
    {
        .linux_side = _this->u_iface,
        .pchMessageGID = pchMessageGID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_AcknowledgeMessageByGID( &params );
}

bool __thiscall winISteamUser_SteamUser005_SetLanguage(struct w_steam_iface *_this, const char *pchLanguage)
{
    struct cppISteamUser_SteamUser005_SetLanguage_params params =
    {
        .linux_side = _this->u_iface,
        .pchLanguage = pchLanguage,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SetLanguage( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser005_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    struct cppISteamUser_SteamUser005_TrackAppUsageEvent_params params =
    {
        .linux_side = _this->u_iface,
        .gameID = gameID,
        .eAppUsageEvent = eAppUsageEvent,
        .pchExtraInfo = pchExtraInfo,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_TrackAppUsageEvent( &params );
}

void __thiscall winISteamUser_SteamUser005_SetAccountName(struct w_steam_iface *_this, const char *pchAccountName)
{
    struct cppISteamUser_SteamUser005_SetAccountName_params params =
    {
        .linux_side = _this->u_iface,
        .pchAccountName = pchAccountName,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SetAccountName( &params );
}

void __thiscall winISteamUser_SteamUser005_SetPassword(struct w_steam_iface *_this, const char *pchPassword)
{
    struct cppISteamUser_SteamUser005_SetPassword_params params =
    {
        .linux_side = _this->u_iface,
        .pchPassword = pchPassword,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SetPassword( &params );
}

void __thiscall winISteamUser_SteamUser005_SetAccountCreationTime(struct w_steam_iface *_this, RTime32 rt)
{
    struct cppISteamUser_SteamUser005_SetAccountCreationTime_params params =
    {
        .linux_side = _this->u_iface,
        .rt = rt,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser005_SetAccountCreationTime( &params );
}

extern vtable_ptr winISteamUser_SteamUser005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser005,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_LogOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_LogOff)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetLogonState)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_BConnected)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_IsVACBanned)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_RequireShowVACBannedMessage)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_AcknowledgeVACBanning)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetSteam2Ticket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_AddServerNetAddress)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetEmail)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetSelfAsPrimaryChatDestination)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_IsPrimaryChatDestination)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_RequestLegacyCDKey)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SendGuestPassByEmail)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SendGuestPassByAccountID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_AckGuestPass)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_RedeemGuestPass)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassToGiveCount)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassToRedeemCount)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassLastUpdateTime)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassToGiveInfo)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassToRedeemInfo)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassToRedeemSenderAddress)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_GetGuestPassToRedeemSenderName)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_AcknowledgeMessageByGID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetLanguage)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetAccountName)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetPassword)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser005_SetAccountCreationTime)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser005_vtable, 39, "SteamUser005");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser006.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_LogOn, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_SetRegistryString, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_GetRegistryString, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_SetRegistryInt, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_GetRegistryInt, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_InitiateGameConnection, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser006_TrackAppUsageEvent, 20)

HSteamUser __thiscall winISteamUser_SteamUser006_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser006_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_GetHSteamUser( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser006_LogOn(struct w_steam_iface *_this, CSteamID steamID)
{
    struct cppISteamUser_SteamUser006_LogOn_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_LogOn( &params );
}

void __thiscall winISteamUser_SteamUser006_LogOff(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser006_LogOff_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_LogOff( &params );
}

bool __thiscall winISteamUser_SteamUser006_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser006_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_BLoggedOn( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser006_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser006_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_GetSteamID( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser006_SetRegistryString(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, const char *pchValue)
{
    struct cppISteamUser_SteamUser006_SetRegistryString_params params =
    {
        .linux_side = _this->u_iface,
        .eRegistrySubTree = eRegistrySubTree,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_SetRegistryString( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser006_GetRegistryString(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, char *pchValue, int cbValue)
{
    struct cppISteamUser_SteamUser006_GetRegistryString_params params =
    {
        .linux_side = _this->u_iface,
        .eRegistrySubTree = eRegistrySubTree,
        .pchKey = pchKey,
        .pchValue = pchValue,
        .cbValue = cbValue,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_GetRegistryString( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser006_SetRegistryInt(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, int iValue)
{
    struct cppISteamUser_SteamUser006_SetRegistryInt_params params =
    {
        .linux_side = _this->u_iface,
        .eRegistrySubTree = eRegistrySubTree,
        .pchKey = pchKey,
        .iValue = iValue,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_SetRegistryInt( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser006_GetRegistryInt(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, int *piValue)
{
    struct cppISteamUser_SteamUser006_GetRegistryInt_params params =
    {
        .linux_side = _this->u_iface,
        .eRegistrySubTree = eRegistrySubTree,
        .pchKey = pchKey,
        .piValue = piValue,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_GetRegistryInt( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser006_InitiateGameConnection(struct w_steam_iface *_this, void *pBlob, int cbMaxBlob, CSteamID steamID, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    struct cppISteamUser_SteamUser006_InitiateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .pBlob = pBlob,
        .cbMaxBlob = cbMaxBlob,
        .steamID = steamID,
        .gameID = gameID,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_InitiateGameConnection( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser006_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser006_TerminateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_TerminateGameConnection( &params );
}

void __thiscall winISteamUser_SteamUser006_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    struct cppISteamUser_SteamUser006_TrackAppUsageEvent_params params =
    {
        .linux_side = _this->u_iface,
        .gameID = gameID,
        .eAppUsageEvent = eAppUsageEvent,
        .pchExtraInfo = pchExtraInfo,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser006_TrackAppUsageEvent( &params );
}

extern vtable_ptr winISteamUser_SteamUser006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser006,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_LogOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_LogOff)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_SetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_GetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_SetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_GetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser006_TrackAppUsageEvent)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser006_vtable, 12, "SteamUser006");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser007.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_LogOn, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_LogOff, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_SetRegistryString, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_GetRegistryString, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_SetRegistryInt, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_GetRegistryInt, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_InitiateGameConnection, 48)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser007_RefreshSteam2Login, 4)

HSteamUser __thiscall winISteamUser_SteamUser007_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser007_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_GetHSteamUser( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser007_LogOn(struct w_steam_iface *_this, CSteamID steamID)
{
    struct cppISteamUser_SteamUser007_LogOn_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_LogOn( &params );
}

void __thiscall winISteamUser_SteamUser007_LogOff(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser007_LogOff_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_LogOff( &params );
}

bool __thiscall winISteamUser_SteamUser007_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser007_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_BLoggedOn( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser007_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser007_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_GetSteamID( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser007_SetRegistryString(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, const char *pchValue)
{
    struct cppISteamUser_SteamUser007_SetRegistryString_params params =
    {
        .linux_side = _this->u_iface,
        .eRegistrySubTree = eRegistrySubTree,
        .pchKey = pchKey,
        .pchValue = pchValue,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_SetRegistryString( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser007_GetRegistryString(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, char *pchValue, int cbValue)
{
    struct cppISteamUser_SteamUser007_GetRegistryString_params params =
    {
        .linux_side = _this->u_iface,
        .eRegistrySubTree = eRegistrySubTree,
        .pchKey = pchKey,
        .pchValue = pchValue,
        .cbValue = cbValue,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_GetRegistryString( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser007_SetRegistryInt(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, int iValue)
{
    struct cppISteamUser_SteamUser007_SetRegistryInt_params params =
    {
        .linux_side = _this->u_iface,
        .eRegistrySubTree = eRegistrySubTree,
        .pchKey = pchKey,
        .iValue = iValue,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_SetRegistryInt( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser007_GetRegistryInt(struct w_steam_iface *_this, EConfigSubTree eRegistrySubTree, const char *pchKey, int *piValue)
{
    struct cppISteamUser_SteamUser007_GetRegistryInt_params params =
    {
        .linux_side = _this->u_iface,
        .eRegistrySubTree = eRegistrySubTree,
        .pchKey = pchKey,
        .piValue = piValue,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_GetRegistryInt( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser007_InitiateGameConnection(struct w_steam_iface *_this, void *pBlob, int cbMaxBlob, CSteamID steamID, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure, void *pvSteam2GetEncryptionKey, int cbSteam2GetEncryptionKey)
{
    struct cppISteamUser_SteamUser007_InitiateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .pBlob = pBlob,
        .cbMaxBlob = cbMaxBlob,
        .steamID = steamID,
        .gameID = gameID,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
        .pvSteam2GetEncryptionKey = pvSteam2GetEncryptionKey,
        .cbSteam2GetEncryptionKey = cbSteam2GetEncryptionKey,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_InitiateGameConnection( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser007_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser007_TerminateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_TerminateGameConnection( &params );
}

void __thiscall winISteamUser_SteamUser007_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    struct cppISteamUser_SteamUser007_TrackAppUsageEvent_params params =
    {
        .linux_side = _this->u_iface,
        .gameID = gameID,
        .eAppUsageEvent = eAppUsageEvent,
        .pchExtraInfo = pchExtraInfo,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_TrackAppUsageEvent( &params );
}

void __thiscall winISteamUser_SteamUser007_RefreshSteam2Login(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser007_RefreshSteam2Login_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser007_RefreshSteam2Login( &params );
}

extern vtable_ptr winISteamUser_SteamUser007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser007,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_LogOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_LogOff)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_SetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_GetRegistryString)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_SetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_GetRegistryInt)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser007_RefreshSteam2Login)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser007_vtable, 13, "SteamUser007");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser008.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_InitiateGameConnection, 48)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser008_RefreshSteam2Login, 4)

HSteamUser __thiscall winISteamUser_SteamUser008_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser008_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser008_GetHSteamUser( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser008_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser008_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser008_BLoggedOn( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser008_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser008_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser008_GetSteamID( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser008_InitiateGameConnection(struct w_steam_iface *_this, void *pBlob, int cbMaxBlob, CSteamID steamID, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure, void *pvSteam2GetEncryptionKey, int cbSteam2GetEncryptionKey)
{
    struct cppISteamUser_SteamUser008_InitiateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .pBlob = pBlob,
        .cbMaxBlob = cbMaxBlob,
        .steamID = steamID,
        .gameID = gameID,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
        .pvSteam2GetEncryptionKey = pvSteam2GetEncryptionKey,
        .cbSteam2GetEncryptionKey = cbSteam2GetEncryptionKey,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser008_InitiateGameConnection( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser008_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser008_TerminateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser008_TerminateGameConnection( &params );
}

void __thiscall winISteamUser_SteamUser008_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    struct cppISteamUser_SteamUser008_TrackAppUsageEvent_params params =
    {
        .linux_side = _this->u_iface,
        .gameID = gameID,
        .eAppUsageEvent = eAppUsageEvent,
        .pchExtraInfo = pchExtraInfo,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser008_TrackAppUsageEvent( &params );
}

void __thiscall winISteamUser_SteamUser008_RefreshSteam2Login(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser008_RefreshSteam2Login_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser008_RefreshSteam2Login( &params );
}

extern vtable_ptr winISteamUser_SteamUser008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser008,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser008_RefreshSteam2Login)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser008_vtable, 7, "SteamUser008");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser009.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_InitiateGameConnection, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser009_RefreshSteam2Login, 4)

HSteamUser __thiscall winISteamUser_SteamUser009_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser009_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser009_GetHSteamUser( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser009_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser009_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser009_BLoggedOn( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser009_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser009_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser009_GetSteamID( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser009_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, CGameID gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    struct cppISteamUser_SteamUser009_InitiateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthBlob = pAuthBlob,
        .cbMaxAuthBlob = cbMaxAuthBlob,
        .steamIDGameServer = steamIDGameServer,
        .gameID = gameID,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser009_InitiateGameConnection( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser009_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser009_TerminateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser009_TerminateGameConnection( &params );
}

void __thiscall winISteamUser_SteamUser009_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    struct cppISteamUser_SteamUser009_TrackAppUsageEvent_params params =
    {
        .linux_side = _this->u_iface,
        .gameID = gameID,
        .eAppUsageEvent = eAppUsageEvent,
        .pchExtraInfo = pchExtraInfo,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser009_TrackAppUsageEvent( &params );
}

void __thiscall winISteamUser_SteamUser009_RefreshSteam2Login(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser009_RefreshSteam2Login_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser009_RefreshSteam2Login( &params );
}

extern vtable_ptr winISteamUser_SteamUser009_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser009,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser009_RefreshSteam2Login)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser009_vtable, 7, "SteamUser009");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser010.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser010_TrackAppUsageEvent, 20)

HSteamUser __thiscall winISteamUser_SteamUser010_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser010_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser010_GetHSteamUser( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser010_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser010_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser010_BLoggedOn( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser010_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser010_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser010_GetSteamID( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser010_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    struct cppISteamUser_SteamUser010_InitiateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthBlob = pAuthBlob,
        .cbMaxAuthBlob = cbMaxAuthBlob,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser010_InitiateGameConnection( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser010_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser010_TerminateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser010_TerminateGameConnection( &params );
}

void __thiscall winISteamUser_SteamUser010_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    struct cppISteamUser_SteamUser010_TrackAppUsageEvent_params params =
    {
        .linux_side = _this->u_iface,
        .gameID = gameID,
        .eAppUsageEvent = eAppUsageEvent,
        .pchExtraInfo = pchExtraInfo,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser010_TrackAppUsageEvent( &params );
}

extern vtable_ptr winISteamUser_SteamUser010_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser010,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser010_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser010_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser010_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser010_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser010_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser010_TrackAppUsageEvent)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser010(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser010");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser010_vtable, 6, "SteamUser010");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser011.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_GetCompressedVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser011_DecompressVoice, 24)

HSteamUser __thiscall winISteamUser_SteamUser011_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser011_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser011_GetHSteamUser( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser011_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser011_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser011_BLoggedOn( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser011_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser011_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser011_GetSteamID( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser011_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    struct cppISteamUser_SteamUser011_InitiateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthBlob = pAuthBlob,
        .cbMaxAuthBlob = cbMaxAuthBlob,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser011_InitiateGameConnection( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser011_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser011_TerminateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser011_TerminateGameConnection( &params );
}

void __thiscall winISteamUser_SteamUser011_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    struct cppISteamUser_SteamUser011_TrackAppUsageEvent_params params =
    {
        .linux_side = _this->u_iface,
        .gameID = gameID,
        .eAppUsageEvent = eAppUsageEvent,
        .pchExtraInfo = pchExtraInfo,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser011_TrackAppUsageEvent( &params );
}

bool __thiscall winISteamUser_SteamUser011_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    struct cppISteamUser_SteamUser011_GetUserDataFolder_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .cubBuffer = cubBuffer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser011_GetUserDataFolder( &params );
    steamclient_unix_path_to_dos_path( params._ret, pchBuffer, pchBuffer, cubBuffer, 0 );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser011_StartVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser011_StartVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser011_StartVoiceRecording( &params );
}

void __thiscall winISteamUser_SteamUser011_StopVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser011_StopVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser011_StopVoiceRecording( &params );
}

EVoiceResult __thiscall winISteamUser_SteamUser011_GetCompressedVoice(struct w_steam_iface *_this, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten)
{
    struct cppISteamUser_SteamUser011_GetCompressedVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser011_GetCompressedVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser011_DecompressVoice(struct w_steam_iface *_this, void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten)
{
    struct cppISteamUser_SteamUser011_DecompressVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pCompressed = pCompressed,
        .cbCompressed = cbCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser011_DecompressVoice( &params );
    return params._ret;
}

extern vtable_ptr winISteamUser_SteamUser011_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser011,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_GetCompressedVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser011_DecompressVoice)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser011(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser011");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser011_vtable, 11, "SteamUser011");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser012.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_GetCompressedVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_DecompressVoice, 24)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser012_UserHasLicenseForApp, 16)

HSteamUser __thiscall winISteamUser_SteamUser012_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser012_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_GetHSteamUser( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser012_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser012_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_BLoggedOn( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser012_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser012_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_GetSteamID( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser012_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    struct cppISteamUser_SteamUser012_InitiateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthBlob = pAuthBlob,
        .cbMaxAuthBlob = cbMaxAuthBlob,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_InitiateGameConnection( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser012_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser012_TerminateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_TerminateGameConnection( &params );
}

void __thiscall winISteamUser_SteamUser012_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    struct cppISteamUser_SteamUser012_TrackAppUsageEvent_params params =
    {
        .linux_side = _this->u_iface,
        .gameID = gameID,
        .eAppUsageEvent = eAppUsageEvent,
        .pchExtraInfo = pchExtraInfo,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_TrackAppUsageEvent( &params );
}

bool __thiscall winISteamUser_SteamUser012_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    struct cppISteamUser_SteamUser012_GetUserDataFolder_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .cubBuffer = cubBuffer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_GetUserDataFolder( &params );
    steamclient_unix_path_to_dos_path( params._ret, pchBuffer, pchBuffer, cubBuffer, 0 );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser012_StartVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser012_StartVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_StartVoiceRecording( &params );
}

void __thiscall winISteamUser_SteamUser012_StopVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser012_StopVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_StopVoiceRecording( &params );
}

EVoiceResult __thiscall winISteamUser_SteamUser012_GetCompressedVoice(struct w_steam_iface *_this, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten)
{
    struct cppISteamUser_SteamUser012_GetCompressedVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_GetCompressedVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser012_DecompressVoice(struct w_steam_iface *_this, void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten)
{
    struct cppISteamUser_SteamUser012_DecompressVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pCompressed = pCompressed,
        .cbCompressed = cbCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_DecompressVoice( &params );
    return params._ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser012_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser012_GetAuthSessionTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_GetAuthSessionTicket( &params );
    return params._ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser012_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    struct cppISteamUser_SteamUser012_BeginAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthTicket = pAuthTicket,
        .cbAuthTicket = cbAuthTicket,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_BeginAuthSession( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser012_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    struct cppISteamUser_SteamUser012_EndAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_EndAuthSession( &params );
}

void __thiscall winISteamUser_SteamUser012_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    struct cppISteamUser_SteamUser012_CancelAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .hAuthTicket = hAuthTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_CancelAuthTicket( &params );
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser012_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    struct cppISteamUser_SteamUser012_UserHasLicenseForApp_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser012_UserHasLicenseForApp( &params );
    return params._ret;
}

extern vtable_ptr winISteamUser_SteamUser012_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser012,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_GetCompressedVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser012_UserHasLicenseForApp)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser012(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser012");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser012_vtable, 16, "SteamUser012");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser013.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_GetAvailableVoice, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_GetVoice, 36)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_DecompressVoice, 24)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser013_UserHasLicenseForApp, 16)

HSteamUser __thiscall winISteamUser_SteamUser013_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser013_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_GetHSteamUser( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser013_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser013_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_BLoggedOn( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser013_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser013_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_GetSteamID( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser013_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    struct cppISteamUser_SteamUser013_InitiateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthBlob = pAuthBlob,
        .cbMaxAuthBlob = cbMaxAuthBlob,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_InitiateGameConnection( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser013_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser013_TerminateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_TerminateGameConnection( &params );
}

void __thiscall winISteamUser_SteamUser013_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    struct cppISteamUser_SteamUser013_TrackAppUsageEvent_params params =
    {
        .linux_side = _this->u_iface,
        .gameID = gameID,
        .eAppUsageEvent = eAppUsageEvent,
        .pchExtraInfo = pchExtraInfo,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_TrackAppUsageEvent( &params );
}

bool __thiscall winISteamUser_SteamUser013_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    struct cppISteamUser_SteamUser013_GetUserDataFolder_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .cubBuffer = cubBuffer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_GetUserDataFolder( &params );
    steamclient_unix_path_to_dos_path( params._ret, pchBuffer, pchBuffer, cubBuffer, 0 );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser013_StartVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser013_StartVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_StartVoiceRecording( &params );
}

void __thiscall winISteamUser_SteamUser013_StopVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser013_StopVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_StopVoiceRecording( &params );
}

EVoiceResult __thiscall winISteamUser_SteamUser013_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed)
{
    struct cppISteamUser_SteamUser013_GetAvailableVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pcbCompressed = pcbCompressed,
        .pcbUncompressed = pcbUncompressed,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_GetAvailableVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser013_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten)
{
    struct cppISteamUser_SteamUser013_GetVoice_params params =
    {
        .linux_side = _this->u_iface,
        .bWantCompressed = bWantCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .bWantUncompressed = bWantUncompressed,
        .pUncompressedDestBuffer = pUncompressedDestBuffer,
        .cbUncompressedDestBufferSize = cbUncompressedDestBufferSize,
        .nUncompressBytesWritten = nUncompressBytesWritten,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_GetVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser013_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten)
{
    struct cppISteamUser_SteamUser013_DecompressVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pCompressed = pCompressed,
        .cbCompressed = cbCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_DecompressVoice( &params );
    return params._ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser013_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser013_GetAuthSessionTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_GetAuthSessionTicket( &params );
    return params._ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser013_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    struct cppISteamUser_SteamUser013_BeginAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthTicket = pAuthTicket,
        .cbAuthTicket = cbAuthTicket,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_BeginAuthSession( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser013_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    struct cppISteamUser_SteamUser013_EndAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_EndAuthSession( &params );
}

void __thiscall winISteamUser_SteamUser013_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    struct cppISteamUser_SteamUser013_CancelAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .hAuthTicket = hAuthTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_CancelAuthTicket( &params );
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser013_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    struct cppISteamUser_SteamUser013_UserHasLicenseForApp_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser013_UserHasLicenseForApp( &params );
    return params._ret;
}

extern vtable_ptr winISteamUser_SteamUser013_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser013,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser013_UserHasLicenseForApp)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser013(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser013");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser013_vtable, 17, "SteamUser013");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser014.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetAvailableVoice, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetVoice, 36)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_DecompressVoice, 24)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser014_GetEncryptedAppTicket, 16)

HSteamUser __thiscall winISteamUser_SteamUser014_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser014_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_GetHSteamUser( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser014_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser014_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_BLoggedOn( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser014_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser014_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_GetSteamID( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser014_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    struct cppISteamUser_SteamUser014_InitiateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthBlob = pAuthBlob,
        .cbMaxAuthBlob = cbMaxAuthBlob,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_InitiateGameConnection( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser014_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser014_TerminateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_TerminateGameConnection( &params );
}

void __thiscall winISteamUser_SteamUser014_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    struct cppISteamUser_SteamUser014_TrackAppUsageEvent_params params =
    {
        .linux_side = _this->u_iface,
        .gameID = gameID,
        .eAppUsageEvent = eAppUsageEvent,
        .pchExtraInfo = pchExtraInfo,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_TrackAppUsageEvent( &params );
}

bool __thiscall winISteamUser_SteamUser014_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    struct cppISteamUser_SteamUser014_GetUserDataFolder_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .cubBuffer = cubBuffer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_GetUserDataFolder( &params );
    steamclient_unix_path_to_dos_path( params._ret, pchBuffer, pchBuffer, cubBuffer, 0 );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser014_StartVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser014_StartVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_StartVoiceRecording( &params );
}

void __thiscall winISteamUser_SteamUser014_StopVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser014_StopVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_StopVoiceRecording( &params );
}

EVoiceResult __thiscall winISteamUser_SteamUser014_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed)
{
    struct cppISteamUser_SteamUser014_GetAvailableVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pcbCompressed = pcbCompressed,
        .pcbUncompressed = pcbUncompressed,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_GetAvailableVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser014_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten)
{
    struct cppISteamUser_SteamUser014_GetVoice_params params =
    {
        .linux_side = _this->u_iface,
        .bWantCompressed = bWantCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .bWantUncompressed = bWantUncompressed,
        .pUncompressedDestBuffer = pUncompressedDestBuffer,
        .cbUncompressedDestBufferSize = cbUncompressedDestBufferSize,
        .nUncompressBytesWritten = nUncompressBytesWritten,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_GetVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser014_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten)
{
    struct cppISteamUser_SteamUser014_DecompressVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pCompressed = pCompressed,
        .cbCompressed = cbCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_DecompressVoice( &params );
    return params._ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser014_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser014_GetAuthSessionTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_GetAuthSessionTicket( &params );
    return params._ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser014_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    struct cppISteamUser_SteamUser014_BeginAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthTicket = pAuthTicket,
        .cbAuthTicket = cbAuthTicket,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_BeginAuthSession( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser014_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    struct cppISteamUser_SteamUser014_EndAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_EndAuthSession( &params );
}

void __thiscall winISteamUser_SteamUser014_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    struct cppISteamUser_SteamUser014_CancelAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .hAuthTicket = hAuthTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_CancelAuthTicket( &params );
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser014_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    struct cppISteamUser_SteamUser014_UserHasLicenseForApp_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_UserHasLicenseForApp( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser014_BIsBehindNAT(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser014_BIsBehindNAT_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_BIsBehindNAT( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser014_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser014_AdvertiseGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_AdvertiseGame( &params );
}

SteamAPICall_t __thiscall winISteamUser_SteamUser014_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    struct cppISteamUser_SteamUser014_RequestEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pDataToInclude = pDataToInclude,
        .cbDataToInclude = cbDataToInclude,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_RequestEncryptedAppTicket( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser014_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser014_GetEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser014_GetEncryptedAppTicket( &params );
    return params._ret;
}

extern vtable_ptr winISteamUser_SteamUser014_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser014,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser014_GetEncryptedAppTicket)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser014(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser014");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser014_vtable, 21, "SteamUser014");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser015.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetAvailableVoice, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetVoice, 36)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_DecompressVoice, 28)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetVoiceOptimalSampleRate, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser015_GetEncryptedAppTicket, 16)

HSteamUser __thiscall winISteamUser_SteamUser015_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser015_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_GetHSteamUser( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser015_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser015_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_BLoggedOn( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser015_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser015_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_GetSteamID( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser015_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    struct cppISteamUser_SteamUser015_InitiateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthBlob = pAuthBlob,
        .cbMaxAuthBlob = cbMaxAuthBlob,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_InitiateGameConnection( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser015_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser015_TerminateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_TerminateGameConnection( &params );
}

void __thiscall winISteamUser_SteamUser015_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    struct cppISteamUser_SteamUser015_TrackAppUsageEvent_params params =
    {
        .linux_side = _this->u_iface,
        .gameID = gameID,
        .eAppUsageEvent = eAppUsageEvent,
        .pchExtraInfo = pchExtraInfo,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_TrackAppUsageEvent( &params );
}

bool __thiscall winISteamUser_SteamUser015_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    struct cppISteamUser_SteamUser015_GetUserDataFolder_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .cubBuffer = cubBuffer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_GetUserDataFolder( &params );
    steamclient_unix_path_to_dos_path( params._ret, pchBuffer, pchBuffer, cubBuffer, 0 );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser015_StartVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser015_StartVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_StartVoiceRecording( &params );
}

void __thiscall winISteamUser_SteamUser015_StopVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser015_StopVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_StopVoiceRecording( &params );
}

EVoiceResult __thiscall winISteamUser_SteamUser015_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed)
{
    struct cppISteamUser_SteamUser015_GetAvailableVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pcbCompressed = pcbCompressed,
        .pcbUncompressed = pcbUncompressed,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_GetAvailableVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser015_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten)
{
    struct cppISteamUser_SteamUser015_GetVoice_params params =
    {
        .linux_side = _this->u_iface,
        .bWantCompressed = bWantCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .bWantUncompressed = bWantUncompressed,
        .pUncompressedDestBuffer = pUncompressedDestBuffer,
        .cbUncompressedDestBufferSize = cbUncompressedDestBufferSize,
        .nUncompressBytesWritten = nUncompressBytesWritten,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_GetVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser015_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
    struct cppISteamUser_SteamUser015_DecompressVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pCompressed = pCompressed,
        .cbCompressed = cbCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .nDesiredSampleRate = nDesiredSampleRate,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_DecompressVoice( &params );
    return params._ret;
}

uint32 __thiscall winISteamUser_SteamUser015_GetVoiceOptimalSampleRate(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser015_GetVoiceOptimalSampleRate_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_GetVoiceOptimalSampleRate( &params );
    return params._ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser015_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser015_GetAuthSessionTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_GetAuthSessionTicket( &params );
    return params._ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser015_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    struct cppISteamUser_SteamUser015_BeginAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthTicket = pAuthTicket,
        .cbAuthTicket = cbAuthTicket,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_BeginAuthSession( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser015_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    struct cppISteamUser_SteamUser015_EndAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_EndAuthSession( &params );
}

void __thiscall winISteamUser_SteamUser015_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    struct cppISteamUser_SteamUser015_CancelAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .hAuthTicket = hAuthTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_CancelAuthTicket( &params );
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser015_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    struct cppISteamUser_SteamUser015_UserHasLicenseForApp_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_UserHasLicenseForApp( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser015_BIsBehindNAT(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser015_BIsBehindNAT_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_BIsBehindNAT( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser015_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser015_AdvertiseGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_AdvertiseGame( &params );
}

SteamAPICall_t __thiscall winISteamUser_SteamUser015_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    struct cppISteamUser_SteamUser015_RequestEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pDataToInclude = pDataToInclude,
        .cbDataToInclude = cbDataToInclude,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_RequestEncryptedAppTicket( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser015_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser015_GetEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser015_GetEncryptedAppTicket( &params );
    return params._ret;
}

extern vtable_ptr winISteamUser_SteamUser015_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser015,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser015_GetEncryptedAppTicket)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser015(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser015");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser015_vtable, 22, "SteamUser015");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser016.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetAvailableVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetVoice, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_DecompressVoice, 28)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetVoiceOptimalSampleRate, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser016_GetEncryptedAppTicket, 16)

HSteamUser __thiscall winISteamUser_SteamUser016_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser016_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_GetHSteamUser( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser016_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser016_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_BLoggedOn( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser016_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser016_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_GetSteamID( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser016_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    struct cppISteamUser_SteamUser016_InitiateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthBlob = pAuthBlob,
        .cbMaxAuthBlob = cbMaxAuthBlob,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_InitiateGameConnection( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser016_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser016_TerminateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_TerminateGameConnection( &params );
}

void __thiscall winISteamUser_SteamUser016_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    struct cppISteamUser_SteamUser016_TrackAppUsageEvent_params params =
    {
        .linux_side = _this->u_iface,
        .gameID = gameID,
        .eAppUsageEvent = eAppUsageEvent,
        .pchExtraInfo = pchExtraInfo,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_TrackAppUsageEvent( &params );
}

bool __thiscall winISteamUser_SteamUser016_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    struct cppISteamUser_SteamUser016_GetUserDataFolder_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .cubBuffer = cubBuffer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_GetUserDataFolder( &params );
    steamclient_unix_path_to_dos_path( params._ret, pchBuffer, pchBuffer, cubBuffer, 0 );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser016_StartVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser016_StartVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_StartVoiceRecording( &params );
}

void __thiscall winISteamUser_SteamUser016_StopVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser016_StopVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_StopVoiceRecording( &params );
}

EVoiceResult __thiscall winISteamUser_SteamUser016_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate)
{
    struct cppISteamUser_SteamUser016_GetAvailableVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pcbCompressed = pcbCompressed,
        .pcbUncompressed = pcbUncompressed,
        .nUncompressedVoiceDesiredSampleRate = nUncompressedVoiceDesiredSampleRate,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_GetAvailableVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser016_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate)
{
    struct cppISteamUser_SteamUser016_GetVoice_params params =
    {
        .linux_side = _this->u_iface,
        .bWantCompressed = bWantCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .bWantUncompressed = bWantUncompressed,
        .pUncompressedDestBuffer = pUncompressedDestBuffer,
        .cbUncompressedDestBufferSize = cbUncompressedDestBufferSize,
        .nUncompressBytesWritten = nUncompressBytesWritten,
        .nUncompressedVoiceDesiredSampleRate = nUncompressedVoiceDesiredSampleRate,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_GetVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser016_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
    struct cppISteamUser_SteamUser016_DecompressVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pCompressed = pCompressed,
        .cbCompressed = cbCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .nDesiredSampleRate = nDesiredSampleRate,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_DecompressVoice( &params );
    return params._ret;
}

uint32 __thiscall winISteamUser_SteamUser016_GetVoiceOptimalSampleRate(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser016_GetVoiceOptimalSampleRate_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_GetVoiceOptimalSampleRate( &params );
    return params._ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser016_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser016_GetAuthSessionTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_GetAuthSessionTicket( &params );
    return params._ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser016_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    struct cppISteamUser_SteamUser016_BeginAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthTicket = pAuthTicket,
        .cbAuthTicket = cbAuthTicket,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_BeginAuthSession( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser016_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    struct cppISteamUser_SteamUser016_EndAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_EndAuthSession( &params );
}

void __thiscall winISteamUser_SteamUser016_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    struct cppISteamUser_SteamUser016_CancelAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .hAuthTicket = hAuthTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_CancelAuthTicket( &params );
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser016_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    struct cppISteamUser_SteamUser016_UserHasLicenseForApp_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_UserHasLicenseForApp( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser016_BIsBehindNAT(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser016_BIsBehindNAT_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_BIsBehindNAT( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser016_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser016_AdvertiseGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_AdvertiseGame( &params );
}

SteamAPICall_t __thiscall winISteamUser_SteamUser016_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    struct cppISteamUser_SteamUser016_RequestEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pDataToInclude = pDataToInclude,
        .cbDataToInclude = cbDataToInclude,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_RequestEncryptedAppTicket( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser016_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser016_GetEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser016_GetEncryptedAppTicket( &params );
    return params._ret;
}

extern vtable_ptr winISteamUser_SteamUser016_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser016,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser016_GetEncryptedAppTicket)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser016(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser016");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser016_vtable, 22, "SteamUser016");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser017.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetAvailableVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetVoice, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_DecompressVoice, 28)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetVoiceOptimalSampleRate, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetEncryptedAppTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetGameBadgeLevel, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser017_GetPlayerSteamLevel, 4)

HSteamUser __thiscall winISteamUser_SteamUser017_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser017_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_GetHSteamUser( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser017_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser017_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_BLoggedOn( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser017_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser017_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_GetSteamID( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser017_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    struct cppISteamUser_SteamUser017_InitiateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthBlob = pAuthBlob,
        .cbMaxAuthBlob = cbMaxAuthBlob,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_InitiateGameConnection( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser017_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser017_TerminateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_TerminateGameConnection( &params );
}

void __thiscall winISteamUser_SteamUser017_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    struct cppISteamUser_SteamUser017_TrackAppUsageEvent_params params =
    {
        .linux_side = _this->u_iface,
        .gameID = gameID,
        .eAppUsageEvent = eAppUsageEvent,
        .pchExtraInfo = pchExtraInfo,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_TrackAppUsageEvent( &params );
}

bool __thiscall winISteamUser_SteamUser017_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    struct cppISteamUser_SteamUser017_GetUserDataFolder_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .cubBuffer = cubBuffer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_GetUserDataFolder( &params );
    steamclient_unix_path_to_dos_path( params._ret, pchBuffer, pchBuffer, cubBuffer, 0 );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser017_StartVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser017_StartVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_StartVoiceRecording( &params );
}

void __thiscall winISteamUser_SteamUser017_StopVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser017_StopVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_StopVoiceRecording( &params );
}

EVoiceResult __thiscall winISteamUser_SteamUser017_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate)
{
    struct cppISteamUser_SteamUser017_GetAvailableVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pcbCompressed = pcbCompressed,
        .pcbUncompressed = pcbUncompressed,
        .nUncompressedVoiceDesiredSampleRate = nUncompressedVoiceDesiredSampleRate,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_GetAvailableVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser017_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate)
{
    struct cppISteamUser_SteamUser017_GetVoice_params params =
    {
        .linux_side = _this->u_iface,
        .bWantCompressed = bWantCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .bWantUncompressed = bWantUncompressed,
        .pUncompressedDestBuffer = pUncompressedDestBuffer,
        .cbUncompressedDestBufferSize = cbUncompressedDestBufferSize,
        .nUncompressBytesWritten = nUncompressBytesWritten,
        .nUncompressedVoiceDesiredSampleRate = nUncompressedVoiceDesiredSampleRate,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_GetVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser017_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
    struct cppISteamUser_SteamUser017_DecompressVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pCompressed = pCompressed,
        .cbCompressed = cbCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .nDesiredSampleRate = nDesiredSampleRate,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_DecompressVoice( &params );
    return params._ret;
}

uint32 __thiscall winISteamUser_SteamUser017_GetVoiceOptimalSampleRate(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser017_GetVoiceOptimalSampleRate_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_GetVoiceOptimalSampleRate( &params );
    return params._ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser017_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser017_GetAuthSessionTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_GetAuthSessionTicket( &params );
    return params._ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser017_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    struct cppISteamUser_SteamUser017_BeginAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthTicket = pAuthTicket,
        .cbAuthTicket = cbAuthTicket,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_BeginAuthSession( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser017_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    struct cppISteamUser_SteamUser017_EndAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_EndAuthSession( &params );
}

void __thiscall winISteamUser_SteamUser017_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    struct cppISteamUser_SteamUser017_CancelAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .hAuthTicket = hAuthTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_CancelAuthTicket( &params );
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser017_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    struct cppISteamUser_SteamUser017_UserHasLicenseForApp_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_UserHasLicenseForApp( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser017_BIsBehindNAT(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser017_BIsBehindNAT_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_BIsBehindNAT( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser017_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser017_AdvertiseGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_AdvertiseGame( &params );
}

SteamAPICall_t __thiscall winISteamUser_SteamUser017_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    struct cppISteamUser_SteamUser017_RequestEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pDataToInclude = pDataToInclude,
        .cbDataToInclude = cbDataToInclude,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_RequestEncryptedAppTicket( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser017_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser017_GetEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_GetEncryptedAppTicket( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser017_GetGameBadgeLevel(struct w_steam_iface *_this, int nSeries, bool bFoil)
{
    struct cppISteamUser_SteamUser017_GetGameBadgeLevel_params params =
    {
        .linux_side = _this->u_iface,
        .nSeries = nSeries,
        .bFoil = bFoil,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_GetGameBadgeLevel( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser017_GetPlayerSteamLevel(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser017_GetPlayerSteamLevel_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser017_GetPlayerSteamLevel( &params );
    return params._ret;
}

extern vtable_ptr winISteamUser_SteamUser017_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser017,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser017_GetPlayerSteamLevel)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser017(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser017");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser017_vtable, 24, "SteamUser017");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser018.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetAvailableVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetVoice, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_DecompressVoice, 28)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetVoiceOptimalSampleRate, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetEncryptedAppTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetGameBadgeLevel, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_GetPlayerSteamLevel, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser018_RequestStoreAuthURL, 8)

HSteamUser __thiscall winISteamUser_SteamUser018_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser018_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_GetHSteamUser( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser018_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser018_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_BLoggedOn( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser018_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser018_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_GetSteamID( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser018_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    struct cppISteamUser_SteamUser018_InitiateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthBlob = pAuthBlob,
        .cbMaxAuthBlob = cbMaxAuthBlob,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_InitiateGameConnection( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser018_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser018_TerminateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_TerminateGameConnection( &params );
}

void __thiscall winISteamUser_SteamUser018_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    struct cppISteamUser_SteamUser018_TrackAppUsageEvent_params params =
    {
        .linux_side = _this->u_iface,
        .gameID = gameID,
        .eAppUsageEvent = eAppUsageEvent,
        .pchExtraInfo = pchExtraInfo,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_TrackAppUsageEvent( &params );
}

bool __thiscall winISteamUser_SteamUser018_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    struct cppISteamUser_SteamUser018_GetUserDataFolder_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .cubBuffer = cubBuffer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_GetUserDataFolder( &params );
    steamclient_unix_path_to_dos_path( params._ret, pchBuffer, pchBuffer, cubBuffer, 0 );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser018_StartVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser018_StartVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_StartVoiceRecording( &params );
}

void __thiscall winISteamUser_SteamUser018_StopVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser018_StopVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_StopVoiceRecording( &params );
}

EVoiceResult __thiscall winISteamUser_SteamUser018_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate)
{
    struct cppISteamUser_SteamUser018_GetAvailableVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pcbCompressed = pcbCompressed,
        .pcbUncompressed = pcbUncompressed,
        .nUncompressedVoiceDesiredSampleRate = nUncompressedVoiceDesiredSampleRate,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_GetAvailableVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser018_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate)
{
    struct cppISteamUser_SteamUser018_GetVoice_params params =
    {
        .linux_side = _this->u_iface,
        .bWantCompressed = bWantCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .bWantUncompressed = bWantUncompressed,
        .pUncompressedDestBuffer = pUncompressedDestBuffer,
        .cbUncompressedDestBufferSize = cbUncompressedDestBufferSize,
        .nUncompressBytesWritten = nUncompressBytesWritten,
        .nUncompressedVoiceDesiredSampleRate = nUncompressedVoiceDesiredSampleRate,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_GetVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser018_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
    struct cppISteamUser_SteamUser018_DecompressVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pCompressed = pCompressed,
        .cbCompressed = cbCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .nDesiredSampleRate = nDesiredSampleRate,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_DecompressVoice( &params );
    return params._ret;
}

uint32 __thiscall winISteamUser_SteamUser018_GetVoiceOptimalSampleRate(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser018_GetVoiceOptimalSampleRate_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_GetVoiceOptimalSampleRate( &params );
    return params._ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser018_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser018_GetAuthSessionTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_GetAuthSessionTicket( &params );
    return params._ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser018_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    struct cppISteamUser_SteamUser018_BeginAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthTicket = pAuthTicket,
        .cbAuthTicket = cbAuthTicket,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_BeginAuthSession( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser018_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    struct cppISteamUser_SteamUser018_EndAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_EndAuthSession( &params );
}

void __thiscall winISteamUser_SteamUser018_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    struct cppISteamUser_SteamUser018_CancelAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .hAuthTicket = hAuthTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_CancelAuthTicket( &params );
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser018_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    struct cppISteamUser_SteamUser018_UserHasLicenseForApp_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_UserHasLicenseForApp( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser018_BIsBehindNAT(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser018_BIsBehindNAT_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_BIsBehindNAT( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser018_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser018_AdvertiseGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_AdvertiseGame( &params );
}

SteamAPICall_t __thiscall winISteamUser_SteamUser018_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    struct cppISteamUser_SteamUser018_RequestEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pDataToInclude = pDataToInclude,
        .cbDataToInclude = cbDataToInclude,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_RequestEncryptedAppTicket( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser018_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser018_GetEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_GetEncryptedAppTicket( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser018_GetGameBadgeLevel(struct w_steam_iface *_this, int nSeries, bool bFoil)
{
    struct cppISteamUser_SteamUser018_GetGameBadgeLevel_params params =
    {
        .linux_side = _this->u_iface,
        .nSeries = nSeries,
        .bFoil = bFoil,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_GetGameBadgeLevel( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser018_GetPlayerSteamLevel(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser018_GetPlayerSteamLevel_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_GetPlayerSteamLevel( &params );
    return params._ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser018_RequestStoreAuthURL(struct w_steam_iface *_this, const char *pchRedirectURL)
{
    struct cppISteamUser_SteamUser018_RequestStoreAuthURL_params params =
    {
        .linux_side = _this->u_iface,
        .pchRedirectURL = pchRedirectURL,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser018_RequestStoreAuthURL( &params );
    return params._ret;
}

extern vtable_ptr winISteamUser_SteamUser018_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser018,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_GetPlayerSteamLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser018_RequestStoreAuthURL)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser018(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser018");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser018_vtable, 25, "SteamUser018");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser019.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetAvailableVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetVoice, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_DecompressVoice, 28)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetVoiceOptimalSampleRate, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetEncryptedAppTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetGameBadgeLevel, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_GetPlayerSteamLevel, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_RequestStoreAuthURL, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BIsPhoneVerified, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BIsTwoFactorEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BIsPhoneIdentifying, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser019_BIsPhoneRequiringVerification, 4)

HSteamUser __thiscall winISteamUser_SteamUser019_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser019_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_GetHSteamUser( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser019_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser019_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_BLoggedOn( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser019_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser019_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_GetSteamID( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser019_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    struct cppISteamUser_SteamUser019_InitiateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthBlob = pAuthBlob,
        .cbMaxAuthBlob = cbMaxAuthBlob,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_InitiateGameConnection( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser019_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser019_TerminateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_TerminateGameConnection( &params );
}

void __thiscall winISteamUser_SteamUser019_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    struct cppISteamUser_SteamUser019_TrackAppUsageEvent_params params =
    {
        .linux_side = _this->u_iface,
        .gameID = gameID,
        .eAppUsageEvent = eAppUsageEvent,
        .pchExtraInfo = pchExtraInfo,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_TrackAppUsageEvent( &params );
}

bool __thiscall winISteamUser_SteamUser019_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    struct cppISteamUser_SteamUser019_GetUserDataFolder_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .cubBuffer = cubBuffer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_GetUserDataFolder( &params );
    steamclient_unix_path_to_dos_path( params._ret, pchBuffer, pchBuffer, cubBuffer, 0 );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser019_StartVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser019_StartVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_StartVoiceRecording( &params );
}

void __thiscall winISteamUser_SteamUser019_StopVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser019_StopVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_StopVoiceRecording( &params );
}

EVoiceResult __thiscall winISteamUser_SteamUser019_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    struct cppISteamUser_SteamUser019_GetAvailableVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pcbCompressed = pcbCompressed,
        .pcbUncompressed_Deprecated = pcbUncompressed_Deprecated,
        .nUncompressedVoiceDesiredSampleRate_Deprecated = nUncompressedVoiceDesiredSampleRate_Deprecated,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_GetAvailableVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser019_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed_Deprecated, void *pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 *nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    struct cppISteamUser_SteamUser019_GetVoice_params params =
    {
        .linux_side = _this->u_iface,
        .bWantCompressed = bWantCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .bWantUncompressed_Deprecated = bWantUncompressed_Deprecated,
        .pUncompressedDestBuffer_Deprecated = pUncompressedDestBuffer_Deprecated,
        .cbUncompressedDestBufferSize_Deprecated = cbUncompressedDestBufferSize_Deprecated,
        .nUncompressBytesWritten_Deprecated = nUncompressBytesWritten_Deprecated,
        .nUncompressedVoiceDesiredSampleRate_Deprecated = nUncompressedVoiceDesiredSampleRate_Deprecated,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_GetVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser019_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
    struct cppISteamUser_SteamUser019_DecompressVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pCompressed = pCompressed,
        .cbCompressed = cbCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .nDesiredSampleRate = nDesiredSampleRate,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_DecompressVoice( &params );
    return params._ret;
}

uint32 __thiscall winISteamUser_SteamUser019_GetVoiceOptimalSampleRate(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser019_GetVoiceOptimalSampleRate_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_GetVoiceOptimalSampleRate( &params );
    return params._ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser019_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser019_GetAuthSessionTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_GetAuthSessionTicket( &params );
    return params._ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser019_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    struct cppISteamUser_SteamUser019_BeginAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthTicket = pAuthTicket,
        .cbAuthTicket = cbAuthTicket,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_BeginAuthSession( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser019_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    struct cppISteamUser_SteamUser019_EndAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_EndAuthSession( &params );
}

void __thiscall winISteamUser_SteamUser019_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    struct cppISteamUser_SteamUser019_CancelAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .hAuthTicket = hAuthTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_CancelAuthTicket( &params );
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser019_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    struct cppISteamUser_SteamUser019_UserHasLicenseForApp_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_UserHasLicenseForApp( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser019_BIsBehindNAT(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser019_BIsBehindNAT_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_BIsBehindNAT( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser019_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser019_AdvertiseGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_AdvertiseGame( &params );
}

SteamAPICall_t __thiscall winISteamUser_SteamUser019_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    struct cppISteamUser_SteamUser019_RequestEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pDataToInclude = pDataToInclude,
        .cbDataToInclude = cbDataToInclude,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_RequestEncryptedAppTicket( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser019_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser019_GetEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_GetEncryptedAppTicket( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser019_GetGameBadgeLevel(struct w_steam_iface *_this, int nSeries, bool bFoil)
{
    struct cppISteamUser_SteamUser019_GetGameBadgeLevel_params params =
    {
        .linux_side = _this->u_iface,
        .nSeries = nSeries,
        .bFoil = bFoil,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_GetGameBadgeLevel( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser019_GetPlayerSteamLevel(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser019_GetPlayerSteamLevel_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_GetPlayerSteamLevel( &params );
    return params._ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser019_RequestStoreAuthURL(struct w_steam_iface *_this, const char *pchRedirectURL)
{
    struct cppISteamUser_SteamUser019_RequestStoreAuthURL_params params =
    {
        .linux_side = _this->u_iface,
        .pchRedirectURL = pchRedirectURL,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_RequestStoreAuthURL( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser019_BIsPhoneVerified(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser019_BIsPhoneVerified_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_BIsPhoneVerified( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser019_BIsTwoFactorEnabled(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser019_BIsTwoFactorEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_BIsTwoFactorEnabled( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser019_BIsPhoneIdentifying(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser019_BIsPhoneIdentifying_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_BIsPhoneIdentifying( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser019_BIsPhoneRequiringVerification(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser019_BIsPhoneRequiringVerification_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser019_BIsPhoneRequiringVerification( &params );
    return params._ret;
}

extern vtable_ptr winISteamUser_SteamUser019_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser019,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_GetPlayerSteamLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_RequestStoreAuthURL)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BIsPhoneVerified)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BIsTwoFactorEnabled)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BIsPhoneIdentifying)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser019_BIsPhoneRequiringVerification)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser019(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser019");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser019_vtable, 29, "SteamUser019");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser020.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_InitiateGameConnection, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_TerminateGameConnection, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetAvailableVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetVoice, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_DecompressVoice, 28)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetVoiceOptimalSampleRate, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetEncryptedAppTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetGameBadgeLevel, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetPlayerSteamLevel, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_RequestStoreAuthURL, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BIsPhoneVerified, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BIsTwoFactorEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BIsPhoneIdentifying, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_BIsPhoneRequiringVerification, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetMarketEligibility, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser020_GetDurationControl, 4)

HSteamUser __thiscall winISteamUser_SteamUser020_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser020_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_GetHSteamUser( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser020_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser020_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_BLoggedOn( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser020_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser020_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_GetSteamID( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser020_InitiateGameConnection(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    struct cppISteamUser_SteamUser020_InitiateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthBlob = pAuthBlob,
        .cbMaxAuthBlob = cbMaxAuthBlob,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_InitiateGameConnection( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser020_TerminateGameConnection(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser020_TerminateGameConnection_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_TerminateGameConnection( &params );
}

void __thiscall winISteamUser_SteamUser020_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    struct cppISteamUser_SteamUser020_TrackAppUsageEvent_params params =
    {
        .linux_side = _this->u_iface,
        .gameID = gameID,
        .eAppUsageEvent = eAppUsageEvent,
        .pchExtraInfo = pchExtraInfo,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_TrackAppUsageEvent( &params );
}

bool __thiscall winISteamUser_SteamUser020_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    struct cppISteamUser_SteamUser020_GetUserDataFolder_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .cubBuffer = cubBuffer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_GetUserDataFolder( &params );
    steamclient_unix_path_to_dos_path( params._ret, pchBuffer, pchBuffer, cubBuffer, 0 );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser020_StartVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser020_StartVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_StartVoiceRecording( &params );
}

void __thiscall winISteamUser_SteamUser020_StopVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser020_StopVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_StopVoiceRecording( &params );
}

EVoiceResult __thiscall winISteamUser_SteamUser020_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    struct cppISteamUser_SteamUser020_GetAvailableVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pcbCompressed = pcbCompressed,
        .pcbUncompressed_Deprecated = pcbUncompressed_Deprecated,
        .nUncompressedVoiceDesiredSampleRate_Deprecated = nUncompressedVoiceDesiredSampleRate_Deprecated,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_GetAvailableVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser020_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed_Deprecated, void *pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 *nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    struct cppISteamUser_SteamUser020_GetVoice_params params =
    {
        .linux_side = _this->u_iface,
        .bWantCompressed = bWantCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .bWantUncompressed_Deprecated = bWantUncompressed_Deprecated,
        .pUncompressedDestBuffer_Deprecated = pUncompressedDestBuffer_Deprecated,
        .cbUncompressedDestBufferSize_Deprecated = cbUncompressedDestBufferSize_Deprecated,
        .nUncompressBytesWritten_Deprecated = nUncompressBytesWritten_Deprecated,
        .nUncompressedVoiceDesiredSampleRate_Deprecated = nUncompressedVoiceDesiredSampleRate_Deprecated,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_GetVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser020_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
    struct cppISteamUser_SteamUser020_DecompressVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pCompressed = pCompressed,
        .cbCompressed = cbCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .nDesiredSampleRate = nDesiredSampleRate,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_DecompressVoice( &params );
    return params._ret;
}

uint32 __thiscall winISteamUser_SteamUser020_GetVoiceOptimalSampleRate(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser020_GetVoiceOptimalSampleRate_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_GetVoiceOptimalSampleRate( &params );
    return params._ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser020_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser020_GetAuthSessionTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_GetAuthSessionTicket( &params );
    return params._ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser020_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    struct cppISteamUser_SteamUser020_BeginAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthTicket = pAuthTicket,
        .cbAuthTicket = cbAuthTicket,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_BeginAuthSession( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser020_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    struct cppISteamUser_SteamUser020_EndAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_EndAuthSession( &params );
}

void __thiscall winISteamUser_SteamUser020_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    struct cppISteamUser_SteamUser020_CancelAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .hAuthTicket = hAuthTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_CancelAuthTicket( &params );
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser020_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    struct cppISteamUser_SteamUser020_UserHasLicenseForApp_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_UserHasLicenseForApp( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser020_BIsBehindNAT(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser020_BIsBehindNAT_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_BIsBehindNAT( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser020_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser020_AdvertiseGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_AdvertiseGame( &params );
}

SteamAPICall_t __thiscall winISteamUser_SteamUser020_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    struct cppISteamUser_SteamUser020_RequestEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pDataToInclude = pDataToInclude,
        .cbDataToInclude = cbDataToInclude,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_RequestEncryptedAppTicket( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser020_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser020_GetEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_GetEncryptedAppTicket( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser020_GetGameBadgeLevel(struct w_steam_iface *_this, int nSeries, bool bFoil)
{
    struct cppISteamUser_SteamUser020_GetGameBadgeLevel_params params =
    {
        .linux_side = _this->u_iface,
        .nSeries = nSeries,
        .bFoil = bFoil,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_GetGameBadgeLevel( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser020_GetPlayerSteamLevel(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser020_GetPlayerSteamLevel_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_GetPlayerSteamLevel( &params );
    return params._ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser020_RequestStoreAuthURL(struct w_steam_iface *_this, const char *pchRedirectURL)
{
    struct cppISteamUser_SteamUser020_RequestStoreAuthURL_params params =
    {
        .linux_side = _this->u_iface,
        .pchRedirectURL = pchRedirectURL,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_RequestStoreAuthURL( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser020_BIsPhoneVerified(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser020_BIsPhoneVerified_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_BIsPhoneVerified( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser020_BIsTwoFactorEnabled(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser020_BIsTwoFactorEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_BIsTwoFactorEnabled( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser020_BIsPhoneIdentifying(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser020_BIsPhoneIdentifying_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_BIsPhoneIdentifying( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser020_BIsPhoneRequiringVerification(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser020_BIsPhoneRequiringVerification_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_BIsPhoneRequiringVerification( &params );
    return params._ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser020_GetMarketEligibility(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser020_GetMarketEligibility_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_GetMarketEligibility( &params );
    return params._ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser020_GetDurationControl(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser020_GetDurationControl_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser020_GetDurationControl( &params );
    return params._ret;
}

extern vtable_ptr winISteamUser_SteamUser020_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser020,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_InitiateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_TerminateGameConnection)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetPlayerSteamLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_RequestStoreAuthURL)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BIsPhoneVerified)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BIsTwoFactorEnabled)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BIsPhoneIdentifying)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_BIsPhoneRequiringVerification)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetMarketEligibility)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser020_GetDurationControl)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser020(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser020");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser020_vtable, 31, "SteamUser020");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser021.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetAvailableVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetVoice, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_DecompressVoice, 28)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetVoiceOptimalSampleRate, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetAuthSessionTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetEncryptedAppTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetGameBadgeLevel, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetPlayerSteamLevel, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_RequestStoreAuthURL, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BIsPhoneVerified, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BIsTwoFactorEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BIsPhoneIdentifying, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BIsPhoneRequiringVerification, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetMarketEligibility, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_GetDurationControl, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser021_BSetDurationControlOnlineState, 8)

HSteamUser __thiscall winISteamUser_SteamUser021_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser021_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_GetHSteamUser( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser021_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser021_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_BLoggedOn( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser021_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser021_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_GetSteamID( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    struct cppISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthBlob = pAuthBlob,
        .cbMaxAuthBlob = cbMaxAuthBlob,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED( &params );
}

void __thiscall winISteamUser_SteamUser021_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    struct cppISteamUser_SteamUser021_TrackAppUsageEvent_params params =
    {
        .linux_side = _this->u_iface,
        .gameID = gameID,
        .eAppUsageEvent = eAppUsageEvent,
        .pchExtraInfo = pchExtraInfo,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_TrackAppUsageEvent( &params );
}

bool __thiscall winISteamUser_SteamUser021_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    struct cppISteamUser_SteamUser021_GetUserDataFolder_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .cubBuffer = cubBuffer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_GetUserDataFolder( &params );
    steamclient_unix_path_to_dos_path( params._ret, pchBuffer, pchBuffer, cubBuffer, 0 );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser021_StartVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser021_StartVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_StartVoiceRecording( &params );
}

void __thiscall winISteamUser_SteamUser021_StopVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser021_StopVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_StopVoiceRecording( &params );
}

EVoiceResult __thiscall winISteamUser_SteamUser021_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    struct cppISteamUser_SteamUser021_GetAvailableVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pcbCompressed = pcbCompressed,
        .pcbUncompressed_Deprecated = pcbUncompressed_Deprecated,
        .nUncompressedVoiceDesiredSampleRate_Deprecated = nUncompressedVoiceDesiredSampleRate_Deprecated,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_GetAvailableVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser021_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed_Deprecated, void *pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 *nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    struct cppISteamUser_SteamUser021_GetVoice_params params =
    {
        .linux_side = _this->u_iface,
        .bWantCompressed = bWantCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .bWantUncompressed_Deprecated = bWantUncompressed_Deprecated,
        .pUncompressedDestBuffer_Deprecated = pUncompressedDestBuffer_Deprecated,
        .cbUncompressedDestBufferSize_Deprecated = cbUncompressedDestBufferSize_Deprecated,
        .nUncompressBytesWritten_Deprecated = nUncompressBytesWritten_Deprecated,
        .nUncompressedVoiceDesiredSampleRate_Deprecated = nUncompressedVoiceDesiredSampleRate_Deprecated,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_GetVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser021_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
    struct cppISteamUser_SteamUser021_DecompressVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pCompressed = pCompressed,
        .cbCompressed = cbCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .nDesiredSampleRate = nDesiredSampleRate,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_DecompressVoice( &params );
    return params._ret;
}

uint32 __thiscall winISteamUser_SteamUser021_GetVoiceOptimalSampleRate(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser021_GetVoiceOptimalSampleRate_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_GetVoiceOptimalSampleRate( &params );
    return params._ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser021_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser021_GetAuthSessionTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_GetAuthSessionTicket( &params );
    return params._ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser021_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    struct cppISteamUser_SteamUser021_BeginAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthTicket = pAuthTicket,
        .cbAuthTicket = cbAuthTicket,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_BeginAuthSession( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser021_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    struct cppISteamUser_SteamUser021_EndAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_EndAuthSession( &params );
}

void __thiscall winISteamUser_SteamUser021_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    struct cppISteamUser_SteamUser021_CancelAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .hAuthTicket = hAuthTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_CancelAuthTicket( &params );
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser021_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    struct cppISteamUser_SteamUser021_UserHasLicenseForApp_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_UserHasLicenseForApp( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser021_BIsBehindNAT(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser021_BIsBehindNAT_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_BIsBehindNAT( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser021_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser021_AdvertiseGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_AdvertiseGame( &params );
}

SteamAPICall_t __thiscall winISteamUser_SteamUser021_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    struct cppISteamUser_SteamUser021_RequestEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pDataToInclude = pDataToInclude,
        .cbDataToInclude = cbDataToInclude,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_RequestEncryptedAppTicket( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser021_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser021_GetEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_GetEncryptedAppTicket( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser021_GetGameBadgeLevel(struct w_steam_iface *_this, int nSeries, bool bFoil)
{
    struct cppISteamUser_SteamUser021_GetGameBadgeLevel_params params =
    {
        .linux_side = _this->u_iface,
        .nSeries = nSeries,
        .bFoil = bFoil,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_GetGameBadgeLevel( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser021_GetPlayerSteamLevel(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser021_GetPlayerSteamLevel_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_GetPlayerSteamLevel( &params );
    return params._ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser021_RequestStoreAuthURL(struct w_steam_iface *_this, const char *pchRedirectURL)
{
    struct cppISteamUser_SteamUser021_RequestStoreAuthURL_params params =
    {
        .linux_side = _this->u_iface,
        .pchRedirectURL = pchRedirectURL,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_RequestStoreAuthURL( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser021_BIsPhoneVerified(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser021_BIsPhoneVerified_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_BIsPhoneVerified( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser021_BIsTwoFactorEnabled(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser021_BIsTwoFactorEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_BIsTwoFactorEnabled( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser021_BIsPhoneIdentifying(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser021_BIsPhoneIdentifying_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_BIsPhoneIdentifying( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser021_BIsPhoneRequiringVerification(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser021_BIsPhoneRequiringVerification_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_BIsPhoneRequiringVerification( &params );
    return params._ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser021_GetMarketEligibility(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser021_GetMarketEligibility_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_GetMarketEligibility( &params );
    return params._ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser021_GetDurationControl(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser021_GetDurationControl_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_GetDurationControl( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser021_BSetDurationControlOnlineState(struct w_steam_iface *_this, EDurationControlOnlineState eNewState)
{
    struct cppISteamUser_SteamUser021_BSetDurationControlOnlineState_params params =
    {
        .linux_side = _this->u_iface,
        .eNewState = eNewState,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser021_BSetDurationControlOnlineState( &params );
    return params._ret;
}

extern vtable_ptr winISteamUser_SteamUser021_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser021,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_InitiateGameConnection_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_TerminateGameConnection_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetPlayerSteamLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_RequestStoreAuthURL)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BIsPhoneVerified)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BIsTwoFactorEnabled)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BIsPhoneIdentifying)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BIsPhoneRequiringVerification)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetMarketEligibility)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_GetDurationControl)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser021_BSetDurationControlOnlineState)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser021(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser021");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser021_vtable, 32, "SteamUser021");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser022.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_InitiateGameConnection_DEPRECATED, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_TerminateGameConnection_DEPRECATED, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetAvailableVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetVoice, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_DecompressVoice, 28)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetVoiceOptimalSampleRate, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetAuthSessionTicket, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetEncryptedAppTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetGameBadgeLevel, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetPlayerSteamLevel, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_RequestStoreAuthURL, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BIsPhoneVerified, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BIsTwoFactorEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BIsPhoneIdentifying, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BIsPhoneRequiringVerification, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetMarketEligibility, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_GetDurationControl, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser022_BSetDurationControlOnlineState, 8)

HSteamUser __thiscall winISteamUser_SteamUser022_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser022_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_GetHSteamUser( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser022_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser022_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_BLoggedOn( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser022_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser022_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_GetSteamID( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser022_InitiateGameConnection_DEPRECATED(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    struct cppISteamUser_SteamUser022_InitiateGameConnection_DEPRECATED_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthBlob = pAuthBlob,
        .cbMaxAuthBlob = cbMaxAuthBlob,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_InitiateGameConnection_DEPRECATED( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser022_TerminateGameConnection_DEPRECATED(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser022_TerminateGameConnection_DEPRECATED_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_TerminateGameConnection_DEPRECATED( &params );
}

void __thiscall winISteamUser_SteamUser022_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    struct cppISteamUser_SteamUser022_TrackAppUsageEvent_params params =
    {
        .linux_side = _this->u_iface,
        .gameID = gameID,
        .eAppUsageEvent = eAppUsageEvent,
        .pchExtraInfo = pchExtraInfo,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_TrackAppUsageEvent( &params );
}

bool __thiscall winISteamUser_SteamUser022_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    struct cppISteamUser_SteamUser022_GetUserDataFolder_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .cubBuffer = cubBuffer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_GetUserDataFolder( &params );
    steamclient_unix_path_to_dos_path( params._ret, pchBuffer, pchBuffer, cubBuffer, 0 );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser022_StartVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser022_StartVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_StartVoiceRecording( &params );
}

void __thiscall winISteamUser_SteamUser022_StopVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser022_StopVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_StopVoiceRecording( &params );
}

EVoiceResult __thiscall winISteamUser_SteamUser022_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    struct cppISteamUser_SteamUser022_GetAvailableVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pcbCompressed = pcbCompressed,
        .pcbUncompressed_Deprecated = pcbUncompressed_Deprecated,
        .nUncompressedVoiceDesiredSampleRate_Deprecated = nUncompressedVoiceDesiredSampleRate_Deprecated,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_GetAvailableVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser022_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed_Deprecated, void *pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 *nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    struct cppISteamUser_SteamUser022_GetVoice_params params =
    {
        .linux_side = _this->u_iface,
        .bWantCompressed = bWantCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .bWantUncompressed_Deprecated = bWantUncompressed_Deprecated,
        .pUncompressedDestBuffer_Deprecated = pUncompressedDestBuffer_Deprecated,
        .cbUncompressedDestBufferSize_Deprecated = cbUncompressedDestBufferSize_Deprecated,
        .nUncompressBytesWritten_Deprecated = nUncompressBytesWritten_Deprecated,
        .nUncompressedVoiceDesiredSampleRate_Deprecated = nUncompressedVoiceDesiredSampleRate_Deprecated,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_GetVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser022_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
    struct cppISteamUser_SteamUser022_DecompressVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pCompressed = pCompressed,
        .cbCompressed = cbCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .nDesiredSampleRate = nDesiredSampleRate,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_DecompressVoice( &params );
    return params._ret;
}

uint32 __thiscall winISteamUser_SteamUser022_GetVoiceOptimalSampleRate(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser022_GetVoiceOptimalSampleRate_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_GetVoiceOptimalSampleRate( &params );
    return params._ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser022_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket, const SteamNetworkingIdentity *pSteamNetworkingIdentity)
{
    struct cppISteamUser_SteamUser022_GetAuthSessionTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
        .pSteamNetworkingIdentity = pSteamNetworkingIdentity,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_GetAuthSessionTicket( &params );
    return params._ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser022_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    struct cppISteamUser_SteamUser022_BeginAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthTicket = pAuthTicket,
        .cbAuthTicket = cbAuthTicket,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_BeginAuthSession( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser022_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    struct cppISteamUser_SteamUser022_EndAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_EndAuthSession( &params );
}

void __thiscall winISteamUser_SteamUser022_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    struct cppISteamUser_SteamUser022_CancelAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .hAuthTicket = hAuthTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_CancelAuthTicket( &params );
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser022_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    struct cppISteamUser_SteamUser022_UserHasLicenseForApp_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_UserHasLicenseForApp( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser022_BIsBehindNAT(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser022_BIsBehindNAT_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_BIsBehindNAT( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser022_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser022_AdvertiseGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_AdvertiseGame( &params );
}

SteamAPICall_t __thiscall winISteamUser_SteamUser022_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    struct cppISteamUser_SteamUser022_RequestEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pDataToInclude = pDataToInclude,
        .cbDataToInclude = cbDataToInclude,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_RequestEncryptedAppTicket( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser022_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser022_GetEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_GetEncryptedAppTicket( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser022_GetGameBadgeLevel(struct w_steam_iface *_this, int nSeries, bool bFoil)
{
    struct cppISteamUser_SteamUser022_GetGameBadgeLevel_params params =
    {
        .linux_side = _this->u_iface,
        .nSeries = nSeries,
        .bFoil = bFoil,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_GetGameBadgeLevel( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser022_GetPlayerSteamLevel(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser022_GetPlayerSteamLevel_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_GetPlayerSteamLevel( &params );
    return params._ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser022_RequestStoreAuthURL(struct w_steam_iface *_this, const char *pchRedirectURL)
{
    struct cppISteamUser_SteamUser022_RequestStoreAuthURL_params params =
    {
        .linux_side = _this->u_iface,
        .pchRedirectURL = pchRedirectURL,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_RequestStoreAuthURL( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser022_BIsPhoneVerified(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser022_BIsPhoneVerified_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_BIsPhoneVerified( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser022_BIsTwoFactorEnabled(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser022_BIsTwoFactorEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_BIsTwoFactorEnabled( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser022_BIsPhoneIdentifying(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser022_BIsPhoneIdentifying_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_BIsPhoneIdentifying( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser022_BIsPhoneRequiringVerification(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser022_BIsPhoneRequiringVerification_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_BIsPhoneRequiringVerification( &params );
    return params._ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser022_GetMarketEligibility(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser022_GetMarketEligibility_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_GetMarketEligibility( &params );
    return params._ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser022_GetDurationControl(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser022_GetDurationControl_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_GetDurationControl( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser022_BSetDurationControlOnlineState(struct w_steam_iface *_this, EDurationControlOnlineState eNewState)
{
    struct cppISteamUser_SteamUser022_BSetDurationControlOnlineState_params params =
    {
        .linux_side = _this->u_iface,
        .eNewState = eNewState,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser022_BSetDurationControlOnlineState( &params );
    return params._ret;
}

extern vtable_ptr winISteamUser_SteamUser022_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser022,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_InitiateGameConnection_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_TerminateGameConnection_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetPlayerSteamLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_RequestStoreAuthURL)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BIsPhoneVerified)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BIsTwoFactorEnabled)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BIsPhoneIdentifying)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BIsPhoneRequiringVerification)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetMarketEligibility)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_GetDurationControl)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser022_BSetDurationControlOnlineState)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser022(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser022");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser022_vtable, 32, "SteamUser022");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamUser_SteamUser023.h"

DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetHSteamUser, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BLoggedOn, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetSteamID, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED, 32)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_TrackAppUsageEvent, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetUserDataFolder, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_StartVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_StopVoiceRecording, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetAvailableVoice, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetVoice, 40)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_DecompressVoice, 28)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetVoiceOptimalSampleRate, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetAuthSessionTicket, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetAuthTicketForWebApi, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BeginAuthSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_EndAuthSession, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_CancelAuthTicket, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_UserHasLicenseForApp, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BIsBehindNAT, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_AdvertiseGame, 20)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_RequestEncryptedAppTicket, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetEncryptedAppTicket, 16)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetGameBadgeLevel, 12)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetPlayerSteamLevel, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_RequestStoreAuthURL, 8)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BIsPhoneVerified, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BIsTwoFactorEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BIsPhoneIdentifying, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BIsPhoneRequiringVerification, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetMarketEligibility, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_GetDurationControl, 4)
DEFINE_THISCALL_WRAPPER(winISteamUser_SteamUser023_BSetDurationControlOnlineState, 8)

HSteamUser __thiscall winISteamUser_SteamUser023_GetHSteamUser(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser023_GetHSteamUser_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_GetHSteamUser( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser023_BLoggedOn(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser023_BLoggedOn_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_BLoggedOn( &params );
    return params._ret;
}

CSteamID * __thiscall winISteamUser_SteamUser023_GetSteamID(struct w_steam_iface *_this, CSteamID *_ret)
{
    struct cppISteamUser_SteamUser023_GetSteamID_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_GetSteamID( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED(struct w_steam_iface *_this, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    struct cppISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthBlob = pAuthBlob,
        .cbMaxAuthBlob = cbMaxAuthBlob,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
        .bSecure = bSecure,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED(struct w_steam_iface *_this, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED_params params =
    {
        .linux_side = _this->u_iface,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED( &params );
}

void __thiscall winISteamUser_SteamUser023_TrackAppUsageEvent(struct w_steam_iface *_this, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    struct cppISteamUser_SteamUser023_TrackAppUsageEvent_params params =
    {
        .linux_side = _this->u_iface,
        .gameID = gameID,
        .eAppUsageEvent = eAppUsageEvent,
        .pchExtraInfo = pchExtraInfo,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_TrackAppUsageEvent( &params );
}

bool __thiscall winISteamUser_SteamUser023_GetUserDataFolder(struct w_steam_iface *_this, char *pchBuffer, int cubBuffer)
{
    struct cppISteamUser_SteamUser023_GetUserDataFolder_params params =
    {
        .linux_side = _this->u_iface,
        .pchBuffer = pchBuffer,
        .cubBuffer = cubBuffer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_GetUserDataFolder( &params );
    steamclient_unix_path_to_dos_path( params._ret, pchBuffer, pchBuffer, cubBuffer, 0 );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser023_StartVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser023_StartVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_StartVoiceRecording( &params );
}

void __thiscall winISteamUser_SteamUser023_StopVoiceRecording(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser023_StopVoiceRecording_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_StopVoiceRecording( &params );
}

EVoiceResult __thiscall winISteamUser_SteamUser023_GetAvailableVoice(struct w_steam_iface *_this, uint32 *pcbCompressed, uint32 *pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    struct cppISteamUser_SteamUser023_GetAvailableVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pcbCompressed = pcbCompressed,
        .pcbUncompressed_Deprecated = pcbUncompressed_Deprecated,
        .nUncompressedVoiceDesiredSampleRate_Deprecated = nUncompressedVoiceDesiredSampleRate_Deprecated,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_GetAvailableVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser023_GetVoice(struct w_steam_iface *_this, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed_Deprecated, void *pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 *nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
    struct cppISteamUser_SteamUser023_GetVoice_params params =
    {
        .linux_side = _this->u_iface,
        .bWantCompressed = bWantCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .bWantUncompressed_Deprecated = bWantUncompressed_Deprecated,
        .pUncompressedDestBuffer_Deprecated = pUncompressedDestBuffer_Deprecated,
        .cbUncompressedDestBufferSize_Deprecated = cbUncompressedDestBufferSize_Deprecated,
        .nUncompressBytesWritten_Deprecated = nUncompressBytesWritten_Deprecated,
        .nUncompressedVoiceDesiredSampleRate_Deprecated = nUncompressedVoiceDesiredSampleRate_Deprecated,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_GetVoice( &params );
    return params._ret;
}

EVoiceResult __thiscall winISteamUser_SteamUser023_DecompressVoice(struct w_steam_iface *_this, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
    struct cppISteamUser_SteamUser023_DecompressVoice_params params =
    {
        .linux_side = _this->u_iface,
        .pCompressed = pCompressed,
        .cbCompressed = cbCompressed,
        .pDestBuffer = pDestBuffer,
        .cbDestBufferSize = cbDestBufferSize,
        .nBytesWritten = nBytesWritten,
        .nDesiredSampleRate = nDesiredSampleRate,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_DecompressVoice( &params );
    return params._ret;
}

uint32 __thiscall winISteamUser_SteamUser023_GetVoiceOptimalSampleRate(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser023_GetVoiceOptimalSampleRate_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_GetVoiceOptimalSampleRate( &params );
    return params._ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser023_GetAuthSessionTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket, const SteamNetworkingIdentity *pSteamNetworkingIdentity)
{
    struct cppISteamUser_SteamUser023_GetAuthSessionTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
        .pSteamNetworkingIdentity = pSteamNetworkingIdentity,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_GetAuthSessionTicket( &params );
    return params._ret;
}

HAuthTicket __thiscall winISteamUser_SteamUser023_GetAuthTicketForWebApi(struct w_steam_iface *_this, const char *pchIdentity)
{
    struct cppISteamUser_SteamUser023_GetAuthTicketForWebApi_params params =
    {
        .linux_side = _this->u_iface,
        .pchIdentity = pchIdentity,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_GetAuthTicketForWebApi( &params );
    return params._ret;
}

EBeginAuthSessionResult __thiscall winISteamUser_SteamUser023_BeginAuthSession(struct w_steam_iface *_this, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    struct cppISteamUser_SteamUser023_BeginAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .pAuthTicket = pAuthTicket,
        .cbAuthTicket = cbAuthTicket,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_BeginAuthSession( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser023_EndAuthSession(struct w_steam_iface *_this, CSteamID steamID)
{
    struct cppISteamUser_SteamUser023_EndAuthSession_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_EndAuthSession( &params );
}

void __thiscall winISteamUser_SteamUser023_CancelAuthTicket(struct w_steam_iface *_this, HAuthTicket hAuthTicket)
{
    struct cppISteamUser_SteamUser023_CancelAuthTicket_params params =
    {
        .linux_side = _this->u_iface,
        .hAuthTicket = hAuthTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_CancelAuthTicket( &params );
}

EUserHasLicenseForAppResult __thiscall winISteamUser_SteamUser023_UserHasLicenseForApp(struct w_steam_iface *_this, CSteamID steamID, AppId_t appID)
{
    struct cppISteamUser_SteamUser023_UserHasLicenseForApp_params params =
    {
        .linux_side = _this->u_iface,
        .steamID = steamID,
        .appID = appID,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_UserHasLicenseForApp( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser023_BIsBehindNAT(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser023_BIsBehindNAT_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_BIsBehindNAT( &params );
    return params._ret;
}

void __thiscall winISteamUser_SteamUser023_AdvertiseGame(struct w_steam_iface *_this, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    struct cppISteamUser_SteamUser023_AdvertiseGame_params params =
    {
        .linux_side = _this->u_iface,
        .steamIDGameServer = steamIDGameServer,
        .unIPServer = unIPServer,
        .usPortServer = usPortServer,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_AdvertiseGame( &params );
}

SteamAPICall_t __thiscall winISteamUser_SteamUser023_RequestEncryptedAppTicket(struct w_steam_iface *_this, void *pDataToInclude, int cbDataToInclude)
{
    struct cppISteamUser_SteamUser023_RequestEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pDataToInclude = pDataToInclude,
        .cbDataToInclude = cbDataToInclude,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_RequestEncryptedAppTicket( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser023_GetEncryptedAppTicket(struct w_steam_iface *_this, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    struct cppISteamUser_SteamUser023_GetEncryptedAppTicket_params params =
    {
        .linux_side = _this->u_iface,
        .pTicket = pTicket,
        .cbMaxTicket = cbMaxTicket,
        .pcbTicket = pcbTicket,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_GetEncryptedAppTicket( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser023_GetGameBadgeLevel(struct w_steam_iface *_this, int nSeries, bool bFoil)
{
    struct cppISteamUser_SteamUser023_GetGameBadgeLevel_params params =
    {
        .linux_side = _this->u_iface,
        .nSeries = nSeries,
        .bFoil = bFoil,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_GetGameBadgeLevel( &params );
    return params._ret;
}

int __thiscall winISteamUser_SteamUser023_GetPlayerSteamLevel(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser023_GetPlayerSteamLevel_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_GetPlayerSteamLevel( &params );
    return params._ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser023_RequestStoreAuthURL(struct w_steam_iface *_this, const char *pchRedirectURL)
{
    struct cppISteamUser_SteamUser023_RequestStoreAuthURL_params params =
    {
        .linux_side = _this->u_iface,
        .pchRedirectURL = pchRedirectURL,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_RequestStoreAuthURL( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser023_BIsPhoneVerified(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser023_BIsPhoneVerified_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_BIsPhoneVerified( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser023_BIsTwoFactorEnabled(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser023_BIsTwoFactorEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_BIsTwoFactorEnabled( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser023_BIsPhoneIdentifying(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser023_BIsPhoneIdentifying_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_BIsPhoneIdentifying( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser023_BIsPhoneRequiringVerification(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser023_BIsPhoneRequiringVerification_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_BIsPhoneRequiringVerification( &params );
    return params._ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser023_GetMarketEligibility(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser023_GetMarketEligibility_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_GetMarketEligibility( &params );
    return params._ret;
}

SteamAPICall_t __thiscall winISteamUser_SteamUser023_GetDurationControl(struct w_steam_iface *_this)
{
    struct cppISteamUser_SteamUser023_GetDurationControl_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_GetDurationControl( &params );
    return params._ret;
}

bool __thiscall winISteamUser_SteamUser023_BSetDurationControlOnlineState(struct w_steam_iface *_this, EDurationControlOnlineState eNewState)
{
    struct cppISteamUser_SteamUser023_BSetDurationControlOnlineState_params params =
    {
        .linux_side = _this->u_iface,
        .eNewState = eNewState,
    };
    TRACE("%p\n", _this);
    cppISteamUser_SteamUser023_BSetDurationControlOnlineState( &params );
    return params._ret;
}

extern vtable_ptr winISteamUser_SteamUser023_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUser_SteamUser023,
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetHSteamUser)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BLoggedOn)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetSteamID)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_InitiateGameConnection_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_TerminateGameConnection_DEPRECATED)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_TrackAppUsageEvent)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetUserDataFolder)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_StartVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_StopVoiceRecording)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetAvailableVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_DecompressVoice)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetVoiceOptimalSampleRate)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetAuthSessionTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetAuthTicketForWebApi)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BeginAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_EndAuthSession)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_CancelAuthTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_UserHasLicenseForApp)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BIsBehindNAT)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_AdvertiseGame)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_RequestEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetEncryptedAppTicket)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetGameBadgeLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetPlayerSteamLevel)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_RequestStoreAuthURL)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BIsPhoneVerified)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BIsTwoFactorEnabled)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BIsPhoneIdentifying)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BIsPhoneRequiringVerification)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetMarketEligibility)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_GetDurationControl)
        VTABLE_ADD_FUNC(winISteamUser_SteamUser023_BSetDurationControlOnlineState)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamUser_SteamUser023(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUser023");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUser_SteamUser023_vtable, 33, "SteamUser023");
    r->u_iface = u_iface;
    return r;
}

