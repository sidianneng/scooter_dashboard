#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif
#ifndef LV_ATTRIBUTE_IMG_IMG_SRC_BATTERY1
#define LV_ATTRIBUTE_IMG_IMG_SRC_BATTERY1
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_IMG_SRC_BATTERY1 uint8_t img_src_battery1_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdb, 0xff, 0xdb, 0xdf, 0xff, 0xdf, 0xdf, 0xdf, 0xdb, 0xdb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xdb, 0xb7, 0xdb, 0xdb, 0xdb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xdb, 0xdf, 0x92, 0x92, 0x92, 0x92, 0xdb, 0xdb, 0xdf, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdf, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0xb7, 0xff, 0xff, 0xff, 0xb7, 0x00, 0x00, 0x6d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0xdb, 0xff, 0xff, 0xff, 0xff, 0x92, 0x00, 0x24, 0x25, 0x49, 0x49, 0x25, 0x25, 0x25, 0x92, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6e, 0x00, 0x24, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x72, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6e, 0x00, 0x04, 0x49, 0x6e, 0x72, 0x6e, 0x72, 0x92, 0xdb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6e, 0x00, 0x00, 0xb7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xdb, 0xff, 0xff, 0xff, 0xff, 0xff, 0x49, 0x00, 0x00, 0xdb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x49, 0x00, 0x25, 0xdb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x25, 0x24, 0x25, 0x49, 0x49, 0x49, 0x25, 0x29, 0x25, 0x6e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x25, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0x49, 0x49, 0x49, 0x49, 0x4d, 0x6d, 0x6d, 0x6e, 0x6e, 0x92, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xdb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0xce, 0xdc, 0xde, 0x59, 0xce, 0xbb, 0xd6, 0xdb, 0xd6, 0x9a, 0xce, 0x9b, 0xd6, 0x9b, 0xd6, 0x9a, 0xce, 0x7a, 0xce, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0xe7, 0x5d, 0xe7, 0xfc, 0xde, 0xbb, 0xd6, 0xdb, 0xde, 0xfc, 0xde, 0xfc, 0xde, 0xdb, 0xde, 0x5e, 0xef, 0xdb, 0xde, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0xfe, 0xfc, 0xe6, 0x5d, 0xef, 0x1c, 0xe7, 0x5d, 0xef, 0x1c, 0xe7, 0xfb, 0xde, 0xfc, 0xde, 0xdb, 0xde, 0x1c, 0xe7, 0xbb, 0xd6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x5d, 0xef, 0xff, 0xff, 0x3c, 0xe7, 0xba, 0xd6, 0x18, 0xbe, 0x95, 0xad, 0x79, 0xce, 0x79, 0xc6, 0x9a, 0xd6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x5a, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd8, 0xbd, 0x9b, 0xd6, 0x52, 0x8c, 0xf0, 0x7b, 0xf0, 0x7b, 0x92, 0x94, 0x9a, 0xce, 0x59, 0xc6, 0xbb, 0xd6, 0x39, 0xc6, 0x9a, 0xce, 0x19, 0xc6, 0x7a, 0xce, 0x39, 0xc6, 0x7a, 0xce, 0x39, 0xc6, 0x7a, 0xce, 0x9b, 0xd6, 0xbb, 0xd6, 0xbb, 0xd6, 0xbb, 0xd6, 0xbb, 0xd6, 0xbb, 0xd6, 0xbb, 0xd6, 0xbb, 0xd6, 0xfc, 0xde, 0xfc, 0xde, 0xfb, 0xde, 0x1c, 0xe7, 0xba, 0xd6, 
  0x00, 0x00, 0x00, 0x00, 0x76, 0xad, 0x1c, 0xe7, 0x3c, 0xe7, 0xff, 0xff, 0x15, 0x9d, 0x01, 0x00, 0x00, 0x00, 0xab, 0x52, 0xde, 0xf7, 0x5d, 0xef, 0x3d, 0xe7, 0x1c, 0xdf, 0x1c, 0xe7, 0x9e, 0xef, 0x9e, 0xef, 0x7e, 0xef, 0x9e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x9e, 0xef, 0x9f, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xf7, 0x7e, 0xef, 0x7e, 0xef, 0x5d, 0xef, 0x5d, 0xef, 0x9e, 0xf7, 
  0x00, 0x00, 0x18, 0xc6, 0xfc, 0xe6, 0xff, 0xff, 0x5d, 0xef, 0xbf, 0xf7, 0x52, 0x8c, 0x62, 0x08, 0xc4, 0x18, 0xc4, 0x18, 0x08, 0x3a, 0xa7, 0x31, 0x66, 0x29, 0x25, 0x21, 0xe4, 0x18, 0x31, 0x84, 0x7e, 0xef, 0xfc, 0xde, 0x1d, 0xe7, 0x1d, 0xe7, 0x1d, 0xe7, 0x1d, 0xe7, 0x1d, 0xe7, 0x1d, 0xe7, 0x1d, 0xe7, 0x1d, 0xdf, 0x3d, 0xe7, 0x1d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0xfc, 0xde, 0x1c, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 
  0x00, 0x00, 0xfb, 0xde, 0xff, 0xff, 0x3d, 0xe7, 0x3d, 0xe7, 0xbf, 0xf7, 0x8e, 0x6b, 0x42, 0x08, 0xc3, 0x18, 0xa3, 0x10, 0x21, 0x00, 0x01, 0x00, 0x21, 0x00, 0x41, 0x08, 0x00, 0x00, 0xb0, 0x73, 0xbf, 0xf7, 0x3d, 0xe7, 0x1d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x1d, 0xe7, 0x1c, 0xe7, 0x3d, 0xe7, 0x1d, 0xe7, 0x1d, 0xe7, 0x3d, 0xe7, 0x1d, 0xe7, 0x1c, 0xe7, 
  0x00, 0x00, 0x3d, 0xe7, 0x9e, 0xf7, 0x3d, 0xe7, 0x3d, 0xe7, 0x9e, 0xf7, 0x0d, 0x63, 0x42, 0x08, 0x82, 0x10, 0x08, 0x3a, 0x6e, 0x6b, 0x8e, 0x73, 0x8e, 0x6b, 0xaf, 0x73, 0xd0, 0x73, 0x5a, 0xce, 0x5e, 0xef, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xef, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x1d, 0xe7, 0x1d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x1c, 0xe7, 
  0xdb, 0xde, 0x3d, 0xe7, 0x7e, 0xef, 0x5d, 0xef, 0x5d, 0xef, 0x9e, 0xf7, 0x0c, 0x63, 0x62, 0x08, 0x42, 0x08, 0x56, 0xad, 0xff, 0xff, 0x9e, 0xf7, 0xbf, 0xf7, 0xbe, 0xf7, 0xbf, 0xf7, 0x7e, 0xef, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x1d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x5d, 0xef, 0x3d, 0xe7, 0x5d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 
  0x9a, 0xd6, 0x1c, 0xe7, 0x5d, 0xef, 0x3d, 0xef, 0x3d, 0xe7, 0x7e, 0xef, 0x49, 0x4a, 0x62, 0x08, 0x83, 0x10, 0xd7, 0xbd, 0x9e, 0xf7, 0x5e, 0xef, 0x5d, 0xef, 0x5d, 0xe7, 0x7e, 0xef, 0x1d, 0xe7, 0x3d, 0xe7, 0x5e, 0xef, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x5d, 0xef, 0x5d, 0xef, 0x5d, 0xef, 0x5d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x5d, 0xef, 0x3d, 0xe7, 
  0xdc, 0xde, 0x5d, 0xef, 0x7e, 0xef, 0x5d, 0xef, 0x7e, 0xef, 0xfc, 0xde, 0xa7, 0x31, 0x63, 0x10, 0xe4, 0x18, 0x19, 0xc6, 0xdf, 0xff, 0x7d, 0xef, 0xfc, 0xde, 0xfc, 0xde, 0xfc, 0xde, 0x5d, 0xef, 0x5d, 0xef, 0x3d, 0xe7, 0x5e, 0xef, 0x5e, 0xef, 0x5d, 0xef, 0x5e, 0xef, 0x5e, 0xef, 0x5e, 0xef, 0x5e, 0xef, 0x5e, 0xef, 0x5d, 0xef, 0x5e, 0xef, 0x3d, 0xef, 0x3d, 0xe7, 0x3d, 0xe7, 0x5d, 0xef, 0x7e, 0xef, 0x1d, 0xe7, 
  0xfc, 0xde, 0x5d, 0xef, 0x3d, 0xe7, 0x3d, 0xe7, 0x7e, 0xef, 0xbb, 0xd6, 0x26, 0x21, 0x83, 0x10, 0xe4, 0x18, 0x08, 0x42, 0x4a, 0x4a, 0x09, 0x42, 0x67, 0x29, 0x88, 0x31, 0x26, 0x21, 0x0d, 0x5b, 0x5e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x5d, 0xef, 0x5e, 0xef, 0x5e, 0xef, 0x5e, 0xef, 0x5e, 0xef, 0x7e, 0xef, 0x5e, 0xef, 0x5d, 0xef, 0x5d, 0xef, 0x5d, 0xe7, 0x5d, 0xef, 0x9f, 0xf7, 0x5d, 0xe7, 
  0xfc, 0xde, 0x5d, 0xef, 0x3d, 0xe7, 0x3d, 0xe7, 0x9f, 0xf7, 0x18, 0xc6, 0xa3, 0x10, 0x62, 0x08, 0x83, 0x10, 0x21, 0x00, 0x21, 0x00, 0x21, 0x00, 0x42, 0x08, 0x62, 0x10, 0x01, 0x00, 0xc4, 0x18, 0xdc, 0xde, 0xbf, 0xf7, 0x5e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x5e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x5e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x5d, 0xef, 0x5e, 0xef, 0xbf, 0xf7, 0x3d, 0xe7, 
  0xbb, 0xd6, 0x3d, 0xe7, 0x3d, 0xef, 0x5e, 0xef, 0x9e, 0xf7, 0x7a, 0xce, 0x09, 0x42, 0xe9, 0x39, 0x8b, 0x52, 0x2a, 0x42, 0x8b, 0x52, 0xab, 0x52, 0xec, 0x5a, 0xcc, 0x5a, 0xed, 0x5a, 0x31, 0x84, 0x5d, 0xef, 0x9e, 0xf7, 0x7e, 0xef, 0x7e, 0xef, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x7e, 0xef, 0x5d, 0xef, 0x5e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0xdf, 0xff, 0x5d, 0xef, 
  0x39, 0xc6, 0x5d, 0xef, 0x7e, 0xef, 0x5d, 0xef, 0x7e, 0xef, 0x7e, 0xf7, 0x3d, 0xe7, 0x7e, 0xef, 0xbf, 0xf7, 0x9e, 0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x7e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x5d, 0xef, 0xff, 0xff, 0x5d, 0xef, 
  0x00, 0x00, 0xfc, 0xde, 0xff, 0xff, 0x5e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x9e, 0xf7, 0xbe, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0x9f, 0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0x9e, 0xef, 0xbf, 0xf7, 0xff, 0xff, 0x3d, 0xe7, 
  0x00, 0x00, 0x9a, 0xc6, 0x5d, 0xe7, 0xbf, 0xf7, 0x7e, 0xef, 0x7e, 0xf7, 0x7e, 0xef, 0x9e, 0xf7, 0x9e, 0xf7, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x9e, 0xf7, 0x7e, 0xef, 0x7e, 0xef, 0x9e, 0xf7, 0x7e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xef, 0x7e, 0xef, 0x5d, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x9e, 0xef, 0x9d, 0xef, 0x7e, 0xef, 0xbf, 0xf7, 0x7e, 0xef, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit BUT the 2 bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xce, 0x79, 0xde, 0xdc, 0xce, 0x59, 0xd6, 0xbb, 0xd6, 0xdb, 0xce, 0x9a, 0xd6, 0x9b, 0xd6, 0x9b, 0xce, 0x9a, 0xce, 0x7a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x1c, 0xe7, 0x5d, 0xde, 0xfc, 0xd6, 0xbb, 0xde, 0xdb, 0xde, 0xfc, 0xde, 0xfc, 0xde, 0xdb, 0xef, 0x5e, 0xde, 0xdb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xbf, 0xe6, 0xfc, 0xef, 0x5d, 0xe7, 0x1c, 0xef, 0x5d, 0xe7, 0x1c, 0xde, 0xfb, 0xde, 0xfc, 0xde, 0xdb, 0xe7, 0x1c, 0xd6, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xef, 0x5d, 0xff, 0xff, 0xe7, 0x3c, 0xd6, 0xba, 0xbe, 0x18, 0xad, 0x95, 0xce, 0x79, 0xc6, 0x79, 0xd6, 0x9a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0xab, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbd, 0xd8, 0xd6, 0x9b, 0x8c, 0x52, 0x7b, 0xf0, 0x7b, 0xf0, 0x94, 0x92, 0xce, 0x9a, 0xc6, 0x59, 0xd6, 0xbb, 0xc6, 0x39, 0xce, 0x9a, 0xc6, 0x19, 0xce, 0x7a, 0xc6, 0x39, 0xce, 0x7a, 0xc6, 0x39, 0xce, 0x7a, 0xd6, 0x9b, 0xd6, 0xbb, 0xd6, 0xbb, 0xd6, 0xbb, 0xd6, 0xbb, 0xd6, 0xbb, 0xd6, 0xbb, 0xd6, 0xbb, 0xde, 0xfc, 0xde, 0xfc, 0xde, 0xfb, 0xe7, 0x1c, 0xd6, 0xba, 
  0x00, 0x00, 0x00, 0x00, 0xad, 0x76, 0xe7, 0x1c, 0xe7, 0x3c, 0xff, 0xff, 0x9d, 0x15, 0x00, 0x01, 0x00, 0x00, 0x52, 0xab, 0xf7, 0xde, 0xef, 0x5d, 0xe7, 0x3d, 0xdf, 0x1c, 0xe7, 0x1c, 0xef, 0x9e, 0xef, 0x9e, 0xef, 0x7e, 0xef, 0x9e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x9e, 0xf7, 0x9f, 0xf7, 0x9e, 0xf7, 0x9e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xf7, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x5d, 0xef, 0x5d, 0xf7, 0x9e, 
  0x00, 0x00, 0xc6, 0x18, 0xe6, 0xfc, 0xff, 0xff, 0xef, 0x5d, 0xf7, 0xbf, 0x8c, 0x52, 0x08, 0x62, 0x18, 0xc4, 0x18, 0xc4, 0x3a, 0x08, 0x31, 0xa7, 0x29, 0x66, 0x21, 0x25, 0x18, 0xe4, 0x84, 0x31, 0xef, 0x7e, 0xde, 0xfc, 0xe7, 0x1d, 0xe7, 0x1d, 0xe7, 0x1d, 0xe7, 0x1d, 0xe7, 0x1d, 0xe7, 0x1d, 0xe7, 0x1d, 0xdf, 0x1d, 0xe7, 0x3d, 0xe7, 0x1d, 0xe7, 0x3d, 0xe7, 0x3d, 0xde, 0xfc, 0xe7, 0x1c, 0xe7, 0x3d, 0xe7, 0x3d, 
  0x00, 0x00, 0xde, 0xfb, 0xff, 0xff, 0xe7, 0x3d, 0xe7, 0x3d, 0xf7, 0xbf, 0x6b, 0x8e, 0x08, 0x42, 0x18, 0xc3, 0x10, 0xa3, 0x00, 0x21, 0x00, 0x01, 0x00, 0x21, 0x08, 0x41, 0x00, 0x00, 0x73, 0xb0, 0xf7, 0xbf, 0xe7, 0x3d, 0xe7, 0x1d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x1d, 0xe7, 0x1c, 0xe7, 0x3d, 0xe7, 0x1d, 0xe7, 0x1d, 0xe7, 0x3d, 0xe7, 0x1d, 0xe7, 0x1c, 
  0x00, 0x00, 0xe7, 0x3d, 0xf7, 0x9e, 0xe7, 0x3d, 0xe7, 0x3d, 0xf7, 0x9e, 0x63, 0x0d, 0x08, 0x42, 0x10, 0x82, 0x3a, 0x08, 0x6b, 0x6e, 0x73, 0x8e, 0x6b, 0x8e, 0x73, 0xaf, 0x73, 0xd0, 0xce, 0x5a, 0xef, 0x5e, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xef, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x1d, 0xe7, 0x1d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x1c, 
  0xde, 0xdb, 0xe7, 0x3d, 0xef, 0x7e, 0xef, 0x5d, 0xef, 0x5d, 0xf7, 0x9e, 0x63, 0x0c, 0x08, 0x62, 0x08, 0x42, 0xad, 0x56, 0xff, 0xff, 0xf7, 0x9e, 0xf7, 0xbf, 0xf7, 0xbe, 0xf7, 0xbf, 0xef, 0x7e, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x1d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xef, 0x5d, 0xe7, 0x3d, 0xe7, 0x5d, 0xe7, 0x3d, 0xe7, 0x3d, 
  0xd6, 0x9a, 0xe7, 0x1c, 0xef, 0x5d, 0xef, 0x3d, 0xe7, 0x3d, 0xef, 0x7e, 0x4a, 0x49, 0x08, 0x62, 0x10, 0x83, 0xbd, 0xd7, 0xf7, 0x9e, 0xef, 0x5e, 0xef, 0x5d, 0xe7, 0x5d, 0xef, 0x7e, 0xe7, 0x1d, 0xe7, 0x3d, 0xef, 0x5e, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xef, 0x5d, 0xef, 0x5d, 0xef, 0x5d, 0xe7, 0x5d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xef, 0x5d, 0xe7, 0x3d, 
  0xde, 0xdc, 0xef, 0x5d, 0xef, 0x7e, 0xef, 0x5d, 0xef, 0x7e, 0xde, 0xfc, 0x31, 0xa7, 0x10, 0x63, 0x18, 0xe4, 0xc6, 0x19, 0xff, 0xdf, 0xef, 0x7d, 0xde, 0xfc, 0xde, 0xfc, 0xde, 0xfc, 0xef, 0x5d, 0xef, 0x5d, 0xe7, 0x3d, 0xef, 0x5e, 0xef, 0x5e, 0xef, 0x5d, 0xef, 0x5e, 0xef, 0x5e, 0xef, 0x5e, 0xef, 0x5e, 0xef, 0x5e, 0xef, 0x5d, 0xef, 0x5e, 0xef, 0x3d, 0xe7, 0x3d, 0xe7, 0x3d, 0xef, 0x5d, 0xef, 0x7e, 0xe7, 0x1d, 
  0xde, 0xfc, 0xef, 0x5d, 0xe7, 0x3d, 0xe7, 0x3d, 0xef, 0x7e, 0xd6, 0xbb, 0x21, 0x26, 0x10, 0x83, 0x18, 0xe4, 0x42, 0x08, 0x4a, 0x4a, 0x42, 0x09, 0x29, 0x67, 0x31, 0x88, 0x21, 0x26, 0x5b, 0x0d, 0xef, 0x5e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x5d, 0xef, 0x5e, 0xef, 0x5e, 0xef, 0x5e, 0xef, 0x5e, 0xef, 0x7e, 0xef, 0x5e, 0xef, 0x5d, 0xef, 0x5d, 0xe7, 0x5d, 0xef, 0x5d, 0xf7, 0x9f, 0xe7, 0x5d, 
  0xde, 0xfc, 0xef, 0x5d, 0xe7, 0x3d, 0xe7, 0x3d, 0xf7, 0x9f, 0xc6, 0x18, 0x10, 0xa3, 0x08, 0x62, 0x10, 0x83, 0x00, 0x21, 0x00, 0x21, 0x00, 0x21, 0x08, 0x42, 0x10, 0x62, 0x00, 0x01, 0x18, 0xc4, 0xde, 0xdc, 0xf7, 0xbf, 0xef, 0x5e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x5e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x5e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x5d, 0xef, 0x5e, 0xf7, 0xbf, 0xe7, 0x3d, 
  0xd6, 0xbb, 0xe7, 0x3d, 0xef, 0x3d, 0xef, 0x5e, 0xf7, 0x9e, 0xce, 0x7a, 0x42, 0x09, 0x39, 0xe9, 0x52, 0x8b, 0x42, 0x2a, 0x52, 0x8b, 0x52, 0xab, 0x5a, 0xec, 0x5a, 0xcc, 0x5a, 0xed, 0x84, 0x31, 0xef, 0x5d, 0xf7, 0x9e, 0xef, 0x7e, 0xef, 0x7e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xef, 0x7e, 0xef, 0x5d, 0xef, 0x5e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xff, 0xdf, 0xef, 0x5d, 
  0xc6, 0x39, 0xef, 0x5d, 0xef, 0x7e, 0xef, 0x5d, 0xef, 0x7e, 0xf7, 0x7e, 0xe7, 0x3d, 0xef, 0x7e, 0xf7, 0xbf, 0xf7, 0x9e, 0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0xbf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x7e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x5d, 0xff, 0xff, 0xef, 0x5d, 
  0x00, 0x00, 0xde, 0xfc, 0xff, 0xff, 0xef, 0x5e, 0xef, 0x7e, 0xef, 0x7e, 0xf7, 0x9e, 0xf7, 0xbe, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0x9f, 0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0xbf, 0xf7, 0xbf, 0xef, 0x9e, 0xf7, 0xbf, 0xff, 0xff, 0xe7, 0x3d, 
  0x00, 0x00, 0xc6, 0x9a, 0xe7, 0x5d, 0xf7, 0xbf, 0xef, 0x7e, 0xf7, 0x7e, 0xef, 0x7e, 0xf7, 0x9e, 0xf7, 0x9e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x7e, 0xf7, 0x9e, 0xef, 0x7e, 0xef, 0x7e, 0xf7, 0x9e, 0xf7, 0x7e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xf7, 0x9e, 0xef, 0x9e, 0xef, 0x7e, 0xef, 0x5d, 0xef, 0x7e, 0xef, 0x7e, 0xef, 0x9e, 0xef, 0x9d, 0xef, 0x7e, 0xf7, 0xbf, 0xef, 0x7e, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xcc, 0xcc, 0xcc, 0xff, 0xdd, 0xd8, 0xd5, 0xff, 0xcb, 0xc7, 0xc7, 0xff, 0xd5, 0xd3, 0xcf, 0xff, 0xda, 0xd7, 0xd3, 0xff, 0xd4, 0xd1, 0xcc, 0xff, 0xd7, 0xd2, 0xcd, 0xff, 0xd5, 0xd2, 0xcf, 0xff, 0xd2, 0xcf, 0xcb, 0xff, 0xd1, 0xcd, 0xc9, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xe3, 0xe2, 0xdf, 0xff, 0xe9, 0xe8, 0xe4, 0xff, 0xdd, 0xdb, 0xd8, 0xff, 0xda, 0xd6, 0xd3, 0xff, 0xdc, 0xd9, 0xd6, 0xff, 0xdf, 0xdc, 0xd9, 0xff, 0xde, 0xdc, 0xd8, 0xff, 0xdb, 0xda, 0xd5, 0xff, 0xed, 0xea, 0xe6, 0xff, 0xda, 0xd8, 0xd5, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xd4, 0xff, 0xff, 0xe3, 0xdd, 0xdd, 0xff, 0xeb, 0xe8, 0xe5, 0xff, 0xe3, 0xe1, 0xdd, 0xff, 0xeb, 0xe9, 0xe5, 0xff, 0xe2, 0xe0, 0xdd, 0xff, 0xdc, 0xdd, 0xda, 0xff, 0xdf, 0xde, 0xda, 0xff, 0xdb, 0xda, 0xd6, 0xff, 0xe1, 0xe1, 0xde, 0xff, 0xd6, 0xd6, 0xd2, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xeb, 0xe8, 0xe6, 0xff, 0xff, 0xfd, 0xfb, 0xff, 0xe3, 0xe3, 0xdd, 0xff, 0xd4, 0xd4, 0xd0, 0xff, 0xbf, 0xbf, 0xbb, 0xff, 0xaa, 0xaf, 0xaa, 0xff, 0xcc, 0xcc, 0xcc, 0xff, 0xcb, 0xcb, 0xc3, 0xff, 0xcf, 0xcf, 0xcf, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x55, 0x55, 0x55, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xbf, 0xb9, 0xb9, 0xff, 0xdc, 0xd2, 0xcf, 0xff, 0x93, 0x88, 0x85, 0xff, 0x82, 0x7b, 0x78, 0xff, 0x80, 0x7c, 0x79, 0xff, 0x93, 0x90, 0x8d, 0xff, 0xd2, 0xd0, 0xcc, 0xff, 0xca, 0xc8, 0xc3, 0xff, 0xd6, 0xd4, 0xce, 0xff, 0xc9, 0xc5, 0xc0, 0xff, 0xd0, 0xcf, 0xc9, 0xff, 0xc5, 0xc2, 0xbe, 0xff, 0xce, 0xcb, 0xc6, 0xff, 0xca, 0xc5, 0xc2, 0xff, 0xd2, 0xce, 0xcb, 0xff, 0xc8, 0xc6, 0xc3, 0xff, 0xd0, 0xcb, 0xc9, 0xff, 0xd5, 0xd2, 0xcd, 0xff, 0xd8, 0xd6, 0xd2, 0xff, 0xd7, 0xd5, 0xd2, 0xff, 0xda, 0xd6, 0xd3, 0xff, 0xd6, 0xd4, 0xd0, 0xff, 0xd8, 0xd4, 0xd3, 0xff, 0xd9, 0xd4, 0xd3, 0xff, 0xd8, 0xd3, 0xd2, 0xff, 0xde, 0xde, 0xda, 0xff, 0xe0, 0xdd, 0xda, 0xff, 0xdb, 0xdb, 0xd7, 0xff, 0xe0, 0xe0, 0xdd, 0xff, 0xd3, 0xd5, 0xd3, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xad, 0xad, 0xa5, 0xff, 0xe3, 0xe0, 0xdd, 0xff, 0xe3, 0xe4, 0xe1, 0xff, 0xfd, 0xfb, 0xf8, 0xff, 0xa6, 0x9f, 0x9b, 0xff, 0x06, 0x00, 0x00, 0xff, 0x03, 0x00, 0x00, 0xff, 0x59, 0x56, 0x54, 0xff, 0xf4, 0xf7, 0xf3, 0xff, 0xeb, 0xea, 0xe6, 0xff, 0xe6, 0xe5, 0xe1, 0xff, 0xe2, 0xe0, 0xdb, 0xff, 0xe2, 0xe2, 0xdd, 0xff, 0xef, 0xef, 0xeb, 0xff, 0xf2, 0xf0, 0xec, 0xff, 0xf0, 0xec, 0xeb, 0xff, 0xf3, 0xef, 0xec, 0xff, 0xf2, 0xee, 0xeb, 0xff, 0xf1, 0xed, 0xea, 0xff, 0xf3, 0xef, 0xeb, 0xff, 0xf5, 0xf1, 0xee, 0xff, 0xf4, 0xf1, 0xed, 0xff, 0xf3, 0xf0, 0xed, 0xff, 0xef, 0xec, 0xe8, 0xff, 0xf1, 0xed, 0xeb, 0xff, 0xf2, 0xee, 0xeb, 0xff, 0xf1, 0xee, 0xed, 0xff, 0xf1, 0xee, 0xec, 0xff, 0xed, 0xeb, 0xe8, 0xff, 0xea, 0xe8, 0xe5, 0xff, 0xea, 0xe8, 0xe7, 0xff, 0xf1, 0xf1, 0xf0, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0xbf, 0xbf, 0xbf, 0xff, 0xe3, 0xdd, 0xdd, 0xff, 0xff, 0xfc, 0xfa, 0xff, 0xeb, 0xe8, 0xe6, 0xff, 0xf6, 0xf4, 0xf2, 0xff, 0x8d, 0x88, 0x85, 0xff, 0x12, 0x0d, 0x0c, 0xff, 0x1d, 0x19, 0x18, 0xff, 0x22, 0x19, 0x17, 0xff, 0x43, 0x3f, 0x3c, 0xff, 0x3c, 0x36, 0x34, 0xff, 0x34, 0x2b, 0x2a, 0xff, 0x2b, 0x23, 0x21, 0xff, 0x24, 0x1c, 0x1b, 0xff, 0x88, 0x84, 0x81, 0xff, 0xee, 0xec, 0xe9, 0xff, 0xe1, 0xdd, 0xdc, 0xff, 0xe6, 0xe2, 0xe0, 0xff, 0xe5, 0xe2, 0xdf, 0xff, 0xe5, 0xe0, 0xde, 0xff, 0xe5, 0xe0, 0xdd, 0xff, 0xe7, 0xe2, 0xe1, 0xff, 0xe5, 0xe0, 0xde, 0xff, 0xe7, 0xe2, 0xe0, 0xff, 0xe5, 0xe0, 0xdc, 0xff, 0xe7, 0xe3, 0xe0, 0xff, 0xe6, 0xe2, 0xdf, 0xff, 0xe8, 0xe4, 0xe1, 0xff, 0xe8, 0xe4, 0xe3, 0xff, 0xe1, 0xdd, 0xdb, 0xff, 0xe3, 0xe0, 0xdd, 0xff, 0xe8, 0xe6, 0xe4, 0xff, 0xe7, 0xe4, 0xe1, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0xdc, 0xdc, 0xd9, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xe7, 0xe3, 0xe2, 0xff, 0xe9, 0xe5, 0xe4, 0xff, 0xf9, 0xf5, 0xf3, 0xff, 0x73, 0x6f, 0x6c, 0xff, 0x0e, 0x09, 0x08, 0xff, 0x1c, 0x1a, 0x18, 0xff, 0x17, 0x13, 0x10, 0xff, 0x0a, 0x03, 0x01, 0xff, 0x07, 0x00, 0x00, 0xff, 0x08, 0x03, 0x01, 0xff, 0x0c, 0x07, 0x05, 0xff, 0x00, 0x00, 0x00, 0xff, 0x7d, 0x73, 0x70, 0xff, 0xf7, 0xf4, 0xf2, 0xff, 0xe9, 0xe5, 0xe4, 0xff, 0xe7, 0xe2, 0xdf, 0xff, 0xe7, 0xe3, 0xe1, 0xff, 0xe7, 0xe4, 0xe0, 0xff, 0xe9, 0xe5, 0xe2, 0xff, 0xe7, 0xe3, 0xe1, 0xff, 0xe9, 0xe5, 0xe3, 0xff, 0xe9, 0xe5, 0xe2, 0xff, 0xe7, 0xe3, 0xe1, 0xff, 0xe7, 0xe2, 0xe1, 0xff, 0xe4, 0xe0, 0xde, 0xff, 0xe8, 0xe4, 0xe1, 0xff, 0xe7, 0xe2, 0xe1, 0xff, 0xe6, 0xe2, 0xe0, 0xff, 0xe8, 0xe4, 0xe1, 0xff, 0xe7, 0xe2, 0xdf, 0xff, 0xe2, 0xe2, 0xde, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0xe8, 0xe4, 0xe4, 0xff, 0xf4, 0xf1, 0xf0, 0xff, 0xe9, 0xe6, 0xe4, 0xff, 0xe6, 0xe3, 0xe0, 0xff, 0xf3, 0xef, 0xed, 0xff, 0x68, 0x62, 0x61, 0xff, 0x0e, 0x09, 0x08, 0xff, 0x14, 0x11, 0x0f, 0xff, 0x41, 0x3f, 0x3c, 0xff, 0x6d, 0x6b, 0x68, 0xff, 0x74, 0x71, 0x6e, 0xff, 0x72, 0x6f, 0x6a, 0xff, 0x78, 0x74, 0x6f, 0xff, 0x7e, 0x78, 0x74, 0xff, 0xce, 0xca, 0xc6, 0xff, 0xed, 0xea, 0xe7, 0xff, 0xe8, 0xe4, 0xe1, 0xff, 0xe9, 0xe5, 0xe2, 0xff, 0xe8, 0xe4, 0xe3, 0xff, 0xe8, 0xe5, 0xe2, 0xff, 0xe8, 0xe3, 0xe1, 0xff, 0xe9, 0xe5, 0xe3, 0xff, 0xe9, 0xe5, 0xe4, 0xff, 0xea, 0xe6, 0xe5, 0xff, 0xe8, 0xe5, 0xe3, 0xff, 0xe9, 0xe5, 0xe3, 0xff, 0xe8, 0xe4, 0xe3, 0xff, 0xe6, 0xe2, 0xe1, 0xff, 0xe5, 0xe2, 0xe0, 0xff, 0xea, 0xe6, 0xe4, 0xff, 0xe9, 0xe6, 0xe2, 0xff, 0xea, 0xe5, 0xe3, 0xff, 0xe1, 0xe1, 0xdf, 0xff, 
  0xd8, 0xd8, 0xd8, 0xff, 0xe5, 0xe4, 0xe1, 0xff, 0xf1, 0xed, 0xec, 0xff, 0xeb, 0xe8, 0xe7, 0xff, 0xec, 0xe8, 0xe7, 0xff, 0xf4, 0xf0, 0xef, 0xff, 0x64, 0x5f, 0x5d, 0xff, 0x13, 0x0c, 0x0c, 0xff, 0x12, 0x09, 0x08, 0xff, 0xad, 0xaa, 0xa7, 0xff, 0xfd, 0xfb, 0xf8, 0xff, 0xf2, 0xf0, 0xed, 0xff, 0xf6, 0xf4, 0xf1, 0xff, 0xf4, 0xf3, 0xee, 0xff, 0xf6, 0xf3, 0xef, 0xff, 0xef, 0xeb, 0xe7, 0xff, 0xe9, 0xe5, 0xe1, 0xff, 0xea, 0xe6, 0xe2, 0xff, 0xe7, 0xe3, 0xe0, 0xff, 0xe8, 0xe5, 0xe2, 0xff, 0xe8, 0xe3, 0xe2, 0xff, 0xea, 0xe4, 0xe3, 0xff, 0xe9, 0xe4, 0xe3, 0xff, 0xe9, 0xe3, 0xe2, 0xff, 0xe6, 0xe1, 0xe0, 0xff, 0xe9, 0xe5, 0xe3, 0xff, 0xe8, 0xe4, 0xe3, 0xff, 0xea, 0xe6, 0xe4, 0xff, 0xe9, 0xe5, 0xe3, 0xff, 0xea, 0xe7, 0xe5, 0xff, 0xe9, 0xe5, 0xe4, 0xff, 0xea, 0xe7, 0xe4, 0xff, 0xe9, 0xe6, 0xe3, 0xff, 0xe6, 0xe3, 0xe1, 0xff, 
  0xd4, 0xd0, 0xd0, 0xff, 0xe4, 0xe0, 0xdf, 0xff, 0xec, 0xe7, 0xe6, 0xff, 0xea, 0xe6, 0xe5, 0xff, 0xe9, 0xe5, 0xe3, 0xff, 0xef, 0xec, 0xeb, 0xff, 0x4c, 0x48, 0x45, 0xff, 0x12, 0x0d, 0x0c, 0xff, 0x17, 0x10, 0x0e, 0xff, 0xbb, 0xb8, 0xb5, 0xff, 0xf4, 0xf1, 0xef, 0xff, 0xed, 0xea, 0xe8, 0xff, 0xeb, 0xe8, 0xe5, 0xff, 0xea, 0xe7, 0xe4, 0xff, 0xef, 0xed, 0xe9, 0xff, 0xe5, 0xe1, 0xdd, 0xff, 0xe8, 0xe5, 0xe1, 0xff, 0xed, 0xe8, 0xe5, 0xff, 0xe9, 0xe5, 0xe1, 0xff, 0xe8, 0xe3, 0xe0, 0xff, 0xeb, 0xe6, 0xe4, 0xff, 0xe9, 0xe4, 0xe2, 0xff, 0xea, 0xe6, 0xe3, 0xff, 0xec, 0xe7, 0xe5, 0xff, 0xeb, 0xe7, 0xe5, 0xff, 0xec, 0xe9, 0xe8, 0xff, 0xeb, 0xe7, 0xe4, 0xff, 0xe9, 0xe5, 0xe2, 0xff, 0xea, 0xe6, 0xe4, 0xff, 0xe9, 0xe5, 0xe2, 0xff, 0xe6, 0xe3, 0xe0, 0xff, 0xe7, 0xe3, 0xe1, 0xff, 0xec, 0xe8, 0xe6, 0xff, 0xe9, 0xe4, 0xe2, 0xff, 
  0xdd, 0xd8, 0xd8, 0xff, 0xe9, 0xe7, 0xe5, 0xff, 0xee, 0xeb, 0xe9, 0xff, 0xeb, 0xe8, 0xe6, 0xff, 0xee, 0xeb, 0xe9, 0xff, 0xe0, 0xde, 0xdb, 0xff, 0x3b, 0x35, 0x31, 0xff, 0x16, 0x0e, 0x0e, 0xff, 0x21, 0x1b, 0x19, 0xff, 0xc6, 0xc2, 0xbf, 0xff, 0xf9, 0xf7, 0xf5, 0xff, 0xeb, 0xeb, 0xe8, 0xff, 0xdd, 0xdc, 0xd8, 0xff, 0xdf, 0xdc, 0xd9, 0xff, 0xe2, 0xde, 0xdb, 0xff, 0xeb, 0xea, 0xe6, 0xff, 0xec, 0xe9, 0xe7, 0xff, 0xeb, 0xe6, 0xe4, 0xff, 0xed, 0xe9, 0xe6, 0xff, 0xee, 0xe9, 0xe9, 0xff, 0xec, 0xe7, 0xe6, 0xff, 0xee, 0xe9, 0xe8, 0xff, 0xee, 0xea, 0xe8, 0xff, 0xed, 0xe9, 0xe8, 0xff, 0xee, 0xea, 0xe8, 0xff, 0xed, 0xe9, 0xe8, 0xff, 0xec, 0xe8, 0xe6, 0xff, 0xee, 0xe9, 0xe7, 0xff, 0xeb, 0xe6, 0xe5, 0xff, 0xe8, 0xe4, 0xe2, 0xff, 0xe9, 0xe5, 0xe3, 0xff, 0xec, 0xe8, 0xe7, 0xff, 0xf1, 0xee, 0xec, 0xff, 0xe5, 0xe1, 0xdf, 0xff, 
  0xe3, 0xde, 0xdb, 0xff, 0xea, 0xe7, 0xe5, 0xff, 0xea, 0xe6, 0xe3, 0xff, 0xe9, 0xe5, 0xe3, 0xff, 0xef, 0xec, 0xea, 0xff, 0xd6, 0xd4, 0xd1, 0xff, 0x2e, 0x26, 0x24, 0xff, 0x1b, 0x11, 0x11, 0xff, 0x24, 0x1c, 0x1b, 0xff, 0x44, 0x3f, 0x3d, 0xff, 0x4d, 0x4a, 0x47, 0xff, 0x47, 0x42, 0x41, 0xff, 0x36, 0x2c, 0x2b, 0xff, 0x3d, 0x32, 0x30, 0xff, 0x2f, 0x25, 0x23, 0xff, 0x6c, 0x5f, 0x5c, 0xff, 0xef, 0xea, 0xe8, 0xff, 0xef, 0xeb, 0xe9, 0xff, 0xf1, 0xed, 0xeb, 0xff, 0xef, 0xeb, 0xea, 0xff, 0xef, 0xeb, 0xea, 0xff, 0xec, 0xe8, 0xe7, 0xff, 0xee, 0xea, 0xe9, 0xff, 0xee, 0xea, 0xe9, 0xff, 0xee, 0xea, 0xe9, 0xff, 0xed, 0xea, 0xe9, 0xff, 0xef, 0xeb, 0xeb, 0xff, 0xed, 0xe9, 0xe8, 0xff, 0xec, 0xe9, 0xe7, 0xff, 0xeb, 0xe9, 0xe6, 0xff, 0xeb, 0xe7, 0xe4, 0xff, 0xeb, 0xe7, 0xe6, 0xff, 0xf5, 0xf2, 0xf0, 0xff, 0xe9, 0xe8, 0xe4, 0xff, 
  0xe0, 0xdd, 0xdb, 0xff, 0xeb, 0xe8, 0xe7, 0xff, 0xe7, 0xe4, 0xe3, 0xff, 0xe9, 0xe6, 0xe4, 0xff, 0xf5, 0xf2, 0xf0, 0xff, 0xc4, 0xc0, 0xbd, 0xff, 0x1b, 0x13, 0x12, 0xff, 0x14, 0x0c, 0x0b, 0xff, 0x19, 0x0f, 0x0e, 0xff, 0x0c, 0x06, 0x04, 0xff, 0x08, 0x05, 0x04, 0xff, 0x09, 0x03, 0x03, 0xff, 0x11, 0x09, 0x08, 0xff, 0x14, 0x0e, 0x0d, 0xff, 0x0a, 0x01, 0x00, 0xff, 0x23, 0x19, 0x17, 0xff, 0xde, 0xda, 0xd6, 0xff, 0xf6, 0xf3, 0xf2, 0xff, 0xee, 0xea, 0xe8, 0xff, 0xef, 0xeb, 0xe8, 0xff, 0xef, 0xeb, 0xea, 0xff, 0xed, 0xe9, 0xe8, 0xff, 0xef, 0xeb, 0xe9, 0xff, 0xf0, 0xed, 0xea, 0xff, 0xed, 0xea, 0xe8, 0xff, 0xee, 0xeb, 0xea, 0xff, 0xf0, 0xed, 0xec, 0xff, 0xee, 0xeb, 0xea, 0xff, 0xee, 0xec, 0xea, 0xff, 0xee, 0xec, 0xe9, 0xff, 0xec, 0xe9, 0xe5, 0xff, 0xed, 0xea, 0xe9, 0xff, 0xf6, 0xf3, 0xf0, 0xff, 0xe5, 0xe4, 0xe0, 0xff, 
  0xda, 0xd4, 0xd3, 0xff, 0xe9, 0xe5, 0xe4, 0xff, 0xea, 0xe6, 0xe5, 0xff, 0xed, 0xea, 0xe9, 0xff, 0xf4, 0xf2, 0xf1, 0xff, 0xd2, 0xcd, 0xcb, 0xff, 0x49, 0x40, 0x3e, 0xff, 0x47, 0x3e, 0x3c, 0xff, 0x59, 0x4f, 0x4d, 0xff, 0x4e, 0x46, 0x44, 0xff, 0x59, 0x52, 0x4f, 0xff, 0x59, 0x54, 0x52, 0xff, 0x60, 0x5b, 0x58, 0xff, 0x62, 0x5a, 0x58, 0xff, 0x6c, 0x5e, 0x5c, 0xff, 0x88, 0x83, 0x80, 0xff, 0xe8, 0xe7, 0xe5, 0xff, 0xf3, 0xf0, 0xef, 0xff, 0xef, 0xeb, 0xea, 0xff, 0xf1, 0xee, 0xec, 0xff, 0xf1, 0xef, 0xed, 0xff, 0xf1, 0xef, 0xee, 0xff, 0xf2, 0xef, 0xed, 0xff, 0xf4, 0xf1, 0xef, 0xff, 0xf1, 0xf0, 0xee, 0xff, 0xf1, 0xf0, 0xef, 0xff, 0xf0, 0xed, 0xeb, 0xff, 0xec, 0xe9, 0xe8, 0xff, 0xed, 0xe9, 0xe8, 0xff, 0xee, 0xeb, 0xe9, 0xff, 0xf0, 0xed, 0xeb, 0xff, 0xf0, 0xed, 0xeb, 0xff, 0xfc, 0xf9, 0xf6, 0xff, 0xeb, 0xe9, 0xe7, 0xff, 
  0xca, 0xc5, 0xc3, 0xff, 0xeb, 0xe9, 0xe7, 0xff, 0xee, 0xeb, 0xe9, 0xff, 0xec, 0xea, 0xe8, 0xff, 0xef, 0xed, 0xeb, 0xff, 0xf1, 0xee, 0xed, 0xff, 0xe5, 0xe3, 0xe0, 0xff, 0xed, 0xec, 0xea, 0xff, 0xf6, 0xf5, 0xf2, 0xff, 0xf2, 0xf0, 0xee, 0xff, 0xf6, 0xf4, 0xf2, 0xff, 0xf6, 0xf5, 0xf2, 0xff, 0xf7, 0xf6, 0xf4, 0xff, 0xfa, 0xf7, 0xf5, 0xff, 0xfd, 0xf9, 0xf8, 0xff, 0xfb, 0xfa, 0xf8, 0xff, 0xf2, 0xf0, 0xef, 0xff, 0xf1, 0xef, 0xee, 0xff, 0xf2, 0xf0, 0xef, 0xff, 0xf2, 0xef, 0xee, 0xff, 0xf0, 0xee, 0xee, 0xff, 0xf2, 0xf0, 0xef, 0xff, 0xf2, 0xef, 0xee, 0xff, 0xf2, 0xef, 0xee, 0xff, 0xf3, 0xf0, 0xee, 0xff, 0xf3, 0xf0, 0xef, 0xff, 0xf2, 0xef, 0xee, 0xff, 0xf0, 0xee, 0xec, 0xff, 0xf0, 0xee, 0xec, 0xff, 0xf0, 0xed, 0xec, 0xff, 0xed, 0xeb, 0xe9, 0xff, 0xec, 0xe9, 0xe7, 0xff, 0xff, 0xfc, 0xfa, 0xff, 0xe8, 0xe8, 0xe6, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0xde, 0xde, 0xdc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xed, 0xea, 0xe9, 0xff, 0xef, 0xec, 0xeb, 0xff, 0xef, 0xec, 0xeb, 0xff, 0xf3, 0xf1, 0xef, 0xff, 0xf4, 0xf3, 0xf1, 0xff, 0xf1, 0xf0, 0xee, 0xff, 0xf3, 0xf2, 0xf0, 0xff, 0xf3, 0xf1, 0xef, 0xff, 0xf2, 0xf1, 0xef, 0xff, 0xf0, 0xf0, 0xee, 0xff, 0xf2, 0xf1, 0xef, 0xff, 0xf3, 0xf2, 0xf0, 0xff, 0xf3, 0xf2, 0xf0, 0xff, 0xf4, 0xf2, 0xf1, 0xff, 0xf3, 0xf1, 0xef, 0xff, 0xf3, 0xf1, 0xef, 0xff, 0xf5, 0xf3, 0xf1, 0xff, 0xf5, 0xf3, 0xf1, 0xff, 0xf6, 0xf3, 0xf1, 0xff, 0xf5, 0xf3, 0xf1, 0xff, 0xf5, 0xf2, 0xf1, 0xff, 0xf8, 0xf5, 0xf3, 0xff, 0xf7, 0xf5, 0xf3, 0xff, 0xf7, 0xf4, 0xf2, 0xff, 0xf7, 0xf5, 0xf2, 0xff, 0xf8, 0xf6, 0xf4, 0xff, 0xf6, 0xf3, 0xf2, 0xff, 0xf2, 0xef, 0xec, 0xff, 0xf7, 0xf5, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe5, 0xe5, 0xe0, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0xd2, 0xd2, 0xc3, 0xff, 0xe9, 0xe7, 0xe4, 0xff, 0xf5, 0xf3, 0xf2, 0xff, 0xf0, 0xee, 0xec, 0xff, 0xf1, 0xee, 0xed, 0xff, 0xf0, 0xed, 0xec, 0xff, 0xf1, 0xef, 0xed, 0xff, 0xf1, 0xef, 0xee, 0xff, 0xee, 0xec, 0xeb, 0xff, 0xef, 0xed, 0xec, 0xff, 0xee, 0xed, 0xec, 0xff, 0xed, 0xec, 0xea, 0xff, 0xee, 0xed, 0xeb, 0xff, 0xf0, 0xef, 0xed, 0xff, 0xf0, 0xee, 0xec, 0xff, 0xef, 0xee, 0xec, 0xff, 0xf0, 0xf0, 0xee, 0xff, 0xf0, 0xee, 0xed, 0xff, 0xf1, 0xf1, 0xf0, 0xff, 0xf0, 0xf0, 0xef, 0xff, 0xf1, 0xf0, 0xef, 0xff, 0xf1, 0xf0, 0xee, 0xff, 0xf1, 0xf0, 0xeb, 0xff, 0xf1, 0xee, 0xec, 0xff, 0xec, 0xea, 0xea, 0xff, 0xed, 0xec, 0xeb, 0xff, 0xee, 0xed, 0xe8, 0xff, 0xf0, 0xef, 0xea, 0xff, 0xec, 0xef, 0xeb, 0xff, 0xed, 0xed, 0xeb, 0xff, 0xf6, 0xf6, 0xf4, 0xff, 0xed, 0xec, 0xea, 0xff, 0x00, 0x00, 0x00, 0xff, 
#endif
};

const lv_img_dsc_t img_src_battery1 = {
  .header.always_zero = 0,
  .header.w = 34,
  .header.h = 18,
  .data_size = 612 * LV_COLOR_SIZE / 8,
  .header.cf = LV_IMG_CF_TRUE_COLOR,
  .data = img_src_battery1_map,
};
