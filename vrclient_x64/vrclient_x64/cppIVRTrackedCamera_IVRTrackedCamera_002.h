#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    EVRTrackedCameraError eCameraError;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_002_HasCamera_params
{
    void *linux_side;
    EVRTrackedCameraError _ret;
    TrackedDeviceIndex_t nDeviceIndex;
    bool *pHasCamera;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_002_HasCamera( struct cppIVRTrackedCamera_IVRTrackedCamera_002_HasCamera_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize_params
{
    void *linux_side;
    EVRTrackedCameraError _ret;
    TrackedDeviceIndex_t nDeviceIndex;
    EVRTrackedCameraFrameType eFrameType;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
    uint32_t *pnFrameBufferSize;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics_params
{
    void *linux_side;
    EVRTrackedCameraError _ret;
    TrackedDeviceIndex_t nDeviceIndex;
    EVRTrackedCameraFrameType eFrameType;
    HmdVector2_t *pFocalLength;
    HmdVector2_t *pCenter;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection_params
{
    void *linux_side;
    EVRTrackedCameraError _ret;
    TrackedDeviceIndex_t nDeviceIndex;
    EVRTrackedCameraFrameType eFrameType;
    float flZNear;
    float flZFar;
    HmdMatrix44_t *pProjection;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService_params
{
    void *linux_side;
    EVRTrackedCameraError _ret;
    TrackedDeviceIndex_t nDeviceIndex;
    TrackedCameraHandle_t *pHandle;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService_params
{
    void *linux_side;
    EVRTrackedCameraError _ret;
    TrackedCameraHandle_t hTrackedCamera;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService_params *params );

struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer_params
{
    void *linux_side;
    EVRTrackedCameraError _ret;
    TrackedCameraHandle_t hTrackedCamera;
    EVRTrackedCameraFrameType eFrameType;
    void *pFrameBuffer;
    uint32_t nFrameBufferSize;
    CameraVideoStreamFrameHeader_t *pFrameHeader;
    uint32_t nFrameHeaderSize;
};
extern void cppIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer_params *params );

#ifdef __cplusplus
}
#endif
