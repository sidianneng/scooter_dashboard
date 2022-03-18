#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif
#ifndef LV_ATTRIBUTE_IMG_IMG_SRC_KMH
#define LV_ATTRIBUTE_IMG_IMG_SRC_KMH
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_IMG_SRC_KMH uint8_t img_src_kmh_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb7, 0xbb, 0x29, 0xbb, 0xdb, 0xb7, 0x00, 0x00, 0x00, 
  0x4d, 0xbb, 0xdb, 0xb7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0xb7, 0x6e, 0xdb, 0xdb, 0xb7, 0x00, 0x00, 0x00, 
  0x92, 0xdb, 0xff, 0xb7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x49, 0x00, 0x00, 0x92, 0x6e, 0x00, 0x00, 0x00, 0xb6, 0xdb, 0x92, 0x6e, 0xdb, 0xdb, 0xb7, 0xb7, 0xb7, 0xb6, 
  0xb7, 0xdb, 0xdb, 0xb6, 0x92, 0xdb, 0xdb, 0xb6, 0x49, 0xbb, 0xdb, 0xb7, 0xb7, 0xdb, 0xb7, 0xb6, 0xb7, 0xdb, 0xdb, 0xb7, 0x00, 0x00, 0xb7, 0xdb, 0x6e, 0x6e, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
  0xb7, 0xdb, 0xdb, 0xb6, 0xdb, 0xdf, 0xbb, 0x6e, 0x6d, 0xb7, 0xdf, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xbb, 0x00, 0x00, 0xdb, 0xb7, 0x6e, 0x92, 0xdb, 0xdb, 0xb7, 0xb7, 0xdb, 0xdb, 
  0xbb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0x6e, 0x6e, 0x6e, 0xdb, 0xdb, 0xb7, 0x6e, 0xdb, 0xdb, 0xb7, 0x6e, 0xbb, 0xdf, 0xb7, 0x49, 0x92, 0xdb, 0x92, 0x4a, 0x92, 0xdb, 0xdb, 0x92, 0x6e, 0xdb, 0xdb, 
  0xdb, 0xdb, 0xdb, 0xff, 0xdf, 0xdb, 0x6e, 0x6e, 0x6e, 0xdb, 0xff, 0x92, 0x6e, 0xdb, 0xff, 0xb6, 0x6e, 0xdb, 0xdf, 0xb7, 0x4d, 0xb6, 0xdb, 0x6e, 0x6e, 0xb6, 0xff, 0xdb, 0x6e, 0x92, 0xdb, 0xdb, 
  0xdb, 0xdb, 0xdb, 0xbb, 0xdb, 0xff, 0xb7, 0x6d, 0x92, 0xdb, 0xff, 0x92, 0x6e, 0xdb, 0xff, 0x96, 0x4e, 0xdb, 0xff, 0xb7, 0x6d, 0xdb, 0xbb, 0x6e, 0x6d, 0xb6, 0xff, 0xdb, 0x6d, 0x92, 0xff, 0xdb, 
  0xdb, 0xff, 0xdb, 0x00, 0xdb, 0xff, 0xdb, 0x6e, 0x6e, 0xdb, 0xdf, 0x92, 0x6e, 0xdb, 0xff, 0xb6, 0x25, 0xdb, 0xff, 0xb6, 0x92, 0xdb, 0x96, 0x49, 0x25, 0xbb, 0xff, 0xdb, 0x25, 0xb7, 0xdb, 0xdb, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0xc3, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0xad, 0x96, 0xb5, 0xc4, 0x21, 0xb6, 0xb5, 0x38, 0xc6, 0x74, 0xa5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xeb, 0x4a, 0xb7, 0xb5, 0x59, 0xc6, 0x75, 0xad, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb6, 0xb5, 0x76, 0xad, 0x2d, 0x63, 0xd7, 0xb5, 0x59, 0xc6, 0x54, 0xa5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xae, 0x73, 0xf8, 0xbd, 0xfc, 0xde, 0x76, 0xad, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x73, 0x2c, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x73, 0x84, 0x6d, 0x6b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb3, 0x9c, 0xf7, 0xbd, 0x52, 0x8c, 0x2e, 0x63, 0xd7, 0xb5, 0x39, 0xc6, 0x15, 0xa5, 0xf5, 0xa4, 0x76, 0xad, 0x14, 0x9d, 
  0x34, 0xa5, 0x38, 0xc6, 0x7a, 0xce, 0xd3, 0x9c, 0x71, 0x84, 0xd7, 0xb5, 0x38, 0xc6, 0xd3, 0x94, 0x08, 0x3a, 0x96, 0xad, 0xd7, 0xb5, 0x55, 0xad, 0x76, 0xad, 0xb7, 0xb5, 0x76, 0xad, 0xf4, 0x9c, 0x77, 0xad, 0xd7, 0xb5, 0xd7, 0xb5, 0x35, 0xa5, 0x00, 0x00, 0x00, 0x00, 0x96, 0xb5, 0x39, 0xc6, 0x8e, 0x6b, 0x8e, 0x73, 0x18, 0xc6, 0x18, 0xc6, 0xf8, 0xbd, 0x59, 0xce, 0x9a, 0xd6, 0xd7, 0xbd, 
  0x55, 0xa5, 0x39, 0xc6, 0x59, 0xce, 0xd3, 0x9c, 0xf8, 0xbd, 0xba, 0xd6, 0xb6, 0xb5, 0x8e, 0x6b, 0xcc, 0x52, 0x96, 0xad, 0xbb, 0xd6, 0x7a, 0xce, 0x38, 0xc6, 0x59, 0xce, 0x59, 0xce, 0x39, 0xc6, 0xd7, 0xbd, 0x18, 0xbe, 0x9a, 0xce, 0x96, 0xad, 0x00, 0x00, 0x00, 0x00, 0x17, 0xbe, 0x75, 0xad, 0xcc, 0x5a, 0xf1, 0x7b, 0x18, 0xc6, 0x39, 0xc6, 0x76, 0xad, 0x55, 0xad, 0x18, 0xc6, 0x18, 0xc6, 
  0xb7, 0xb5, 0x18, 0xc6, 0x59, 0xce, 0x18, 0xbe, 0x7a, 0xce, 0xd8, 0xbd, 0x0d, 0x5b, 0xec, 0x52, 0x4d, 0x63, 0xd7, 0xbd, 0x9a, 0xce, 0x35, 0xa5, 0x0e, 0x5b, 0xd8, 0xb5, 0x9a, 0xce, 0x96, 0xad, 0x0e, 0x5b, 0x97, 0xb5, 0xba, 0xd6, 0x76, 0xad, 0x4a, 0x4a, 0x52, 0x84, 0x59, 0xce, 0x51, 0x8c, 0x8c, 0x52, 0x53, 0x8c, 0x79, 0xce, 0x59, 0xc6, 0xaf, 0x73, 0x6e, 0x6b, 0x59, 0xc6, 0x18, 0xc6, 
  0xf8, 0xbd, 0x59, 0xce, 0x9a, 0xd6, 0xdb, 0xde, 0xba, 0xd6, 0x59, 0xce, 0x8f, 0x73, 0x0d, 0x63, 0x4d, 0x6b, 0x18, 0xc6, 0xbb, 0xd6, 0x92, 0x8c, 0xac, 0x52, 0xb7, 0xb5, 0xdb, 0xd6, 0xd3, 0x9c, 0xcd, 0x5a, 0xb7, 0xb5, 0xba, 0xd6, 0x55, 0xa5, 0xab, 0x52, 0xb4, 0x94, 0x79, 0xce, 0x8e, 0x73, 0xec, 0x5a, 0xb3, 0x94, 0xba, 0xd6, 0xf8, 0xbd, 0x2d, 0x63, 0xf0, 0x7b, 0x9a, 0xd6, 0x39, 0xc6, 
  0x5a, 0xce, 0x9a, 0xce, 0x7a, 0xce, 0x96, 0xb5, 0x59, 0xc6, 0xfc, 0xde, 0x14, 0xa5, 0xcc, 0x5a, 0x90, 0x73, 0x9a, 0xd6, 0xfb, 0xde, 0x52, 0x8c, 0xed, 0x5a, 0x19, 0xc6, 0xfb, 0xde, 0x92, 0x94, 0xac, 0x52, 0xf8, 0xbd, 0x1c, 0xe7, 0x14, 0xa5, 0x0c, 0x5b, 0x59, 0xc6, 0x97, 0xb5, 0xec, 0x5a, 0xcc, 0x5a, 0xf4, 0x9c, 0x5d, 0xef, 0xf8, 0xbd, 0xec, 0x5a, 0x51, 0x8c, 0x5d, 0xe7, 0x39, 0xc6, 
  0x59, 0xce, 0xdb, 0xde, 0x18, 0xbe, 0x00, 0x00, 0x39, 0xc6, 0x1c, 0xdf, 0x79, 0xce, 0x2e, 0x63, 0x70, 0x73, 0x9a, 0xd6, 0x9a, 0xd6, 0x31, 0x84, 0xce, 0x5a, 0x59, 0xce, 0xbb, 0xd6, 0xf4, 0x9c, 0x07, 0x21, 0x59, 0xce, 0xbb, 0xd6, 0x93, 0x94, 0xaf, 0x73, 0x7a, 0xce, 0x92, 0x94, 0x8a, 0x4a, 0x47, 0x11, 0xb7, 0xb5, 0xba, 0xd6, 0xf7, 0xbd, 0x45, 0x29, 0x55, 0xa5, 0x59, 0xc6, 0xd7, 0xb5, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit BUT the 2 bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x10, 0xc3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xad, 0x75, 0xb5, 0x96, 0x21, 0xc4, 0xb5, 0xb6, 0xc6, 0x38, 0xa5, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x4a, 0xeb, 0xb5, 0xb7, 0xc6, 0x59, 0xad, 0x75, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb5, 0xb6, 0xad, 0x76, 0x63, 0x2d, 0xb5, 0xd7, 0xc6, 0x59, 0xa5, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x73, 0xae, 0xbd, 0xf8, 0xde, 0xfc, 0xad, 0x76, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0xf0, 0x4a, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x84, 0x73, 0x6b, 0x6d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9c, 0xb3, 0xbd, 0xf7, 0x8c, 0x52, 0x63, 0x2e, 0xb5, 0xd7, 0xc6, 0x39, 0xa5, 0x15, 0xa4, 0xf5, 0xad, 0x76, 0x9d, 0x14, 
  0xa5, 0x34, 0xc6, 0x38, 0xce, 0x7a, 0x9c, 0xd3, 0x84, 0x71, 0xb5, 0xd7, 0xc6, 0x38, 0x94, 0xd3, 0x3a, 0x08, 0xad, 0x96, 0xb5, 0xd7, 0xad, 0x55, 0xad, 0x76, 0xb5, 0xb7, 0xad, 0x76, 0x9c, 0xf4, 0xad, 0x77, 0xb5, 0xd7, 0xb5, 0xd7, 0xa5, 0x35, 0x00, 0x00, 0x00, 0x00, 0xb5, 0x96, 0xc6, 0x39, 0x6b, 0x8e, 0x73, 0x8e, 0xc6, 0x18, 0xc6, 0x18, 0xbd, 0xf8, 0xce, 0x59, 0xd6, 0x9a, 0xbd, 0xd7, 
  0xa5, 0x55, 0xc6, 0x39, 0xce, 0x59, 0x9c, 0xd3, 0xbd, 0xf8, 0xd6, 0xba, 0xb5, 0xb6, 0x6b, 0x8e, 0x52, 0xcc, 0xad, 0x96, 0xd6, 0xbb, 0xce, 0x7a, 0xc6, 0x38, 0xce, 0x59, 0xce, 0x59, 0xc6, 0x39, 0xbd, 0xd7, 0xbe, 0x18, 0xce, 0x9a, 0xad, 0x96, 0x00, 0x00, 0x00, 0x00, 0xbe, 0x17, 0xad, 0x75, 0x5a, 0xcc, 0x7b, 0xf1, 0xc6, 0x18, 0xc6, 0x39, 0xad, 0x76, 0xad, 0x55, 0xc6, 0x18, 0xc6, 0x18, 
  0xb5, 0xb7, 0xc6, 0x18, 0xce, 0x59, 0xbe, 0x18, 0xce, 0x7a, 0xbd, 0xd8, 0x5b, 0x0d, 0x52, 0xec, 0x63, 0x4d, 0xbd, 0xd7, 0xce, 0x9a, 0xa5, 0x35, 0x5b, 0x0e, 0xb5, 0xd8, 0xce, 0x9a, 0xad, 0x96, 0x5b, 0x0e, 0xb5, 0x97, 0xd6, 0xba, 0xad, 0x76, 0x4a, 0x4a, 0x84, 0x52, 0xce, 0x59, 0x8c, 0x51, 0x52, 0x8c, 0x8c, 0x53, 0xce, 0x79, 0xc6, 0x59, 0x73, 0xaf, 0x6b, 0x6e, 0xc6, 0x59, 0xc6, 0x18, 
  0xbd, 0xf8, 0xce, 0x59, 0xd6, 0x9a, 0xde, 0xdb, 0xd6, 0xba, 0xce, 0x59, 0x73, 0x8f, 0x63, 0x0d, 0x6b, 0x4d, 0xc6, 0x18, 0xd6, 0xbb, 0x8c, 0x92, 0x52, 0xac, 0xb5, 0xb7, 0xd6, 0xdb, 0x9c, 0xd3, 0x5a, 0xcd, 0xb5, 0xb7, 0xd6, 0xba, 0xa5, 0x55, 0x52, 0xab, 0x94, 0xb4, 0xce, 0x79, 0x73, 0x8e, 0x5a, 0xec, 0x94, 0xb3, 0xd6, 0xba, 0xbd, 0xf8, 0x63, 0x2d, 0x7b, 0xf0, 0xd6, 0x9a, 0xc6, 0x39, 
  0xce, 0x5a, 0xce, 0x9a, 0xce, 0x7a, 0xb5, 0x96, 0xc6, 0x59, 0xde, 0xfc, 0xa5, 0x14, 0x5a, 0xcc, 0x73, 0x90, 0xd6, 0x9a, 0xde, 0xfb, 0x8c, 0x52, 0x5a, 0xed, 0xc6, 0x19, 0xde, 0xfb, 0x94, 0x92, 0x52, 0xac, 0xbd, 0xf8, 0xe7, 0x1c, 0xa5, 0x14, 0x5b, 0x0c, 0xc6, 0x59, 0xb5, 0x97, 0x5a, 0xec, 0x5a, 0xcc, 0x9c, 0xf4, 0xef, 0x5d, 0xbd, 0xf8, 0x5a, 0xec, 0x8c, 0x51, 0xe7, 0x5d, 0xc6, 0x39, 
  0xce, 0x59, 0xde, 0xdb, 0xbe, 0x18, 0x00, 0x00, 0xc6, 0x39, 0xdf, 0x1c, 0xce, 0x79, 0x63, 0x2e, 0x73, 0x70, 0xd6, 0x9a, 0xd6, 0x9a, 0x84, 0x31, 0x5a, 0xce, 0xce, 0x59, 0xd6, 0xbb, 0x9c, 0xf4, 0x21, 0x07, 0xce, 0x59, 0xd6, 0xbb, 0x94, 0x93, 0x73, 0xaf, 0xce, 0x7a, 0x94, 0x92, 0x4a, 0x8a, 0x11, 0x47, 0xb5, 0xb7, 0xd6, 0xba, 0xbd, 0xf7, 0x29, 0x45, 0xa5, 0x55, 0xc6, 0x59, 0xb5, 0xd7, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1a, 0x1a, 0x0d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xac, 0xac, 0xa8, 0xff, 0xb0, 0xb2, 0xae, 0xff, 0x24, 0x37, 0x24, 0xff, 0xb2, 0xb6, 0xaf, 0xff, 0xc1, 0xc6, 0xbe, 0xff, 0xa3, 0xac, 0xa3, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x5b, 0x5b, 0x49, 0xff, 0xb5, 0xb3, 0xb0, 0xff, 0xc5, 0xc9, 0xc3, 0xff, 0xa6, 0xab, 0xa6, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xaf, 0xb4, 0xae, 0xff, 0xad, 0xae, 0xaa, 0xff, 0x65, 0x65, 0x61, 0xff, 0xb9, 0xb9, 0xb2, 0xff, 0xca, 0xca, 0xc2, 0xff, 0xa2, 0xa8, 0xa2, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x73, 0x73, 0x73, 0xff, 0xc0, 0xbd, 0xb9, 0xff, 0xdf, 0xdb, 0xd9, 0xff, 0xad, 0xab, 0xa9, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x84, 0x7b, 0x73, 0xff, 0x5d, 0x46, 0x46, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x95, 0x8d, 0x84, 0xff, 0x6b, 0x6b, 0x6b, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x95, 0x95, 0x95, 0xff, 0xba, 0xbc, 0xb8, 0xff, 0x8e, 0x8a, 0x87, 0xff, 0x6f, 0x66, 0x63, 0xff, 0xb5, 0xb7, 0xb2, 0xff, 0xc8, 0xc6, 0xc1, 0xff, 0xa6, 0xa2, 0x9e, 0xff, 0xa5, 0x9d, 0x9d, 0xff, 0xaf, 0xac, 0xa8, 0xff, 0x9f, 0x9f, 0x9a, 0xff, 
  0xa4, 0xa4, 0xa0, 0xff, 0xc4, 0xc4, 0xc3, 0xff, 0xd0, 0xcc, 0xcb, 0xff, 0x9c, 0x99, 0x96, 0xff, 0x8b, 0x8b, 0x80, 0xff, 0xb7, 0xb8, 0xb3, 0xff, 0xc0, 0xc6, 0xc2, 0xff, 0x99, 0x99, 0x94, 0xff, 0x42, 0x3f, 0x3c, 0xff, 0xb2, 0xb2, 0xaa, 0xff, 0xbb, 0xb8, 0xb4, 0xff, 0xab, 0xa9, 0xa6, 0xff, 0xad, 0xad, 0xa9, 0xff, 0xb6, 0xb4, 0xb1, 0xff, 0xae, 0xab, 0xa6, 0xff, 0xa0, 0x9e, 0x98, 0xff, 0xb6, 0xae, 0xab, 0xff, 0xbc, 0xb7, 0xb2, 0xff, 0xbb, 0xb7, 0xb4, 0xff, 0xa5, 0xa3, 0x9f, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xb1, 0xaf, 0xad, 0xff, 0xc8, 0xc6, 0xc3, 0xff, 0x72, 0x6f, 0x6c, 0xff, 0x72, 0x6f, 0x6d, 0xff, 0xc0, 0xc2, 0xbf, 0xff, 0xc0, 0xc0, 0xbd, 0xff, 0xbd, 0xbd, 0xba, 0xff, 0xc9, 0xc7, 0xc5, 0xff, 0xd2, 0xcf, 0xcd, 0xff, 0xbb, 0xb8, 0xb8, 0xff, 
  0xa8, 0xa8, 0xa4, 0xff, 0xc7, 0xc5, 0xc3, 0xff, 0xca, 0xc7, 0xc6, 0xff, 0x9b, 0x99, 0x95, 0xff, 0xbf, 0xbd, 0xb7, 0xff, 0xd3, 0xd5, 0xd0, 0xff, 0xb1, 0xb5, 0xaf, 0xff, 0x74, 0x70, 0x6a, 0xff, 0x5d, 0x5a, 0x53, 0xff, 0xb0, 0xb0, 0xac, 0xff, 0xd6, 0xd4, 0xd0, 0xff, 0xcd, 0xcc, 0xc7, 0xff, 0xc3, 0xc4, 0xbf, 0xff, 0xcc, 0xca, 0xc6, 0xff, 0xcc, 0xca, 0xc6, 0xff, 0xc8, 0xc4, 0xc0, 0xff, 0xbb, 0xba, 0xb7, 0xff, 0xc0, 0xc0, 0xbb, 0xff, 0xd2, 0xcf, 0xcb, 0xff, 0xb4, 0xb1, 0xaa, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xbc, 0xc0, 0xbc, 0xff, 0xaa, 0xac, 0xa8, 0xff, 0x63, 0x5a, 0x58, 0xff, 0x85, 0x7d, 0x7b, 0xff, 0xc0, 0xc1, 0xbe, 0xff, 0xc7, 0xc6, 0xc2, 0xff, 0xae, 0xad, 0xab, 0xff, 0xaa, 0xa9, 0xa6, 0xff, 0xc4, 0xc2, 0xbf, 0xff, 0xc2, 0xc1, 0xbe, 0xff, 
  0xb7, 0xb5, 0xb0, 0xff, 0xc3, 0xc2, 0xc1, 0xff, 0xca, 0xc7, 0xc6, 0xff, 0xc2, 0xbf, 0xbc, 0xff, 0xd0, 0xcd, 0xc9, 0xff, 0xbd, 0xba, 0xb7, 0xff, 0x6a, 0x5f, 0x57, 0xff, 0x62, 0x5d, 0x53, 0xff, 0x68, 0x67, 0x62, 0xff, 0xbb, 0xb9, 0xb5, 0xff, 0xd1, 0xd0, 0xcc, 0xff, 0xa9, 0xa5, 0xa2, 0xff, 0x6d, 0x5f, 0x5b, 0xff, 0xbd, 0xb8, 0xb4, 0xff, 0xd2, 0xd0, 0xcc, 0xff, 0xb0, 0xaf, 0xaa, 0xff, 0x71, 0x61, 0x5c, 0xff, 0xb5, 0xb2, 0xae, 0xff, 0xd3, 0xd3, 0xce, 0xff, 0xaf, 0xae, 0xa8, 0xff, 0x4e, 0x48, 0x45, 0xff, 0x92, 0x87, 0x82, 0xff, 0xc7, 0xc7, 0xc5, 0xff, 0x8c, 0x8a, 0x87, 0xff, 0x61, 0x50, 0x4d, 0xff, 0x97, 0x88, 0x86, 0xff, 0xcb, 0xcc, 0xc9, 0xff, 0xc7, 0xc7, 0xc3, 0xff, 0x78, 0x75, 0x73, 0xff, 0x6f, 0x6d, 0x6b, 0xff, 0xc8, 0xc8, 0xc4, 0xff, 0xc2, 0xc2, 0xbd, 0xff, 
  0xc1, 0xbb, 0xbb, 0xff, 0xc9, 0xc9, 0xc7, 0xff, 0xcf, 0xcf, 0xcd, 0xff, 0xd9, 0xda, 0xd6, 0xff, 0xd4, 0xd3, 0xce, 0xff, 0xcc, 0xc9, 0xc6, 0xff, 0x78, 0x70, 0x6e, 0xff, 0x66, 0x62, 0x5f, 0xff, 0x6a, 0x67, 0x65, 0xff, 0xc3, 0xc0, 0xbe, 0xff, 0xd9, 0xd6, 0xd4, 0xff, 0x91, 0x8f, 0x8c, 0xff, 0x61, 0x53, 0x51, 0xff, 0xbc, 0xb6, 0xb1, 0xff, 0xd9, 0xd9, 0xd3, 0xff, 0x9b, 0x9a, 0x96, 0xff, 0x69, 0x59, 0x57, 0xff, 0xba, 0xb6, 0xb1, 0xff, 0xd4, 0xd4, 0xd0, 0xff, 0xa7, 0xa8, 0xa4, 0xff, 0x59, 0x55, 0x4f, 0xff, 0x9d, 0x95, 0x91, 0xff, 0xcc, 0xcd, 0xc9, 0xff, 0x72, 0x6f, 0x6d, 0xff, 0x62, 0x5b, 0x5a, 0xff, 0x9b, 0x95, 0x93, 0xff, 0xd4, 0xd4, 0xd2, 0xff, 0xbe, 0xbe, 0xba, 0xff, 0x67, 0x64, 0x62, 0xff, 0x82, 0x7d, 0x7b, 0xff, 0xd0, 0xcf, 0xcd, 0xff, 0xc9, 0xc5, 0xc2, 0xff, 
  0xce, 0xca, 0xca, 0xff, 0xd0, 0xcf, 0xcc, 0xff, 0xce, 0xce, 0xca, 0xff, 0xb1, 0xb1, 0xaf, 0xff, 0xcb, 0xc9, 0xc4, 0xff, 0xdd, 0xdc, 0xd7, 0xff, 0xa1, 0xa1, 0x9f, 0xff, 0x60, 0x57, 0x58, 0xff, 0x7f, 0x72, 0x72, 0xff, 0xcf, 0xd0, 0xcd, 0xff, 0xdc, 0xdb, 0xd7, 0xff, 0x8d, 0x8a, 0x88, 0xff, 0x65, 0x5c, 0x59, 0xff, 0xc6, 0xc0, 0xc0, 0xff, 0xdc, 0xdd, 0xd9, 0xff, 0x94, 0x92, 0x8d, 0xff, 0x61, 0x53, 0x4f, 0xff, 0xbf, 0xbe, 0xb9, 0xff, 0xe2, 0xe2, 0xe0, 0xff, 0xa2, 0xa0, 0x9d, 0xff, 0x5f, 0x5f, 0x5c, 0xff, 0xc9, 0xc7, 0xc3, 0xff, 0xb6, 0xb2, 0xae, 0xff, 0x62, 0x5e, 0x5c, 0xff, 0x5d, 0x58, 0x57, 0xff, 0xa0, 0x9b, 0x9b, 0xff, 0xe6, 0xe8, 0xe5, 0xff, 0xbe, 0xbe, 0xbb, 0xff, 0x5d, 0x5b, 0x57, 0xff, 0x8c, 0x89, 0x86, 0xff, 0xea, 0xe7, 0xe4, 0xff, 0xc8, 0xc4, 0xc2, 0xff, 
  0xcc, 0xc8, 0xc6, 0xff, 0xda, 0xd9, 0xd6, 0xff, 0xc0, 0xc0, 0xbc, 0xff, 0x00, 0x00, 0x00, 0xff, 0xc6, 0xc3, 0xbe, 0xff, 0xe0, 0xdf, 0xda, 0xff, 0xcb, 0xcb, 0xc6, 0xff, 0x6f, 0x64, 0x64, 0xff, 0x7d, 0x6d, 0x6d, 0xff, 0xd0, 0xd0, 0xce, 0xff, 0xd1, 0xd1, 0xcf, 0xff, 0x86, 0x83, 0x81, 0xff, 0x70, 0x5a, 0x55, 0xff, 0xcc, 0xc8, 0xc5, 0xff, 0xd7, 0xd4, 0xd1, 0xff, 0xa0, 0x9d, 0x99, 0xff, 0x37, 0x21, 0x21, 0xff, 0xca, 0xc8, 0xc8, 0xff, 0xd7, 0xd6, 0xd4, 0xff, 0x95, 0x92, 0x92, 0xff, 0x79, 0x73, 0x71, 0xff, 0xcf, 0xcd, 0xc6, 0xff, 0x94, 0x91, 0x8d, 0xff, 0x50, 0x50, 0x49, 0xff, 0x3b, 0x27, 0x14, 0xff, 0xb7, 0xb4, 0xae, 0xff, 0xd3, 0xd4, 0xd1, 0xff, 0xb9, 0xbb, 0xb7, 0xff, 0x2a, 0x2a, 0x2a, 0xff, 0xa7, 0xa7, 0xa0, 0xff, 0xca, 0xc7, 0xc3, 0xff, 0xb9, 0xb7, 0xb2, 0xff, 
#endif
};

const lv_img_dsc_t img_src_kmh = {
  .header.always_zero = 0,
  .header.w = 32,
  .header.h = 9,
  .data_size = 288 * LV_COLOR_SIZE / 8,
  .header.cf = LV_IMG_CF_TRUE_COLOR,
  .data = img_src_kmh_map,
};