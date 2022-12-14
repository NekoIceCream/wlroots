/*
 * This an unstable interface of wlroots. No guarantees are made regarding the
 * future consistency of this API.
 */
#ifndef WLR_USE_UNSTABLE
#error "Add -DWLR_USE_UNSTABLE to enable unstable wlroots features"
#endif

#ifndef WLR_TYPES_WLR_SINGLE_PIXEL_BUFFER_V1
#define WLR_TYPES_WLR_SINGLE_PIXEL_BUFFER_V1

#include <wayland-server-core.h>

struct wlr_single_pixel_buffer_manager_v1;

struct wlr_single_pixel_buffer_manager_v1 *wlr_single_pixel_buffer_manager_v1_create(
	struct wl_display *display);

#endif
