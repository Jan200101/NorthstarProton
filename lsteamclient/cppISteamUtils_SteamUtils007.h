struct cppISteamUtils_SteamUtils007_GetSecondsSinceAppActive_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils007_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils007_GetSecondsSinceAppActive_params *params );

struct cppISteamUtils_SteamUtils007_GetSecondsSinceComputerActive_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils007_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils007_GetSecondsSinceComputerActive_params *params );

struct cppISteamUtils_SteamUtils007_GetConnectedUniverse_params
{
    void *linux_side;
    EUniverse _ret;
};
extern void cppISteamUtils_SteamUtils007_GetConnectedUniverse( struct cppISteamUtils_SteamUtils007_GetConnectedUniverse_params *params );

struct cppISteamUtils_SteamUtils007_GetServerRealTime_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils007_GetServerRealTime( struct cppISteamUtils_SteamUtils007_GetServerRealTime_params *params );

struct cppISteamUtils_SteamUtils007_GetIPCountry_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamUtils_SteamUtils007_GetIPCountry( struct cppISteamUtils_SteamUtils007_GetIPCountry_params *params );

struct cppISteamUtils_SteamUtils007_GetImageSize_params
{
    void *linux_side;
    bool _ret;
    int iImage;
    uint32 *pnWidth;
    uint32 *pnHeight;
};
extern void cppISteamUtils_SteamUtils007_GetImageSize( struct cppISteamUtils_SteamUtils007_GetImageSize_params *params );

struct cppISteamUtils_SteamUtils007_GetImageRGBA_params
{
    void *linux_side;
    bool _ret;
    int iImage;
    uint8 *pubDest;
    int nDestBufferSize;
};
extern void cppISteamUtils_SteamUtils007_GetImageRGBA( struct cppISteamUtils_SteamUtils007_GetImageRGBA_params *params );

struct cppISteamUtils_SteamUtils007_GetCSERIPPort_params
{
    void *linux_side;
    bool _ret;
    uint32 *unIP;
    uint16 *usPort;
};
extern void cppISteamUtils_SteamUtils007_GetCSERIPPort( struct cppISteamUtils_SteamUtils007_GetCSERIPPort_params *params );

struct cppISteamUtils_SteamUtils007_GetCurrentBatteryPower_params
{
    void *linux_side;
    uint8 _ret;
};
extern void cppISteamUtils_SteamUtils007_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils007_GetCurrentBatteryPower_params *params );

struct cppISteamUtils_SteamUtils007_GetAppID_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils007_GetAppID( struct cppISteamUtils_SteamUtils007_GetAppID_params *params );

struct cppISteamUtils_SteamUtils007_SetOverlayNotificationPosition_params
{
    void *linux_side;
    ENotificationPosition eNotificationPosition;
};
extern void cppISteamUtils_SteamUtils007_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils007_SetOverlayNotificationPosition_params *params );

struct cppISteamUtils_SteamUtils007_IsAPICallCompleted_params
{
    void *linux_side;
    bool _ret;
    SteamAPICall_t hSteamAPICall;
    bool *pbFailed;
};
extern void cppISteamUtils_SteamUtils007_IsAPICallCompleted( struct cppISteamUtils_SteamUtils007_IsAPICallCompleted_params *params );

struct cppISteamUtils_SteamUtils007_GetAPICallFailureReason_params
{
    void *linux_side;
    ESteamAPICallFailure _ret;
    SteamAPICall_t hSteamAPICall;
};
extern void cppISteamUtils_SteamUtils007_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils007_GetAPICallFailureReason_params *params );

struct cppISteamUtils_SteamUtils007_GetAPICallResult_params
{
    void *linux_side;
    bool _ret;
    SteamAPICall_t hSteamAPICall;
    void *pCallback;
    int cubCallback;
    int iCallbackExpected;
    bool *pbFailed;
};
extern void cppISteamUtils_SteamUtils007_GetAPICallResult( struct cppISteamUtils_SteamUtils007_GetAPICallResult_params *params );

struct cppISteamUtils_SteamUtils007_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamUtils_SteamUtils007_RunFrame( struct cppISteamUtils_SteamUtils007_RunFrame_params *params );

struct cppISteamUtils_SteamUtils007_GetIPCCallCount_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils007_GetIPCCallCount( struct cppISteamUtils_SteamUtils007_GetIPCCallCount_params *params );

struct cppISteamUtils_SteamUtils007_SetWarningMessageHook_params
{
    void *linux_side;
    SteamAPIWarningMessageHook_t pFunction;
};
extern void cppISteamUtils_SteamUtils007_SetWarningMessageHook( struct cppISteamUtils_SteamUtils007_SetWarningMessageHook_params *params );

struct cppISteamUtils_SteamUtils007_IsOverlayEnabled_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils007_IsOverlayEnabled( struct cppISteamUtils_SteamUtils007_IsOverlayEnabled_params *params );

struct cppISteamUtils_SteamUtils007_BOverlayNeedsPresent_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils007_BOverlayNeedsPresent( struct cppISteamUtils_SteamUtils007_BOverlayNeedsPresent_params *params );

struct cppISteamUtils_SteamUtils007_CheckFileSignature_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *szFileName;
};
extern void cppISteamUtils_SteamUtils007_CheckFileSignature( struct cppISteamUtils_SteamUtils007_CheckFileSignature_params *params );

struct cppISteamUtils_SteamUtils007_ShowGamepadTextInput_params
{
    void *linux_side;
    bool _ret;
    EGamepadTextInputMode eInputMode;
    EGamepadTextInputLineMode eLineInputMode;
    const char *pchDescription;
    uint32 unCharMax;
    const char *pchExistingText;
};
extern void cppISteamUtils_SteamUtils007_ShowGamepadTextInput( struct cppISteamUtils_SteamUtils007_ShowGamepadTextInput_params *params );

struct cppISteamUtils_SteamUtils007_GetEnteredGamepadTextLength_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils007_GetEnteredGamepadTextLength( struct cppISteamUtils_SteamUtils007_GetEnteredGamepadTextLength_params *params );

struct cppISteamUtils_SteamUtils007_GetEnteredGamepadTextInput_params
{
    void *linux_side;
    bool _ret;
    char *pchText;
    uint32 cchText;
};
extern void cppISteamUtils_SteamUtils007_GetEnteredGamepadTextInput( struct cppISteamUtils_SteamUtils007_GetEnteredGamepadTextInput_params *params );

struct cppISteamUtils_SteamUtils007_GetSteamUILanguage_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamUtils_SteamUtils007_GetSteamUILanguage( struct cppISteamUtils_SteamUtils007_GetSteamUILanguage_params *params );

struct cppISteamUtils_SteamUtils007_IsSteamRunningInVR_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils007_IsSteamRunningInVR( struct cppISteamUtils_SteamUtils007_IsSteamRunningInVR_params *params );

struct cppISteamUtils_SteamUtils007_SetOverlayNotificationInset_params
{
    void *linux_side;
    int nHorizontalInset;
    int nVerticalInset;
};
extern void cppISteamUtils_SteamUtils007_SetOverlayNotificationInset( struct cppISteamUtils_SteamUtils007_SetOverlayNotificationInset_params *params );

