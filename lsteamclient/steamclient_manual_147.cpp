extern "C" {
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);
}

#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#pragma push_macro("strncpy")
#undef strncpy
#include "steamworks_sdk_147/steam_api.h"
#include "steamworks_sdk_147/isteamnetworkingsockets.h"
#include "steamworks_sdk_147/isteamnetworkingutils.h"
#include "steamworks_sdk_147/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#pragma pop_macro("strncpy")
#include "steamclient_private.h"

extern "C" {
#define SDKVER_147
#include "struct_converters.h"

#define SDK_VERSION 1470
#include "steamclient_manual_common.h"

#include "cppISteamNetworkingSockets_SteamNetworkingSockets006.h"
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection_params *params )
{
    ISteamNetworkingSockets *iface = (ISteamNetworkingSockets *)params->linux_side;
    SteamNetworkingMessage_t *lin_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, lin_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, lin_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket_params *params )
{
    ISteamNetworkingSockets *iface = (ISteamNetworkingSockets *)params->linux_side;
    SteamNetworkingMessage_t *lin_ppOutMessages[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnListenSocket( params->hSocket, lin_ppOutMessages, params->nMaxMessages );
    lin_to_win_struct_SteamNetworkingMessage_t( params->_ret, lin_ppOutMessages,
                                                params->ppOutMessages, params->nMaxMessages );
}

void cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages( struct cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages_params *params )
{
#define MAX_SEND_MESSAGES 64
    ISteamNetworkingSockets *iface = (ISteamNetworkingSockets *)params->linux_side;
    /* use the stack to avoid heap allocation */
    struct SteamNetworkingMessage_t *lin_msgs[MAX_SEND_MESSAGES];
    int i;

    if (params->nMessages > MAX_SEND_MESSAGES)
    {
        /* if we ever hit this, increase MAX_SEND_MESSAGES appropriately */
        FIXME( "Trying to send %u messages, which is more than %u! Will break up into pieces.\n",
               params->nMessages, MAX_SEND_MESSAGES );
    }

    while (params->nMessages)
    {
        for (i = 0; i < params->nMessages && i < MAX_SEND_MESSAGES; ++i)
            lin_msgs[i] = (SteamNetworkingMessage_t *)network_message_win_to_lin( params->pMessages[i] );

        iface->SendMessages( i, lin_msgs, params->pOutMessageNumberOrResult );

        params->nMessages -= i;
        params->pMessages += i;
        if (params->pOutMessageNumberOrResult) params->pOutMessageNumberOrResult += i;
    }
}
