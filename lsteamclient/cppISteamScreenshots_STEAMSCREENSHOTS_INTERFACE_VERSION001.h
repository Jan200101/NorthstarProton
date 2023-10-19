struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot_params
{
    void *linux_side;
    ScreenshotHandle _ret;
    void *pubRGB;
    uint32 cubRGB;
    int nWidth;
    int nHeight;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_WriteScreenshot_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary_params
{
    void *linux_side;
    ScreenshotHandle _ret;
    const char *pchFilename;
    const char *pchThumbnailFilename;
    int nWidth;
    int nHeight;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_AddScreenshotToLibrary_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot_params
{
    void *linux_side;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TriggerScreenshot_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots_params
{
    void *linux_side;
    bool bHook;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_HookScreenshots_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation_params
{
    void *linux_side;
    bool _ret;
    ScreenshotHandle hScreenshot;
    const char *pchLocation;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_SetLocation_params *params );

struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser_params
{
    void *linux_side;
    bool _ret;
    ScreenshotHandle hScreenshot;
    CSteamID steamID;
};
extern void cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser( struct cppISteamScreenshots_STEAMSCREENSHOTS_INTERFACE_VERSION001_TagUser_params *params );

