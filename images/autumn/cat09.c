#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_CAT09
#define LV_ATTRIBUTE_IMG_CAT09
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_CAT09 uint8_t cat09_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xf8, 0x7c, 0xff, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd8, 0xff, 0xff, 0xf3, 0x86, 0xff, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9e, 0xff, 0xff, 0xf7, 0x06, 0xff, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbe, 0xff, 0xff, 0xe7, 0x82, 0xff, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3e, 0x7f, 0xff, 0xcf, 0x82, 0xff, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0xff, 0xdf, 0x82, 0xff, 0xf0, 0x07, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0xff, 0x9f, 0xc6, 0xff, 0xc7, 0xf7, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0x3f, 0xff, 0x3f, 0xc6, 0xff, 0x1c, 0x13, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xbf, 0xfe, 0x5f, 0xc6, 0xfc, 0x60, 0x0b, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xbf, 0xfe, 0xbf, 0xc6, 0xf9, 0x80, 0x0b, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0x9f, 0xfc, 0xbf, 0xe6, 0xf2, 0x00, 0x0b, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xdf, 0xfd, 0x3f, 0xe6, 0xc4, 0x00, 0x0b, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xdf, 0xf9, 0x7f, 0xe6, 0x98, 0x00, 0x0b, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xc0, 0x02, 0x7f, 0xe4, 0x20, 0x00, 0x0b, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x40, 0x20, 0x0b, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x80, 0x80, 0x0b, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdd, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x02, 0x00, 0x0b, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xde, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x04, 0x00, 0x1b, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xee, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x08, 0x00, 0x13, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x10, 0x00, 0x17, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x20, 0x00, 0x17, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xf8, 0x7f, 0xfc, 0x7f, 0xf8, 0x40, 0x00, 0x37, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xe0, 0x3f, 0xf8, 0x1f, 0xf8, 0x80, 0x00, 0x27, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xe2, 0x1f, 0xf0, 0x0f, 0xf9, 0x00, 0x00, 0x2f, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xc6, 0x0f, 0xe0, 0x87, 0xf8, 0x00, 0x00, 0x4f, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0x86, 0x0f, 0xc1, 0x83, 0xfc, 0x00, 0x00, 0x5f, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0x86, 0x07, 0xc1, 0x83, 0xfc, 0x00, 0x00, 0xdf, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0x86, 0x07, 0xc1, 0x83, 0xfc, 0x00, 0x00, 0x9f, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0x06, 0x07, 0xc1, 0x81, 0xfe, 0x00, 0x00, 0xbf, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0x06, 0x07, 0xc1, 0x81, 0xfe, 0x00, 0x01, 0xbf, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x06, 0x07, 0xc1, 0x81, 0xfe, 0x00, 0x01, 0x3f, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x06, 0x07, 0xc1, 0x81, 0xfe, 0x00, 0x03, 0x7f, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0x06, 0x07, 0xc1, 0x81, 0xfe, 0x00, 0x06, 0x7f, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0x86, 0x07, 0xc1, 0x81, 0xfe, 0x00, 0x0c, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0x86, 0x0f, 0xc1, 0x81, 0xfe, 0x00, 0x39, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xc2, 0x0f, 0xe0, 0x83, 0xfe, 0x00, 0xe3, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xe0, 0x1f, 0xf0, 0x07, 0xfe, 0x07, 0x8f, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xfe, 0xfc, 0x3f, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xc1, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xdf, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xdf, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xdf, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xef, 0xbf, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x9f, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xd8, 0xdf, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xbf, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xc3, 0xb7, 0x3f, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xc1, 0xbf, 0x87, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xbb, 0xaf, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 0x01, 0x9e, 0x31, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0x7b, 0x6f, 0xff, 0xff, 0xff, 0xeb, 0xff, 0xff, 0xff, 0xfe, 0x01, 0xdc, 0xfc, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0x7f, 0x5f, 0xff, 0xff, 0xff, 0xe9, 0xff, 0xff, 0xff, 0xfa, 0x03, 0xd9, 0xfe, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xe3, 0x58, 0x8f, 0xff, 0xff, 0xec, 0x9f, 0xff, 0xff, 0xc4, 0x03, 0xcb, 0xfe, 0x7f, 0xe0, 
  0x7f, 0xff, 0xfe, 0x5d, 0x57, 0x73, 0xff, 0xff, 0xe8, 0x43, 0xff, 0xfc, 0x00, 0x03, 0xeb, 0xff, 0x7f, 0xe0, 
  0x7f, 0xff, 0xf9, 0xbe, 0xef, 0xbd, 0xff, 0xff, 0xe8, 0x30, 0x00, 0x00, 0x08, 0x07, 0xeb, 0xff, 0x7f, 0xe0, 
  0x7f, 0xff, 0xf7, 0x7f, 0x77, 0xde, 0xff, 0xe1, 0xe8, 0x18, 0x00, 0x00, 0x10, 0x07, 0xeb, 0xff, 0x7f, 0xe0, 
  0x7f, 0xff, 0xee, 0xfe, 0xfb, 0xee, 0xff, 0xee, 0xe4, 0x0c, 0x00, 0x00, 0x00, 0x0f, 0xe3, 0xff, 0x3f, 0xe0, 
  0x7f, 0xff, 0xee, 0xfe, 0xfb, 0xef, 0x7f, 0xef, 0x74, 0x03, 0x00, 0x01, 0x00, 0x0f, 0xf1, 0xff, 0xbf, 0xe0, 
  0x7f, 0xff, 0xdd, 0xfe, 0xfb, 0xf7, 0x7f, 0xf7, 0x74, 0x01, 0xe0, 0x24, 0x00, 0x1f, 0xf5, 0xff, 0xbf, 0xe0, 
  0x7f, 0xff, 0xdd, 0xfd, 0xfd, 0xf7, 0xbf, 0xf8, 0x74, 0x00, 0x3f, 0xe0, 0x00, 0x1f, 0xf5, 0xff, 0xbf, 0xe0, 
  0x7f, 0xff, 0xbb, 0xfd, 0xfd, 0xfb, 0xbf, 0xff, 0x32, 0x08, 0x00, 0x00, 0x00, 0x3f, 0xf5, 0xff, 0xbf, 0xe0, 
  0x7f, 0xff, 0xbb, 0xfd, 0xfd, 0xfb, 0xbf, 0xff, 0xfa, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf1, 0xff, 0xbf, 0xe0, 
  0x7f, 0xff, 0xbb, 0xfd, 0xfd, 0xfb, 0xbf, 0xff, 0xfa, 0x01, 0x00, 0x00, 0x00, 0x7f, 0xf9, 0xff, 0xbf, 0xe0, 
  0x7f, 0xff, 0xbb, 0xfd, 0xfd, 0xfb, 0xbf, 0xff, 0xf9, 0x00, 0xc0, 0x20, 0x00, 0xff, 0xf9, 0xff, 0xbf, 0xe0, 
  0x7f, 0xff, 0xbb, 0xfd, 0xfd, 0xfb, 0xbf, 0xff, 0xfd, 0x00, 0x1f, 0x00, 0x00, 0xff, 0xf9, 0xff, 0xbf, 0xe0, 
  0x7f, 0xff, 0xdd, 0xfe, 0xfb, 0xf7, 0x7f, 0xff, 0xfd, 0x80, 0x00, 0x00, 0x01, 0xff, 0xf9, 0xff, 0xbf, 0xe0, 
  0x7f, 0xff, 0xdd, 0xfe, 0xfb, 0xf7, 0x7f, 0xff, 0xfc, 0x80, 0x00, 0x00, 0x03, 0xff, 0xf9, 0xff, 0x3f, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x00, 0x00, 0x03, 0xff, 0xfd, 0xff, 0x7f, 0xe0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x07, 0xff, 0xfd, 0xff, 0x40, 0x00, 
};

const lv_img_dsc_t cat09 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 140,
  .header.h = 68,
  .data_size = 1232,
  .data = cat09_map,
};
