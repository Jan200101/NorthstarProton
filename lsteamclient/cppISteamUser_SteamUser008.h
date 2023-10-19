struct cppISteamUser_SteamUser008_GetHSteamUser_params
{
    void *linux_side;
    HSteamUser _ret;
};
extern void cppISteamUser_SteamUser008_GetHSteamUser( struct cppISteamUser_SteamUser008_GetHSteamUser_params *params );

struct cppISteamUser_SteamUser008_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser008_BLoggedOn( struct cppISteamUser_SteamUser008_BLoggedOn_params *params );

struct cppISteamUser_SteamUser008_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamUser_SteamUser008_GetSteamID( struct cppISteamUser_SteamUser008_GetSteamID_params *params );

struct cppISteamUser_SteamUser008_InitiateGameConnection_params
{
    void *linux_side;
    int _ret;
    void *pBlob;
    int cbMaxBlob;
    CSteamID steamID;
    CGameID gameID;
    uint32 unIPServer;
    uint16 usPortServer;
    bool bSecure;
    void *pvSteam2GetEncryptionKey;
    int cbSteam2GetEncryptionKey;
};
extern void cppISteamUser_SteamUser008_InitiateGameConnection( struct cppISteamUser_SteamUser008_InitiateGameConnection_params *params );

struct cppISteamUser_SteamUser008_TerminateGameConnection_params
{
    void *linux_side;
    uint32 unIPServer;
    uint16 usPortServer;
};
extern void cppISteamUser_SteamUser008_TerminateGameConnection( struct cppISteamUser_SteamUser008_TerminateGameConnection_params *params );

struct cppISteamUser_SteamUser008_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser008_TrackAppUsageEvent( struct cppISteamUser_SteamUser008_TrackAppUsageEvent_params *params );

struct cppISteamUser_SteamUser008_RefreshSteam2Login_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser008_RefreshSteam2Login( struct cppISteamUser_SteamUser008_RefreshSteam2Login_params *params );

