#ifdef __cplusplus
extern "C" {
#endif
struct cppIVROverlay_IVROverlay_001_FindOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    const char *pchOverlayKey;
    VROverlayHandle_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_001_FindOverlay( struct cppIVROverlay_IVROverlay_001_FindOverlay_params *params );

struct cppIVROverlay_IVROverlay_001_CreateOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    VROverlayHandle_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_001_CreateOverlay( struct cppIVROverlay_IVROverlay_001_CreateOverlay_params *params );

struct cppIVROverlay_IVROverlay_001_DestroyOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_001_DestroyOverlay( struct cppIVROverlay_IVROverlay_001_DestroyOverlay_params *params );

struct cppIVROverlay_IVROverlay_001_SetHighQualityOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_001_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_001_SetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_001_GetHighQualityOverlay_params
{
    void *linux_side;
    VROverlayHandle_t _ret;
};
extern void cppIVROverlay_IVROverlay_001_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_001_GetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    VROverlayError error;
};
extern void cppIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum_params *params );

struct cppIVROverlay_IVROverlay_001_SetOverlayFlag_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayFlags eOverlayFlag;
    bool bEnabled;
};
extern void cppIVROverlay_IVROverlay_001_SetOverlayFlag( struct cppIVROverlay_IVROverlay_001_SetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_001_GetOverlayFlag_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayFlags eOverlayFlag;
    bool *pbEnabled;
};
extern void cppIVROverlay_IVROverlay_001_GetOverlayFlag( struct cppIVROverlay_IVROverlay_001_GetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_001_SetOverlayAlpha_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fAlpha;
};
extern void cppIVROverlay_IVROverlay_001_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_001_SetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_001_GetOverlayAlpha_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfAlpha;
};
extern void cppIVROverlay_IVROverlay_001_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_001_GetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_001_SetOverlayGamma_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fGamma;
};
extern void cppIVROverlay_IVROverlay_001_SetOverlayGamma( struct cppIVROverlay_IVROverlay_001_SetOverlayGamma_params *params );

struct cppIVROverlay_IVROverlay_001_GetOverlayGamma_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfGamma;
};
extern void cppIVROverlay_IVROverlay_001_GetOverlayGamma( struct cppIVROverlay_IVROverlay_001_GetOverlayGamma_params *params );

struct cppIVROverlay_IVROverlay_001_SetOverlayWidthInMeters_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_001_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_001_SetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_001_GetOverlayWidthInMeters_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_001_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_001_GetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_001_SetOverlayTextureBounds_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_001_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_001_SetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_001_GetOverlayTextureBounds_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_001_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_001_GetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_001_GetOverlayTransformType_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayTransformType *peTransformType;
};
extern void cppIVROverlay_IVROverlay_001_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_001_GetOverlayTransformType_params *params );

struct cppIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackingUniverseOrigin eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackingUniverseOrigin *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_001_GetOverlayVisibility_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayVisibility *peOverlayVisibility;
};
extern void cppIVROverlay_IVROverlay_001_GetOverlayVisibility( struct cppIVROverlay_IVROverlay_001_GetOverlayVisibility_params *params );

struct cppIVROverlay_IVROverlay_001_SetOverlayVisibility_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayVisibility eOverlayVisibility;
};
extern void cppIVROverlay_IVROverlay_001_SetOverlayVisibility( struct cppIVROverlay_IVROverlay_001_SetOverlayVisibility_params *params );

struct cppIVROverlay_IVROverlay_001_ShowOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_001_ShowOverlay( struct cppIVROverlay_IVROverlay_001_ShowOverlay_params *params );

struct cppIVROverlay_IVROverlay_001_HideOverlay_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_001_HideOverlay( struct cppIVROverlay_IVROverlay_001_HideOverlay_params *params );

struct cppIVROverlay_IVROverlay_001_IsOverlayVisible_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_001_IsOverlayVisible( struct cppIVROverlay_IVROverlay_001_IsOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_001_PollNextOverlayEvent_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    VREvent_t *pEvent;
};
extern void cppIVROverlay_IVROverlay_001_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_001_PollNextOverlayEvent_params *params );

struct cppIVROverlay_IVROverlay_001_GetOverlayInputMethod_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayInputMethod *peInputMethod;
};
extern void cppIVROverlay_IVROverlay_001_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_001_GetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_001_SetOverlayInputMethod_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayInputMethod eInputMethod;
};
extern void cppIVROverlay_IVROverlay_001_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_001_SetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_001_GetOverlayMouseScale_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_001_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_001_GetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_001_SetOverlayMouseScale_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_001_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_001_SetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_001_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};
extern void cppIVROverlay_IVROverlay_001_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_001_ComputeOverlayIntersection_params *params );

struct cppIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unControllerDeviceIndex;
};
extern void cppIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse_params *params );

struct cppIVROverlay_IVROverlay_001_SetOverlayTexture_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pTexture;
};
extern void cppIVROverlay_IVROverlay_001_SetOverlayTexture( struct cppIVROverlay_IVROverlay_001_SetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_001_SetOverlayRaw_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};
extern void cppIVROverlay_IVROverlay_001_SetOverlayRaw( struct cppIVROverlay_IVROverlay_001_SetOverlayRaw_params *params );

struct cppIVROverlay_IVROverlay_001_SetOverlayFromFile_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const char *pchFilePath;
};
extern void cppIVROverlay_IVROverlay_001_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_001_SetOverlayFromFile_params *params );

struct cppIVROverlay_IVROverlay_001_IsSystemOverlayVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVROverlay_IVROverlay_001_IsSystemOverlayVisible( struct cppIVROverlay_IVROverlay_001_IsSystemOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_001_IsActiveSystemOverlay_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_001_IsActiveSystemOverlay( struct cppIVROverlay_IVROverlay_001_IsActiveSystemOverlay_params *params );

struct cppIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t unProcessId;
};
extern void cppIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess( struct cppIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess_params
{
    void *linux_side;
    VROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *punProcessId;
};
extern void cppIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess( struct cppIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess_params *params );

#ifdef __cplusplus
}
#endif
