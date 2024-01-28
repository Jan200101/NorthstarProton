#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRSystem_IVRSystem_022_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRSystem_IVRSystem_022_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_022_GetRecommendedRenderTargetSize_params *params );

struct cppIVRSystem_IVRSystem_022_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    EVREye eEye;
    float fNearZ;
    float fFarZ;
};
extern void cppIVRSystem_IVRSystem_022_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_022_GetProjectionMatrix_params *params );

struct cppIVRSystem_IVRSystem_022_GetProjectionRaw_params
{
    void *linux_side;
    EVREye eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};
extern void cppIVRSystem_IVRSystem_022_GetProjectionRaw( struct cppIVRSystem_IVRSystem_022_GetProjectionRaw_params *params );

struct cppIVRSystem_IVRSystem_022_ComputeDistortion_params
{
    void *linux_side;
    bool _ret;
    EVREye eEye;
    float fU;
    float fV;
    DistortionCoordinates_t *pDistortionCoordinates;
};
extern void cppIVRSystem_IVRSystem_022_ComputeDistortion( struct cppIVRSystem_IVRSystem_022_ComputeDistortion_params *params );

struct cppIVRSystem_IVRSystem_022_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    EVREye eEye;
};
extern void cppIVRSystem_IVRSystem_022_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_022_GetEyeToHeadTransform_params *params );

struct cppIVRSystem_IVRSystem_022_GetTimeSinceLastVsync_params
{
    void *linux_side;
    bool _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};
extern void cppIVRSystem_IVRSystem_022_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_022_GetTimeSinceLastVsync_params *params );

struct cppIVRSystem_IVRSystem_022_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppIVRSystem_IVRSystem_022_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_022_GetD3D9AdapterIndex_params *params );

struct cppIVRSystem_IVRSystem_022_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
};
extern void cppIVRSystem_IVRSystem_022_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_022_GetDXGIOutputInfo_params *params );

struct cppIVRSystem_IVRSystem_022_GetOutputDevice_params
{
    void *linux_side;
    uint64_t *pnDevice;
    ETextureType textureType;
    VkInstance_T *pInstance;
};
extern void cppIVRSystem_IVRSystem_022_GetOutputDevice( struct cppIVRSystem_IVRSystem_022_GetOutputDevice_params *params );

struct cppIVRSystem_IVRSystem_022_IsDisplayOnDesktop_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_022_IsDisplayOnDesktop( struct cppIVRSystem_IVRSystem_022_IsDisplayOnDesktop_params *params );

struct cppIVRSystem_IVRSystem_022_SetDisplayVisibility_params
{
    void *linux_side;
    bool _ret;
    bool bIsVisibleOnDesktop;
};
extern void cppIVRSystem_IVRSystem_022_SetDisplayVisibility( struct cppIVRSystem_IVRSystem_022_SetDisplayVisibility_params *params );

struct cppIVRSystem_IVRSystem_022_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    ETrackingUniverseOrigin eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};
extern void cppIVRSystem_IVRSystem_022_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_022_GetDeviceToAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_022_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};
extern void cppIVRSystem_IVRSystem_022_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_022_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_022_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};
extern void cppIVRSystem_IVRSystem_022_GetRawZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_022_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_022_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    ETrackedDeviceClass eTrackedDeviceClass;
    TrackedDeviceIndex_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_022_GetSortedTrackedDeviceIndicesOfClass( struct cppIVRSystem_IVRSystem_022_GetSortedTrackedDeviceIndicesOfClass_params *params );

struct cppIVRSystem_IVRSystem_022_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    EDeviceActivityLevel _ret;
    TrackedDeviceIndex_t unDeviceId;
};
extern void cppIVRSystem_IVRSystem_022_GetTrackedDeviceActivityLevel( struct cppIVRSystem_IVRSystem_022_GetTrackedDeviceActivityLevel_params *params );

