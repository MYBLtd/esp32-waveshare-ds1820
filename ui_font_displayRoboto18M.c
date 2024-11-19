/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --font \S-FS01\hbxs\JuRo\robin\electronics\SquareLine\assets\Roboto-Medium.ttf -o \S-FS01\hbxs\JuRo\robin\electronics\SquareLine\assets\ui_font_displayRoboto18M.c --format lvgl -r 0x20-0x60 --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_DISPLAYROBOTO18M
#define UI_FONT_DISPLAYROBOTO18M 1
#endif

#if UI_FONT_DISPLAYROBOTO18M

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xc3, 0xc0,

    /* U+0022 "\"" */
    0xff, 0xff, 0xf0,

    /* U+0023 "#" */
    0x9, 0x2, 0x41, 0x91, 0xff, 0x7f, 0xc4, 0xc1,
    0x20, 0x48, 0xff, 0xbf, 0xe3, 0x60, 0x98, 0x24,
    0x0,

    /* U+0024 "$" */
    0x18, 0x18, 0x3c, 0x7e, 0x67, 0x63, 0x60, 0x70,
    0x3c, 0x1e, 0x7, 0x3, 0xc3, 0xe7, 0x7e, 0x18,
    0x18,

    /* U+0025 "%" */
    0x78, 0xf, 0xc0, 0xcc, 0x8c, 0xc8, 0xfd, 0x7,
    0xa0, 0x6, 0x0, 0x5e, 0xb, 0xf1, 0xb3, 0x13,
    0x30, 0x3f, 0x1, 0xe0,

    /* U+0026 "&" */
    0x1e, 0xf, 0xe1, 0x8c, 0x31, 0x86, 0x70, 0x7c,
    0xe, 0x3, 0xe6, 0xc6, 0xd8, 0x73, 0x8e, 0x3f,
    0xe3, 0xec,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x0, 0xcc, 0xc6, 0x23, 0x18, 0xc6, 0x31, 0x8c,
    0x61, 0x8c, 0x31, 0x86,

    /* U+0029 ")" */
    0x86, 0x18, 0x63, 0x18, 0x63, 0x18, 0xc6, 0x31,
    0x8c, 0xc6, 0x63, 0x30,

    /* U+002A "*" */
    0x18, 0x18, 0xd9, 0xff, 0x18, 0x3c, 0x66, 0x0,

    /* U+002B "+" */
    0x18, 0xc, 0x6, 0x1f, 0xff, 0xf8, 0xc0, 0x60,
    0x30, 0x18, 0x0,

    /* U+002C "," */
    0x6d, 0xbc,

    /* U+002D "-" */
    0xff, 0xc0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x6, 0x8, 0x30, 0x61, 0x83, 0x4, 0x18, 0x30,
    0x41, 0x83, 0x4, 0x18, 0x30, 0x0,

    /* U+0030 "0" */
    0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xe7, 0x7e, 0x3c,

    /* U+0031 "1" */
    0x1b, 0xff, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x80,

    /* U+0032 "2" */
    0x3c, 0x3f, 0x39, 0xd8, 0x60, 0x30, 0x30, 0x18,
    0x18, 0x18, 0x18, 0x18, 0x1f, 0xff, 0xf8,

    /* U+0033 "3" */
    0x3c, 0x7e, 0xc3, 0x3, 0x7, 0x3e, 0x3e, 0x7,
    0x3, 0xc3, 0xe7, 0x7e, 0x3c,

    /* U+0034 "4" */
    0x3, 0x3, 0x83, 0xc3, 0xe1, 0xb1, 0x99, 0x8c,
    0xc6, 0xff, 0xff, 0xc0, 0xc0, 0x60, 0x30,

    /* U+0035 "5" */
    0x7f, 0x7f, 0x60, 0x60, 0x5c, 0xfe, 0x47, 0x3,
    0x3, 0xc3, 0xe7, 0x7e, 0x3c,

    /* U+0036 "6" */
    0x1c, 0x3c, 0x70, 0x60, 0xdc, 0xfe, 0xe7, 0xc3,
    0xc3, 0xc3, 0xe7, 0x7e, 0x3c,

    /* U+0037 "7" */
    0xff, 0xff, 0xc0, 0xe0, 0x60, 0x30, 0x30, 0x18,
    0x18, 0xc, 0xc, 0x6, 0x7, 0x3, 0x0,

    /* U+0038 "8" */
    0x3c, 0x7e, 0xc7, 0xc3, 0xc3, 0x7e, 0x7e, 0xe7,
    0xc3, 0xc3, 0xe7, 0x7e, 0x3c,

    /* U+0039 "9" */
    0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0x7f,
    0x3b, 0x2, 0xe, 0x3c, 0x38,

    /* U+003A ":" */
    0xf0, 0x0, 0xf0,

    /* U+003B ";" */
    0x6c, 0x0, 0x3, 0x6d, 0xa4,

    /* U+003C "<" */
    0x3, 0xf, 0x3e, 0xf0, 0xe0, 0x78, 0x1f, 0x7,
    0x1,

    /* U+003D "=" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff,

    /* U+003E ">" */
    0x80, 0xe0, 0x7c, 0x1f, 0x7, 0x3e, 0xf0, 0xc0,
    0x0,

    /* U+003F "?" */
    0x3c, 0xff, 0x1e, 0x30, 0x61, 0xc3, 0xc, 0x18,
    0x0, 0x0, 0xc1, 0x80,

    /* U+0040 "@" */
    0x7, 0xe0, 0x3f, 0xe0, 0xe0, 0xe3, 0x80, 0x66,
    0x38, 0xdc, 0xf8, 0xf1, 0x91, 0xe6, 0x23, 0xcc,
    0x47, 0x98, 0x8f, 0x33, 0x3e, 0x7b, 0xe6, 0x73,
    0x8c, 0x0, 0xe, 0x0, 0x1f, 0xe0, 0xf, 0x80,

    /* U+0041 "A" */
    0x6, 0x0, 0xf0, 0xf, 0x0, 0xf0, 0x19, 0x81,
    0x98, 0x19, 0x83, 0xc, 0x3f, 0xc7, 0xfe, 0x60,
    0x66, 0x6, 0xe0, 0x70,

    /* U+0042 "B" */
    0xfe, 0x7f, 0xb0, 0x78, 0x3c, 0x3f, 0xfb, 0xfd,
    0x87, 0xc1, 0xe0, 0xf0, 0xff, 0xef, 0xe0,

    /* U+0043 "C" */
    0x1e, 0xf, 0xe6, 0x1b, 0x7, 0xc0, 0x30, 0xc,
    0x3, 0x0, 0xc0, 0x30, 0x76, 0x19, 0xfe, 0x1e,
    0x0,

    /* U+0044 "D" */
    0xfc, 0x7f, 0x31, 0xd8, 0x7c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe1, 0xf1, 0xdf, 0xcf, 0xc0,

    /* U+0045 "E" */
    0xff, 0xff, 0xf0, 0x18, 0xc, 0x7, 0xfb, 0xfd,
    0x80, 0xc0, 0x60, 0x30, 0x1f, 0xff, 0xf8,

    /* U+0046 "F" */
    0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xff, 0xff, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0047 "G" */
    0x1f, 0x1f, 0xe6, 0x1f, 0x83, 0xc0, 0x30, 0xc,
    0x7f, 0x1f, 0xc0, 0xf8, 0x37, 0xc, 0xff, 0x1f,
    0x0,

    /* U+0048 "H" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xff, 0xff,
    0xff, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0,
    0xc0,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+004A "J" */
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
    0x3, 0xc3, 0xe7, 0x7e, 0x3c,

    /* U+004B "K" */
    0xc1, 0xb0, 0xcc, 0x73, 0x38, 0xdc, 0x3e, 0xf,
    0x83, 0xb0, 0xce, 0x31, 0xcc, 0x33, 0xe, 0xc1,
    0xc0,

    /* U+004C "L" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0, 0xff, 0xff,

    /* U+004D "M" */
    0xe0, 0x3f, 0x1, 0xfc, 0x1f, 0xe0, 0xfd, 0x5,
    0xec, 0x6f, 0x63, 0x79, 0xb3, 0xcd, 0x9e, 0x6c,
    0xf1, 0xc7, 0x8e, 0x3c, 0x31, 0x80,

    /* U+004E "N" */
    0xc0, 0xf8, 0x3f, 0xf, 0xc3, 0xf8, 0xf7, 0x3c,
    0xcf, 0x3b, 0xc7, 0xf0, 0xfc, 0x3f, 0x7, 0xc0,
    0xc0,

    /* U+004F "O" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x7c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x7c, 0x1d, 0xc7, 0x1f,
    0xc1, 0xf0,

    /* U+0050 "P" */
    0xfe, 0x7f, 0xb0, 0xf8, 0x3c, 0x1e, 0x1f, 0xfd,
    0xfc, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x0,

    /* U+0051 "Q" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x7c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x7c, 0x1d, 0xc7, 0x1f,
    0xc1, 0xfc, 0x1, 0xc0, 0x10,

    /* U+0052 "R" */
    0xfe, 0x3f, 0xcc, 0x3b, 0x6, 0xc1, 0xb0, 0xef,
    0xf3, 0xf8, 0xc6, 0x31, 0xcc, 0x33, 0x6, 0xc1,
    0x80,

    /* U+0053 "S" */
    0x1e, 0x1f, 0x98, 0xec, 0x36, 0x1, 0xc0, 0x78,
    0xe, 0x1, 0xe0, 0xf8, 0xef, 0xe3, 0xe0,

    /* U+0054 "T" */
    0xff, 0xff, 0xf0, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x0,

    /* U+0055 "U" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf8, 0xef, 0xe3, 0xe0,

    /* U+0056 "V" */
    0xe0, 0x66, 0x6, 0x60, 0xe7, 0xc, 0x30, 0xc3,
    0x1c, 0x39, 0x81, 0x98, 0x1b, 0x80, 0xf0, 0xf,
    0x0, 0xe0, 0x6, 0x0,

    /* U+0057 "W" */
    0x61, 0x86, 0x61, 0x86, 0x63, 0xc6, 0x63, 0xc6,
    0x73, 0xce, 0x32, 0x4c, 0x36, 0x6c, 0x36, 0x6c,
    0x36, 0x6c, 0x1c, 0x38, 0x1c, 0x38, 0x1c, 0x38,
    0x1c, 0x38,

    /* U+0058 "X" */
    0x60, 0xee, 0x18, 0xc6, 0xd, 0xc1, 0xf0, 0x1e,
    0x3, 0x80, 0x78, 0x1f, 0x7, 0x70, 0xc7, 0x38,
    0x66, 0xe,

    /* U+0059 "Y" */
    0xc0, 0xf8, 0x76, 0x18, 0xcc, 0x33, 0x7, 0x81,
    0xe0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x0,

    /* U+005A "Z" */
    0xff, 0xff, 0xf0, 0x18, 0xe, 0x7, 0x3, 0x80,
    0xc0, 0x60, 0x38, 0x1c, 0x6, 0x3, 0xff, 0xff,
    0xc0,

    /* U+005B "[" */
    0xff, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,
    0xff,

    /* U+005C "\\" */
    0xc0, 0x60, 0x60, 0x70, 0x30, 0x30, 0x18, 0x18,
    0x18, 0xc, 0xc, 0xe, 0x6, 0x6, 0x3,

    /* U+005D "]" */
    0xff, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0xff,

    /* U+005E "^" */
    0x18, 0x30, 0xe1, 0xe6, 0xcc, 0xd1, 0x80,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0060 "`" */
    0x61, 0x8c
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 72, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 77, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 93, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 8, .adv_w = 176, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 164, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 42, .adv_w = 212, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 184, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 49, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 81, .adv_w = 100, .box_w = 5, .box_h = 19, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 93, .adv_w = 102, .box_w = 5, .box_h = 19, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 105, .adv_w = 127, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 113, .adv_w = 160, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 124, .adv_w = 63, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 126, .adv_w = 95, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 128, .adv_w = 80, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 114, .box_w = 7, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 143, .adv_w = 164, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 164, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 164, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 164, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 164, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 164, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 164, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 164, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 164, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 164, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 275, .adv_w = 76, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 68, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 283, .adv_w = 146, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 292, .adv_w = 161, .box_w = 8, .box_h = 6, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 298, .adv_w = 150, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 307, .adv_w = 140, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 258, .box_w = 15, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 351, .adv_w = 192, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 371, .adv_w = 182, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 188, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 188, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 163, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 158, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 196, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 205, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 480, .adv_w = 81, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 497, .adv_w = 182, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 514, .adv_w = 156, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 252, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 549, .adv_w = 204, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 566, .adv_w = 199, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 584, .adv_w = 184, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 599, .adv_w = 199, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 620, .adv_w = 180, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 637, .adv_w = 174, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 652, .adv_w = 175, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 669, .adv_w = 188, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 684, .adv_w = 186, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 704, .adv_w = 253, .box_w = 16, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 730, .adv_w = 182, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 748, .adv_w = 176, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 765, .adv_w = 173, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 782, .adv_w = 79, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 791, .adv_w = 120, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 806, .adv_w = 79, .box_w = 4, .box_h = 18, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 815, .adv_w = 123, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 822, .adv_w = 130, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 824, .adv_w = 93, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 11}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 65, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    1, 53,
    3, 3,
    3, 8,
    3, 34,
    8, 3,
    8, 8,
    8, 34,
    9, 55,
    9, 56,
    9, 58,
    13, 3,
    13, 8,
    15, 3,
    15, 8,
    16, 16,
    34, 3,
    34, 8,
    34, 32,
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    35, 53,
    35, 55,
    35, 58,
    36, 10,
    36, 53,
    36, 62,
    37, 13,
    37, 15,
    37, 34,
    37, 53,
    37, 55,
    37, 57,
    37, 58,
    37, 59,
    38, 53,
    39, 13,
    39, 15,
    39, 34,
    39, 43,
    39, 53,
    41, 34,
    41, 53,
    41, 57,
    41, 58,
    42, 34,
    42, 53,
    42, 57,
    42, 58,
    43, 34,
    44, 14,
    44, 36,
    44, 40,
    44, 48,
    44, 50,
    45, 3,
    45, 8,
    45, 34,
    45, 36,
    45, 40,
    45, 48,
    45, 50,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    46, 34,
    46, 53,
    46, 57,
    46, 58,
    47, 34,
    47, 53,
    47, 57,
    47, 58,
    48, 13,
    48, 15,
    48, 34,
    48, 53,
    48, 55,
    48, 57,
    48, 58,
    48, 59,
    49, 13,
    49, 15,
    49, 34,
    49, 43,
    49, 57,
    49, 59,
    50, 53,
    50, 55,
    50, 56,
    50, 58,
    51, 53,
    51, 55,
    51, 58,
    53, 1,
    53, 13,
    53, 14,
    53, 15,
    53, 34,
    53, 36,
    53, 40,
    53, 43,
    53, 48,
    53, 50,
    53, 52,
    53, 53,
    53, 55,
    53, 56,
    53, 58,
    54, 34,
    55, 10,
    55, 13,
    55, 14,
    55, 15,
    55, 34,
    55, 36,
    55, 40,
    55, 48,
    55, 50,
    55, 62,
    56, 10,
    56, 13,
    56, 14,
    56, 15,
    56, 34,
    56, 53,
    56, 62,
    57, 14,
    57, 36,
    57, 40,
    57, 48,
    57, 50,
    57, 55,
    58, 7,
    58, 10,
    58, 11,
    58, 13,
    58, 14,
    58, 15,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 52,
    58, 53,
    58, 54,
    58, 55,
    58, 56,
    58, 57,
    58, 58,
    58, 62,
    59, 34,
    59, 36,
    59, 40,
    59, 48,
    59, 50,
    60, 43,
    60, 54
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -8, -5, -5, -17, -5, -5, -17, 3,
    5, 3, -40, -40, -40, -40, -35, -17,
    -17, -11, -3, -3, -3, -3, -17, -2,
    -11, -5, -21, -4, -3, -8, -4, -4,
    -2, -17, -17, -3, -12, -3, -3, -6,
    -3, 3, -39, -39, -27, -29, 3, 3,
    -4, 2, -4, 3, -4, 2, -4, -3,
    -23, -4, -4, -4, -4, -40, -40, 3,
    -9, -9, -9, -9, -29, -3, -29, -13,
    -39, 3, -4, 2, -4, 3, -4, 2,
    -4, -17, -17, -3, -12, -3, -3, -6,
    -3, -57, -57, -25, -26, -7, -5, -5,
    -4, -3, -5, -7, -3, -7, -8, -36,
    -38, -36, -17, -4, -4, -30, -4, -4,
    -2, 2, 2, 2, 2, -3, 3, -30,
    -22, -30, -11, -2, -2, -2, -2, 2,
    2, -20, -8, -20, -6, 2, 2, -22,
    -4, -4, -4, -4, 2, -4, 3, -7,
    -32, -21, -32, -21, -4, -4, -13, -4,
    -4, -2, 2, -13, 3, 2, 2, 3,
    3, 2, -4, -4, -4, -4, -3, -3
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 168,
    .glyph_ids_size = 0
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
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
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
const lv_font_t ui_font_displayRoboto18M = {
#else
lv_font_t ui_font_displayRoboto18M = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 19,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_DISPLAYROBOTO18M*/

