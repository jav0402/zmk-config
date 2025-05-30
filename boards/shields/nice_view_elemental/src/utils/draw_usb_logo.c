#include "../../include/utils/draw_usb_logo.h"

#include <lvgl.h>
#include "../../include/images/usb_logo.h"

void draw_usb_logo(lv_obj_t* canvas, lv_coord_t x, lv_coord_t y) {
    lv_draw_img_dsc_t img_dsc;
    lv_draw_img_dsc_init(&img_dsc);

    lv_canvas_draw_img(canvas, x, y, &usb_logo, &img_dsc);
}
