struct cppISteamNetworking_SteamNetworking006_SendP2PPacket_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDRemote;
    const void *pubData;
    uint32 cubData;
    EP2PSend eP2PSendType;
    int nChannel;
};
extern void cppISteamNetworking_SteamNetworking006_SendP2PPacket( struct cppISteamNetworking_SteamNetworking006_SendP2PPacket_params *params );

struct cppISteamNetworking_SteamNetworking006_IsP2PPacketAvailable_params
{
    void *linux_side;
    bool _ret;
    uint32 *pcubMsgSize;
    int nChannel;
};
extern void cppISteamNetworking_SteamNetworking006_IsP2PPacketAvailable( struct cppISteamNetworking_SteamNetworking006_IsP2PPacketAvailable_params *params );

struct cppISteamNetworking_SteamNetworking006_ReadP2PPacket_params
{
    void *linux_side;
    bool _ret;
    void *pubDest;
    uint32 cubDest;
    uint32 *pcubMsgSize;
    CSteamID *psteamIDRemote;
    int nChannel;
};
extern void cppISteamNetworking_SteamNetworking006_ReadP2PPacket( struct cppISteamNetworking_SteamNetworking006_ReadP2PPacket_params *params );

struct cppISteamNetworking_SteamNetworking006_AcceptP2PSessionWithUser_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDRemote;
};
extern void cppISteamNetworking_SteamNetworking006_AcceptP2PSessionWithUser( struct cppISteamNetworking_SteamNetworking006_AcceptP2PSessionWithUser_params *params );

struct cppISteamNetworking_SteamNetworking006_CloseP2PSessionWithUser_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDRemote;
};
extern void cppISteamNetworking_SteamNetworking006_CloseP2PSessionWithUser( struct cppISteamNetworking_SteamNetworking006_CloseP2PSessionWithUser_params *params );

struct cppISteamNetworking_SteamNetworking006_CloseP2PChannelWithUser_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDRemote;
    int nChannel;
};
extern void cppISteamNetworking_SteamNetworking006_CloseP2PChannelWithUser( struct cppISteamNetworking_SteamNetworking006_CloseP2PChannelWithUser_params *params );

struct cppISteamNetworking_SteamNetworking006_GetP2PSessionState_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDRemote;
    P2PSessionState_t *pConnectionState;
};
extern void cppISteamNetworking_SteamNetworking006_GetP2PSessionState( struct cppISteamNetworking_SteamNetworking006_GetP2PSessionState_params *params );

struct cppISteamNetworking_SteamNetworking006_AllowP2PPacketRelay_params
{
    void *linux_side;
    bool _ret;
    bool bAllow;
};
extern void cppISteamNetworking_SteamNetworking006_AllowP2PPacketRelay( struct cppISteamNetworking_SteamNetworking006_AllowP2PPacketRelay_params *params );

struct cppISteamNetworking_SteamNetworking006_CreateListenSocket_params
{
    void *linux_side;
    SNetListenSocket_t _ret;
    int nVirtualP2PPort;
    SteamIPAddress_t nIP;
    uint16 nPort;
    bool bAllowUseOfPacketRelay;
};
extern void cppISteamNetworking_SteamNetworking006_CreateListenSocket( struct cppISteamNetworking_SteamNetworking006_CreateListenSocket_params *params );

struct cppISteamNetworking_SteamNetworking006_CreateP2PConnectionSocket_params
{
    void *linux_side;
    SNetSocket_t _ret;
    CSteamID steamIDTarget;
    int nVirtualPort;
    int nTimeoutSec;
    bool bAllowUseOfPacketRelay;
};
extern void cppISteamNetworking_SteamNetworking006_CreateP2PConnectionSocket( struct cppISteamNetworking_SteamNetworking006_CreateP2PConnectionSocket_params *params );

struct cppISteamNetworking_SteamNetworking006_CreateConnectionSocket_params
{
    void *linux_side;
    SNetSocket_t _ret;
    SteamIPAddress_t nIP;
    uint16 nPort;
    int nTimeoutSec;
};
extern void cppISteamNetworking_SteamNetworking006_CreateConnectionSocket( struct cppISteamNetworking_SteamNetworking006_CreateConnectionSocket_params *params );

