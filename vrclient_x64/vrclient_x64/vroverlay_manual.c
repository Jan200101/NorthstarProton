#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"

#define COBJMACROS
#include "d3d11_4.h"
#include "dxvk-interop.h"

#include "wine/debug.h"
#include "vrclient_defs.h"
#include "vrclient_private.h"

#include "flatapi.h"

#include "struct_converters.h"

#include "cppIVROverlay_IVROverlay_001.h"
#include "cppIVROverlay_IVROverlay_002.h"
#include "cppIVROverlay_IVROverlay_003.h"
#include "cppIVROverlay_IVROverlay_004.h"
#include "cppIVROverlay_IVROverlay_005.h"
#include "cppIVROverlay_IVROverlay_007.h"
#include "cppIVROverlay_IVROverlay_008.h"
#include "cppIVROverlay_IVROverlay_010.h"
#include "cppIVROverlay_IVROverlay_011.h"
#include "cppIVROverlay_IVROverlay_012.h"
#include "cppIVROverlay_IVROverlay_013.h"
#include "cppIVROverlay_IVROverlay_014.h"
#include "cppIVROverlay_IVROverlay_016.h"
#include "cppIVROverlay_IVROverlay_017.h"
#include "cppIVROverlay_IVROverlay_018.h"
#include "cppIVROverlay_IVROverlay_019.h"
#include "cppIVROverlay_IVROverlay_020.h"
#include "cppIVROverlay_IVROverlay_021.h"
#include "cppIVROverlay_IVROverlay_022.h"
#include "cppIVROverlay_IVROverlay_024.h"
#include "cppIVROverlay_IVROverlay_025.h"
#include "cppIVROverlay_IVROverlay_026.h"
#include "cppIVROverlay_IVROverlay_027.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

struct set_overlay_texture_state
{
    struct Texture_t texture;
    struct VRVulkanTextureData_t vkdata;

    VkImageLayout image_layout;
    VkImageSubresourceRange subresources;
    IDXGIVkInteropSurface *dxvk_surface;
    IDXGIVkInteropDevice *dxvk_device;
};

static void load_overlay_texture_dxvk( const Texture_t *texture, struct set_overlay_texture_state *state )
{
    VkImageCreateInfo image_info;
    IUnknown *texture_iface;

    TRACE( "texture = %p\n", texture );

    if (!(texture_iface = texture->handle))
    {
        WARN( "No D3D11 texture %p.\n", texture );
        return;
    }

    if (FAILED(texture_iface->lpVtbl->QueryInterface( texture_iface, &IID_IDXGIVkInteropSurface,
                                                      (void **)&state->dxvk_surface )))
    {
        WARN( "Invalid D3D11 texture %p.\n", texture );
        return;
    }

    state->texture = vrclient_translate_texture_dxvk( texture, &state->vkdata, state->dxvk_surface, &state->dxvk_device,
                                                      &state->image_layout, &image_info );

    state->subresources.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    state->subresources.baseMipLevel = 0;
    state->subresources.levelCount = image_info.mipLevels;
    state->subresources.baseArrayLayer = 0;
    state->subresources.layerCount = image_info.arrayLayers;

    state->dxvk_device->lpVtbl->TransitionSurfaceLayout( state->dxvk_device, state->dxvk_surface, &state->subresources,
                                                         state->image_layout, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL );
    state->dxvk_device->lpVtbl->FlushRenderingCommands( state->dxvk_device );
    state->dxvk_device->lpVtbl->LockSubmissionQueue( state->dxvk_device );
}

static void free_unix_overlay_texture_dxvk( struct set_overlay_texture_state *state )
{
    if (!state->dxvk_device) return;

    state->dxvk_device->lpVtbl->ReleaseSubmissionQueue( state->dxvk_device );
    state->dxvk_device->lpVtbl->TransitionSurfaceLayout( state->dxvk_device, state->dxvk_surface, &state->subresources,
                                                         VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, state->image_layout );
    state->dxvk_device->lpVtbl->Release( state->dxvk_device );
    state->dxvk_surface->lpVtbl->Release( state->dxvk_surface );
}

