/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "vrclient_defs.h"

#include "vrclient_private.h"

#include "struct_converters.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "cppIVRExtendedDisplay_IVRExtendedDisplay_001.h"

DEFINE_THISCALL_WRAPPER(winIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds, 20)
DEFINE_THISCALL_WRAPPER(winIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport, 24)
DEFINE_THISCALL_WRAPPER(winIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo, 12)

void __thiscall winIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds(struct w_steam_iface *_this, int32_t *pnX, int32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds_params params =
    {
        .linux_side = _this->u_iface,
        .pnX = pnX,
        .pnY = pnY,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds( &params );
}

void __thiscall winIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport(struct w_steam_iface *_this, EVREye eEye, uint32_t *pnX, uint32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pnX = pnX,
        .pnY = pnY,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport( &params );
}

void __thiscall winIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo(struct w_steam_iface *_this, int32_t *pnAdapterIndex, int32_t *pnAdapterOutputIndex)
{
    struct cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pnAdapterIndex = pnAdapterIndex,
        .pnAdapterOutputIndex = pnAdapterOutputIndex,
    };
    TRACE("%p\n", _this);
    cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo( &params );
}

extern vtable_ptr winIVRExtendedDisplay_IVRExtendedDisplay_001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRExtendedDisplay_IVRExtendedDisplay_001,
        VTABLE_ADD_FUNC(winIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds)
        VTABLE_ADD_FUNC(winIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport)
        VTABLE_ADD_FUNC(winIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winIVRExtendedDisplay_IVRExtendedDisplay_001(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRExtendedDisplay_IVRExtendedDisplay_001_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRExtendedDisplay_IVRExtendedDisplay_001(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRExtendedDisplay_IVRExtendedDisplay_001_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(3);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 3 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds, 4, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport, 5, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo, 2, FALSE, FALSE);
    for (i = 0; i < 3; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRExtendedDisplay_IVRExtendedDisplay_001_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

