struct cppISteamNetworking_SteamNetworking004_SendP2PPacket_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDRemote;
    const void *pubData;
    uint32 cubData;
    EP2PSend eP2PSendType;
    int nVirtualPort;
};
extern void cppISteamNetworking_SteamNetworking004_SendP2PPacket( struct cppISteamNetworking_SteamNetworking004_SendP2PPacket_params *params );

struct cppISteamNetworking_SteamNetworking004_IsP2PPacketAvailable_params
{
    void *linux_side;
    bool _ret;
    uint32 *pcubMsgSize;
    int nVirtualPort;
};
extern void cppISteamNetworking_SteamNetworking004_IsP2PPacketAvailable( struct cppISteamNetworking_SteamNetworking004_IsP2PPacketAvailable_params *params );

struct cppISteamNetworking_SteamNetworking004_ReadP2PPacket_params
{
    void *linux_side;
    bool _ret;
    void *pubDest;
    uint32 cubDest;
    uint32 *pcubMsgSize;
    CSteamID *psteamIDRemote;
    int nVirtualPort;
};
extern void cppISteamNetworking_SteamNetworking004_ReadP2PPacket( struct cppISteamNetworking_SteamNetworking004_ReadP2PPacket_params *params );

struct cppISteamNetworking_SteamNetworking004_AcceptP2PSessionWithUser_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDRemote;
};
extern void cppISteamNetworking_SteamNetworking004_AcceptP2PSessionWithUser( struct cppISteamNetworking_SteamNetworking004_AcceptP2PSessionWithUser_params *params );

struct cppISteamNetworking_SteamNetworking004_CloseP2PSessionWithUser_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDRemote;
};
extern void cppISteamNetworking_SteamNetworking004_CloseP2PSessionWithUser( struct cppISteamNetworking_SteamNetworking004_CloseP2PSessionWithUser_params *params );

struct cppISteamNetworking_SteamNetworking004_GetP2PSessionState_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDRemote;
    P2PSessionState_t *pConnectionState;
};
extern void cppISteamNetworking_SteamNetworking004_GetP2PSessionState( struct cppISteamNetworking_SteamNetworking004_GetP2PSessionState_params *params );

struct cppISteamNetworking_SteamNetworking004_CreateListenSocket_params
{
    void *linux_side;
    SNetListenSocket_t _ret;
    int nVirtualP2PPort;
    uint32 nIP;
    uint16 nPort;
    bool bAllowUseOfPacketRelay;
};
extern void cppISteamNetworking_SteamNetworking004_CreateListenSocket( struct cppISteamNetworking_SteamNetworking004_CreateListenSocket_params *params );

struct cppISteamNetworking_SteamNetworking004_CreateP2PConnectionSocket_params
{
    void *linux_side;
    SNetSocket_t _ret;
    CSteamID steamIDTarget;
    int nVirtualPort;
    int nTimeoutSec;
    bool bAllowUseOfPacketRelay;
};
extern void cppISteamNetworking_SteamNetworking004_CreateP2PConnectionSocket( struct cppISteamNetworking_SteamNetworking004_CreateP2PConnectionSocket_params *params );

struct cppISteamNetworking_SteamNetworking004_CreateConnectionSocket_params
{
    void *linux_side;
    SNetSocket_t _ret;
    uint32 nIP;
    uint16 nPort;
    int nTimeoutSec;
};
extern void cppISteamNetworking_SteamNetworking004_CreateConnectionSocket( struct cppISteamNetworking_SteamNetworking004_CreateConnectionSocket_params *params );

struct cppISteamNetworking_SteamNetworking004_DestroySocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    bool bNotifyRemoteEnd;
};
extern void cppISteamNetworking_SteamNetworking004_DestroySocket( struct cppISteamNetworking_SteamNetworking004_DestroySocket_params *params );

struct cppISteamNetworking_SteamNetworking004_DestroyListenSocket_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hSocket;
    bool bNotifyRemoteEnd;
};
extern void cppISteamNetworking_SteamNetworking004_DestroyListenSocket( struct cppISteamNetworking_SteamNetworking004_DestroyListenSocket_params *params );

struct cppISteamNetworking_SteamNetworking004_SendDataOnSocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    void *pubData;
    uint32 cubData;
    bool bReliable;
};
extern void cppISteamNetworking_SteamNetworking004_SendDataOnSocket( struct cppISteamNetworking_SteamNetworking004_SendDataOnSocket_params *params );

struct cppISteamNetworking_SteamNetworking004_IsDataAvailableOnSocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    uint32 *pcubMsgSize;
};
extern void cppISteamNetworking_SteamNetworking004_IsDataAvailableOnSocket( struct cppISteamNetworking_SteamNetworking004_IsDataAvailableOnSocket_params *params );

struct cppISteamNetworking_SteamNetworking004_RetrieveDataFromSocket_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    void *pubDest;
    uint32 cubDest;
    uint32 *pcubMsgSize;
};
extern void cppISteamNetworking_SteamNetworking004_RetrieveDataFromSocket( struct cppISteamNetworking_SteamNetworking004_RetrieveDataFromSocket_params *params );

struct cppISteamNetworking_SteamNetworking004_IsDataAvailable_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hListenSocket;
    uint32 *pcubMsgSize;
    SNetSocket_t *phSocket;
};
extern void cppISteamNetworking_SteamNetworking004_IsDataAvailable( struct cppISteamNetworking_SteamNetworking004_IsDataAvailable_params *params );

struct cppISteamNetworking_SteamNetworking004_RetrieveData_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hListenSocket;
    void *pubDest;
    uint32 cubDest;
    uint32 *pcubMsgSize;
    SNetSocket_t *phSocket;
};
extern void cppISteamNetworking_SteamNetworking004_RetrieveData( struct cppISteamNetworking_SteamNetworking004_RetrieveData_params *params );

struct cppISteamNetworking_SteamNetworking004_GetSocketInfo_params
{
    void *linux_side;
    bool _ret;
    SNetSocket_t hSocket;
    CSteamID *pSteamIDRemote;
    int *peSocketStatus;
    uint32 *punIPRemote;
    uint16 *punPortRemote;
};
extern void cppISteamNetworking_SteamNetworking004_GetSocketInfo( struct cppISteamNetworking_SteamNetworking004_GetSocketInfo_params *params );

struct cppISteamNetworking_SteamNetworking004_GetListenSocketInfo_params
{
    void *linux_side;
    bool _ret;
    SNetListenSocket_t hListenSocket;
    uint32 *pnIP;
    uint16 *pnPort;
};
extern void cppISteamNetworking_SteamNetworking004_GetListenSocketInfo( struct cppISteamNetworking_SteamNetworking004_GetListenSocketInfo_params *params );

struct cppISteamNetworking_SteamNetworking004_GetSocketConnectionType_params
{
    void *linux_side;
    ESNetSocketConnectionType _ret;
    SNetSocket_t hSocket;
};
extern void cppISteamNetworking_SteamNetworking004_GetSocketConnectionType( struct cppISteamNetworking_SteamNetworking004_GetSocketConnectionType_params *params );

struct cppISteamNetworking_SteamNetworking004_GetMaxPacketSize_params
{
    void *linux_side;
    int _ret;
    SNetSocket_t hSocket;
};
extern void cppISteamNetworking_SteamNetworking004_GetMaxPacketSize( struct cppISteamNetworking_SteamNetworking004_GetMaxPacketSize_params *params );