static void load_overlay_texture_vulkan( const Texture_t *texture, struct set_overlay_texture_state *state )
{
    struct VRVulkanTextureData_t *their_vkdata;

    TRACE( "texture = %p\n", texture );

    their_vkdata = texture->handle;

    state->vkdata = *their_vkdata;
    state->vkdata.m_pDevice = get_native_VkDevice( their_vkdata->m_pDevice );
    state->vkdata.m_pPhysicalDevice = get_native_VkPhysicalDevice( their_vkdata->m_pPhysicalDevice );
    state->vkdata.m_pInstance = get_native_VkInstance( their_vkdata->m_pInstance );
    state->vkdata.m_pQueue = get_native_VkQueue( their_vkdata->m_pQueue );

    state->texture = *texture;
    state->texture.handle = &state->vkdata;
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayTexture( struct w_steam_iface *_this,
                                                                          VROverlayHandle_t ulOverlayHandle, void *pTexture )
{
    /* probably no one actually uses this old interface... */
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                          GraphicsAPIConvention eTextureType, void *pTexture )
{
    /* hopefully no one actually uses this old interface... Vulkan support
     * wasn't added until later; how can we pass in a DirectX texture? */
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                          GraphicsAPIConvention eTextureType, void *pTexture )
{
    /* hopefully no one actually uses this old interface... Vulkan support
     * wasn't added until later; how can we pass in a DirectX texture? */
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                          GraphicsAPIConvention eTextureType, void *pTexture )
{
    /* hopefully no one actually uses this old interface... Vulkan support
     * wasn't added until later; how can we pass in a DirectX texture? */
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                          GraphicsAPIConvention eTextureType, void *pTexture )
{
    /* hopefully no one actually uses this old interface... Vulkan support
     * wasn't added until later; how can we pass in a DirectX texture? */
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct cppIVROverlay_IVROverlay_007_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    if (pTexture->eType == TextureType_Vulkan) load_overlay_texture_vulkan( pTexture, &state );
    cppIVROverlay_IVROverlay_007_SetOverlayTexture( &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct cppIVROverlay_IVROverlay_008_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    if (pTexture->eType == TextureType_Vulkan) load_overlay_texture_vulkan( pTexture, &state );
    cppIVROverlay_IVROverlay_008_SetOverlayTexture( &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct cppIVROverlay_IVROverlay_010_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    if (pTexture->eType == TextureType_Vulkan) load_overlay_texture_vulkan( pTexture, &state );
    cppIVROverlay_IVROverlay_010_SetOverlayTexture( &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct cppIVROverlay_IVROverlay_011_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    if (pTexture->eType == TextureType_Vulkan) load_overlay_texture_vulkan( pTexture, &state );
    cppIVROverlay_IVROverlay_011_SetOverlayTexture( &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct cppIVROverlay_IVROverlay_012_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    if (pTexture->eType == TextureType_Vulkan) load_overlay_texture_vulkan( pTexture, &state );
    cppIVROverlay_IVROverlay_012_SetOverlayTexture( &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct cppIVROverlay_IVROverlay_013_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    if (pTexture->eType == TextureType_Vulkan) load_overlay_texture_vulkan( pTexture, &state );
    cppIVROverlay_IVROverlay_013_SetOverlayTexture( &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct cppIVROverlay_IVROverlay_014_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    if (pTexture->eType == TextureType_Vulkan) load_overlay_texture_vulkan( pTexture, &state );
    cppIVROverlay_IVROverlay_014_SetOverlayTexture( &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct cppIVROverlay_IVROverlay_016_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    if (pTexture->eType == TextureType_Vulkan) load_overlay_texture_vulkan( pTexture, &state );
    cppIVROverlay_IVROverlay_016_SetOverlayTexture( &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct cppIVROverlay_IVROverlay_017_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    if (pTexture->eType == TextureType_Vulkan) load_overlay_texture_vulkan( pTexture, &state );
    cppIVROverlay_IVROverlay_017_SetOverlayTexture( &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct cppIVROverlay_IVROverlay_018_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    if (pTexture->eType == TextureType_Vulkan) load_overlay_texture_vulkan( pTexture, &state );
    cppIVROverlay_IVROverlay_018_SetOverlayTexture( &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct cppIVROverlay_IVROverlay_019_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    if (pTexture->eType == TextureType_Vulkan) load_overlay_texture_vulkan( pTexture, &state );
    cppIVROverlay_IVROverlay_019_SetOverlayTexture( &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct cppIVROverlay_IVROverlay_020_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    if (pTexture->eType == TextureType_Vulkan) load_overlay_texture_vulkan( pTexture, &state );
    cppIVROverlay_IVROverlay_020_SetOverlayTexture( &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct cppIVROverlay_IVROverlay_021_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    if (pTexture->eType == TextureType_Vulkan) load_overlay_texture_vulkan( pTexture, &state );
    cppIVROverlay_IVROverlay_021_SetOverlayTexture( &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct cppIVROverlay_IVROverlay_022_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    if (pTexture->eType == TextureType_Vulkan) load_overlay_texture_vulkan( pTexture, &state );
    cppIVROverlay_IVROverlay_022_SetOverlayTexture( &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct cppIVROverlay_IVROverlay_024_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    if (pTexture->eType == TextureType_Vulkan) load_overlay_texture_vulkan( pTexture, &state );
    cppIVROverlay_IVROverlay_024_SetOverlayTexture( &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct cppIVROverlay_IVROverlay_025_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    if (pTexture->eType == TextureType_Vulkan) load_overlay_texture_vulkan( pTexture, &state );
    cppIVROverlay_IVROverlay_025_SetOverlayTexture( &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct cppIVROverlay_IVROverlay_026_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    if (pTexture->eType == TextureType_Vulkan) load_overlay_texture_vulkan( pTexture, &state );
    cppIVROverlay_IVROverlay_026_SetOverlayTexture( &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct cppIVROverlay_IVROverlay_027_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    if (pTexture->eType == TextureType_Vulkan) load_overlay_texture_vulkan( pTexture, &state );
    cppIVROverlay_IVROverlay_027_SetOverlayTexture( &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}
