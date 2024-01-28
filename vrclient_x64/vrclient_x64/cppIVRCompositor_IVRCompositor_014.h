#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRCompositor_IVRCompositor_014_SetTrackingSpace_params
{
    void *linux_side;
    ETrackingUniverseOrigin eOrigin;
};
extern void cppIVRCompositor_IVRCompositor_014_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_014_SetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_014_GetTrackingSpace_params
{
    void *linux_side;
    ETrackingUniverseOrigin _ret;
};
extern void cppIVRCompositor_IVRCompositor_014_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_014_GetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_014_WaitGetPoses_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_014_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_014_WaitGetPoses_params *params );

struct cppIVRCompositor_IVRCompositor_014_GetLastPoses_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_014_GetLastPoses( struct cppIVRCompositor_IVRCompositor_014_GetLastPoses_params *params );

struct cppIVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    EVRCompositorError _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};
extern void cppIVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_014_GetLastPoseForTrackedDeviceIndex_params *params );

struct cppIVRCompositor_IVRCompositor_014_Submit_params
{
    void *linux_side;
    EVRCompositorError _ret;
    EVREye eEye;
    const Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    EVRSubmitFlags nSubmitFlags;
};
extern void cppIVRCompositor_IVRCompositor_014_Submit( struct cppIVRCompositor_IVRCompositor_014_Submit_params *params );

struct cppIVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_014_ClearLastSubmittedFrame_params *params );

struct cppIVRCompositor_IVRCompositor_014_PostPresentHandoff_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_014_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_014_PostPresentHandoff_params *params );

struct cppIVRCompositor_IVRCompositor_014_GetFrameTiming_params
{
    void *linux_side;
    bool _ret;
    Compositor_FrameTiming *pTiming;
    uint32_t unFramesAgo;
};
extern void cppIVRCompositor_IVRCompositor_014_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_014_GetFrameTiming_params *params );

struct cppIVRCompositor_IVRCompositor_014_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_014_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_014_GetFrameTimeRemaining_params *params );

struct cppIVRCompositor_IVRCompositor_014_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_014_FadeToColor( struct cppIVRCompositor_IVRCompositor_014_FadeToColor_params *params );

struct cppIVRCompositor_IVRCompositor_014_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    bool bFadeIn;
};
extern void cppIVRCompositor_IVRCompositor_014_FadeGrid( struct cppIVRCompositor_IVRCompositor_014_FadeGrid_params *params );

struct cppIVRCompositor_IVRCompositor_014_SetSkyboxOverride_params
{
    void *linux_side;
    EVRCompositorError _ret;
    const Texture_t *pTextures;
    uint32_t unTextureCount;
};
extern void cppIVRCompositor_IVRCompositor_014_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_014_SetSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_014_ClearSkyboxOverride_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_014_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_014_ClearSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_014_CompositorBringToFront_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_014_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_014_CompositorBringToFront_params *params );

struct cppIVRCompositor_IVRCompositor_014_CompositorGoToBack_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_014_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_014_CompositorGoToBack_params *params );

struct cppIVRCompositor_IVRCompositor_014_CompositorQuit_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_014_CompositorQuit( struct cppIVRCompositor_IVRCompositor_014_CompositorQuit_params *params );

struct cppIVRCompositor_IVRCompositor_014_IsFullscreen_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_014_IsFullscreen( struct cppIVRCompositor_IVRCompositor_014_IsFullscreen_params *params );

struct cppIVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_014_GetCurrentSceneFocusProcess_params *params );

struct cppIVRCompositor_IVRCompositor_014_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_014_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_014_GetLastFrameRenderer_params *params );

struct cppIVRCompositor_IVRCompositor_014_CanRenderScene_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_014_CanRenderScene( struct cppIVRCompositor_IVRCompositor_014_CanRenderScene_params *params );

struct cppIVRCompositor_IVRCompositor_014_ShowMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_014_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_014_ShowMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_014_HideMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_014_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_014_HideMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_014_IsMirrorWindowVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_014_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_014_IsMirrorWindowVisible_params *params );

struct cppIVRCompositor_IVRCompositor_014_CompositorDumpImages_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_014_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_014_CompositorDumpImages_params *params );

struct cppIVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_014_ShouldAppRenderWithLowResources_params *params );

struct cppIVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    bool bOverride;
};
extern void cppIVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_014_ForceInterleavedReprojectionOn_params *params );

struct cppIVRCompositor_IVRCompositor_014_ForceReconnectProcess_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_014_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_014_ForceReconnectProcess_params *params );

struct cppIVRCompositor_IVRCompositor_014_SuspendRendering_params
{
    void *linux_side;
    bool bSuspend;
};
extern void cppIVRCompositor_IVRCompositor_014_SuspendRendering( struct cppIVRCompositor_IVRCompositor_014_SuspendRendering_params *params );

#ifdef __cplusplus
}
#endif
