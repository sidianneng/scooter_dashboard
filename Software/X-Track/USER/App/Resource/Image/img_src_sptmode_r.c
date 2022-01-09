#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif
#ifndef LV_ATTRIBUTE_IMG_IMG_SRC_SPTMODE_R
#define LV_ATTRIBUTE_IMG_IMG_SRC_SPTMODE_R
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_IMG_SRC_SPTMODE_R uint8_t img_src_sptmode_r_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xa4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x85, 0x65, 0x45, 0x45, 0x45, 0x65, 0x85, 0xa4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xc4, 0xc4, 0xc4, 0xc4, 0xc0, 0xcd, 0x49, 0x05, 0x25, 0x25, 0x05, 0x25, 0x25, 0x25, 0x25, 0x69, 0xa4, 0xc4, 0xc4, 0xc4, 0xc4, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xc4, 0xc4, 0xc4, 0xc4, 0xc9, 0x72, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x05, 0x69, 0xc4, 0xc4, 0xc4, 0xc4, 0xff, 0x00, 
  0x00, 0x00, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x89, 0x25, 0x25, 0x25, 0xa4, 0xa4, 0xa4, 0xa4, 0x85, 0x25, 0x25, 0x25, 0x29, 0xa5, 0xc4, 0xc4, 0xc4, 0xc4, 0x00, 
  0x00, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x45, 0x25, 0x25, 0x84, 0xe4, 0xc4, 0xc4, 0xc4, 0xc4, 0xa9, 0x29, 0x25, 0x05, 0x65, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 
  0x00, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x45, 0x25, 0x25, 0xa4, 0xe4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x85, 0x45, 0x45, 0x89, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 
  0xc0, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x69, 0x25, 0x24, 0x44, 0xa4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 
  0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x89, 0x25, 0x24, 0x25, 0x05, 0x45, 0x84, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 
  0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x69, 0x05, 0x25, 0x25, 0x25, 0x25, 0x45, 0x65, 0x84, 0xa4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 
  0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x65, 0x25, 0x05, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x45, 0xa5, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 
  0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x85, 0x65, 0x49, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0xa4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 
  0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xa4, 0xa4, 0x85, 0x45, 0x25, 0x25, 0x05, 0x45, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 
  0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x45, 0x25, 0x25, 0x25, 0xa4, 0xc4, 0xc4, 0xc4, 0xc4, 
  0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x85, 0x25, 0x25, 0x69, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x85, 0x25, 0x25, 0x25, 0xa9, 0xc4, 0xc4, 0xc4, 0xc4, 
  0xc0, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x64, 0x05, 0x25, 0x25, 0xa5, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x89, 0x25, 0x24, 0x25, 0x89, 0xc4, 0xc4, 0xc4, 0xc4, 
  0x00, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xa4, 0x25, 0x25, 0x25, 0x45, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xa4, 0x45, 0x25, 0x25, 0x25, 0xa4, 0xc4, 0xc4, 0xc4, 0xc4, 
  0x00, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x45, 0x25, 0x25, 0x25, 0x45, 0x65, 0x84, 0x84, 0x65, 0x25, 0x25, 0x24, 0x25, 0x69, 0xc4, 0xc4, 0xc4, 0xc4, 0xc9, 
  0x00, 0x00, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xa4, 0x25, 0x25, 0x25, 0x25, 0x25, 0x05, 0x25, 0x25, 0x25, 0x24, 0x25, 0x49, 0xc5, 0xc4, 0xc4, 0xc4, 0xc4, 0x00, 
  0x00, 0x00, 0x00, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xa4, 0x45, 0x25, 0x25, 0x05, 0x25, 0x25, 0x25, 0x25, 0x29, 0x6d, 0xc9, 0xc4, 0xc4, 0xc4, 0xc4, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xa4, 0x65, 0x65, 0x65, 0x65, 0x65, 0x89, 0xa9, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc9, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xcd, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe2, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xe1, 0xc0, 0xe2, 0xc0, 0x02, 0xc9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe1, 0xb8, 0xe1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xe2, 0xc0, 0x23, 0xc1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc1, 0xc0, 0xc1, 0xc0, 0xe1, 0xd0, 0xc1, 0xc8, 0xc1, 0xc8, 0xc1, 0xc8, 0xe2, 0xc0, 0xe2, 0xc0, 0xc1, 0xc8, 0xc1, 0xc8, 0xc1, 0xc8, 0xc1, 0xc8, 0xe1, 0xd0, 0xc1, 0xc0, 0xe2, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xa0, 0xc1, 0xc0, 0xe1, 0xd0, 0xc1, 0xc0, 0xa0, 0xc0, 0xe2, 0xb8, 0x65, 0x89, 0x45, 0x51, 0x26, 0x39, 0x26, 0x39, 0x25, 0x49, 0x45, 0x61, 0x65, 0x81, 0x44, 0xa9, 0xc1, 0xc8, 0xc1, 0xc8, 0xe1, 0xd0, 0xe1, 0xc0, 0x64, 0xb1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xb0, 0xc1, 0xc0, 0xe1, 0xd0, 0xc1, 0xb8, 0x80, 0xc0, 0xaa, 0xc2, 0x29, 0x4a, 0xe4, 0x10, 0x05, 0x11, 0xe5, 0x10, 0xc5, 0x10, 0xe5, 0x10, 0x06, 0x11, 0x25, 0x19, 0x47, 0x21, 0x87, 0x59, 0x02, 0xb1, 0xa1, 0xc0, 0xe1, 0xd0, 0xe2, 0xc0, 0x84, 0xc1, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc1, 0xb8, 0xe1, 0xd0, 0xc1, 0xb8, 0x80, 0xc0, 0xc6, 0xc1, 0xaf, 0x73, 0x25, 0x19, 0xe4, 0x18, 0x25, 0x21, 0x25, 0x29, 0x25, 0x21, 0x25, 0x21, 0x05, 0x19, 0x05, 0x19, 0x05, 0x21, 0x05, 0x11, 0x09, 0x52, 0x43, 0xc1, 0xa1, 0xc0, 0xe1, 0xd0, 0xe2, 0xc0, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xc1, 0xb8, 0xe1, 0xd0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc8, 0x28, 0x82, 0x66, 0x19, 0x04, 0x19, 0x04, 0x29, 0x23, 0x99, 0x02, 0xb1, 0x23, 0xb1, 0x23, 0xa9, 0x65, 0x81, 0x26, 0x21, 0x05, 0x19, 0x46, 0x29, 0x87, 0x21, 0x64, 0x99, 0xa1, 0xc8, 0xc1, 0xb8, 0xe1, 0xd0, 0x02, 0xb9, 0x00, 0x00, 
  0x00, 0x00, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xc0, 0x02, 0xc1, 0x46, 0x41, 0x26, 0x19, 0x05, 0x11, 0x24, 0x71, 0xc1, 0xd0, 0xc1, 0xc0, 0xc1, 0xc0, 0xa1, 0xc0, 0xa0, 0xd0, 0x85, 0x99, 0xa7, 0x21, 0x04, 0x19, 0xe5, 0x08, 0x86, 0x61, 0xe1, 0xc8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc0, 0x23, 0xc1, 
  0x00, 0x00, 0xc1, 0xb8, 0xe1, 0xd0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xe2, 0xc0, 0x45, 0x41, 0x26, 0x19, 0x25, 0x11, 0x03, 0x91, 0xa1, 0xd0, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc8, 0x65, 0x79, 0x66, 0x39, 0x86, 0x31, 0xa6, 0x79, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xe1, 0xd0, 0x02, 0xc1, 
  0x00, 0xc0, 0xc1, 0xb8, 0xc1, 0xc8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xe2, 0xc8, 0xc7, 0x59, 0x25, 0x19, 0xe4, 0x10, 0x04, 0x49, 0x03, 0x99, 0xe2, 0xb8, 0xc1, 0xc8, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc8, 0x02, 0xc1, 0x03, 0xb9, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xe1, 0xc0, 
  0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xa1, 0xc8, 0xa6, 0x91, 0x66, 0x19, 0xc3, 0x18, 0x05, 0x19, 0x05, 0x11, 0x45, 0x31, 0x03, 0x91, 0xc1, 0xc0, 0xc1, 0xc8, 0xc1, 0xc8, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xb8, 
  0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xa1, 0xc0, 0x64, 0xc1, 0x6a, 0x5a, 0x05, 0x09, 0x04, 0x19, 0x04, 0x19, 0x05, 0x11, 0x05, 0x11, 0x05, 0x39, 0x24, 0x59, 0x03, 0x81, 0xe2, 0xb0, 0xc1, 0xc8, 0xc1, 0xc8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 
  0xa1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xa1, 0xc0, 0x02, 0xb9, 0x45, 0x61, 0xe5, 0x10, 0x05, 0x11, 0x04, 0x11, 0x25, 0x19, 0x25, 0x19, 0x05, 0x11, 0x25, 0x11, 0x05, 0x21, 0x26, 0x49, 0x44, 0x99, 0xc1, 0xc8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 
  0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc8, 0x45, 0x91, 0x66, 0x61, 0xe8, 0x49, 0x66, 0x29, 0x05, 0x19, 0x05, 0x11, 0xe4, 0x18, 0xe4, 0x18, 0x26, 0x11, 0x67, 0x19, 0x04, 0x99, 0xc1, 0xc8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 
  0xa1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc8, 0xc1, 0xc8, 0x22, 0xc1, 0x03, 0xb1, 0xe3, 0xa0, 0x24, 0x79, 0x66, 0x39, 0x25, 0x19, 0x25, 0x21, 0xe5, 0x10, 0x27, 0x39, 0xe2, 0xc0, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 
  0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xe2, 0xb8, 0xe2, 0xb8, 0xe2, 0xb8, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc8, 0x03, 0xb1, 0x66, 0x41, 0x25, 0x21, 0x05, 0x21, 0x26, 0x19, 0x03, 0x99, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 
  0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc8, 0x24, 0x81, 0x46, 0x29, 0x06, 0x29, 0xa7, 0x59, 0xe2, 0xc0, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xd0, 0x86, 0x79, 0x05, 0x11, 0x05, 0x21, 0x26, 0x19, 0xe7, 0x91, 0xa0, 0xc8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xb8, 
  0x00, 0xc0, 0xc1, 0xb8, 0xc1, 0xc8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc8, 0x24, 0x69, 0x25, 0x09, 0x05, 0x19, 0x26, 0x19, 0x44, 0x99, 0xa0, 0xc8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc8, 0xa6, 0x79, 0x25, 0x19, 0xe4, 0x18, 0x46, 0x19, 0xe7, 0x89, 0xa0, 0xc8, 0xc1, 0xb8, 0xc1, 0xc0, 0xe2, 0xb8, 
  0x00, 0x00, 0xc1, 0xb8, 0xe1, 0xd0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc8, 0x44, 0x91, 0x46, 0x19, 0x25, 0x21, 0x25, 0x19, 0x46, 0x39, 0x23, 0xb9, 0xc1, 0xc8, 0xc1, 0xc8, 0xc1, 0xc8, 0xc1, 0xc8, 0x02, 0xb1, 0x45, 0x31, 0xe4, 0x18, 0xe4, 0x18, 0x26, 0x21, 0x24, 0xa1, 0xc1, 0xc0, 0xc1, 0xb8, 0xe1, 0xd0, 0x23, 0xc1, 
  0x00, 0x00, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xc0, 0x02, 0xb9, 0x66, 0x39, 0x05, 0x19, 0x45, 0x29, 0x05, 0x19, 0x86, 0x41, 0x45, 0x69, 0x24, 0x79, 0x23, 0x81, 0x66, 0x61, 0x26, 0x31, 0x25, 0x19, 0xe4, 0x18, 0x05, 0x11, 0xe8, 0x59, 0xe1, 0xc0, 0xc1, 0xb8, 0xc1, 0xc0, 0xe2, 0xc0, 0xc6, 0xc1, 
  0x00, 0x00, 0x00, 0x00, 0xc1, 0xb8, 0xe1, 0xd0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc8, 0x44, 0x99, 0x66, 0x21, 0x05, 0x11, 0x05, 0x21, 0x05, 0x19, 0x06, 0x11, 0x05, 0x11, 0x05, 0x11, 0x06, 0x11, 0x46, 0x21, 0xc4, 0x18, 0x45, 0x21, 0x6a, 0x4a, 0x84, 0xb1, 0xa1, 0xc0, 0xc1, 0xb8, 0xe1, 0xd0, 0x43, 0xc1, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc1, 0xc0, 0xe1, 0xd0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc8, 0x23, 0x99, 0x46, 0x41, 0x46, 0x19, 0x26, 0x19, 0xe5, 0x10, 0xe4, 0x10, 0x26, 0x19, 0xe5, 0x10, 0x05, 0x19, 0xa8, 0x29, 0xab, 0x6a, 0xc5, 0xb1, 0xa0, 0xc0, 0xc1, 0xb8, 0xc1, 0xd0, 0x23, 0xc1, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0xc1, 0xe1, 0xc0, 0xe1, 0xd0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc8, 0xe2, 0xc0, 0x24, 0x91, 0x45, 0x69, 0x25, 0x51, 0x05, 0x51, 0x45, 0x59, 0x87, 0x61, 0x4a, 0x72, 0x28, 0xa2, 0x02, 0xc1, 0xa0, 0xc0, 0xc1, 0xb8, 0xc1, 0xd0, 0x02, 0xc1, 0x88, 0xd2, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0xb9, 0xe1, 0xc0, 0xe1, 0xd0, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc8, 0xc1, 0xc8, 0xe1, 0xc8, 0xc1, 0xc8, 0xc1, 0xc8, 0xe1, 0xc8, 0xc1, 0xc8, 0xa0, 0xc0, 0xc1, 0xb8, 0xc1, 0xc0, 0xe1, 0xd0, 0x23, 0xc1, 0xc9, 0xc2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xc1, 0xc1, 0xc0, 0xe1, 0xd0, 0xc1, 0xc8, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc0, 0xe1, 0xd0, 0xe2, 0xc0, 0x64, 0xc9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0xb9, 0x02, 0xc1, 0xe2, 0xc0, 0xe1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xe1, 0xc0, 0x02, 0xc1, 0x64, 0xc9, 0x89, 0xc2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit BUT the 2 bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe2, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xe1, 0xc0, 0xe2, 0xc9, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0xe1, 0xc0, 0xe1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xe2, 0xc1, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc1, 0xc0, 0xc1, 0xd0, 0xe1, 0xc8, 0xc1, 0xc8, 0xc1, 0xc8, 0xc1, 0xc0, 0xe2, 0xc0, 0xe2, 0xc8, 0xc1, 0xc8, 0xc1, 0xc8, 0xc1, 0xc8, 0xc1, 0xd0, 0xe1, 0xc0, 0xc1, 0xc0, 0xe2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x80, 0xc0, 0xc1, 0xd0, 0xe1, 0xc0, 0xc1, 0xc0, 0xa0, 0xb8, 0xe2, 0x89, 0x65, 0x51, 0x45, 0x39, 0x26, 0x39, 0x26, 0x49, 0x25, 0x61, 0x45, 0x81, 0x65, 0xa9, 0x44, 0xc8, 0xc1, 0xc8, 0xc1, 0xd0, 0xe1, 0xc0, 0xe1, 0xb1, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0xa0, 0xc0, 0xc1, 0xd0, 0xe1, 0xb8, 0xc1, 0xc0, 0x80, 0xc2, 0xaa, 0x4a, 0x29, 0x10, 0xe4, 0x11, 0x05, 0x10, 0xe5, 0x10, 0xc5, 0x10, 0xe5, 0x11, 0x06, 0x19, 0x25, 0x21, 0x47, 0x59, 0x87, 0xb1, 0x02, 0xc0, 0xa1, 0xd0, 0xe1, 0xc0, 0xe2, 0xc1, 0x84, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0xc1, 0xd0, 0xe1, 0xb8, 0xc1, 0xc0, 0x80, 0xc1, 0xc6, 0x73, 0xaf, 0x19, 0x25, 0x18, 0xe4, 0x21, 0x25, 0x29, 0x25, 0x21, 0x25, 0x21, 0x25, 0x19, 0x05, 0x19, 0x05, 0x21, 0x05, 0x11, 0x05, 0x52, 0x09, 0xc1, 0x43, 0xc0, 0xa1, 0xd0, 0xe1, 0xc0, 0xe2, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xb8, 0xc1, 0xd0, 0xe1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc8, 0xc1, 0x82, 0x28, 0x19, 0x66, 0x19, 0x04, 0x29, 0x04, 0x99, 0x23, 0xb1, 0x02, 0xb1, 0x23, 0xa9, 0x23, 0x81, 0x65, 0x21, 0x26, 0x19, 0x05, 0x29, 0x46, 0x21, 0x87, 0x99, 0x64, 0xc8, 0xa1, 0xb8, 0xc1, 0xd0, 0xe1, 0xb9, 0x02, 0x00, 0x00, 
  0x00, 0x00, 0xb8, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc1, 0x02, 0x41, 0x46, 0x19, 0x26, 0x11, 0x05, 0x71, 0x24, 0xd0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xa1, 0xd0, 0xa0, 0x99, 0x85, 0x21, 0xa7, 0x19, 0x04, 0x08, 0xe5, 0x61, 0x86, 0xc8, 0xe1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc1, 0x23, 
  0x00, 0x00, 0xb8, 0xc1, 0xd0, 0xe1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc0, 0xe2, 0x41, 0x45, 0x19, 0x26, 0x11, 0x25, 0x91, 0x03, 0xd0, 0xa1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc8, 0xc1, 0x79, 0x65, 0x39, 0x66, 0x31, 0x86, 0x79, 0xa6, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xd0, 0xe1, 0xc1, 0x02, 
  0xc0, 0x00, 0xb8, 0xc1, 0xc8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc8, 0xe2, 0x59, 0xc7, 0x19, 0x25, 0x10, 0xe4, 0x49, 0x04, 0x99, 0x03, 0xb8, 0xe2, 0xc8, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc8, 0xc1, 0xc1, 0x02, 0xb9, 0x03, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc0, 0xe1, 
  0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc8, 0xa1, 0x91, 0xa6, 0x19, 0x66, 0x18, 0xc3, 0x19, 0x05, 0x11, 0x05, 0x31, 0x45, 0x91, 0x03, 0xc0, 0xc1, 0xc8, 0xc1, 0xc8, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 
  0xb8, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xa1, 0xc1, 0x64, 0x5a, 0x6a, 0x09, 0x05, 0x19, 0x04, 0x19, 0x04, 0x11, 0x05, 0x11, 0x05, 0x39, 0x05, 0x59, 0x24, 0x81, 0x03, 0xb0, 0xe2, 0xc8, 0xc1, 0xc8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 
  0xb8, 0xa1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xa1, 0xb9, 0x02, 0x61, 0x45, 0x10, 0xe5, 0x11, 0x05, 0x11, 0x04, 0x19, 0x25, 0x19, 0x25, 0x11, 0x05, 0x11, 0x25, 0x21, 0x05, 0x49, 0x26, 0x99, 0x44, 0xc8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 
  0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc8, 0xc1, 0x91, 0x45, 0x61, 0x66, 0x49, 0xe8, 0x29, 0x66, 0x19, 0x05, 0x11, 0x05, 0x18, 0xe4, 0x18, 0xe4, 0x11, 0x26, 0x19, 0x67, 0x99, 0x04, 0xc8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 
  0xb8, 0xa1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc8, 0xc1, 0xc8, 0xc1, 0xc1, 0x22, 0xb1, 0x03, 0xa0, 0xe3, 0x79, 0x24, 0x39, 0x66, 0x19, 0x25, 0x21, 0x25, 0x10, 0xe5, 0x39, 0x27, 0xc0, 0xe2, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 
  0xb8, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xb8, 0xe2, 0xb8, 0xe2, 0xb8, 0xe2, 0xc0, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xc8, 0xc1, 0xb1, 0x03, 0x41, 0x66, 0x21, 0x25, 0x21, 0x05, 0x19, 0x26, 0x99, 0x03, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 
  0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc8, 0xc1, 0x81, 0x24, 0x29, 0x46, 0x29, 0x06, 0x59, 0xa7, 0xc0, 0xe2, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xd0, 0xc1, 0x79, 0x86, 0x11, 0x05, 0x21, 0x05, 0x19, 0x26, 0x91, 0xe7, 0xc8, 0xa0, 0xb8, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 
  0xc0, 0x00, 0xb8, 0xc1, 0xc8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc8, 0xc1, 0x69, 0x24, 0x09, 0x25, 0x19, 0x05, 0x19, 0x26, 0x99, 0x44, 0xc8, 0xa0, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc8, 0xc1, 0x79, 0xa6, 0x19, 0x25, 0x18, 0xe4, 0x19, 0x46, 0x89, 0xe7, 0xc8, 0xa0, 0xb8, 0xc1, 0xc0, 0xc1, 0xb8, 0xe2, 
  0x00, 0x00, 0xb8, 0xc1, 0xd0, 0xe1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc8, 0xc1, 0x91, 0x44, 0x19, 0x46, 0x21, 0x25, 0x19, 0x25, 0x39, 0x46, 0xb9, 0x23, 0xc8, 0xc1, 0xc8, 0xc1, 0xc8, 0xc1, 0xc8, 0xc1, 0xb1, 0x02, 0x31, 0x45, 0x18, 0xe4, 0x18, 0xe4, 0x21, 0x26, 0xa1, 0x24, 0xc0, 0xc1, 0xb8, 0xc1, 0xd0, 0xe1, 0xc1, 0x23, 
  0x00, 0x00, 0xb8, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xb9, 0x02, 0x39, 0x66, 0x19, 0x05, 0x29, 0x45, 0x19, 0x05, 0x41, 0x86, 0x69, 0x45, 0x79, 0x24, 0x81, 0x23, 0x61, 0x66, 0x31, 0x26, 0x19, 0x25, 0x18, 0xe4, 0x11, 0x05, 0x59, 0xe8, 0xc0, 0xe1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc0, 0xe2, 0xc1, 0xc6, 
  0x00, 0x00, 0x00, 0x00, 0xb8, 0xc1, 0xd0, 0xe1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc8, 0xc1, 0x99, 0x44, 0x21, 0x66, 0x11, 0x05, 0x21, 0x05, 0x19, 0x05, 0x11, 0x06, 0x11, 0x05, 0x11, 0x05, 0x11, 0x06, 0x21, 0x46, 0x18, 0xc4, 0x21, 0x45, 0x4a, 0x6a, 0xb1, 0x84, 0xc0, 0xa1, 0xb8, 0xc1, 0xd0, 0xe1, 0xc1, 0x43, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc1, 0xd0, 0xe1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc8, 0xc1, 0x99, 0x23, 0x41, 0x46, 0x19, 0x46, 0x19, 0x26, 0x10, 0xe5, 0x10, 0xe4, 0x19, 0x26, 0x10, 0xe5, 0x19, 0x05, 0x29, 0xa8, 0x6a, 0xab, 0xb1, 0xc5, 0xc0, 0xa0, 0xb8, 0xc1, 0xd0, 0xc1, 0xc1, 0x23, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc1, 0x42, 0xc0, 0xe1, 0xd0, 0xe1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc8, 0xc1, 0xc0, 0xe2, 0x91, 0x24, 0x69, 0x45, 0x51, 0x25, 0x51, 0x05, 0x59, 0x45, 0x61, 0x87, 0x72, 0x4a, 0xa2, 0x28, 0xc1, 0x02, 0xc0, 0xa0, 0xb8, 0xc1, 0xd0, 0xc1, 0xc1, 0x02, 0xd2, 0x88, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb9, 0x22, 0xc0, 0xe1, 0xd0, 0xe1, 0xc0, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc8, 0xc1, 0xc8, 0xc1, 0xc8, 0xe1, 0xc8, 0xc1, 0xc8, 0xc1, 0xc8, 0xe1, 0xc8, 0xc1, 0xc0, 0xa0, 0xb8, 0xc1, 0xc0, 0xc1, 0xd0, 0xe1, 0xc1, 0x23, 0xc2, 0xc9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc1, 0x02, 0xc0, 0xc1, 0xd0, 0xe1, 0xc8, 0xc1, 0xc0, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xc1, 0xc0, 0xc1, 0xd0, 0xe1, 0xc0, 0xe2, 0xc9, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb9, 0x44, 0xc1, 0x02, 0xc0, 0xe2, 0xc0, 0xe1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xb8, 0xc1, 0xc0, 0xe1, 0xc1, 0x02, 0xc9, 0x64, 0xc2, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x0d, 0x1c, 0xc3, 0xff, 0x09, 0x1a, 0xc3, 0xff, 0x0b, 0x1a, 0xbd, 0xff, 0x09, 0x18, 0xc0, 0xff, 0x0b, 0x1b, 0xc0, 0xff, 0x0e, 0x1d, 0xc3, 0xff, 0x12, 0x21, 0xc5, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x0a, 0x1d, 0xba, 0xff, 0x0a, 0x1b, 0xc2, 0xff, 0x0b, 0x19, 0xc0, 0xff, 0x0a, 0x1a, 0xbe, 0xff, 0x0a, 0x19, 0xbd, 0xff, 0x09, 0x18, 0xbe, 0xff, 0x09, 0x18, 0xbe, 0xff, 0x0a, 0x19, 0xbd, 0xff, 0x0a, 0x19, 0xbd, 0xff, 0x0a, 0x18, 0xbd, 0xff, 0x0c, 0x19, 0xc1, 0xff, 0x0e, 0x1c, 0xc3, 0xff, 0x1b, 0x24, 0xbf, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x0b, 0x19, 0xbe, 0xff, 0x09, 0x18, 0xc1, 0xff, 0x0b, 0x1b, 0xcd, 0xff, 0x08, 0x18, 0xc8, 0xff, 0x07, 0x17, 0xc9, 0xff, 0x0a, 0x1a, 0xc6, 0xff, 0x0e, 0x1e, 0xbf, 0xff, 0x0e, 0x1d, 0xbe, 0xff, 0x0a, 0x1a, 0xc5, 0xff, 0x08, 0x19, 0xc8, 0xff, 0x06, 0x17, 0xca, 0xff, 0x06, 0x17, 0xcb, 0xff, 0x0a, 0x1b, 0xce, 0xff, 0x0a, 0x1a, 0xc3, 0xff, 0x0f, 0x1e, 0xc0, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x12, 0xa4, 0xff, 0x09, 0x1a, 0xc0, 0xff, 0x0b, 0x1c, 0xce, 0xff, 0x0a, 0x19, 0xc2, 0xff, 0x04, 0x14, 0xbf, 0xff, 0x10, 0x1e, 0xb9, 0xff, 0x26, 0x2d, 0x85, 0xff, 0x2b, 0x29, 0x52, 0xff, 0x31, 0x26, 0x39, 0xff, 0x2d, 0x24, 0x3a, 0xff, 0x2a, 0x24, 0x4b, 0xff, 0x2c, 0x28, 0x63, 0xff, 0x29, 0x2e, 0x7f, 0xff, 0x1e, 0x28, 0xa8, 0xff, 0x0a, 0x1a, 0xc5, 0xff, 0x07, 0x17, 0xc7, 0xff, 0x0c, 0x1c, 0xce, 0xff, 0x0c, 0x1d, 0xc2, 0xff, 0x1e, 0x2d, 0xb4, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x14, 0xb1, 0xff, 0x0a, 0x19, 0xc0, 0xff, 0x0b, 0x1b, 0xce, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x00, 0x10, 0xc0, 0xff, 0x4d, 0x56, 0xc0, 0xff, 0x46, 0x43, 0x46, 0xff, 0x23, 0x1e, 0x0d, 0xff, 0x28, 0x1f, 0x11, 0xff, 0x2a, 0x1b, 0x11, 0xff, 0x26, 0x1a, 0x10, 0xff, 0x2a, 0x1d, 0x11, 0xff, 0x2f, 0x21, 0x14, 0xff, 0x2a, 0x25, 0x15, 0xff, 0x35, 0x2a, 0x20, 0xff, 0x37, 0x31, 0x59, 0xff, 0x14, 0x21, 0xae, 0xff, 0x05, 0x16, 0xc2, 0xff, 0x0b, 0x1b, 0xcd, 0xff, 0x0e, 0x1c, 0xc1, 0xff, 0x20, 0x30, 0xbf, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x08, 0x19, 0xba, 0xff, 0x0b, 0x1b, 0xce, 0xff, 0x0a, 0x19, 0xbb, 0xff, 0x03, 0x12, 0xbd, 0xff, 0x2e, 0x3a, 0xc3, 0xff, 0x76, 0x73, 0x6e, 0xff, 0x28, 0x24, 0x18, 0xff, 0x21, 0x1e, 0x18, 0xff, 0x2b, 0x26, 0x1e, 0xff, 0x26, 0x24, 0x26, 0xff, 0x27, 0x25, 0x24, 0xff, 0x2a, 0x24, 0x20, 0xff, 0x27, 0x20, 0x15, 0xff, 0x25, 0x1f, 0x1c, 0xff, 0x26, 0x21, 0x1f, 0xff, 0x29, 0x22, 0x0f, 0xff, 0x46, 0x42, 0x52, 0xff, 0x1a, 0x28, 0xc0, 0xff, 0x06, 0x16, 0xbd, 0xff, 0x0b, 0x1b, 0xce, 0xff, 0x0e, 0x1c, 0xbd, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x09, 0x19, 0xbb, 0xff, 0x0b, 0x1c, 0xcf, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x07, 0x17, 0xc5, 0xff, 0x42, 0x43, 0x7d, 0xff, 0x32, 0x2d, 0x1b, 0xff, 0x22, 0x1f, 0x19, 0xff, 0x24, 0x22, 0x29, 0xff, 0x1a, 0x24, 0x96, 0xff, 0x13, 0x20, 0xae, 0xff, 0x19, 0x25, 0xad, 0xff, 0x18, 0x25, 0xa9, 0xff, 0x29, 0x2b, 0x7e, 0xff, 0x2d, 0x25, 0x24, 0xff, 0x28, 0x22, 0x1c, 0xff, 0x2d, 0x28, 0x26, 0xff, 0x38, 0x31, 0x20, 0xff, 0x22, 0x2b, 0x99, 0xff, 0x05, 0x16, 0xc5, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0b, 0x1c, 0xcf, 0xff, 0x11, 0x20, 0xbb, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x0c, 0x17, 0xb9, 0xff, 0x09, 0x19, 0xbd, 0xff, 0x0a, 0x1a, 0xc2, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x09, 0x18, 0xbd, 0xff, 0x0f, 0x1f, 0xc2, 0xff, 0x2f, 0x2a, 0x41, 0xff, 0x2e, 0x23, 0x19, 0xff, 0x28, 0x22, 0x13, 0xff, 0x20, 0x26, 0x74, 0xff, 0x06, 0x18, 0xd1, 0xff, 0x08, 0x17, 0xc1, 0xff, 0x07, 0x17, 0xc1, 0xff, 0x06, 0x16, 0xc3, 0xff, 0x04, 0x16, 0xce, 0xff, 0x2a, 0x31, 0x98, 0xff, 0x3c, 0x33, 0x20, 0xff, 0x24, 0x1f, 0x15, 0xff, 0x25, 0x1e, 0x0b, 0xff, 0x33, 0x30, 0x5d, 0xff, 0x0b, 0x1b, 0xc7, 0xff, 0x09, 0x18, 0xbc, 0xff, 0x0a, 0x19, 0xc1, 0xff, 0x0c, 0x19, 0xbe, 0xff, 0x1c, 0x26, 0xbd, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x0a, 0x18, 0xbc, 0xff, 0x0b, 0x1b, 0xce, 0xff, 0x0a, 0x19, 0xbb, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x09, 0x18, 0xbd, 0xff, 0x0e, 0x1e, 0xc0, 0xff, 0x2a, 0x28, 0x3d, 0xff, 0x2d, 0x24, 0x1b, 0xff, 0x28, 0x23, 0x14, 0xff, 0x17, 0x21, 0x92, 0xff, 0x05, 0x16, 0xd1, 0xff, 0x09, 0x18, 0xbe, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x09, 0x18, 0xbd, 0xff, 0x0a, 0x19, 0xc5, 0xff, 0x25, 0x2b, 0x79, 0xff, 0x30, 0x2d, 0x38, 0xff, 0x34, 0x2f, 0x32, 0xff, 0x34, 0x35, 0x79, 0xff, 0x0b, 0x1a, 0xc3, 0xff, 0x09, 0x18, 0xbc, 0xff, 0x0a, 0x19, 0xbb, 0xff, 0x0b, 0x1b, 0xce, 0xff, 0x0f, 0x20, 0xbd, 0xff, 
  0x00, 0x00, 0xbf, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x1a, 0xc5, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x09, 0x18, 0xbd, 0xff, 0x0d, 0x1d, 0xc5, 0xff, 0x35, 0x37, 0x56, 0xff, 0x26, 0x23, 0x16, 0xff, 0x1f, 0x1b, 0x11, 0xff, 0x1e, 0x1f, 0x47, 0xff, 0x17, 0x21, 0x9c, 0xff, 0x0f, 0x1e, 0xbb, 0xff, 0x08, 0x19, 0xc7, 0xff, 0x09, 0x18, 0xbe, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x09, 0x18, 0xbd, 0xff, 0x07, 0x18, 0xc5, 0xff, 0x11, 0x1f, 0xbd, 0xff, 0x15, 0x22, 0xb9, 0xff, 0x09, 0x19, 0xc2, 0xff, 0x09, 0x18, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x1a, 0xc4, 0xff, 0x0b, 0x1b, 0xbd, 0xff, 
  0x0a, 0x1a, 0xb9, 0xff, 0x0a, 0x17, 0xbc, 0xff, 0x0a, 0x19, 0xbe, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x05, 0x16, 0xc5, 0xff, 0x2d, 0x34, 0x90, 0xff, 0x31, 0x2b, 0x17, 0xff, 0x1b, 0x18, 0x17, 0xff, 0x26, 0x22, 0x17, 0xff, 0x26, 0x1f, 0x10, 0xff, 0x2c, 0x27, 0x32, 0xff, 0x18, 0x1f, 0x8d, 0xff, 0x0c, 0x1a, 0xc1, 0xff, 0x09, 0x19, 0xc7, 0xff, 0x07, 0x18, 0xc8, 0xff, 0x08, 0x18, 0xc1, 0xff, 0x08, 0x18, 0xbe, 0xff, 0x08, 0x17, 0xbf, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbd, 0xff, 0x0b, 0x18, 0xbc, 0xff, 
  0x09, 0x18, 0xbc, 0xff, 0x0a, 0x19, 0xbd, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x05, 0x15, 0xbe, 0xff, 0x1f, 0x2c, 0xbf, 0xff, 0x4e, 0x4c, 0x5a, 0xff, 0x25, 0x1f, 0x0c, 0xff, 0x21, 0x1f, 0x1b, 0xff, 0x23, 0x1f, 0x1b, 0xff, 0x26, 0x22, 0x14, 0xff, 0x26, 0x1f, 0x14, 0xff, 0x2b, 0x22, 0x36, 0xff, 0x22, 0x23, 0x57, 0xff, 0x1b, 0x21, 0x82, 0xff, 0x13, 0x1d, 0xad, 0xff, 0x0a, 0x1a, 0xc8, 0xff, 0x07, 0x17, 0xc5, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbb, 0xff, 
  0x0a, 0x16, 0xba, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x06, 0x16, 0xc1, 0xff, 0x13, 0x20, 0xb8, 0xff, 0x28, 0x28, 0x5f, 0xff, 0x27, 0x1e, 0x11, 0xff, 0x27, 0x20, 0x0f, 0xff, 0x24, 0x20, 0x14, 0xff, 0x25, 0x25, 0x19, 0xff, 0x27, 0x26, 0x16, 0xff, 0x25, 0x21, 0x11, 0xff, 0x2c, 0x26, 0x13, 0xff, 0x2c, 0x20, 0x24, 0xff, 0x2e, 0x26, 0x4b, 0xff, 0x23, 0x29, 0x97, 0xff, 0x08, 0x19, 0xc5, 0xff, 0x09, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 
  0x09, 0x18, 0xbb, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbb, 0xff, 0x07, 0x17, 0xc0, 0xff, 0x08, 0x18, 0xc8, 0xff, 0x25, 0x2a, 0x8d, 0xff, 0x2e, 0x2d, 0x5f, 0xff, 0x40, 0x3c, 0x4b, 0xff, 0x32, 0x2c, 0x28, 0xff, 0x28, 0x1f, 0x16, 0xff, 0x28, 0x21, 0x11, 0xff, 0x23, 0x1e, 0x17, 0xff, 0x21, 0x1e, 0x19, 0xff, 0x2f, 0x26, 0x14, 0xff, 0x39, 0x2b, 0x1a, 0xff, 0x1d, 0x22, 0x95, 0xff, 0x07, 0x18, 0xc5, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 
  0x0a, 0x16, 0xba, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x09, 0x19, 0xbd, 0xff, 0x08, 0x18, 0xbf, 0xff, 0x09, 0x18, 0xbf, 0xff, 0x08, 0x18, 0xbe, 0xff, 0x06, 0x17, 0xc6, 0xff, 0x09, 0x19, 0xc8, 0xff, 0x14, 0x23, 0xc0, 0xff, 0x17, 0x22, 0xad, 0xff, 0x15, 0x1e, 0xa1, 0xff, 0x21, 0x24, 0x75, 0xff, 0x34, 0x2d, 0x36, 0xff, 0x2a, 0x24, 0x1a, 0xff, 0x27, 0x26, 0x23, 0xff, 0x25, 0x1d, 0x0e, 0xff, 0x35, 0x25, 0x35, 0xff, 0x10, 0x1e, 0xbf, 0xff, 0x08, 0x18, 0xbe, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 
  0x09, 0x18, 0xbc, 0xff, 0x0a, 0x19, 0xbd, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0b, 0x1a, 0xbf, 0xff, 0x10, 0x1e, 0xb5, 0xff, 0x0d, 0x1b, 0xb5, 0xff, 0x0f, 0x1e, 0xbc, 0xff, 0x0a, 0x19, 0xbd, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x08, 0x17, 0xbd, 0xff, 0x07, 0x17, 0xc1, 0xff, 0x07, 0x18, 0xc4, 0xff, 0x07, 0x18, 0xcc, 0xff, 0x15, 0x22, 0xb4, 0xff, 0x30, 0x2e, 0x40, 0xff, 0x2b, 0x23, 0x1d, 0xff, 0x2a, 0x22, 0x20, 0xff, 0x32, 0x24, 0x1a, 0xff, 0x16, 0x20, 0x9c, 0xff, 0x07, 0x17, 0xc4, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbb, 0xff, 
  0x0a, 0x1a, 0xbc, 0xff, 0x0a, 0x17, 0xbc, 0xff, 0x0a, 0x19, 0xbe, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x07, 0x18, 0xc6, 0xff, 0x23, 0x26, 0x80, 0xff, 0x30, 0x29, 0x27, 0xff, 0x2f, 0x21, 0x27, 0xff, 0x3b, 0x34, 0x59, 0xff, 0x0e, 0x1e, 0xc4, 0xff, 0x09, 0x18, 0xbd, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbb, 0xff, 0x06, 0x17, 0xcd, 0xff, 0x2d, 0x30, 0x77, 0xff, 0x28, 0x20, 0x13, 0xff, 0x28, 0x20, 0x20, 0xff, 0x34, 0x26, 0x17, 0xff, 0x38, 0x3b, 0x91, 0xff, 0x04, 0x15, 0xc5, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbd, 0xff, 0x0b, 0x19, 0xbc, 0xff, 
  0x00, 0x00, 0xbf, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x1a, 0xc5, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x07, 0x18, 0xc9, 0xff, 0x1f, 0x24, 0x6a, 0xff, 0x27, 0x23, 0x0c, 0xff, 0x26, 0x20, 0x17, 0xff, 0x2e, 0x25, 0x17, 0xff, 0x21, 0x29, 0x97, 0xff, 0x04, 0x15, 0xc8, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x05, 0x17, 0xcc, 0xff, 0x34, 0x36, 0x79, 0xff, 0x2b, 0x26, 0x17, 0xff, 0x20, 0x1c, 0x1c, 0xff, 0x34, 0x29, 0x19, 0xff, 0x39, 0x3b, 0x86, 0xff, 0x04, 0x15, 0xc6, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x09, 0x19, 0xc4, 0xff, 0x0e, 0x1d, 0xbc, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x0a, 0x18, 0xbb, 0xff, 0x0b, 0x1b, 0xce, 0xff, 0x0a, 0x19, 0xbb, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x06, 0x17, 0xc5, 0xff, 0x20, 0x28, 0x92, 0xff, 0x2f, 0x28, 0x19, 0xff, 0x27, 0x23, 0x21, 0xff, 0x2a, 0x26, 0x1c, 0xff, 0x2d, 0x2a, 0x3a, 0xff, 0x16, 0x24, 0xbc, 0xff, 0x06, 0x18, 0xcc, 0xff, 0x08, 0x18, 0xc8, 0xff, 0x07, 0x17, 0xc8, 0xff, 0x07, 0x19, 0xcc, 0xff, 0x14, 0x21, 0xad, 0xff, 0x28, 0x27, 0x33, 0xff, 0x23, 0x1e, 0x17, 0xff, 0x23, 0x1d, 0x19, 0xff, 0x34, 0x26, 0x1d, 0xff, 0x1e, 0x26, 0x9d, 0xff, 0x06, 0x17, 0xc4, 0xff, 0x0a, 0x19, 0xbb, 0xff, 0x0b, 0x1b, 0xce, 0xff, 0x17, 0x24, 0xbf, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x0c, 0x17, 0xb9, 0xff, 0x09, 0x19, 0xbd, 0xff, 0x0a, 0x1a, 0xc2, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x08, 0x17, 0xbf, 0xff, 0x13, 0x20, 0xba, 0xff, 0x33, 0x2d, 0x35, 0xff, 0x27, 0x20, 0x16, 0xff, 0x2c, 0x29, 0x27, 0xff, 0x25, 0x20, 0x15, 0xff, 0x31, 0x2f, 0x44, 0xff, 0x26, 0x27, 0x67, 0xff, 0x20, 0x25, 0x7a, 0xff, 0x1c, 0x24, 0x81, 0xff, 0x2f, 0x2b, 0x64, 0xff, 0x31, 0x26, 0x2d, 0xff, 0x27, 0x23, 0x1c, 0xff, 0x20, 0x1c, 0x1c, 0xff, 0x29, 0x20, 0x14, 0xff, 0x44, 0x3d, 0x5a, 0xff, 0x0c, 0x1c, 0xc4, 0xff, 0x09, 0x18, 0xbc, 0xff, 0x09, 0x19, 0xc1, 0xff, 0x0f, 0x1d, 0xbe, 0xff, 0x2f, 0x39, 0xbd, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x0b, 0x19, 0xbb, 0xff, 0x0b, 0x1c, 0xcf, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x07, 0x17, 0xc5, 0xff, 0x1e, 0x27, 0x95, 0xff, 0x32, 0x2d, 0x22, 0xff, 0x25, 0x21, 0x12, 0xff, 0x25, 0x22, 0x1f, 0xff, 0x28, 0x1f, 0x18, 0xff, 0x2d, 0x22, 0x13, 0xff, 0x28, 0x1f, 0x10, 0xff, 0x2c, 0x22, 0x12, 0xff, 0x2d, 0x20, 0x13, 0xff, 0x2e, 0x27, 0x23, 0xff, 0x1d, 0x1a, 0x1c, 0xff, 0x2c, 0x29, 0x1d, 0xff, 0x51, 0x4d, 0x49, 0xff, 0x24, 0x2f, 0xb3, 0xff, 0x06, 0x16, 0xc1, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0c, 0x1c, 0xcf, 0xff, 0x1b, 0x28, 0xbe, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x0b, 0x19, 0xbd, 0xff, 0x0b, 0x1b, 0xce, 0xff, 0x0a, 0x19, 0xbb, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x07, 0x17, 0xc7, 0xff, 0x1a, 0x25, 0x99, 0xff, 0x2f, 0x28, 0x41, 0xff, 0x33, 0x29, 0x19, 0xff, 0x2d, 0x26, 0x16, 0xff, 0x25, 0x1c, 0x0f, 0xff, 0x24, 0x1d, 0x11, 0xff, 0x30, 0x23, 0x17, 0xff, 0x29, 0x1d, 0x11, 0xff, 0x2b, 0x20, 0x16, 0xff, 0x41, 0x36, 0x27, 0xff, 0x55, 0x53, 0x66, 0xff, 0x2c, 0x38, 0xb1, 0xff, 0x04, 0x14, 0xc2, 0xff, 0x0a, 0x19, 0xbb, 0xff, 0x0a, 0x1a, 0xcd, 0xff, 0x16, 0x23, 0xbe, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x14, 0x27, 0xc4, 0xff, 0x0b, 0x1b, 0xc1, 0xff, 0x0b, 0x1b, 0xce, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x07, 0x17, 0xc5, 0xff, 0x0f, 0x1d, 0xc2, 0xff, 0x1e, 0x25, 0x92, 0xff, 0x26, 0x28, 0x66, 0xff, 0x29, 0x24, 0x53, 0xff, 0x26, 0x22, 0x51, 0xff, 0x2a, 0x27, 0x58, 0xff, 0x36, 0x30, 0x5e, 0xff, 0x51, 0x47, 0x72, 0xff, 0x42, 0x45, 0x9e, 0xff, 0x11, 0x20, 0xc2, 0xff, 0x02, 0x13, 0xc1, 0xff, 0x0a, 0x19, 0xbb, 0xff, 0x0a, 0x1a, 0xcd, 0xff, 0x12, 0x22, 0xc1, 0xff, 0x40, 0x50, 0xcf, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x12, 0x24, 0xb6, 0xff, 0x0b, 0x1c, 0xc1, 0xff, 0x0b, 0x1c, 0xcf, 0xff, 0x0a, 0x19, 0xc2, 0xff, 0x0a, 0x19, 0xbb, 0xff, 0x09, 0x18, 0xbd, 0xff, 0x06, 0x17, 0xc6, 0xff, 0x09, 0x1a, 0xc8, 0xff, 0x0b, 0x1b, 0xc8, 0xff, 0x0a, 0x1a, 0xc6, 0xff, 0x09, 0x1a, 0xc6, 0xff, 0x0a, 0x1b, 0xc7, 0xff, 0x09, 0x1a, 0xc7, 0xff, 0x04, 0x15, 0xc3, 0xff, 0x07, 0x17, 0xbc, 0xff, 0x09, 0x19, 0xc1, 0xff, 0x0c, 0x1c, 0xcf, 0xff, 0x17, 0x25, 0xc2, 0xff, 0x4b, 0x5a, 0xc3, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x10, 0x1f, 0xc1, 0xff, 0x0b, 0x1a, 0xc1, 0xff, 0x0b, 0x1b, 0xce, 0xff, 0x0a, 0x19, 0xc5, 0xff, 0x0a, 0x19, 0xbe, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x09, 0x19, 0xbc, 0xff, 0x09, 0x18, 0xbe, 0xff, 0x09, 0x19, 0xc4, 0xff, 0x0b, 0x1b, 0xcd, 0xff, 0x11, 0x1e, 0xc3, 0xff, 0x1e, 0x2d, 0xc5, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1d, 0x27, 0xba, 0xff, 0x12, 0x20, 0xc4, 0xff, 0x0d, 0x1d, 0xc0, 0xff, 0x0a, 0x1b, 0xbd, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0a, 0x19, 0xbc, 0xff, 0x0b, 0x1a, 0xbc, 0xff, 0x0b, 0x1c, 0xbf, 0xff, 0x12, 0x1f, 0xc3, 0xff, 0x1e, 0x2b, 0xc8, 0xff, 0x46, 0x4f, 0xc1, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
#endif
};

const lv_img_dsc_t img_src_sptmode_r = {
  .header.always_zero = 0,
  .header.w = 26,
  .header.h = 26,
  .data_size = 676 * LV_COLOR_SIZE / 8,
  .header.cf = LV_IMG_CF_TRUE_COLOR,
  .data = img_src_sptmode_r_map,
};
