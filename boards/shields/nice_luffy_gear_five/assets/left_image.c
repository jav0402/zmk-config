#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_LEFT_IMAGE
#define LV_ATTRIBUTE_IMG_LEFT_IMAGE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_LEFT_IMAGE uint8_t
    left_image_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif
  // 'luffy-gear-five-rot-no-dith', 80x69px
0x00, 0x03, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x01, 0xff, 0xfe, 0x00, 0x00, 
0x00, 0x7f, 0xff, 0xe0, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xc0, 0x00, 0x00, 
0x7f, 0xff, 0xf0, 0x00, 0x0f, 0xff, 0xff, 0x80, 0x00, 0x00, 0x3f, 0xff, 0xfc, 0x00, 0x3f, 0xff, 
0xff, 0x80, 0x00, 0x00, 0x1f, 0xff, 0xfe, 0x00, 0x3f, 0xff, 0xff, 0xc0, 0xe0, 0x00, 0x0f, 0xff, 
0xff, 0x00, 0x7f, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xc7, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0xfe, 
0xff, 0xff, 0xf8, 0x1f, 0xff, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xfd, 0xda, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x36, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf6, 0xcd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xed, 0xfb, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xf4, 0xbf, 0xff, 0xff, 0xff, 
0x8f, 0xff, 0xff, 0xff, 0xc0, 0x03, 0x7f, 0xff, 0xff, 0xff, 0x57, 0xc7, 0xff, 0xff, 0x9f, 0xfe, 
0x03, 0xff, 0xff, 0xff, 0x27, 0xab, 0xff, 0xfe, 0x7f, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0x57, 0x93, 
0xe0, 0x05, 0xe0, 0x78, 0x3f, 0xef, 0xff, 0xff, 0x8f, 0xab, 0x8f, 0xfb, 0x9f, 0x77, 0xde, 0x1f, 
0xff, 0xff, 0xff, 0xc7, 0x7f, 0xf6, 0x5e, 0xef, 0xed, 0xff, 0xff, 0xff, 0x00, 0x3e, 0xfd, 0xed, 
0x0e, 0xdf, 0xf6, 0x3f, 0xff, 0xff, 0xff, 0xc1, 0xfb, 0xed, 0xbe, 0xde, 0x36, 0xdf, 0xff, 0xff, 
0xff, 0xab, 0xfb, 0xdb, 0xbd, 0xdd, 0xd5, 0xc7, 0xff, 0xff, 0xff, 0x53, 0xfb, 0xb7, 0xbd, 0xdd, 
0x53, 0xb3, 0xff, 0xff, 0xf8, 0xa7, 0xf7, 0xaf, 0x7d, 0xdd, 0xd7, 0x7c, 0xff, 0xff, 0x79, 0x57, 
0xf7, 0x6f, 0x7d, 0xee, 0x2e, 0xff, 0x7f, 0xff, 0x9a, 0xaf, 0xf7, 0x5f, 0x7b, 0xf7, 0xed, 0xff, 
0xbf, 0xff, 0x45, 0x5f, 0xee, 0xdf, 0x7b, 0xf8, 0x1d, 0xff, 0xdf, 0xff, 0xaa, 0xbf, 0xee, 0xdf, 
0x7b, 0xff, 0xdb, 0xff, 0xef, 0xff, 0x55, 0x3f, 0xde, 0xbf, 0x7b, 0xff, 0xd5, 0x00, 0x17, 0xff, 
0xaa, 0xbf, 0xbe, 0xbf, 0x7b, 0xff, 0xdc, 0xff, 0xe7, 0xff, 0x55, 0x3f, 0x7e, 0xbf, 0x7b, 0xff, 
0xe2, 0xff, 0xff, 0xff, 0xaa, 0x7f, 0xfe, 0xbf, 0x7b, 0x7f, 0xff, 0x3f, 0xff, 0xff, 0x54, 0xff, 
0xfe, 0xbf, 0x7b, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xaa, 0x7f, 0xfe, 0xbf, 0x7b, 0x7f, 0xf3, 0xf7, 
0xff, 0xff, 0x54, 0xfe, 0xfe, 0xbf, 0x7b, 0x80, 0xed, 0xfb, 0xff, 0xff, 0xaa, 0xff, 0x7e, 0xbf, 
0x7b, 0xff, 0x1e, 0xfd, 0xff, 0xff, 0x55, 0x7f, 0xbe, 0xbf, 0x7b, 0xff, 0xd6, 0xfe, 0xff, 0xff, 
0xaa, 0xbf, 0xde, 0xdf, 0x7b, 0xff, 0xd9, 0xff, 0x7f, 0xff, 0x55, 0x7f, 0xdf, 0x5f, 0x7b, 0xfc, 
0x1b, 0xff, 0xbf, 0xff, 0xaa, 0xbf, 0xdf, 0x5f, 0x7b, 0xfb, 0xdd, 0xff, 0xcf, 0xff, 0x55, 0x5f, 
0xdf, 0xaf, 0x7b, 0xf7, 0xee, 0xff, 0xf7, 0xff, 0x0a, 0xbf, 0xef, 0xaf, 0xbd, 0xae, 0x37, 0x7f, 
0xcf, 0xff, 0xf1, 0x5f, 0xef, 0xb7, 0xbd, 0xad, 0xd3, 0xbf, 0x3f, 0xff, 0xfc, 0xaf, 0xef, 0xdb, 
0xbe, 0xad, 0x55, 0xdc, 0xff, 0xff, 0xfe, 0x57, 0xff, 0xed, 0xbe, 0xad, 0xd6, 0xc3, 0xff, 0xff, 
0xff, 0x00, 0x1f, 0xf6, 0x06, 0xae, 0x36, 0x1f, 0xff, 0xff, 0xf0, 0xff, 0xef, 0xfb, 0x5e, 0xb7, 
0xe9, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xf7, 0xfc, 0x8f, 0x5b, 0xdc, 0xff, 0xff, 0xff, 0x3f, 0xff, 
0xfb, 0xff, 0x70, 0x6c, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0x9f, 0xff, 0xff, 0xbf, 
0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xef, 0xff, 0xc0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
0x20, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd5, 0xf7, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xf5, 0xbb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xcd, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xf6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xfe, 0x7b, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x87, 0x7f, 0xff, 
0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf0, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 
0xfe, 0xa8, 0xff, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0x7b, 0xff, 0xff, 0xe0, 
0xff, 0xff, 0xff, 0xff, 0xfc, 0xa8, 0x01, 0xff, 0xff, 0xe0, 0xff, 0xfe, 0xff, 0xff, 0xfd, 0xf8, 
0x00, 0xff, 0xff, 0xe0, 0xff, 0xfd, 0xff, 0xff, 0xfa, 0xa0, 0x00, 0x7f, 0xff, 0xf0, 0x00, 0x03, 
0xff, 0xff, 0xfb, 0xe0, 0x00, 0x3f, 0xff, 0xf8, 0xff, 0xf7, 0xff, 0xff, 0xf2, 0x80, 0x00, 0x3f, 
0xff, 0xfc
};

const lv_img_dsc_t left_image = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 80,
    .header.h = 69,
    .data_size = 620,
    .data = left_image_map,
};
