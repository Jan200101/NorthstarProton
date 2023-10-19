struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Init_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Init( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Init_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Shutdown_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Shutdown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Shutdown_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CreateBrowser_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *pchUserAgent;
    const char *pchUserCSS;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CreateBrowser( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CreateBrowser_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_RemoveBrowser_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_RemoveBrowser( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_RemoveBrowser_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_LoadURL_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    const char *pchURL;
    const char *pchPostData;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_LoadURL( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_LoadURL_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetSize_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    uint32 unWidth;
    uint32 unHeight;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetSize( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetSize_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopLoad_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopLoad( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopLoad_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Reload_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Reload( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Reload_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoBack_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoBack( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoBack_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoForward_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoForward( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GoForward_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AddHeader_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AddHeader( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AddHeader_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ExecuteJavascript_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    const char *pchScript;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ExecuteJavascript( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ExecuteJavascript_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseUp_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    EHTMLMouseButton eMouseButton;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseUp( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseUp_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDown_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    EHTMLMouseButton eMouseButton;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDown_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDoubleClick_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    EHTMLMouseButton eMouseButton;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDoubleClick( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseDoubleClick_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseMove_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    int x;
    int y;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseMove( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseMove_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseWheel_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    int32 nDelta;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseWheel( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_MouseWheel_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyDown_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    uint32 nNativeKeyCode;
    EHTMLKeyModifiers eHTMLKeyModifiers;
    bool bIsSystemKey;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyDown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyDown_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyUp_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    uint32 nNativeKeyCode;
    EHTMLKeyModifiers eHTMLKeyModifiers;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyUp( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyUp_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyChar_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    uint32 cUnicodeChar;
    EHTMLKeyModifiers eHTMLKeyModifiers;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyChar( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_KeyChar_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetHorizontalScroll_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    uint32 nAbsolutePixelScroll;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetHorizontalScroll( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetHorizontalScroll_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetVerticalScroll_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    uint32 nAbsolutePixelScroll;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetVerticalScroll( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetVerticalScroll_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetKeyFocus_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    bool bHasKeyFocus;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetKeyFocus( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetKeyFocus_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ViewSource_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ViewSource( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_ViewSource_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CopyToClipboard_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CopyToClipboard( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_CopyToClipboard_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_PasteFromClipboard_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_PasteFromClipboard( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_PasteFromClipboard_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Find_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    const char *pchSearchStr;
    bool bCurrentlyInFind;
    bool bReverse;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Find( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_Find_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopFind_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopFind( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_StopFind_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GetLinkAtPosition_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    int x;
    int y;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GetLinkAtPosition( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_GetLinkAtPosition_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetCookie_params
{
    void *linux_side;
    const char *pchHostname;
    const char *pchKey;
    const char *pchValue;
    const char *pchPath;
    RTime32 nExpires;
    bool bSecure;
    bool bHTTPOnly;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetCookie( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetCookie_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetPageScaleFactor_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    float flZoom;
    int nPointX;
    int nPointY;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetPageScaleFactor( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetPageScaleFactor_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetBackgroundMode_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    bool bBackgroundMode;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetBackgroundMode( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetBackgroundMode_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetDPIScalingFactor_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    float flDPIScaling;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetDPIScalingFactor( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_SetDPIScalingFactor_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_OpenDeveloperTools_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_OpenDeveloperTools( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_OpenDeveloperTools_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AllowStartRequest_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    bool bAllowed;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AllowStartRequest( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_AllowStartRequest_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_JSDialogResponse_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    bool bResult;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_JSDialogResponse( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_JSDialogResponse_params *params );

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_FileLoadDialogResponse_params
{
    void *linux_side;
    HHTMLBrowser unBrowserHandle;
    const char **pchSelectedFiles;
};
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_FileLoadDialogResponse( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_005_FileLoadDialogResponse_params *params );

