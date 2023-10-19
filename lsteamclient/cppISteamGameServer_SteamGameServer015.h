struct cppISteamGameServer_SteamGameServer015_InitGameServer_params
{
    void *linux_side;
    bool _ret;
    uint32 unIP;
    uint16 usGamePort;
    uint16 usQueryPort;
    uint32 unFlags;
    AppId_t nGameAppId;
    const char *pchVersionString;
};
extern void cppISteamGameServer_SteamGameServer015_InitGameServer( struct cppISteamGameServer_SteamGameServer015_InitGameServer_params *params );

struct cppISteamGameServer_SteamGameServer015_SetProduct_params
{
    void *linux_side;
    const char *pszProduct;
};
extern void cppISteamGameServer_SteamGameServer015_SetProduct( struct cppISteamGameServer_SteamGameServer015_SetProduct_params *params );

struct cppISteamGameServer_SteamGameServer015_SetGameDescription_params
{
    void *linux_side;
    const char *pszGameDescription;
};
extern void cppISteamGameServer_SteamGameServer015_SetGameDescription( struct cppISteamGameServer_SteamGameServer015_SetGameDescription_params *params );

struct cppISteamGameServer_SteamGameServer015_SetModDir_params
{
    void *linux_side;
    const char *pszModDir;
};
extern void cppISteamGameServer_SteamGameServer015_SetModDir( struct cppISteamGameServer_SteamGameServer015_SetModDir_params *params );

struct cppISteamGameServer_SteamGameServer015_SetDedicatedServer_params
{
    void *linux_side;
    bool bDedicated;
};
extern void cppISteamGameServer_SteamGameServer015_SetDedicatedServer( struct cppISteamGameServer_SteamGameServer015_SetDedicatedServer_params *params );

struct cppISteamGameServer_SteamGameServer015_LogOn_params
{
    void *linux_side;
    const char *pszToken;
};
extern void cppISteamGameServer_SteamGameServer015_LogOn( struct cppISteamGameServer_SteamGameServer015_LogOn_params *params );

struct cppISteamGameServer_SteamGameServer015_LogOnAnonymous_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer015_LogOnAnonymous( struct cppISteamGameServer_SteamGameServer015_LogOnAnonymous_params *params );

struct cppISteamGameServer_SteamGameServer015_LogOff_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer015_LogOff( struct cppISteamGameServer_SteamGameServer015_LogOff_params *params );

struct cppISteamGameServer_SteamGameServer015_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer015_BLoggedOn( struct cppISteamGameServer_SteamGameServer015_BLoggedOn_params *params );

struct cppISteamGameServer_SteamGameServer015_BSecure_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer015_BSecure( struct cppISteamGameServer_SteamGameServer015_BSecure_params *params );

struct cppISteamGameServer_SteamGameServer015_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer015_GetSteamID( struct cppISteamGameServer_SteamGameServer015_GetSteamID_params *params );

struct cppISteamGameServer_SteamGameServer015_WasRestartRequested_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer015_WasRestartRequested( struct cppISteamGameServer_SteamGameServer015_WasRestartRequested_params *params );

struct cppISteamGameServer_SteamGameServer015_SetMaxPlayerCount_params
{
    void *linux_side;
    int cPlayersMax;
};
extern void cppISteamGameServer_SteamGameServer015_SetMaxPlayerCount( struct cppISteamGameServer_SteamGameServer015_SetMaxPlayerCount_params *params );

struct cppISteamGameServer_SteamGameServer015_SetBotPlayerCount_params
{
    void *linux_side;
    int cBotplayers;
};
extern void cppISteamGameServer_SteamGameServer015_SetBotPlayerCount( struct cppISteamGameServer_SteamGameServer015_SetBotPlayerCount_params *params );

struct cppISteamGameServer_SteamGameServer015_SetServerName_params
{
    void *linux_side;
    const char *pszServerName;
};
extern void cppISteamGameServer_SteamGameServer015_SetServerName( struct cppISteamGameServer_SteamGameServer015_SetServerName_params *params );

struct cppISteamGameServer_SteamGameServer015_SetMapName_params
{
    void *linux_side;
    const char *pszMapName;
};
extern void cppISteamGameServer_SteamGameServer015_SetMapName( struct cppISteamGameServer_SteamGameServer015_SetMapName_params *params );

struct cppISteamGameServer_SteamGameServer015_SetPasswordProtected_params
{
    void *linux_side;
    bool bPasswordProtected;
};
extern void cppISteamGameServer_SteamGameServer015_SetPasswordProtected( struct cppISteamGameServer_SteamGameServer015_SetPasswordProtected_params *params );

