#ifdef __cplusplus
extern "C" {
#endif
struct cppIVROverlay_IVROverlay_004_FindOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    const char *pchOverlayKey;
    VROverlayHandle_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_004_FindOverlay( struct cppIVROverlay_IVROverlay_004_FindOverlay_params *params );

struct cppIVROverlay_IVROverlay_004_CreateOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    VROverlayHandle_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_004_CreateOverlay( struct cppIVROverlay_IVROverlay_004_CreateOverlay_params *params );

struct cppIVROverlay_IVROverlay_004_DestroyOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_004_DestroyOverlay( struct cppIVROverlay_IVROverlay_004_DestroyOverlay_params *params );

struct cppIVROverlay_IVROverlay_004_SetHighQualityOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_004_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_004_SetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_004_GetHighQualityOverlay_params
{
    void *linux_side;
    VROverlayHandle_t _ret;
};
extern void cppIVROverlay_IVROverlay_004_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_004_GetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_004_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    VROverlayError *pError;
};
extern void cppIVROverlay_IVROverlay_004_GetOverlayKey( struct cppIVROverlay_IVROverlay_004_GetOverlayKey_params *params );

struct cppIVROverlay_IVROverlay_004_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    VROverlayError *pError;
};
extern void cppIVROverlay_IVROverlay_004_GetOverlayName( struct cppIVROverlay_IVROverlay_004_GetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_004_GetOverlayImageData_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};
extern void cppIVROverlay_IVROverlay_004_GetOverlayImageData( struct cppIVROverlay_IVROverlay_004_GetOverlayImageData_params *params );

struct cppIVROverlay_IVROverlay_004_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    VROverlayError error;
};
extern void cppIVROverlay_IVROverlay_004_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_004_GetOverlayErrorNameFromEnum_params *params );

struct cppIVROverlay_IVROverlay_004_SetOverlayFlag_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayFlags eOverlayFlag;
    bool bEnabled;
};
extern void cppIVROverlay_IVROverlay_004_SetOverlayFlag( struct cppIVROverlay_IVROverlay_004_SetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_004_GetOverlayFlag_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayFlags eOverlayFlag;
    bool *pbEnabled;
};
extern void cppIVROverlay_IVROverlay_004_GetOverlayFlag( struct cppIVROverlay_IVROverlay_004_GetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_004_SetOverlayColor_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};
extern void cppIVROverlay_IVROverlay_004_SetOverlayColor( struct cppIVROverlay_IVROverlay_004_SetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_004_GetOverlayColor_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};
extern void cppIVROverlay_IVROverlay_004_GetOverlayColor( struct cppIVROverlay_IVROverlay_004_GetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_004_SetOverlayAlpha_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fAlpha;
};
extern void cppIVROverlay_IVROverlay_004_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_004_SetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_004_GetOverlayAlpha_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfAlpha;
};
extern void cppIVROverlay_IVROverlay_004_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_004_GetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_004_SetOverlayGamma_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fGamma;
};
extern void cppIVROverlay_IVROverlay_004_SetOverlayGamma( struct cppIVROverlay_IVROverlay_004_SetOverlayGamma_params *params );

struct cppIVROverlay_IVROverlay_004_GetOverlayGamma_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfGamma;
};
extern void cppIVROverlay_IVROverlay_004_GetOverlayGamma( struct cppIVROverlay_IVROverlay_004_GetOverlayGamma_params *params );

struct cppIVROverlay_IVROverlay_004_SetOverlayWidthInMeters_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_004_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_004_SetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_004_GetOverlayWidthInMeters_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_004_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_004_GetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_004_SetOverlayTextureBounds_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_004_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_004_SetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_004_GetOverlayTextureBounds_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_004_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_004_GetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_004_GetOverlayTransformType_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayTransformType *peTransformType;
};
extern void cppIVROverlay_IVROverlay_004_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_004_GetOverlayTransformType_params *params );

struct cppIVROverlay_IVROverlay_004_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackingUniverseOrigin eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_004_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_004_SetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_004_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackingUniverseOrigin *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_004_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_004_GetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_004_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_004_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_004_SetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_004_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_004_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_004_GetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_004_ShowOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_004_ShowOverlay( struct cppIVROverlay_IVROverlay_004_ShowOverlay_params *params );

struct cppIVROverlay_IVROverlay_004_HideOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_004_HideOverlay( struct cppIVROverlay_IVROverlay_004_HideOverlay_params *params );

struct cppIVROverlay_IVROverlay_004_IsOverlayVisible_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_004_IsOverlayVisible( struct cppIVROverlay_IVROverlay_004_IsOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_004_PollNextOverlayEvent_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    VREvent_t *pEvent;
};
extern void cppIVROverlay_IVROverlay_004_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_004_PollNextOverlayEvent_params *params );

struct cppIVROverlay_IVROverlay_004_GetOverlayInputMethod_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayInputMethod *peInputMethod;
};
extern void cppIVROverlay_IVROverlay_004_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_004_GetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_004_SetOverlayInputMethod_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayInputMethod eInputMethod;
};
extern void cppIVROverlay_IVROverlay_004_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_004_SetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_004_GetOverlayMouseScale_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_004_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_004_GetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_004_SetOverlayMouseScale_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_004_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_004_SetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_004_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};
extern void cppIVROverlay_IVROverlay_004_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_004_ComputeOverlayIntersection_params *params );

struct cppIVROverlay_IVROverlay_004_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unControllerDeviceIndex;
};
extern void cppIVROverlay_IVROverlay_004_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_004_HandleControllerOverlayInteractionAsMouse_params *params );

struct cppIVROverlay_IVROverlay_004_SetOverlayTexture_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    GraphicsAPIConvention eTextureType;
    void *pTexture;
};
extern void cppIVROverlay_IVROverlay_004_SetOverlayTexture( struct cppIVROverlay_IVROverlay_004_SetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_004_ClearOverlayTexture_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_004_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_004_ClearOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_004_SetOverlayRaw_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};
extern void cppIVROverlay_IVROverlay_004_SetOverlayRaw( struct cppIVROverlay_IVROverlay_004_SetOverlayRaw_params *params );

struct cppIVROverlay_IVROverlay_004_SetOverlayFromFile_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const char *pchFilePath;
};
extern void cppIVROverlay_IVROverlay_004_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_004_SetOverlayFromFile_params *params );

struct cppIVROverlay_IVROverlay_004_CreateDashboardOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    VROverlayHandle_t *pMainHandle;
    VROverlayHandle_t *pThumbnailHandle;
};
extern void cppIVROverlay_IVROverlay_004_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_004_CreateDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_004_IsDashboardVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVROverlay_IVROverlay_004_IsDashboardVisible( struct cppIVROverlay_IVROverlay_004_IsDashboardVisible_params *params );

struct cppIVROverlay_IVROverlay_004_IsActiveDashboardOverlay_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_004_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_004_IsActiveDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_004_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t unProcessId;
};
extern void cppIVROverlay_IVROverlay_004_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_004_SetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_004_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *punProcessId;
};
extern void cppIVROverlay_IVROverlay_004_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_004_GetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_004_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};
extern void cppIVROverlay_IVROverlay_004_ShowDashboard( struct cppIVROverlay_IVROverlay_004_ShowDashboard_params *params );

#ifdef __cplusplus
}
#endif
