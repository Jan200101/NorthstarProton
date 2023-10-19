struct cppISteamNetworking_SteamNetworking005_SendP2PPacket_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDRemote;
    const void *pubData;
    uint32 cubData;
    EP2PSend eP2PSendType;
    int nChannel;
};
extern void cppISteamNetworking_SteamNetworking005_SendP2PPacket( struct cppISteamNetworking_SteamNetworking005_SendP2PPacket_params *params );

struct cppISteamNetworking_SteamNetworking005_IsP2PPacketAvailable_params
{
    void *linux_side;
    bool _ret;
    uint32 *pcubMsgSize;
    int nChannel;
};
extern void cppISteamNetworking_SteamNetworking005_IsP2PPacketAvailable( struct cppISteamNetworking_SteamNetworking005_IsP2PPacketAvailable_params *params );

struct cppISteamNetworking_SteamNetworking005_ReadP2PPacket_params
{
    void *linux_side;
    bool _ret;
    void *pubDest;
    uint32 cubDest;
    uint32 *pcubMsgSize;
    CSteamID *psteamIDRemote;
    int nChannel;
};
extern void cppISteamNetworking_SteamNetworking005_ReadP2PPacket( struct cppISteamNetworking_SteamNetworking005_ReadP2PPacket_params *params );

struct cppISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDRemote;
};
extern void cppISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser( struct cppISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser_params *params );

struct cppISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDRemote;
};
extern void cppISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser( struct cppISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser_params *params );

struct cppISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDRemote;
    int nChannel;
};
extern void cppISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser( struct cppISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser_params *params );

struct cppISteamNetworking_SteamNetworking005_GetP2PSessionState_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDRemote;
    P2PSessionState_t *pConnectionState;
};
extern void cppISteamNetworking_SteamNetworking005_GetP2PSessionState( struct cppISteamNetworking_SteamNetworking005_GetP2PSessionState_params *params );

struct cppISteamNetworking_SteamNetworking005_AllowP2PPacketRelay_params
{
    void *linux_side;
    bool _ret;
    bool bAllow;
};
extern void cppISteamNetworking_SteamNetworking005_AllowP2PPacketRelay( struct cppISteamNetworking_SteamNetworking005_AllowP2PPacketRelay_params *params );

struct cppISteamNetworking_SteamNetworking005_CreateListenSocket_params
{
    void *linux_side;
    SNetListenSocket_t _ret;
    int nVirtualP2PPort;
    uint32 nIP;
    uint16 nPort;
    bool bAllowUseOfPacketRelay;
};
extern void cppISteamNetworking_SteamNetworking005_CreateListenSocket( struct cppISteamNetworking_SteamNetworking005_CreateListenSocket_params *params );

struct cppISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket_params
{
    void *linux_side;
    SNetSocket_t _ret;
    CSteamID steamIDTarget;
    int nVirtualPort;
    int nTimeoutSec;
    bool bAllowUseOfPacketRelay;
};
extern void cppISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket( struct cppISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket_params *params );

struct cppISteamNetworking_SteamNetworking005_CreateConnectionSocket_params
{
    void *linux_side;
    SNetSocket_t _ret;
    uint32 nIP;
    uint16 nPort;
    int nTimeoutSec;
};
extern void cppISteamNetworking_SteamNetworking005_CreateConnectionSocket( struct cppISteamNetworking_SteamNetworking005_CreateConnectionSocket_params *params );

struct cppISteamNetworking_SteamNetworking005_DestroySocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    bool bNotifyRemoteEnd;
};
extern void cppISteamNetworking_SteamNetworking005_DestroySocket( struct cppISteamNetworking_SteamNetworking005_DestroySocket_params *params );

struct cppISteamNetworking_SteamNetworking005_DestroyListenSocket_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hSocket;
    bool bNotifyRemoteEnd;
};
extern void cppISteamNetworking_SteamNetworking005_DestroyListenSocket( struct cppISteamNetworking_SteamNetworking005_DestroyListenSocket_params *params );

struct cppISteamNetworking_SteamNetworking005_SendDataOnSocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    void *pubData;
    uint32 cubData;
    bool bReliable;
};
extern void cppISteamNetworking_SteamNetworking005_SendDataOnSocket( struct cppISteamNetworking_SteamNetworking005_SendDataOnSocket_params *params );

struct cppISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    uint32 *pcubMsgSize;
};
extern void cppISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket( struct cppISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket_params *params );

struct cppISteamNetworking_SteamNetworking005_RetrieveDataFromSocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    void *pubDest;
    uint32 cubDest;
    uint32 *pcubMsgSize;
};
extern void cppISteamNetworking_SteamNetworking005_RetrieveDataFromSocket( struct cppISteamNetworking_SteamNetworking005_RetrieveDataFromSocket_params *params );

struct cppISteamNetworking_SteamNetworking005_IsDataAvailable_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hListenSocket;
    uint32 *pcubMsgSize;
    SNetSocket_t *phSocket;
};
extern void cppISteamNetworking_SteamNetworking005_IsDataAvailable( struct cppISteamNetworking_SteamNetworking005_IsDataAvailable_params *params );

struct cppISteamNetworking_SteamNetworking005_RetrieveData_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hListenSocket;
    void *pubDest;
    uint32 cubDest;
    uint32 *pcubMsgSize;
    SNetSocket_t *phSocket;
};
extern void cppISteamNetworking_SteamNetworking005_RetrieveData( struct cppISteamNetworking_SteamNetworking005_RetrieveData_params *params );

struct cppISteamNetworking_SteamNetworking005_GetSocketInfo_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    CSteamID *pSteamIDRemote;
    int *peSocketStatus;
    uint32 *punIPRemote;
    uint16 *punPortRemote;
};
extern void cppISteamNetworking_SteamNetworking005_GetSocketInfo( struct cppISteamNetworking_SteamNetworking005_GetSocketInfo_params *params );

struct cppISteamNetworking_SteamNetworking005_GetListenSocketInfo_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hListenSocket;
    uint32 *pnIP;
    uint16 *pnPort;
};
extern void cppISteamNetworking_SteamNetworking005_GetListenSocketInfo( struct cppISteamNetworking_SteamNetworking005_GetListenSocketInfo_params *params );

struct cppISteamNetworking_SteamNetworking005_GetSocketConnectionType_params
{
    void *linux_side;
    ESNetSocketConnectionType _ret;
    SNetSocket_t hSocket;
};
extern void cppISteamNetworking_SteamNetworking005_GetSocketConnectionType( struct cppISteamNetworking_SteamNetworking005_GetSocketConnectionType_params *params );

struct cppISteamNetworking_SteamNetworking005_GetMaxPacketSize_params
{
    void *linux_side;
    int _ret;
    SNetSocket_t hSocket;
};
extern void cppISteamNetworking_SteamNetworking005_GetMaxPacketSize( struct cppISteamNetworking_SteamNetworking005_GetMaxPacketSize_params *params );

