struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionCount_params *params );

struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID_params
{
    void *linux_side;
    RemotePlaySessionID_t _ret;
    int iSessionIndex;
};
extern void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionID_params *params );

struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
    RemotePlaySessionID_t unSessionID;
};
extern void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionSteamID_params *params );

struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName_params
{
    void *linux_side;
    const char *_ret;
    RemotePlaySessionID_t unSessionID;
};
extern void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientName_params *params );

struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor_params
{
    void *linux_side;
    ESteamDeviceFormFactor _ret;
    RemotePlaySessionID_t unSessionID;
};
extern void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_GetSessionClientFormFactor_params *params );

struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution_params
{
    void *linux_side;
    bool _ret;
    RemotePlaySessionID_t unSessionID;
    int *pnResolutionX;
    int *pnResolutionY;
};
extern void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BGetSessionClientResolution_params *params );

struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite( struct cppISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION001_BSendRemotePlayTogetherInvite_params *params );