struct cppISteamGameServer_SteamGameServer015_SetSpectatorPort_params
{
    void *linux_side;
    uint16 unSpectatorPort;
};
extern void cppISteamGameServer_SteamGameServer015_SetSpectatorPort( struct cppISteamGameServer_SteamGameServer015_SetSpectatorPort_params *params );

struct cppISteamGameServer_SteamGameServer015_SetSpectatorServerName_params
{
    void *linux_side;
    const char *pszSpectatorServerName;
};
extern void cppISteamGameServer_SteamGameServer015_SetSpectatorServerName( struct cppISteamGameServer_SteamGameServer015_SetSpectatorServerName_params *params );

struct cppISteamGameServer_SteamGameServer015_ClearAllKeyValues_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer015_ClearAllKeyValues( struct cppISteamGameServer_SteamGameServer015_ClearAllKeyValues_params *params );

struct cppISteamGameServer_SteamGameServer015_SetKeyValue_params
{
    void *linux_side;
    const char *pKey;
    const char *pValue;
};
extern void cppISteamGameServer_SteamGameServer015_SetKeyValue( struct cppISteamGameServer_SteamGameServer015_SetKeyValue_params *params );

struct cppISteamGameServer_SteamGameServer015_SetGameTags_params
{
    void *linux_side;
    const char *pchGameTags;
};
extern void cppISteamGameServer_SteamGameServer015_SetGameTags( struct cppISteamGameServer_SteamGameServer015_SetGameTags_params *params );

struct cppISteamGameServer_SteamGameServer015_SetGameData_params
{
    void *linux_side;
    const char *pchGameData;
};
extern void cppISteamGameServer_SteamGameServer015_SetGameData( struct cppISteamGameServer_SteamGameServer015_SetGameData_params *params );

struct cppISteamGameServer_SteamGameServer015_SetRegion_params
{
    void *linux_side;
    const char *pszRegion;
};
extern void cppISteamGameServer_SteamGameServer015_SetRegion( struct cppISteamGameServer_SteamGameServer015_SetRegion_params *params );

struct cppISteamGameServer_SteamGameServer015_SetAdvertiseServerActive_params
{
    void *linux_side;
    bool bActive;
};
extern void cppISteamGameServer_SteamGameServer015_SetAdvertiseServerActive( struct cppISteamGameServer_SteamGameServer015_SetAdvertiseServerActive_params *params );

struct cppISteamGameServer_SteamGameServer015_GetAuthSessionTicket_params
{
    void *linux_side;
    HAuthTicket _ret;
    void *pTicket;
    int cbMaxTicket;
    uint32 *pcbTicket;
    const SteamNetworkingIdentity *pSnid;
};
extern void cppISteamGameServer_SteamGameServer015_GetAuthSessionTicket( struct cppISteamGameServer_SteamGameServer015_GetAuthSessionTicket_params *params );

struct cppISteamGameServer_SteamGameServer015_BeginAuthSession_params
{
    void *linux_side;
    EBeginAuthSessionResult _ret;
    const void *pAuthTicket;
    int cbAuthTicket;
    CSteamID steamID;
};
extern void cppISteamGameServer_SteamGameServer015_BeginAuthSession( struct cppISteamGameServer_SteamGameServer015_BeginAuthSession_params *params );

struct cppISteamGameServer_SteamGameServer015_EndAuthSession_params
{
    void *linux_side;
    CSteamID steamID;
};
extern void cppISteamGameServer_SteamGameServer015_EndAuthSession( struct cppISteamGameServer_SteamGameServer015_EndAuthSession_params *params );

struct cppISteamGameServer_SteamGameServer015_CancelAuthTicket_params
{
    void *linux_side;
    HAuthTicket hAuthTicket;
};
extern void cppISteamGameServer_SteamGameServer015_CancelAuthTicket( struct cppISteamGameServer_SteamGameServer015_CancelAuthTicket_params *params );

struct cppISteamGameServer_SteamGameServer015_UserHasLicenseForApp_params
{
    void *linux_side;
    EUserHasLicenseForAppResult _ret;
    CSteamID steamID;
    AppId_t appID;
};
extern void cppISteamGameServer_SteamGameServer015_UserHasLicenseForApp( struct cppISteamGameServer_SteamGameServer015_UserHasLicenseForApp_params *params );

struct cppISteamGameServer_SteamGameServer015_RequestUserGroupStatus_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    CSteamID steamIDGroup;
};
extern void cppISteamGameServer_SteamGameServer015_RequestUserGroupStatus( struct cppISteamGameServer_SteamGameServer015_RequestUserGroupStatus_params *params );

