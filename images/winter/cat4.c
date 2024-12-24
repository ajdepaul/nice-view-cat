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

#ifndef LV_ATTRIBUTE_IMG_CAT4
#define LV_ATTRIBUTE_IMG_CAT4
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_CAT4 uint8_t cat4_map[] = {
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 0*/
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x7f, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfe, 0x1f, 0x3f, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf6, 0x3f, 0xff, 0xfc, 0xe1, 0xbf, 0xff, 0xff, 0xe0, 
  0x7f, 0xf7, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xe7, 0xbf, 0xf7, 0xfd, 0xc1, 0xbf, 0xf7, 0xff, 0xe0, 
  0x7f, 0xe3, 0xff, 0xeb, 0xff, 0xe3, 0xff, 0xeb, 0xff, 0xef, 0xbf, 0xeb, 0xf9, 0xe0, 0xbf, 0xeb, 0xff, 0xe0, 
  0x7f, 0xf7, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xcf, 0x9f, 0xf7, 0xf3, 0xe0, 0xbf, 0xf7, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xdf, 0xff, 0xf7, 0xe0, 0xbf, 0xfc, 0x01, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xdf, 0xff, 0xe7, 0xf1, 0xbf, 0xf1, 0xfd, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xcf, 0xff, 0xcf, 0xf1, 0xbf, 0xc7, 0x04, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xef, 0xff, 0x97, 0xf1, 0xbf, 0x18, 0x02, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xef, 0xff, 0xaf, 0xf1, 0xbe, 0x60, 0x02, 0xe0, 
  0x7f, 0xff, 0xeb, 0xff, 0xff, 0xff, 0xeb, 0xff, 0xff, 0x3f, 0xe7, 0xff, 0x2f, 0xf9, 0xbc, 0x80, 0x02, 0xe0, 
  0x77, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xf7, 0x7f, 0xf7, 0xff, 0x4f, 0xf9, 0xb1, 0x00, 0x02, 0xe0, 
  0x7f, 0xff, 0xeb, 0xff, 0xff, 0xff, 0xeb, 0xff, 0xff, 0x7f, 0xf7, 0xfe, 0x5f, 0xf9, 0xa6, 0x00, 0x02, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xf0, 0x00, 0x9f, 0xf9, 0x08, 0x00, 0x02, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x10, 0x08, 0x02, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0x20, 0x20, 0x02, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0x40, 0x80, 0x02, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x81, 0x00, 0x06, 0xe0, 
  0x7f, 0xf7, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xf7, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x04, 0xe0, 
  0x7f, 0xeb, 0xff, 0xe3, 0xff, 0xeb, 0xff, 0xe3, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x04, 0x00, 0x05, 0xe0, 
  0x7f, 0xf7, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xf7, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x08, 0x00, 0x05, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xfe, 0x1f, 0xff, 0x1f, 0xfe, 0x10, 0x00, 0x0d, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xf8, 0x0f, 0xfe, 0x07, 0xfe, 0x20, 0x00, 0x09, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xf8, 0x87, 0xfc, 0x03, 0xfe, 0x40, 0x00, 0x0b, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xf1, 0x83, 0xf8, 0x21, 0xfe, 0x00, 0x00, 0x13, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xe1, 0x83, 0xf0, 0x60, 0xff, 0x00, 0x00, 0x17, 0xe0, 
  0x6b, 0xff, 0xff, 0xff, 0xeb, 0xff, 0xff, 0xff, 0xfb, 0xe1, 0x81, 0xf0, 0x60, 0xff, 0x00, 0x00, 0x37, 0xe0, 
  0x77, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xf3, 0xe1, 0x81, 0xf0, 0x60, 0xff, 0x00, 0x00, 0x27, 0xe0, 
  0x6b, 0xff, 0xff, 0xff, 0xeb, 0xff, 0xff, 0xff, 0xf7, 0xc1, 0x81, 0xf0, 0x60, 0x7f, 0x80, 0x00, 0x2f, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xc1, 0x81, 0xf0, 0x60, 0x7f, 0x80, 0x00, 0x6f, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xc1, 0x81, 0xf0, 0x60, 0x7f, 0x80, 0x00, 0x4f, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xc1, 0x81, 0xf0, 0x60, 0x7f, 0x80, 0x00, 0xdf, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xc1, 0x81, 0xf0, 0x60, 0x7f, 0x80, 0x01, 0x9f, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xe1, 0x81, 0xf0, 0x60, 0x7f, 0x80, 0x03, 0x3f, 0xe0, 
  0x7f, 0xf7, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xf6, 0x7f, 0xe1, 0x83, 0xf0, 0x60, 0x7f, 0x80, 0x0e, 0x7f, 0xe0, 
  0x7f, 0xe3, 0xff, 0xeb, 0xff, 0xe3, 0xff, 0xea, 0xff, 0xf0, 0x83, 0xf8, 0x20, 0xff, 0x80, 0x38, 0xff, 0xe0, 
  0x7f, 0xf7, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xf6, 0xff, 0xf8, 0x07, 0xfc, 0x01, 0xff, 0x81, 0xe3, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 0xbf, 0x0f, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb0, 0x7f, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb7, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x37, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x37, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xeb, 0xff, 0xff, 0xff, 0xeb, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x67, 0xff, 0xff, 0xe0, 
  0x77, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x6f, 0xff, 0xf7, 0xe0, 
  0x7f, 0xff, 0xeb, 0xff, 0xff, 0xff, 0xeb, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x6f, 0xe1, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x67, 0x8c, 0x7f, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xff, 0xff, 0xff, 0xff, 0x80, 0x77, 0x3f, 0x3f, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x7f, 0xff, 0xff, 0xfe, 0x80, 0xf6, 0x7f, 0xbf, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x27, 0xff, 0xff, 0xf1, 0x00, 0xf2, 0xff, 0x9f, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x10, 0xff, 0xff, 0x00, 0x00, 0xfa, 0xff, 0xdf, 0xe0, 
  0x7f, 0xf7, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xf7, 0xfa, 0x0c, 0x00, 0x00, 0x02, 0x01, 0xfa, 0xff, 0xdf, 0xe0, 
  0x7f, 0xeb, 0xff, 0xe3, 0xff, 0xeb, 0xff, 0xe3, 0xfa, 0x06, 0x00, 0x00, 0x04, 0x01, 0xfa, 0xff, 0xdf, 0xe0, 
  0x7f, 0xf7, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xf7, 0xf9, 0x03, 0x00, 0x00, 0x00, 0x03, 0xf8, 0xff, 0xcf, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x00, 0xc0, 0x00, 0x40, 0x03, 0xfc, 0x7f, 0xef, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x00, 0x78, 0x09, 0x00, 0x07, 0xfd, 0x7f, 0xef, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x00, 0x0f, 0xf8, 0x00, 0x07, 0xfd, 0x7f, 0xef, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x82, 0x00, 0x00, 0x00, 0x0f, 0xfd, 0x7f, 0xef, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x0f, 0xfc, 0x7f, 0xef, 0xe0, 
  0x6b, 0xff, 0xff, 0xff, 0xeb, 0xff, 0xff, 0xff, 0xea, 0x80, 0x40, 0x00, 0x00, 0x1f, 0xfe, 0x7f, 0xeb, 0xe0, 
  0x77, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xf6, 0x40, 0x30, 0x08, 0x00, 0x3f, 0xfe, 0x7f, 0xef, 0xe0, 
  0x6b, 0xff, 0xff, 0xff, 0xeb, 0xff, 0xff, 0xff, 0xeb, 0x40, 0x07, 0xc0, 0x00, 0x3f, 0xfe, 0x7f, 0xeb, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x60, 0x00, 0x00, 0x00, 0x7f, 0xfe, 0x7f, 0xef, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x20, 0x00, 0x00, 0x00, 0xff, 0xfe, 0x7f, 0xcf, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x00, 0x00, 0x00, 0xff, 0xff, 0x7f, 0xdf, 0xe0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x01, 0xff, 0xff, 0x7f, 0xd0, 0x00, 
};

const lv_img_dsc_t cat4 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 140,
  .header.h = 68,
  .data_size = 1232,
  .data = cat4_map,
};