struct cppISteamNetworking_SteamNetworking006_DestroySocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    bool bNotifyRemoteEnd;
};
extern void cppISteamNetworking_SteamNetworking006_DestroySocket( struct cppISteamNetworking_SteamNetworking006_DestroySocket_params *params );

struct cppISteamNetworking_SteamNetworking006_DestroyListenSocket_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hSocket;
    bool bNotifyRemoteEnd;
};
extern void cppISteamNetworking_SteamNetworking006_DestroyListenSocket( struct cppISteamNetworking_SteamNetworking006_DestroyListenSocket_params *params );

struct cppISteamNetworking_SteamNetworking006_SendDataOnSocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    void *pubData;
    uint32 cubData;
    bool bReliable;
};
extern void cppISteamNetworking_SteamNetworking006_SendDataOnSocket( struct cppISteamNetworking_SteamNetworking006_SendDataOnSocket_params *params );

struct cppISteamNetworking_SteamNetworking006_IsDataAvailableOnSocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    uint32 *pcubMsgSize;
};
extern void cppISteamNetworking_SteamNetworking006_IsDataAvailableOnSocket( struct cppISteamNetworking_SteamNetworking006_IsDataAvailableOnSocket_params *params );

struct cppISteamNetworking_SteamNetworking006_RetrieveDataFromSocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    void *pubDest;
    uint32 cubDest;
    uint32 *pcubMsgSize;
};
extern void cppISteamNetworking_SteamNetworking006_RetrieveDataFromSocket( struct cppISteamNetworking_SteamNetworking006_RetrieveDataFromSocket_params *params );

struct cppISteamNetworking_SteamNetworking006_IsDataAvailable_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hListenSocket;
    uint32 *pcubMsgSize;
    SNetSocket_t *phSocket;
};
extern void cppISteamNetworking_SteamNetworking006_IsDataAvailable( struct cppISteamNetworking_SteamNetworking006_IsDataAvailable_params *params );

struct cppISteamNetworking_SteamNetworking006_RetrieveData_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hListenSocket;
    void *pubDest;
    uint32 cubDest;
    uint32 *pcubMsgSize;
    SNetSocket_t *phSocket;
};
extern void cppISteamNetworking_SteamNetworking006_RetrieveData( struct cppISteamNetworking_SteamNetworking006_RetrieveData_params *params );

struct cppISteamNetworking_SteamNetworking006_GetSocketInfo_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    CSteamID *pSteamIDRemote;
    int *peSocketStatus;
    SteamIPAddress_t *punIPRemote;
    uint16 *punPortRemote;
};
extern void cppISteamNetworking_SteamNetworking006_GetSocketInfo( struct cppISteamNetworking_SteamNetworking006_GetSocketInfo_params *params );

struct cppISteamNetworking_SteamNetworking006_GetListenSocketInfo_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hListenSocket;
    SteamIPAddress_t *pnIP;
    uint16 *pnPort;
};
extern void cppISteamNetworking_SteamNetworking006_GetListenSocketInfo( struct cppISteamNetworking_SteamNetworking006_GetListenSocketInfo_params *params );

struct cppISteamNetworking_SteamNetworking006_GetSocketConnectionType_params
{
    void *linux_side;
    ESNetSocketConnectionType _ret;
    SNetSocket_t hSocket;
};
extern void cppISteamNetworking_SteamNetworking006_GetSocketConnectionType( struct cppISteamNetworking_SteamNetworking006_GetSocketConnectionType_params *params );

struct cppISteamNetworking_SteamNetworking006_GetMaxPacketSize_params
{
    void *linux_side;
    int _ret;
    SNetSocket_t hSocket;
};
extern void cppISteamNetworking_SteamNetworking006_GetMaxPacketSize( struct cppISteamNetworking_SteamNetworking006_GetMaxPacketSize_params *params );