struct cppISteamGameServer_SteamGameServer015_GetGameplayStats_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer015_GetGameplayStats( struct cppISteamGameServer_SteamGameServer015_GetGameplayStats_params *params );

struct cppISteamGameServer_SteamGameServer015_GetServerReputation_params
{
    void *linux_side;
    SteamAPICall_t _ret;
};
extern void cppISteamGameServer_SteamGameServer015_GetServerReputation( struct cppISteamGameServer_SteamGameServer015_GetServerReputation_params *params );

struct cppISteamGameServer_SteamGameServer015_GetPublicIP_params
{
    void *linux_side;
    SteamIPAddress_t *_ret;
};
extern void cppISteamGameServer_SteamGameServer015_GetPublicIP( struct cppISteamGameServer_SteamGameServer015_GetPublicIP_params *params );

struct cppISteamGameServer_SteamGameServer015_HandleIncomingPacket_params
{
    void *linux_side;
    bool _ret;
    const void *pData;
    int cbData;
    uint32 srcIP;
    uint16 srcPort;
};
extern void cppISteamGameServer_SteamGameServer015_HandleIncomingPacket( struct cppISteamGameServer_SteamGameServer015_HandleIncomingPacket_params *params );

struct cppISteamGameServer_SteamGameServer015_GetNextOutgoingPacket_params
{
    void *linux_side;
    int _ret;
    void *pOut;
    int cbMaxOut;
    uint32 *pNetAdr;
    uint16 *pPort;
};
extern void cppISteamGameServer_SteamGameServer015_GetNextOutgoingPacket( struct cppISteamGameServer_SteamGameServer015_GetNextOutgoingPacket_params *params );

struct cppISteamGameServer_SteamGameServer015_AssociateWithClan_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDClan;
};
extern void cppISteamGameServer_SteamGameServer015_AssociateWithClan( struct cppISteamGameServer_SteamGameServer015_AssociateWithClan_params *params );

struct cppISteamGameServer_SteamGameServer015_ComputeNewPlayerCompatibility_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDNewPlayer;
};
extern void cppISteamGameServer_SteamGameServer015_ComputeNewPlayerCompatibility( struct cppISteamGameServer_SteamGameServer015_ComputeNewPlayerCompatibility_params *params );

struct cppISteamGameServer_SteamGameServer015_SendUserConnectAndAuthenticate_DEPRECATED_params
{
    void *linux_side;
    bool _ret;
    uint32 unIPClient;
    const void *pvAuthBlob;
    uint32 cubAuthBlobSize;
    CSteamID *pSteamIDUser;
};
extern void cppISteamGameServer_SteamGameServer015_SendUserConnectAndAuthenticate_DEPRECATED( struct cppISteamGameServer_SteamGameServer015_SendUserConnectAndAuthenticate_DEPRECATED_params *params );

struct cppISteamGameServer_SteamGameServer015_CreateUnauthenticatedUserConnection_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer015_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer015_CreateUnauthenticatedUserConnection_params *params );

struct cppISteamGameServer_SteamGameServer015_SendUserDisconnect_DEPRECATED_params
{
    void *linux_side;
    CSteamID steamIDUser;
};
extern void cppISteamGameServer_SteamGameServer015_SendUserDisconnect_DEPRECATED( struct cppISteamGameServer_SteamGameServer015_SendUserDisconnect_DEPRECATED_params *params );

struct cppISteamGameServer_SteamGameServer015_BUpdateUserData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchPlayerName;
    uint32 uScore;
};
extern void cppISteamGameServer_SteamGameServer015_BUpdateUserData( struct cppISteamGameServer_SteamGameServer015_BUpdateUserData_params *params );

struct cppISteamGameServer_SteamGameServer015_SetMasterServerHeartbeatInterval_DEPRECATED_params
{
    void *linux_side;
    int iHeartbeatInterval;
};
extern void cppISteamGameServer_SteamGameServer015_SetMasterServerHeartbeatInterval_DEPRECATED( struct cppISteamGameServer_SteamGameServer015_SetMasterServerHeartbeatInterval_DEPRECATED_params *params );

struct cppISteamGameServer_SteamGameServer015_ForceMasterServerHeartbeat_DEPRECATED_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer015_ForceMasterServerHeartbeat_DEPRECATED( struct cppISteamGameServer_SteamGameServer015_ForceMasterServerHeartbeat_DEPRECATED_params *params );

