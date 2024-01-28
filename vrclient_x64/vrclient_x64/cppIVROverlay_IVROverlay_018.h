#ifdef __cplusplus
extern "C" {
#endif
struct cppIVROverlay_IVROverlay_018_FindOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    const char *pchOverlayKey;
    VROverlayHandle_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_018_FindOverlay( struct cppIVROverlay_IVROverlay_018_FindOverlay_params *params );

struct cppIVROverlay_IVROverlay_018_CreateOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    const char *pchOverlayKey;
    const char *pchOverlayName;
    VROverlayHandle_t *pOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_018_CreateOverlay( struct cppIVROverlay_IVROverlay_018_CreateOverlay_params *params );

struct cppIVROverlay_IVROverlay_018_DestroyOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_018_DestroyOverlay( struct cppIVROverlay_IVROverlay_018_DestroyOverlay_params *params );

struct cppIVROverlay_IVROverlay_018_SetHighQualityOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_018_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_018_SetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_018_GetHighQualityOverlay_params
{
    void *linux_side;
    VROverlayHandle_t _ret;
};
extern void cppIVROverlay_IVROverlay_018_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_018_GetHighQualityOverlay_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayKey_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    EVROverlayError *pError;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayKey( struct cppIVROverlay_IVROverlay_018_GetOverlayKey_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayName_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    EVROverlayError *pError;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayName( struct cppIVROverlay_IVROverlay_018_GetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayName_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const char *pchName;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayName( struct cppIVROverlay_IVROverlay_018_SetOverlayName_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayImageData_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unBufferSize;
    uint32_t *punWidth;
    uint32_t *punHeight;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayImageData( struct cppIVROverlay_IVROverlay_018_GetOverlayImageData_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    EVROverlayError error;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayRenderingPid_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t unPID;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_018_SetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayRenderingPid_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_018_GetOverlayRenderingPid_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayFlag_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayFlags eOverlayFlag;
    bool bEnabled;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayFlag( struct cppIVROverlay_IVROverlay_018_SetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayFlag_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayFlags eOverlayFlag;
    bool *pbEnabled;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayFlag( struct cppIVROverlay_IVROverlay_018_GetOverlayFlag_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayColor_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fRed;
    float fGreen;
    float fBlue;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayColor( struct cppIVROverlay_IVROverlay_018_SetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayColor_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfRed;
    float *pfGreen;
    float *pfBlue;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayColor( struct cppIVROverlay_IVROverlay_018_GetOverlayColor_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayAlpha_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fAlpha;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_018_SetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayAlpha_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfAlpha;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_018_GetOverlayAlpha_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayTexelAspect_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fTexelAspect;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_018_SetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayTexelAspect_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfTexelAspect;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_018_GetOverlayTexelAspect_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlaySortOrder_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t unSortOrder;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_018_SetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlaySortOrder_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *punSortOrder;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_018_GetOverlaySortOrder_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayWidthInMeters_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_018_SetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayWidthInMeters_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfWidthInMeters;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_018_GetOverlayWidthInMeters_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float fMinDistanceInMeters;
    float fMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    float *pfMinDistanceInMeters;
    float *pfMaxDistanceInMeters;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayTextureColorSpace_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    EColorSpace eTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_018_SetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayTextureColorSpace_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    EColorSpace *peTextureColorSpace;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_018_GetOverlayTextureColorSpace_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayTextureBounds_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_018_SetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayTextureBounds_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VRTextureBounds_t *pOverlayTextureBounds;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_018_GetOverlayTextureBounds_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayRenderModel_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayHandle_t ulOverlayHandle;
    char *pchValue;
    uint32_t unBufferSize;
    HmdColor_t *pColor;
    EVROverlayError *pError;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayRenderModel( struct cppIVROverlay_IVROverlay_018_GetOverlayRenderModel_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayRenderModel_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const char *pchRenderModel;
    const HmdColor_t *pColor;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayRenderModel( struct cppIVROverlay_IVROverlay_018_SetOverlayRenderModel_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayTransformType_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayTransformType *peTransformType;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_018_GetOverlayTransformType_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayTransformAbsolute_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    ETrackingUniverseOrigin eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_018_SetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayTransformAbsolute_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    ETrackingUniverseOrigin *peTrackingOrigin;
    HmdMatrix34_t *pmatTrackingOriginToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_018_GetOverlayTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unTrackedDevice;
    const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t *punTrackedDevice;
    HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t unDeviceIndex;
    const char *pchComponentName;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    TrackedDeviceIndex_t *punDeviceIndex;
    char *pchComponentName;
    uint32_t unComponentNameSize;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayHandle_t *ulOverlayHandleParent;
    HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayHandle_t ulOverlayHandleParent;
    const HmdMatrix34_t *pmatParentOverlayToOverlayTransform;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative_params *params );

struct cppIVROverlay_IVROverlay_018_ShowOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_018_ShowOverlay( struct cppIVROverlay_IVROverlay_018_ShowOverlay_params *params );

struct cppIVROverlay_IVROverlay_018_HideOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_018_HideOverlay( struct cppIVROverlay_IVROverlay_018_HideOverlay_params *params );

struct cppIVROverlay_IVROverlay_018_IsOverlayVisible_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_018_IsOverlayVisible( struct cppIVROverlay_IVROverlay_018_IsOverlayVisible_params *params );

struct cppIVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    ETrackingUniverseOrigin eTrackingOrigin;
    HmdVector2_t coordinatesInOverlay;
    HmdMatrix34_t *pmatTransform;
};
extern void cppIVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates_params *params );

struct cppIVROverlay_IVROverlay_018_PollNextOverlayEvent_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    winVREvent_t_1017 *pEvent;
    uint32_t uncbVREvent;
};
extern void cppIVROverlay_IVROverlay_018_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_018_PollNextOverlayEvent_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayInputMethod_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayInputMethod *peInputMethod;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_018_GetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayInputMethod_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayInputMethod eInputMethod;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_018_SetOverlayInputMethod_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayMouseScale_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_018_GetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayMouseScale_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const HmdVector2_t *pvecMouseScale;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_018_SetOverlayMouseScale_params *params );

struct cppIVROverlay_IVROverlay_018_ComputeOverlayIntersection_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
    const VROverlayIntersectionParams_t *pParams;
    VROverlayIntersectionResults_t *pResults;
};
extern void cppIVROverlay_IVROverlay_018_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_018_ComputeOverlayIntersection_params *params );

struct cppIVROverlay_IVROverlay_018_IsHoverTargetOverlay_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_018_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_018_IsHoverTargetOverlay_params *params );

struct cppIVROverlay_IVROverlay_018_GetGamepadFocusOverlay_params
{
    void *linux_side;
    VROverlayHandle_t _ret;
};
extern void cppIVROverlay_IVROverlay_018_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_018_GetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_018_SetGamepadFocusOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulNewFocusOverlay;
};
extern void cppIVROverlay_IVROverlay_018_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_018_SetGamepadFocusOverlay_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayNeighbor_params
{
    void *linux_side;
    EVROverlayError _ret;
    EOverlayDirection eDirection;
    VROverlayHandle_t ulFrom;
    VROverlayHandle_t ulTo;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_018_SetOverlayNeighbor_params *params );

struct cppIVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor_params
{
    void *linux_side;
    EVROverlayError _ret;
    EOverlayDirection eDirection;
    VROverlayHandle_t ulFrom;
};
extern void cppIVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlay;
    EDualAnalogWhich eWhich;
    const HmdVector2_t *vCenter;
    float fRadius;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlay;
    EDualAnalogWhich eWhich;
    HmdVector2_t *pvCenter;
    float *pfRadius;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayTexture_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const Texture_t *pTexture;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayTexture( struct cppIVROverlay_IVROverlay_018_SetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_018_ClearOverlayTexture_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_018_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_018_ClearOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayRaw_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pvBuffer;
    uint32_t unWidth;
    uint32_t unHeight;
    uint32_t unDepth;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayRaw( struct cppIVROverlay_IVROverlay_018_SetOverlayRaw_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayFromFile_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    const char *pchFilePath;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_018_SetOverlayFromFile_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayTexture_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void **pNativeTextureHandle;
    void *pNativeTextureRef;
    uint32_t *pWidth;
    uint32_t *pHeight;
    uint32_t *pNativeFormat;
    ETextureType *pAPIType;
    EColorSpace *pColorSpace;
    VRTextureBounds_t *pTextureBounds;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayTexture( struct cppIVROverlay_IVROverlay_018_GetOverlayTexture_params *params );

struct cppIVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    void *pNativeTextureHandle;
};
extern void cppIVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayTextureSize_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *pWidth;
    uint32_t *pHeight;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_018_GetOverlayTextureSize_params *params );

struct cppIVROverlay_IVROverlay_018_CreateDashboardOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    const char *pchOverlayKey;
    const char *pchOverlayFriendlyName;
    VROverlayHandle_t *pMainHandle;
    VROverlayHandle_t *pThumbnailHandle;
};
extern void cppIVROverlay_IVROverlay_018_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_018_CreateDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_018_IsDashboardVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVROverlay_IVROverlay_018_IsDashboardVisible( struct cppIVROverlay_IVROverlay_018_IsDashboardVisible_params *params );

struct cppIVROverlay_IVROverlay_018_IsActiveDashboardOverlay_params
{
    void *linux_side;
    bool _ret;
    VROverlayHandle_t ulOverlayHandle;
};
extern void cppIVROverlay_IVROverlay_018_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_018_IsActiveDashboardOverlay_params *params );

