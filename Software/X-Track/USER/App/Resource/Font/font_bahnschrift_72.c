/*******************************************************************************
 * Size: 72 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef FONT_BAHNSCHRIFT_72
#define FONT_BAHNSCHRIFT_72 1
#endif

#if FONT_BAHNSCHRIFT_72

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0030 "0" */
    0x0, 0x3f, 0xff, 0xff, 0xc0, 0x0, 0xf, 0xff,
    0xff, 0xff, 0x0, 0x1, 0xff, 0xff, 0xff, 0xf8,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xc0, 0x8, 0xff,
    0xff, 0xff, 0xf1, 0x3, 0xe3, 0xff, 0xff, 0xfc,
    0x7c, 0x7f, 0x0, 0x0, 0x0, 0xf, 0xef, 0xf8,
    0x0, 0x0, 0x1, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0,
    0x1, 0xff, 0xff, 0x80, 0x0, 0x0, 0x1f, 0xff,
    0xf8, 0x0, 0x0, 0x1, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0,
    0x0, 0x1, 0xff, 0xff, 0x80, 0x0, 0x0, 0x1f,
    0xff, 0xf8, 0x0, 0x0, 0x1, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0x7, 0xff, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xc, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xf8, 0x0, 0x0, 0x0, 0x1, 0xff,
    0xf0, 0x0, 0x0, 0x0, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0,
    0x0, 0x1, 0xff, 0xff, 0x80, 0x0, 0x0, 0x1f,
    0xff, 0xf8, 0x0, 0x0, 0x1, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1,
    0xff, 0xff, 0x80, 0x0, 0x0, 0x1f, 0xff, 0xf8,
    0x0, 0x0, 0x1, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0,
    0x1, 0xff, 0xff, 0x80, 0x0, 0x0, 0x1f, 0xf7,
    0xf0, 0x0, 0x0, 0x0, 0xfe, 0x3e, 0x3f, 0xff,
    0xff, 0xc7, 0xc0, 0x8f, 0xff, 0xff, 0xff, 0x10,
    0x1, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0x80, 0x0, 0xff, 0xff, 0xff, 0xf0,
    0x0, 0x3, 0xff, 0xff, 0xfc, 0x0,

    /* U+0031 "1" */
    0x0, 0x80, 0xc1, 0xe1, 0xf3, 0xfb, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfc, 0xfe, 0xf, 0x1, 0x80, 0x0, 0x0, 0x30,
    0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfd, 0xfe, 0x7f, 0xf, 0x83,
    0xc0, 0x60, 0x10,

    /* U+0032 "2" */
    0x0, 0x3f, 0xff, 0xff, 0xc0, 0x0, 0xf, 0xff,
    0xff, 0xff, 0x0, 0x3, 0xff, 0xff, 0xff, 0xf8,
    0x0, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x1f, 0xff,
    0xff, 0xff, 0xf1, 0x7, 0xff, 0xff, 0xff, 0xfc,
    0x7c, 0x0, 0x0, 0x0, 0x0, 0xf, 0xe0, 0x0,
    0x0, 0x0, 0x1, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xf0, 0x0, 0x0, 0x0, 0x1, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0,
    0x1, 0xff, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xf0,
    0x0, 0x0, 0x0, 0x1, 0xff, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0, 0x1, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0,
    0x0, 0x1, 0xff, 0x0, 0x0, 0x0, 0x0, 0x1f,
    0xf0, 0x0, 0x0, 0x0, 0x1, 0xff, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0x0, 0x0, 0x0, 0x0, 0xf, 0xf0, 0x7,
    0xff, 0xff, 0xfe, 0x1f, 0x1, 0xff, 0xff, 0xff,
    0xfc, 0x70, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1f,
    0xff, 0xff, 0xff, 0xff, 0x8c, 0x3f, 0xff, 0xff,
    0xff, 0xc0, 0xf8, 0x7f, 0xff, 0xff, 0xe0, 0xf,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0xff, 0x80, 0x0,
    0x0, 0x0, 0xf, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0xff, 0x80, 0x0, 0x0, 0x0, 0xf, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0xff, 0x80, 0x0, 0x0, 0x0,
    0xf, 0xf8, 0x0, 0x0, 0x0, 0x0, 0xff, 0x80,
    0x0, 0x0, 0x0, 0xf, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0xff, 0x80, 0x0, 0x0, 0x0, 0xf, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0xff, 0x80, 0x0, 0x0,
    0x0, 0xf, 0xf8, 0x0, 0x0, 0x0, 0x0, 0xff,
    0x80, 0x0, 0x0, 0x0, 0xf, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0xff, 0x80, 0x0, 0x0, 0x0, 0x7,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x3e, 0x3f, 0xff,
    0xff, 0xf0, 0x0, 0x8f, 0xff, 0xff, 0xff, 0xc0,
    0x1, 0xff, 0xff, 0xff, 0xfe, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0xf0, 0x0, 0xff, 0xff, 0xff, 0xff,
    0xc0, 0x3, 0xff, 0xff, 0xff, 0xfe,

    /* U+0033 "3" */
    0x7f, 0xff, 0xff, 0xff, 0x0, 0xf, 0xff, 0xff,
    0xff, 0xf0, 0x0, 0xff, 0xff, 0xff, 0xfe, 0x0,
    0x1f, 0xff, 0xff, 0xff, 0xc0, 0x1, 0xff, 0xff,
    0xff, 0xc4, 0x0, 0x3f, 0xff, 0xff, 0xc7, 0xc0,
    0x0, 0x0, 0x0, 0x3, 0xf8, 0x0, 0x0, 0x0,
    0x1, 0xff, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xc0,
    0x0, 0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0,
    0x7, 0xfc, 0x0, 0x0, 0x0, 0x1, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0xc0, 0x0, 0x0, 0x0,
    0x1f, 0xf0, 0x0, 0x0, 0x0, 0x7, 0xfc, 0x0,
    0x0, 0x0, 0x1, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xc0, 0x0, 0x0, 0x0, 0x1f, 0xf0, 0x0,
    0x0, 0x0, 0x7, 0xfc, 0x0, 0x0, 0x0, 0x1,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xc0, 0x0,
    0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0, 0x3,
    0xfc, 0x3, 0xff, 0xff, 0xfe, 0x1f, 0x7, 0xff,
    0xff, 0xff, 0xf1, 0xcf, 0xff, 0xff, 0xff, 0xff,
    0x7, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xff,
    0xff, 0xff, 0xc3, 0x1, 0xff, 0xff, 0xff, 0x83,
    0xc0, 0x0, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x0,
    0x0, 0x7, 0xfc, 0x0, 0x0, 0x0, 0x1, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0xc0, 0x0, 0x0,
    0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0, 0x7, 0xfc,
    0x0, 0x0, 0x0, 0x1, 0xff, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xc0, 0x0, 0x0, 0x0, 0x1f, 0xf0,
    0x0, 0x0, 0x0, 0x7, 0xfc, 0x0, 0x0, 0x0,
    0x1, 0xff, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xc0,
    0x0, 0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0,
    0x7, 0xfc, 0x0, 0x0, 0x0, 0x1, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0xc0, 0x0, 0x0, 0x0,
    0xf, 0xe0, 0xf, 0xff, 0xff, 0xf1, 0xf0, 0x7,
    0xff, 0xff, 0xff, 0x10, 0x7, 0xff, 0xff, 0xff,
    0xf0, 0x3, 0xff, 0xff, 0xff, 0xf8, 0x3, 0xff,
    0xff, 0xff, 0xfc, 0x1, 0xff, 0xff, 0xff, 0xfc,
    0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0xc, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xfc, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0x80, 0x0, 0x0, 0x1f, 0xff, 0xf8,
    0x0, 0x0, 0x1, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0,
    0x1, 0xff, 0xff, 0x80, 0x0, 0x0, 0x1f, 0xff,
    0xf8, 0x0, 0x0, 0x1, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0,
    0x0, 0x1, 0xff, 0xff, 0x80, 0x0, 0x0, 0x1f,
    0xff, 0xf8, 0x0, 0x0, 0x1, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1,
    0xff, 0xff, 0x0, 0x0, 0x0, 0xf, 0xff, 0x87,
    0xff, 0xff, 0xfe, 0x1f, 0xe1, 0xff, 0xff, 0xff,
    0xfc, 0x70, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1f,
    0xff, 0xff, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xff,
    0xff, 0xc3, 0x0, 0x7f, 0xff, 0xff, 0xe0, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0, 0x1, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0,
    0x0, 0x1, 0xff, 0x0, 0x0, 0x0, 0x0, 0x1f,
    0xf0, 0x0, 0x0, 0x0, 0x1, 0xff, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xf0, 0x0,
    0x0, 0x0, 0x1, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xf0, 0x0, 0x0, 0x0, 0x1, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0,
    0x1, 0xff, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xf0,
    0x0, 0x0, 0x0, 0x1, 0xff, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x30, 0x0, 0x0, 0x0, 0x0, 0x1,

    /* U+0035 "5" */
    0x0, 0x3f, 0xff, 0xff, 0xff, 0x80, 0xf, 0xff,
    0xff, 0xff, 0xf0, 0x1, 0xff, 0xff, 0xff, 0xfe,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0x80, 0x8, 0xff,
    0xff, 0xff, 0xf0, 0x3, 0xe3, 0xff, 0xff, 0xfc,
    0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0xf, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0xff, 0x80, 0x0, 0x0,
    0x0, 0xf, 0xf8, 0x0, 0x0, 0x0, 0x0, 0xff,
    0x80, 0x0, 0x0, 0x0, 0xf, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0xff, 0x80, 0x0, 0x0, 0x0, 0xf,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0xff, 0x80, 0x0,
    0x0, 0x0, 0xf, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0xff, 0x80, 0x0, 0x0, 0x0, 0xf, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0xff, 0x80, 0x0, 0x0, 0x0,
    0xf, 0xf8, 0x0, 0x0, 0x0, 0x0, 0xff, 0x80,
    0x0, 0x0, 0x0, 0xf, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0xf, 0x87,
    0xff, 0xff, 0xfe, 0x0, 0xe1, 0xff, 0xff, 0xff,
    0xfc, 0x0, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1f,
    0xff, 0xff, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xff,
    0xff, 0xc3, 0x0, 0x7f, 0xff, 0xff, 0xe0, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0, 0x1, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0,
    0x0, 0x1, 0xff, 0x0, 0x0, 0x0, 0x0, 0x1f,
    0xf0, 0x0, 0x0, 0x0, 0x1, 0xff, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xf0, 0x0,
    0x0, 0x0, 0x1, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xf0, 0x0, 0x0, 0x0, 0x1, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0,
    0x1, 0xff, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0xff, 0xff,
    0xff, 0xc7, 0xc0, 0x3f, 0xff, 0xff, 0xff, 0x10,
    0x7, 0xff, 0xff, 0xff, 0xfc, 0x0, 0xff, 0xff,
    0xff, 0xff, 0x80, 0x3f, 0xff, 0xff, 0xff, 0xf0,
    0x7, 0xff, 0xff, 0xff, 0xfc, 0x0,

    /* U+0036 "6" */
    0x0, 0x3f, 0xff, 0xff, 0xff, 0x80, 0xf, 0xff,
    0xff, 0xff, 0xf0, 0x1, 0xff, 0xff, 0xff, 0xfe,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0x80, 0x8, 0xff,
    0xff, 0xff, 0xf0, 0x3, 0xe3, 0xff, 0xff, 0xfc,
    0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0xf, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0xff, 0x80, 0x0, 0x0,
    0x0, 0xf, 0xf8, 0x0, 0x0, 0x0, 0x0, 0xff,
    0x80, 0x0, 0x0, 0x0, 0xf, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0xff, 0x80, 0x0, 0x0, 0x0, 0xf,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0xff, 0x80, 0x0,
    0x0, 0x0, 0xf, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0xff, 0x80, 0x0, 0x0, 0x0, 0xf, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0xff, 0x80, 0x0, 0x0, 0x0,
    0xf, 0xf8, 0x0, 0x0, 0x0, 0x0, 0xff, 0x80,
    0x0, 0x0, 0x0, 0xf, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0xf, 0x87,
    0xff, 0xff, 0xfe, 0x0, 0xe1, 0xff, 0xff, 0xff,
    0xfc, 0x0, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1f,
    0xff, 0xff, 0xff, 0xff, 0x8c, 0x3f, 0xff, 0xff,
    0xff, 0xc3, 0xf8, 0x7f, 0xff, 0xff, 0xe0, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0x80, 0x0,
    0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0,
    0x0, 0x1, 0xff, 0xff, 0x80, 0x0, 0x0, 0x1f,
    0xff, 0xf8, 0x0, 0x0, 0x1, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1,
    0xff, 0xff, 0x80, 0x0, 0x0, 0x1f, 0xff, 0xf8,
    0x0, 0x0, 0x1, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0,
    0x1, 0xff, 0xff, 0x80, 0x0, 0x0, 0x1f, 0xf7,
    0xf0, 0x0, 0x0, 0x0, 0xfe, 0x3e, 0x3f, 0xff,
    0xff, 0xc7, 0xc0, 0x8f, 0xff, 0xff, 0xff, 0x10,
    0x1, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0x80, 0x0, 0xff, 0xff, 0xff, 0xf0,
    0x0, 0x3, 0xff, 0xff, 0xfc, 0x0,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf, 0xff, 0xff,
    0xff, 0xff, 0x11, 0xff, 0xff, 0xff, 0xff, 0x8c,
    0x1f, 0xff, 0xff, 0xff, 0x8f, 0x3, 0xff, 0xff,
    0xff, 0xc7, 0xc0, 0x3f, 0xff, 0xff, 0xc7, 0xf0,
    0x0, 0x0, 0x0, 0x3, 0xfc, 0x0, 0x0, 0x0,
    0x1, 0xff, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xc0,
    0x0, 0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0,
    0x7, 0xfc, 0x0, 0x0, 0x0, 0x1, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0xc0, 0x0, 0x0, 0x0,
    0x1f, 0xf0, 0x0, 0x0, 0x0, 0x7, 0xfc, 0x0,
    0x0, 0x0, 0x1, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xc0, 0x0, 0x0, 0x0, 0x1f, 0xf0, 0x0,
    0x0, 0x0, 0x7, 0xfc, 0x0, 0x0, 0x0, 0x1,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xc0, 0x0,
    0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x40, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xc0, 0x0, 0x0, 0x0, 0xf, 0xf0, 0x0, 0x0,
    0x0, 0x7, 0xfc, 0x0, 0x0, 0x0, 0x1, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0xc0, 0x0, 0x0,
    0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0, 0x7, 0xfc,
    0x0, 0x0, 0x0, 0x1, 0xff, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xc0, 0x0, 0x0, 0x0, 0x1f, 0xf0,
    0x0, 0x0, 0x0, 0x7, 0xfc, 0x0, 0x0, 0x0,
    0x1, 0xff, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xc0,
    0x0, 0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0,
    0x7, 0xfc, 0x0, 0x0, 0x0, 0x1, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0xc0, 0x0, 0x0, 0x0,
    0x1f, 0xf0, 0x0, 0x0, 0x0, 0x3, 0xfc, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x70, 0x0,
    0x0, 0x0, 0x0, 0xc, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+0038 "8" */
    0x0, 0x3f, 0xff, 0xff, 0xc0, 0x0, 0xf, 0xff,
    0xff, 0xff, 0x0, 0x1, 0xff, 0xff, 0xff, 0xf8,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xc0, 0x8, 0xff,
    0xff, 0xff, 0xf1, 0x3, 0xe3, 0xff, 0xff, 0xfc,
    0x7c, 0x7f, 0x0, 0x0, 0x0, 0xf, 0xef, 0xf8,
    0x0, 0x0, 0x1, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0,
    0x1, 0xff, 0xff, 0x80, 0x0, 0x0, 0x1f, 0xff,
    0xf8, 0x0, 0x0, 0x1, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0,
    0x0, 0x1, 0xff, 0xff, 0x80, 0x0, 0x0, 0x1f,
    0xff, 0xf8, 0x0, 0x0, 0x1, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1,
    0xff, 0xff, 0x0, 0x0, 0x0, 0xf, 0xff, 0x87,
    0xff, 0xff, 0xfe, 0x1f, 0xe1, 0xff, 0xff, 0xff,
    0xfc, 0x70, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1f,
    0xff, 0xff, 0xff, 0xff, 0x8c, 0x3f, 0xff, 0xff,
    0xff, 0xc3, 0xf8, 0x7f, 0xff, 0xff, 0xe0, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0x80, 0x0,
    0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0,
    0x0, 0x1, 0xff, 0xff, 0x80, 0x0, 0x0, 0x1f,
    0xff, 0xf8, 0x0, 0x0, 0x1, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1,
    0xff, 0xff, 0x80, 0x0, 0x0, 0x1f, 0xff, 0xf8,
    0x0, 0x0, 0x1, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0,
    0x1, 0xff, 0xff, 0x80, 0x0, 0x0, 0x1f, 0xf7,
    0xf0, 0x0, 0x0, 0x0, 0xfe, 0x3e, 0x3f, 0xff,
    0xff, 0xc7, 0xc0, 0x8f, 0xff, 0xff, 0xff, 0x10,
    0x1, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0x80, 0x0, 0xff, 0xff, 0xff, 0xf0,
    0x0, 0x3, 0xff, 0xff, 0xfc, 0x0,

    /* U+0039 "9" */
    0x0, 0x3f, 0xff, 0xff, 0xc0, 0x0, 0xf, 0xff,
    0xff, 0xff, 0x0, 0x1, 0xff, 0xff, 0xff, 0xf8,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xc0, 0x8, 0xff,
    0xff, 0xff, 0xf1, 0x3, 0xe3, 0xff, 0xff, 0xfc,
    0x7c, 0x7f, 0x0, 0x0, 0x0, 0xf, 0xef, 0xf8,
    0x0, 0x0, 0x1, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0,
    0x1, 0xff, 0xff, 0x80, 0x0, 0x0, 0x1f, 0xff,
    0xf8, 0x0, 0x0, 0x1, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0,
    0x0, 0x1, 0xff, 0xff, 0x80, 0x0, 0x0, 0x1f,
    0xff, 0xf8, 0x0, 0x0, 0x1, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x1f, 0xff, 0xf8, 0x0, 0x0, 0x1,
    0xff, 0xff, 0x80, 0x0, 0x0, 0x1f, 0xff, 0xc7,
    0xff, 0xff, 0xfe, 0x3f, 0xe1, 0xff, 0xff, 0xff,
    0xfc, 0x70, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1f,
    0xff, 0xff, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xff,
    0xff, 0xc1, 0x0, 0x7f, 0xff, 0xff, 0xe0, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0, 0x1, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0,
    0x0, 0x1, 0xff, 0x0, 0x0, 0x0, 0x0, 0x1f,
    0xf0, 0x0, 0x0, 0x0, 0x1, 0xff, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xf0, 0x0,
    0x0, 0x0, 0x1, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xf0, 0x0, 0x0, 0x0, 0x1, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0,
    0x1, 0xff, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x3f, 0xff,
    0xff, 0xc7, 0xc0, 0xf, 0xff, 0xff, 0xff, 0x10,
    0x1, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0x80, 0xf, 0xff, 0xff, 0xff, 0xf0,
    0x1, 0xff, 0xff, 0xff, 0xfc, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 856, .box_w = 44, .box_h = 52, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 856, .box_w = 9, .box_h = 52, .ofs_x = 22, .ofs_y = 0},
    {.bitmap_index = 345, .adv_w = 856, .box_w = 44, .box_h = 52, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 631, .adv_w = 856, .box_w = 42, .box_h = 52, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 904, .adv_w = 856, .box_w = 44, .box_h = 52, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 1190, .adv_w = 856, .box_w = 44, .box_h = 52, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 1476, .adv_w = 856, .box_w = 44, .box_h = 52, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 1762, .adv_w = 856, .box_w = 42, .box_h = 52, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2035, .adv_w = 856, .box_w = 44, .box_h = 52, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 2321, .adv_w = 856, .box_w = 44, .box_h = 52, .ofs_x = 5, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 48, .range_length = 10, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t font_bahnschrift_72 = {
#else
lv_font_t font_bahnschrift_72 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 52,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if FONT_BAHNSCHRIFT_72*/