struct cppIVRSystem_IVRSystem_022_ApplyTransform_params
{
    void *linux_side;
    TrackedDevicePose_t *pOutputPose;
    const TrackedDevicePose_t *pTrackedDevicePose;
    const HmdMatrix34_t *pTransform;
};
extern void cppIVRSystem_IVRSystem_022_ApplyTransform( struct cppIVRSystem_IVRSystem_022_ApplyTransform_params *params );

struct cppIVRSystem_IVRSystem_022_GetTrackedDeviceIndexForControllerRole_params
{
    void *linux_side;
    TrackedDeviceIndex_t _ret;
    ETrackedControllerRole unDeviceType;
};
extern void cppIVRSystem_IVRSystem_022_GetTrackedDeviceIndexForControllerRole( struct cppIVRSystem_IVRSystem_022_GetTrackedDeviceIndexForControllerRole_params *params );

struct cppIVRSystem_IVRSystem_022_GetControllerRoleForTrackedDeviceIndex_params
{
    void *linux_side;
    ETrackedControllerRole _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_022_GetControllerRoleForTrackedDeviceIndex( struct cppIVRSystem_IVRSystem_022_GetControllerRoleForTrackedDeviceIndex_params *params );

struct cppIVRSystem_IVRSystem_022_GetTrackedDeviceClass_params
{
    void *linux_side;
    ETrackedDeviceClass _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_022_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_022_GetTrackedDeviceClass_params *params );

struct cppIVRSystem_IVRSystem_022_IsTrackedDeviceConnected_params
{
    void *linux_side;
    bool _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_022_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_022_IsTrackedDeviceConnected_params *params );

struct cppIVRSystem_IVRSystem_022_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    bool _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    ETrackedDeviceProperty prop;
    ETrackedPropertyError *pError;
};
extern void cppIVRSystem_IVRSystem_022_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_022_GetBoolTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_022_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    ETrackedDeviceProperty prop;
    ETrackedPropertyError *pError;
};
extern void cppIVRSystem_IVRSystem_022_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_022_GetFloatTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_022_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    ETrackedDeviceProperty prop;
    ETrackedPropertyError *pError;
};
extern void cppIVRSystem_IVRSystem_022_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_022_GetInt32TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_022_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    ETrackedDeviceProperty prop;
    ETrackedPropertyError *pError;
};
extern void cppIVRSystem_IVRSystem_022_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_022_GetUint64TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_022_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    TrackedDeviceIndex_t unDeviceIndex;
    ETrackedDeviceProperty prop;
    ETrackedPropertyError *pError;
};
extern void cppIVRSystem_IVRSystem_022_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_022_GetMatrix34TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_022_GetArrayTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    ETrackedDeviceProperty prop;
    PropertyTypeTag_t propType;
    void *pBuffer;
    uint32_t unBufferSize;
    ETrackedPropertyError *pError;
};
extern void cppIVRSystem_IVRSystem_022_GetArrayTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_022_GetArrayTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_022_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    ETrackedDeviceProperty prop;
    char *pchValue;
    uint32_t unBufferSize;
    ETrackedPropertyError *pError;
};
extern void cppIVRSystem_IVRSystem_022_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_022_GetStringTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_022_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    ETrackedPropertyError error;
};
extern void cppIVRSystem_IVRSystem_022_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_022_GetPropErrorNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_022_PollNextEvent_params
{
    void *linux_side;
    bool _ret;
    winVREvent_t_1267 *pEvent;
    uint32_t uncbVREvent;
};
extern void cppIVRSystem_IVRSystem_022_PollNextEvent( struct cppIVRSystem_IVRSystem_022_PollNextEvent_params *params );

struct cppIVRSystem_IVRSystem_022_PollNextEventWithPose_params
{
    void *linux_side;
    bool _ret;
    ETrackingUniverseOrigin eOrigin;
    winVREvent_t_1267 *pEvent;
    uint32_t uncbVREvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_022_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_022_PollNextEventWithPose_params *params );