struct cppIVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t unProcessId;
};
extern void cppIVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *punProcessId;
};
extern void cppIVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess_params *params );

struct cppIVROverlay_IVROverlay_018_ShowDashboard_params
{
    void *linux_side;
    const char *pchOverlayToShow;
};
extern void cppIVROverlay_IVROverlay_018_ShowDashboard( struct cppIVROverlay_IVROverlay_018_ShowDashboard_params *params );

struct cppIVROverlay_IVROverlay_018_GetPrimaryDashboardDevice_params
{
    void *linux_side;
    TrackedDeviceIndex_t _ret;
};
extern void cppIVROverlay_IVROverlay_018_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_018_GetPrimaryDashboardDevice_params *params );

struct cppIVROverlay_IVROverlay_018_ShowKeyboard_params
{
    void *linux_side;
    EVROverlayError _ret;
    EGamepadTextInputMode eInputMode;
    EGamepadTextInputLineMode eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    bool bUseMinimalMode;
    uint64_t uUserValue;
};
extern void cppIVROverlay_IVROverlay_018_ShowKeyboard( struct cppIVROverlay_IVROverlay_018_ShowKeyboard_params *params );

struct cppIVROverlay_IVROverlay_018_ShowKeyboardForOverlay_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    EGamepadTextInputMode eInputMode;
    EGamepadTextInputLineMode eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
    bool bUseMinimalMode;
    uint64_t uUserValue;
};
extern void cppIVROverlay_IVROverlay_018_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_018_ShowKeyboardForOverlay_params *params );

