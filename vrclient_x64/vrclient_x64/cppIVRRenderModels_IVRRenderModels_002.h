#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRRenderModels_IVRRenderModels_002_LoadRenderModel_params
{
    void *linux_side;
    bool _ret;
    const char *pchRenderModelName;
    winRenderModel_t_0915 **ppRenderModel;
};
extern void cppIVRRenderModels_IVRRenderModels_002_LoadRenderModel( struct cppIVRRenderModels_IVRRenderModels_002_LoadRenderModel_params *params );

struct cppIVRRenderModels_IVRRenderModels_002_FreeRenderModel_params
{
    void *linux_side;
    winRenderModel_t_0915 *pRenderModel;
};
extern void cppIVRRenderModels_IVRRenderModels_002_FreeRenderModel( struct cppIVRRenderModels_IVRRenderModels_002_FreeRenderModel_params *params );

struct cppIVRRenderModels_IVRRenderModels_002_LoadTexture_params
{
    void *linux_side;
    bool _ret;
    TextureID_t textureId;
    winRenderModel_TextureMap_t_0915 **ppTexture;
};
extern void cppIVRRenderModels_IVRRenderModels_002_LoadTexture( struct cppIVRRenderModels_IVRRenderModels_002_LoadTexture_params *params );

struct cppIVRRenderModels_IVRRenderModels_002_FreeTexture_params
{
    void *linux_side;
    winRenderModel_TextureMap_t_0915 *pTexture;
};
extern void cppIVRRenderModels_IVRRenderModels_002_FreeTexture( struct cppIVRRenderModels_IVRRenderModels_002_FreeTexture_params *params );

struct cppIVRRenderModels_IVRRenderModels_002_GetRenderModelName_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unRenderModelIndex;
    char *pchRenderModelName;
    uint32_t unRenderModelNameLen;
};
extern void cppIVRRenderModels_IVRRenderModels_002_GetRenderModelName( struct cppIVRRenderModels_IVRRenderModels_002_GetRenderModelName_params *params );

struct cppIVRRenderModels_IVRRenderModels_002_GetRenderModelCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRRenderModels_IVRRenderModels_002_GetRenderModelCount( struct cppIVRRenderModels_IVRRenderModels_002_GetRenderModelCount_params *params );

struct cppIVRRenderModels_IVRRenderModels_002_GetComponentCount_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
};
extern void cppIVRRenderModels_IVRRenderModels_002_GetComponentCount( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentCount_params *params );

struct cppIVRRenderModels_IVRRenderModels_002_GetComponentName_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    uint32_t unComponentIndex;
    char *pchComponentName;
    uint32_t unComponentNameLen;
};
extern void cppIVRRenderModels_IVRRenderModels_002_GetComponentName( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentName_params *params );

struct cppIVRRenderModels_IVRRenderModels_002_GetComponentButtonMask_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
};
extern void cppIVRRenderModels_IVRRenderModels_002_GetComponentButtonMask( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentButtonMask_params *params );

struct cppIVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    char *pchComponentRenderModelName;
    uint32_t unComponentRenderModelNameLen;
};
extern void cppIVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName_params *params );

struct cppIVRRenderModels_IVRRenderModels_002_GetComponentState_params
{
    void *linux_side;
    bool _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    const VRControllerState_t *pControllerState;
    RenderModel_ComponentState_t *pComponentState;
};
extern void cppIVRRenderModels_IVRRenderModels_002_GetComponentState( struct cppIVRRenderModels_IVRRenderModels_002_GetComponentState_params *params );

struct cppIVRRenderModels_IVRRenderModels_002_RenderModelHasComponent_params
{
    void *linux_side;
    bool _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
};
extern void cppIVRRenderModels_IVRRenderModels_002_RenderModelHasComponent( struct cppIVRRenderModels_IVRRenderModels_002_RenderModelHasComponent_params *params );

#ifdef __cplusplus
}
#endif