struct cppIVRSystem_IVRSystem_022_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    EVREventType eType;
};
extern void cppIVRSystem_IVRSystem_022_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_022_GetEventTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_022_GetHiddenAreaMesh_params
{
    void *linux_side;
    HiddenAreaMesh_t *_ret;
    EVREye eEye;
    EHiddenAreaMeshType type;
};
extern void cppIVRSystem_IVRSystem_022_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_022_GetHiddenAreaMesh_params *params );

struct cppIVRSystem_IVRSystem_022_GetControllerState_params
{
    void *linux_side;
    bool _ret;
    TrackedDeviceIndex_t unControllerDeviceIndex;
    winVRControllerState001_t_1267 *pControllerState;
    uint32_t unControllerStateSize;
};
extern void cppIVRSystem_IVRSystem_022_GetControllerState( struct cppIVRSystem_IVRSystem_022_GetControllerState_params *params );

struct cppIVRSystem_IVRSystem_022_GetControllerStateWithPose_params
{
    void *linux_side;
    bool _ret;
    ETrackingUniverseOrigin eOrigin;
    TrackedDeviceIndex_t unControllerDeviceIndex;
    winVRControllerState001_t_1267 *pControllerState;
    uint32_t unControllerStateSize;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_022_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_022_GetControllerStateWithPose_params *params );

struct cppIVRSystem_IVRSystem_022_TriggerHapticPulse_params
{
    void *linux_side;
    TrackedDeviceIndex_t unControllerDeviceIndex;
    uint32_t unAxisId;
    unsigned short usDurationMicroSec;
};
extern void cppIVRSystem_IVRSystem_022_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_022_TriggerHapticPulse_params *params );

struct cppIVRSystem_IVRSystem_022_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    EVRButtonId eButtonId;
};
extern void cppIVRSystem_IVRSystem_022_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_022_GetButtonIdNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_022_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    EVRControllerAxisType eAxisType;
};
extern void cppIVRSystem_IVRSystem_022_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_022_GetControllerAxisTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_022_IsInputAvailable_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_022_IsInputAvailable( struct cppIVRSystem_IVRSystem_022_IsInputAvailable_params *params );

struct cppIVRSystem_IVRSystem_022_IsSteamVRDrawingControllers_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_022_IsSteamVRDrawingControllers( struct cppIVRSystem_IVRSystem_022_IsSteamVRDrawingControllers_params *params );

struct cppIVRSystem_IVRSystem_022_ShouldApplicationPause_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_022_ShouldApplicationPause( struct cppIVRSystem_IVRSystem_022_ShouldApplicationPause_params *params );

struct cppIVRSystem_IVRSystem_022_ShouldApplicationReduceRenderingWork_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_022_ShouldApplicationReduceRenderingWork( struct cppIVRSystem_IVRSystem_022_ShouldApplicationReduceRenderingWork_params *params );

struct cppIVRSystem_IVRSystem_022_PerformFirmwareUpdate_params
{
    void *linux_side;
    EVRFirmwareError _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_022_PerformFirmwareUpdate( struct cppIVRSystem_IVRSystem_022_PerformFirmwareUpdate_params *params );

struct cppIVRSystem_IVRSystem_022_AcknowledgeQuit_Exiting_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_022_AcknowledgeQuit_Exiting( struct cppIVRSystem_IVRSystem_022_AcknowledgeQuit_Exiting_params *params );

struct cppIVRSystem_IVRSystem_022_GetAppContainerFilePaths_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchBuffer;
    uint32_t unBufferSize;
};
extern void cppIVRSystem_IVRSystem_022_GetAppContainerFilePaths( struct cppIVRSystem_IVRSystem_022_GetAppContainerFilePaths_params *params );

struct cppIVRSystem_IVRSystem_022_GetRuntimeVersion_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppIVRSystem_IVRSystem_022_GetRuntimeVersion( struct cppIVRSystem_IVRSystem_022_GetRuntimeVersion_params *params );

#ifdef __cplusplus
}
#endif