struct cppIVROverlay_IVROverlay_018_GetKeyboardText_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppIVROverlay_IVROverlay_018_GetKeyboardText( struct cppIVROverlay_IVROverlay_018_GetKeyboardText_params *params );

struct cppIVROverlay_IVROverlay_018_HideKeyboard_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_018_HideKeyboard( struct cppIVROverlay_IVROverlay_018_HideKeyboard_params *params );

struct cppIVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute_params
{
    void *linux_side;
    ETrackingUniverseOrigin eTrackingOrigin;
    const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform;
};
extern void cppIVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute_params *params );

struct cppIVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay_params
{
    void *linux_side;
    VROverlayHandle_t ulOverlayHandle;
    HmdRect2_t avoidRect;
};
extern void cppIVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay_params *params );

struct cppIVROverlay_IVROverlay_018_SetOverlayIntersectionMask_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives;
    uint32_t unNumMaskPrimitives;
    uint32_t unPrimitiveSize;
};
extern void cppIVROverlay_IVROverlay_018_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_018_SetOverlayIntersectionMask_params *params );

struct cppIVROverlay_IVROverlay_018_GetOverlayFlags_params
{
    void *linux_side;
    EVROverlayError _ret;
    VROverlayHandle_t ulOverlayHandle;
    uint32_t *pFlags;
};
extern void cppIVROverlay_IVROverlay_018_GetOverlayFlags( struct cppIVROverlay_IVROverlay_018_GetOverlayFlags_params *params );

struct cppIVROverlay_IVROverlay_018_ShowMessageOverlay_params
{
    void *linux_side;
    VRMessageOverlayResponse _ret;
    const char *pchText;
    const char *pchCaption;
    const char *pchButton0Text;
    const char *pchButton1Text;
    const char *pchButton2Text;
    const char *pchButton3Text;
};
extern void cppIVROverlay_IVROverlay_018_ShowMessageOverlay( struct cppIVROverlay_IVROverlay_018_ShowMessageOverlay_params *params );

struct cppIVROverlay_IVROverlay_018_CloseMessageOverlay_params
{
    void *linux_side;
};
extern void cppIVROverlay_IVROverlay_018_CloseMessageOverlay( struct cppIVROverlay_IVROverlay_018_CloseMessageOverlay_params *params );

#ifdef __cplusplus
}
#endif
