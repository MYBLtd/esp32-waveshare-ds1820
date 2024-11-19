/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font \S-FS01\hbxs\JuRo\robin\electronics\SquareLine\assets\Roboto-Regular.ttf -o \S-FS01\hbxs\JuRo\robin\electronics\SquareLine\assets\ui_font_displayRoboto16.c --format lvgl -r 0x20-0xff --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_DISPLAYROBOTO16
#define UI_FONT_DISPLAYROBOTO16 1
#endif

#if UI_FONT_DISPLAYROBOTO16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0x10,

    /* U+0022 "\"" */
    0xb6, 0xd0,

    /* U+0023 "#" */
    0xb, 0x9, 0x4, 0x8f, 0xf1, 0x20, 0x90, 0x48,
    0x48, 0xff, 0x12, 0x9, 0x4, 0x80,

    /* U+0024 "$" */
    0x10, 0x20, 0xf3, 0x34, 0x28, 0x18, 0x1c, 0x4,
    0x6, 0xe, 0x37, 0xc2, 0x4, 0x0,

    /* U+0025 "%" */
    0x70, 0x22, 0x48, 0x92, 0x28, 0x72, 0x1, 0x0,
    0x98, 0x29, 0x12, 0x4c, 0x92, 0x24, 0x6,

    /* U+0026 "&" */
    0x38, 0x22, 0x11, 0x8, 0x86, 0x81, 0xc1, 0xc1,
    0xb2, 0x8d, 0x43, 0xb1, 0xcf, 0xa0,

    /* U+0027 "'" */
    0xf0,

    /* U+0028 "(" */
    0x32, 0x44, 0x88, 0x88, 0x88, 0x88, 0x44, 0x42,
    0x0,

    /* U+0029 ")" */
    0xc4, 0x22, 0x11, 0x11, 0x11, 0x11, 0x22, 0x64,
    0x0,

    /* U+002A "*" */
    0x10, 0x23, 0x51, 0xe3, 0x85, 0x0, 0x0,

    /* U+002B "+" */
    0x10, 0x10, 0x10, 0xff, 0x10, 0x10, 0x10, 0x10,

    /* U+002C "," */
    0x56,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x4, 0x30, 0x82, 0x10, 0x41, 0x8, 0x21, 0x84,
    0x10, 0xc0,

    /* U+0030 "0" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+0031 "1" */
    0x1f, 0x91, 0x11, 0x11, 0x11, 0x11,

    /* U+0032 "2" */
    0x3c, 0x8e, 0xc, 0x10, 0x20, 0x83, 0xc, 0x30,
    0xc1, 0x7, 0xf0,

    /* U+0033 "3" */
    0x7d, 0x8e, 0x8, 0x10, 0x67, 0x81, 0x81, 0x3,
    0x7, 0x13, 0xc0,

    /* U+0034 "4" */
    0x4, 0xc, 0x1c, 0x14, 0x34, 0x24, 0x44, 0xc4,
    0xff, 0x4, 0x4, 0x4,

    /* U+0035 "5" */
    0x7e, 0x81, 0x2, 0x7, 0xc8, 0x80, 0x81, 0x3,
    0x85, 0x11, 0xc0,

    /* U+0036 "6" */
    0x1c, 0x41, 0x4, 0xb, 0x98, 0xa0, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+0037 "7" */
    0xff, 0x3, 0x2, 0x6, 0x4, 0xc, 0x8, 0x18,
    0x18, 0x10, 0x30, 0x20,

    /* U+0038 "8" */
    0x7d, 0x8e, 0xc, 0x1c, 0x6f, 0xb1, 0xc1, 0x83,
    0x7, 0x13, 0xe0,

    /* U+0039 "9" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x51, 0x9d, 0x2,
    0x8, 0x33, 0x80,

    /* U+003A ":" */
    0xf0, 0x3, 0xc0,

    /* U+003B ";" */
    0x6c, 0x0, 0x3, 0x6d, 0x20,

    /* U+003C "<" */
    0x6, 0x3d, 0xe6, 0xe, 0x7, 0x81, 0x80,

    /* U+003D "=" */
    0xfe, 0x0, 0x0, 0xf, 0xe0,

    /* U+003E ">" */
    0x81, 0xc0, 0xe0, 0x31, 0xce, 0x30, 0x0,

    /* U+003F "?" */
    0x7b, 0x38, 0x41, 0x4, 0x21, 0x8, 0x20, 0x0,
    0x8,

    /* U+0040 "@" */
    0xf, 0x80, 0x83, 0x8, 0xc, 0x87, 0x2c, 0x48,
    0xc4, 0x46, 0x22, 0x31, 0x11, 0x98, 0x8c, 0x4c,
    0x62, 0x64, 0x9d, 0xc6, 0x0, 0x18, 0x0, 0x3e,
    0x0,

    /* U+0041 "A" */
    0xc, 0x3, 0x0, 0xe0, 0x68, 0x13, 0x4, 0xc3,
    0x10, 0x86, 0x7f, 0x98, 0x24, 0xf, 0x3,

    /* U+0042 "B" */
    0xfd, 0xe, 0xc, 0x18, 0x7f, 0xa1, 0xc1, 0x83,
    0x6, 0x1f, 0xe0,

    /* U+0043 "C" */
    0x3c, 0x42, 0x43, 0x81, 0x80, 0x80, 0x80, 0x80,
    0x81, 0x43, 0x42, 0x3c,

    /* U+0044 "D" */
    0xf8, 0x86, 0x82, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x82, 0x86, 0xf8,

    /* U+0045 "E" */
    0xff, 0x2, 0x4, 0x8, 0x1f, 0xa0, 0x40, 0x81,
    0x2, 0x7, 0xf0,

    /* U+0046 "F" */
    0xff, 0x2, 0x4, 0x8, 0x10, 0x3f, 0x40, 0x81,
    0x2, 0x4, 0x0,

    /* U+0047 "G" */
    0x3e, 0x30, 0x90, 0x30, 0x8, 0x4, 0x2, 0x1f,
    0x1, 0x80, 0xa0, 0x58, 0x63, 0xe0,

    /* U+0048 "H" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0xff, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81,

    /* U+0049 "I" */
    0xff, 0xf0,

    /* U+004A "J" */
    0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x81, 0x3,
    0x7, 0x13, 0xc0,

    /* U+004B "K" */
    0x82, 0x86, 0x8c, 0x98, 0xb0, 0xf0, 0xf0, 0x98,
    0x8c, 0x84, 0x86, 0x83,

    /* U+004C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0x82, 0x8,
    0x3f,

    /* U+004D "M" */
    0xc0, 0x78, 0xf, 0x83, 0xf0, 0x7a, 0xb, 0x63,
    0x64, 0x4c, 0xd9, 0x9b, 0x31, 0x46, 0x38, 0xc2,
    0x10,

    /* U+004E "N" */
    0x81, 0xc1, 0xe1, 0xe1, 0xb1, 0x99, 0x99, 0x8d,
    0x85, 0x87, 0x83, 0x81,

    /* U+004F "O" */
    0x3e, 0x31, 0x90, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x80, 0xa0, 0x98, 0xc7, 0xc0,

    /* U+0050 "P" */
    0xfc, 0x82, 0x81, 0x81, 0x81, 0x82, 0xfc, 0x80,
    0x80, 0x80, 0x80, 0x80,

    /* U+0051 "Q" */
    0x3e, 0x31, 0x90, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x80, 0xa0, 0xd8, 0xc7, 0xe0, 0x18, 0x4,

    /* U+0052 "R" */
    0xfc, 0x41, 0x20, 0x50, 0x28, 0x14, 0x1b, 0xf9,
    0xc, 0x86, 0x41, 0x20, 0xd0, 0x20,

    /* U+0053 "S" */
    0x1c, 0x62, 0x41, 0x40, 0x60, 0x38, 0xe, 0x3,
    0x1, 0x81, 0x43, 0x3c,

    /* U+0054 "T" */
    0xff, 0x84, 0x2, 0x1, 0x0, 0x80, 0x40, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x1, 0x0,

    /* U+0055 "U" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x42, 0x3c,

    /* U+0056 "V" */
    0xc0, 0xd0, 0x26, 0x9, 0x86, 0x21, 0xc, 0x41,
    0x30, 0x48, 0x1a, 0x3, 0x80, 0xc0, 0x30,

    /* U+0057 "W" */
    0x43, 0xd, 0xc, 0x36, 0x30, 0x98, 0xe2, 0x26,
    0x98, 0x92, 0x62, 0x4d, 0xd, 0x14, 0x3c, 0x50,
    0x61, 0xc1, 0x86, 0x6, 0x8,

    /* U+0058 "X" */
    0x61, 0x98, 0x63, 0x30, 0x48, 0x1e, 0x3, 0x0,
    0xc0, 0x78, 0x12, 0xc, 0xc6, 0x19, 0x82,

    /* U+0059 "Y" */
    0xc1, 0xa0, 0x98, 0xc4, 0x43, 0x60, 0xa0, 0x70,
    0x10, 0x8, 0x4, 0x2, 0x1, 0x0,

    /* U+005A "Z" */
    0xff, 0x3, 0x6, 0x4, 0xc, 0x18, 0x18, 0x30,
    0x20, 0x60, 0xc0, 0xff,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x92, 0x49, 0x27,

    /* U+005C "\\" */
    0xc1, 0x6, 0x8, 0x20, 0xc1, 0x4, 0x18, 0x20,
    0xc1, 0x4,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x24, 0x92, 0x4f,

    /* U+005E "^" */
    0x10, 0xc3, 0x9a, 0x4d, 0x10,

    /* U+005F "_" */
    0xfe,

    /* U+0060 "`" */
    0xc6, 0x20,

    /* U+0061 "a" */
    0x7b, 0x38, 0x41, 0x7f, 0x18, 0x63, 0x7c,

    /* U+0062 "b" */
    0x81, 0x2, 0x5, 0xcc, 0x50, 0x60, 0xc1, 0x83,
    0x7, 0x17, 0xc0,

    /* U+0063 "c" */
    0x3c, 0x8e, 0x1c, 0x8, 0x10, 0x20, 0xa3, 0x3c,

    /* U+0064 "d" */
    0x2, 0x4, 0x9, 0xf4, 0x70, 0x60, 0xc1, 0x83,
    0x5, 0x19, 0xf0,

    /* U+0065 "e" */
    0x38, 0x8a, 0xc, 0x1f, 0xf0, 0x20, 0x21, 0x3c,

    /* U+0066 "f" */
    0x19, 0x8, 0x4f, 0x90, 0x84, 0x21, 0x8, 0x42,
    0x0,

    /* U+0067 "g" */
    0x3e, 0x8e, 0xc, 0x18, 0x30, 0x60, 0xa3, 0x3e,
    0x7, 0x13, 0xc0,

    /* U+0068 "h" */
    0x82, 0x8, 0x2e, 0xc6, 0x18, 0x61, 0x86, 0x18,
    0x61,

    /* U+0069 "i" */
    0x9f, 0xf0,

    /* U+006A "j" */
    0x20, 0x12, 0x49, 0x24, 0x92, 0x70,

    /* U+006B "k" */
    0x81, 0x2, 0x4, 0x69, 0x96, 0x38, 0x70, 0xb1,
    0x32, 0x34, 0x60,

    /* U+006C "l" */
    0xff, 0xf0,

    /* U+006D "m" */
    0xfb, 0xd8, 0xc6, 0x10, 0xc2, 0x18, 0x43, 0x8,
    0x61, 0xc, 0x21, 0x84, 0x20,

    /* U+006E "n" */
    0xbb, 0x18, 0x61, 0x86, 0x18, 0x61, 0x84,

    /* U+006F "o" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xa2, 0x38,

    /* U+0070 "p" */
    0xf9, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xe2, 0xf9,
    0x2, 0x4, 0x0,

    /* U+0071 "q" */
    0x3e, 0x8e, 0xc, 0x18, 0x30, 0x60, 0xa3, 0x3e,
    0x4, 0x8, 0x10,

    /* U+0072 "r" */
    0xfc, 0x88, 0x88, 0x88, 0x80,

    /* U+0073 "s" */
    0x39, 0x14, 0x58, 0x38, 0x38, 0x71, 0x78,

    /* U+0074 "t" */
    0x21, 0x3e, 0x42, 0x10, 0x84, 0x21, 0x6,

    /* U+0075 "u" */
    0x86, 0x18, 0x61, 0x86, 0x18, 0x63, 0x7c,

    /* U+0076 "v" */
    0xc2, 0x85, 0x9b, 0x22, 0x45, 0x8e, 0xc, 0x18,

    /* U+0077 "w" */
    0xc6, 0x34, 0x62, 0x46, 0x26, 0xf6, 0x29, 0x42,
    0x94, 0x39, 0xc3, 0xc, 0x10, 0x80,

    /* U+0078 "x" */
    0x42, 0x66, 0x3c, 0x18, 0x18, 0x18, 0x2c, 0x66,
    0x42,

    /* U+0079 "y" */
    0x87, 0x8b, 0x32, 0x66, 0x8d, 0xe, 0x18, 0x30,
    0x40, 0x86, 0x0,

    /* U+007A "z" */
    0xfe, 0xc, 0x30, 0xc3, 0x6, 0x18, 0x60, 0xfe,

    /* U+007B "{" */
    0x19, 0x8, 0x42, 0x10, 0x98, 0x21, 0x8, 0x42,
    0x10, 0x60,

    /* U+007C "|" */
    0xff, 0xfc,

    /* U+007D "}" */
    0xc1, 0x8, 0x42, 0x10, 0xc3, 0x31, 0x8, 0x42,
    0x13, 0x0,

    /* U+007E "~" */
    0x70, 0xcc, 0x61, 0xc0,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0x9f, 0xe0,

    /* U+00A2 "¢" */
    0x10, 0x20, 0xf2, 0x38, 0x70, 0x20, 0x40, 0x86,
    0x8c, 0xf0, 0x81, 0x0,

    /* U+00A3 "£" */
    0x1e, 0x13, 0x21, 0x20, 0x20, 0x20, 0xf8, 0x20,
    0x20, 0x20, 0x20, 0xff,

    /* U+00A4 "¤" */
    0xbe, 0xf1, 0xf0, 0x70, 0x18, 0xc, 0x6, 0x3,
    0x83, 0xe3, 0xde, 0x40,

    /* U+00A5 "¥" */
    0xc1, 0xb1, 0x88, 0x86, 0xc1, 0x40, 0xe1, 0xfc,
    0x10, 0x7f, 0x4, 0x2, 0x1, 0x0,

    /* U+00A6 "¦" */
    0xfc, 0xfc,

    /* U+00A7 "§" */
    0x3e, 0x63, 0x41, 0x40, 0x60, 0x7c, 0x86, 0x81,
    0x81, 0x71, 0x3e, 0x7, 0x1, 0x81, 0xc3, 0x3e,

    /* U+00A8 "¨" */
    0x88,

    /* U+00A9 "©" */
    0x1f, 0x6, 0x31, 0x39, 0x68, 0xb9, 0x3, 0x20,
    0x64, 0xc, 0x89, 0xce, 0x68, 0x8, 0xc6, 0xf,
    0x80,

    /* U+00AA "ª" */
    0x74, 0x5f, 0x19, 0xfc,

    /* U+00AB "«" */
    0x29, 0x6d, 0x34, 0x48, 0xa0,

    /* U+00AC "¬" */
    0xfc, 0x10, 0x40,

    /* U+00AD "­" */
    0xf0,

    /* U+00AE "®" */
    0x1f, 0x6, 0x31, 0x79, 0x68, 0xb9, 0x13, 0x3c,
    0x64, 0x4c, 0x89, 0xd1, 0x68, 0x8, 0xc6, 0xf,
    0x80,

    /* U+00AF "¯" */
    0xf8,

    /* U+00B0 "°" */
    0x69, 0x96,

    /* U+00B1 "±" */
    0x10, 0x20, 0x47, 0xf1, 0x2, 0x4, 0x8, 0x1,
    0xfc,

    /* U+00B2 "²" */
    0x74, 0x84, 0x44, 0x7c,

    /* U+00B3 "³" */
    0x78, 0x4c, 0x1c, 0xb8,

    /* U+00B4 "´" */
    0x6b, 0x0,

    /* U+00B5 "µ" */
    0x86, 0x18, 0x61, 0x86, 0x18, 0x73, 0xfe, 0x8,
    0x20,

    /* U+00B6 "¶" */
    0x3d, 0xf7, 0xff, 0x7d, 0xf3, 0xc1, 0x4, 0x10,
    0x41,

    /* U+00B7 "·" */
    0xf0,

    /* U+00B8 "¸" */
    0xb6,

    /* U+00B9 "¹" */
    0x74, 0x92, 0x40,

    /* U+00BA "º" */
    0x74, 0xe3, 0x19, 0xb8,

    /* U+00BB "»" */
    0x91, 0x26, 0xdb, 0x4a, 0x40,

    /* U+00BC "¼" */
    0x60, 0x14, 0x10, 0x84, 0x11, 0x2, 0x20, 0x48,
    0x83, 0x30, 0x4a, 0x13, 0x46, 0x7c, 0x1, 0x0,

    /* U+00BD "½" */
    0x60, 0x14, 0x20, 0x88, 0x11, 0x2, 0x40, 0x5b,
    0x82, 0xc8, 0x81, 0x10, 0xc4, 0x30, 0xf, 0x80,

    /* U+00BE "¾" */
    0x70, 0x4, 0x84, 0x8, 0x43, 0x8, 0x9, 0x84,
    0x90, 0x72, 0x20, 0x66, 0x4, 0xa0, 0x9a, 0x9,
    0xf0, 0x2,

    /* U+00BF "¿" */
    0x10, 0x0, 0x4, 0x10, 0x84, 0x20, 0x82, 0x1c,
    0xde,

    /* U+00C0 "À" */
    0x18, 0x2, 0x0, 0x40, 0x30, 0xc, 0x3, 0x81,
    0xa0, 0x4c, 0x13, 0xc, 0x42, 0x19, 0xfe, 0x60,
    0x90, 0x3c, 0xc,

    /* U+00C1 "Á" */
    0x2, 0x1, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x81,
    0xa0, 0x4c, 0x13, 0xc, 0x42, 0x19, 0xfe, 0x60,
    0x90, 0x3c, 0xc,

    /* U+00C2 "Â" */
    0xc, 0x6, 0x80, 0x0, 0x30, 0xc, 0x3, 0x81,
    0xa0, 0x4c, 0x13, 0xc, 0x42, 0x19, 0xfe, 0x60,
    0x90, 0x3c, 0xc,

    /* U+00C3 "Ã" */
    0x1a, 0x9, 0x80, 0x0, 0x30, 0x1c, 0x7, 0x1,
    0x60, 0xd8, 0x32, 0x8, 0xc6, 0x31, 0xfc, 0x41,
    0xb0, 0x28, 0xc,

    /* U+00C4 "Ä" */
    0x11, 0x0, 0x0, 0xe0, 0x38, 0x1a, 0x6, 0xc1,
    0xb0, 0xc4, 0x31, 0x8c, 0x63, 0xf9, 0x83, 0x60,
    0xd0, 0x10,

    /* U+00C5 "Å" */
    0x8, 0xa, 0x5, 0x3, 0x80, 0x80, 0x40, 0x50,
    0x28, 0x36, 0x13, 0x8, 0x8c, 0x67, 0xf2, 0xb,
    0x7, 0x1,

    /* U+00C6 "Æ" */
    0x1, 0xfe, 0x7, 0x0, 0xa, 0x0, 0x34, 0x0,
    0xc8, 0x1, 0x9f, 0x86, 0x20, 0xc, 0x40, 0x3f,
    0x80, 0x41, 0x1, 0x82, 0x6, 0x7, 0xf0,

    /* U+00C7 "Ç" */
    0x3e, 0x31, 0x90, 0x50, 0x38, 0x4, 0x2, 0x1,
    0x0, 0x81, 0xa0, 0x98, 0xc7, 0xc0, 0xc0, 0x20,
    0x20,

    /* U+00C8 "È" */
    0x60, 0x40, 0x7, 0xf8, 0x10, 0x20, 0x40, 0xfd,
    0x2, 0x4, 0x8, 0x10, 0x3f, 0x80,

    /* U+00C9 "É" */
    0x18, 0x20, 0x7, 0xf8, 0x10, 0x20, 0x40, 0xfd,
    0x2, 0x4, 0x8, 0x10, 0x3f, 0x80,

    /* U+00CA "Ê" */
    0x30, 0x90, 0x7, 0xf8, 0x10, 0x20, 0x40, 0xfd,
    0x2, 0x4, 0x8, 0x10, 0x3f, 0x80,

    /* U+00CB "Ë" */
    0x44, 0x3, 0xfc, 0x8, 0x10, 0x20, 0x7e, 0x81,
    0x2, 0x4, 0x8, 0x1f, 0xc0,

    /* U+00CC "Ì" */
    0x44, 0x12, 0x49, 0x24, 0x92, 0x48,

    /* U+00CD "Í" */
    0x50, 0x49, 0x24, 0x92, 0x49, 0x20,

    /* U+00CE "Î" */
    0x22, 0x80, 0x42, 0x10, 0x84, 0x21, 0x8, 0x42,
    0x10, 0x80,

    /* U+00CF "Ï" */
    0x88, 0x8, 0x42, 0x10, 0x84, 0x21, 0x8, 0x42,
    0x10,

    /* U+00D0 "Ð" */
    0x3e, 0x11, 0x88, 0x44, 0x12, 0xf, 0xc4, 0x82,
    0x41, 0x20, 0x90, 0x88, 0xc7, 0xc0,

    /* U+00D1 "Ñ" */
    0x32, 0x4c, 0x0, 0x81, 0xc1, 0xe1, 0xe1, 0xb1,
    0x99, 0x99, 0x8d, 0x85, 0x87, 0x83, 0x81,

    /* U+00D2 "Ò" */
    0x30, 0x8, 0x2, 0x0, 0x3, 0xe3, 0x19, 0x5,
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xa, 0x9,
    0x8c, 0x7c,

    /* U+00D3 "Ó" */
    0x6, 0x2, 0x2, 0x0, 0x3, 0xe3, 0x19, 0x5,
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xa, 0x9,
    0x8c, 0x7c,

    /* U+00D4 "Ô" */
    0x8, 0xe, 0xd, 0x80, 0x3, 0xe3, 0x19, 0x5,
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xa, 0x9,
    0x8c, 0x7c,

    /* U+00D5 "Õ" */
    0x3b, 0x33, 0x0, 0x7, 0xc6, 0x32, 0xa, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x14, 0x13, 0x18,
    0xf8,

    /* U+00D6 "Ö" */
    0x22, 0x0, 0xf, 0x8c, 0x64, 0x14, 0x6, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x26, 0x31, 0xf0,

    /* U+00D7 "×" */
    0x85, 0x99, 0xe1, 0x87, 0x99, 0xa1, 0x80,

    /* U+00D8 "Ø" */
    0x1e, 0xb1, 0x90, 0x70, 0x58, 0x4c, 0x26, 0x23,
    0x31, 0x90, 0xf0, 0x98, 0xcf, 0x88, 0x0,

    /* U+00D9 "Ù" */
    0x30, 0x18, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+00DA "Ú" */
    0xc, 0x8, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+00DB "Û" */
    0x18, 0x24, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+00DC "Ü" */
    0x24, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+00DD "Ý" */
    0x4, 0x6, 0x2, 0x18, 0x34, 0x13, 0x18, 0x88,
    0x6c, 0x14, 0xe, 0x2, 0x1, 0x0, 0x80, 0x40,
    0x20,

    /* U+00DE "Þ" */
    0x81, 0x2, 0x7, 0xc8, 0x70, 0x60, 0xc3, 0xf9,
    0x2, 0x4, 0x0,

    /* U+00DF "ß" */
    0x78, 0xc4, 0x84, 0x84, 0x88, 0x88, 0x88, 0x86,
    0x83, 0x81, 0x81, 0xbe,

    /* U+00E0 "à" */
    0x60, 0xc0, 0x1e, 0xce, 0x10, 0x5f, 0xc6, 0x18,
    0xdf,

    /* U+00E1 "á" */
    0x8, 0x40, 0x1e, 0xce, 0x10, 0x5f, 0xc6, 0x18,
    0xdf,

    /* U+00E2 "â" */
    0x31, 0xa0, 0x1e, 0xce, 0x10, 0x5f, 0xc6, 0x18,
    0xdf,

    /* U+00E3 "ã" */
    0x7c, 0x0, 0x1e, 0xce, 0x10, 0x5f, 0xc6, 0x18,
    0xdf,

    /* U+00E4 "ä" */
    0x24, 0x0, 0x1e, 0xe7, 0x10, 0x5f, 0xc7, 0x1c,
    0xdf,

    /* U+00E5 "å" */
    0x10, 0xa2, 0x86, 0x1, 0xec, 0xe1, 0x5, 0xfc,
    0x61, 0x8d, 0xf0,

    /* U+00E6 "æ" */
    0x79, 0xcc, 0xe2, 0x84, 0x10, 0x41, 0x7f, 0xfc,
    0x40, 0x84, 0x8, 0xe1, 0x79, 0xe0,

    /* U+00E7 "ç" */
    0x3c, 0x8e, 0xc, 0x8, 0x10, 0x20, 0xa3, 0x3c,
    0x30, 0x21, 0x80,

    /* U+00E8 "è" */
    0x60, 0x20, 0x1, 0xc4, 0x50, 0x60, 0xff, 0x81,
    0x1, 0x9, 0xe0,

    /* U+00E9 "é" */
    0xc, 0x30, 0x1, 0xc4, 0x50, 0x60, 0xff, 0x81,
    0x1, 0x9, 0xe0,

    /* U+00EA "ê" */
    0x38, 0xd8, 0x1, 0xc4, 0x50, 0x60, 0xff, 0x81,
    0x1, 0x9, 0xe0,

    /* U+00EB "ë" */
    0x24, 0x0, 0x1, 0xc6, 0x58, 0x70, 0xff, 0xc1,
    0x81, 0x99, 0xe0,

    /* U+00EC "ì" */
    0x44, 0x12, 0x49, 0x24, 0x90,

    /* U+00ED "í" */
    0x50, 0x49, 0x24, 0x92, 0x40,

    /* U+00EE "î" */
    0x22, 0x80, 0x42, 0x10, 0x84, 0x21, 0x8, 0x40,

    /* U+00EF "ï" */
    0x88, 0x0, 0x42, 0x10, 0x84, 0x21, 0x8, 0x40,

    /* U+00F0 "ð" */
    0x40, 0xe8, 0x61, 0xe0, 0x47, 0x51, 0xc1, 0x83,
    0x6, 0xa, 0x23, 0x80,

    /* U+00F1 "ñ" */
    0x66, 0x60, 0x2e, 0xc6, 0x18, 0x61, 0x86, 0x18,
    0x61,

    /* U+00F2 "ò" */
    0x60, 0x60, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+00F3 "ó" */
    0x8, 0x20, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+00F4 "ô" */
    0x30, 0xd0, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+00F5 "õ" */
    0x7c, 0x0, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+00F6 "ö" */
    0x24, 0x0, 0x1, 0xc6, 0x58, 0x70, 0xe1, 0xc3,
    0x85, 0x91, 0xc0,

    /* U+00F7 "÷" */
    0x18, 0x18, 0x0, 0x0, 0xff, 0x0, 0x0, 0x18,
    0x18,

    /* U+00F8 "ø" */
    0x4, 0x79, 0x34, 0x58, 0xb2, 0x64, 0xd1, 0x64,
    0xf1, 0x0,

    /* U+00F9 "ù" */
    0x60, 0xc0, 0x21, 0x86, 0x18, 0x61, 0x86, 0x18,
    0xdf,

    /* U+00FA "ú" */
    0x18, 0x40, 0x21, 0x86, 0x18, 0x61, 0x86, 0x18,
    0xdf,

    /* U+00FB "û" */
    0x31, 0x20, 0x21, 0x86, 0x18, 0x61, 0x86, 0x18,
    0xdf,

    /* U+00FC "ü" */
    0x44, 0x0, 0x21, 0x86, 0x18, 0x61, 0x86, 0x18,
    0xdf,

    /* U+00FD "ý" */
    0x8, 0x20, 0x4, 0x3c, 0x59, 0x93, 0x34, 0x68,
    0x70, 0xc1, 0x82, 0x4, 0x30, 0x0,

    /* U+00FE "þ" */
    0x81, 0x2, 0x7, 0xcc, 0x50, 0x60, 0xc1, 0x83,
    0x7, 0x17, 0xc8, 0x10, 0x20, 0x0,

    /* U+00FF "ÿ" */
    0x44, 0x0, 0x4, 0x3c, 0x58, 0x93, 0x34, 0x68,
    0xf0, 0xc1, 0x83, 0xc, 0x30, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 63, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 66, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 82, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 5, .adv_w = 158, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 144, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 33, .adv_w = 188, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 159, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 45, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 63, .adv_w = 88, .box_w = 4, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 72, .adv_w = 89, .box_w = 4, .box_h = 17, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 81, .adv_w = 110, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 88, .adv_w = 145, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 96, .adv_w = 50, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 97, .adv_w = 71, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 98, .adv_w = 67, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 106, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 109, .adv_w = 144, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 144, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 144, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 144, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 144, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 144, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 144, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 144, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 62, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 219, .adv_w = 54, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 224, .adv_w = 130, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 231, .adv_w = 141, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 236, .adv_w = 134, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 243, .adv_w = 121, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 230, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 277, .adv_w = 167, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 159, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 303, .adv_w = 167, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 168, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 142, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 174, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 183, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 70, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 141, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 161, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 138, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 224, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 183, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 176, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 452, .adv_w = 162, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 464, .adv_w = 176, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 480, .adv_w = 158, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 494, .adv_w = 152, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 153, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 520, .adv_w = 166, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 532, .adv_w = 163, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 547, .adv_w = 227, .box_w = 14, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 568, .adv_w = 161, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 597, .adv_w = 153, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 609, .adv_w = 68, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 615, .adv_w = 105, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 625, .adv_w = 68, .box_w = 3, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 631, .adv_w = 107, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 636, .adv_w = 116, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 637, .adv_w = 79, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 639, .adv_w = 139, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 646, .adv_w = 144, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 657, .adv_w = 134, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 665, .adv_w = 144, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 676, .adv_w = 136, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 684, .adv_w = 89, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 693, .adv_w = 144, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 704, .adv_w = 141, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 713, .adv_w = 62, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 61, .box_w = 3, .box_h = 15, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 721, .adv_w = 130, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 62, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 734, .adv_w = 224, .box_w = 11, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 747, .adv_w = 141, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 754, .adv_w = 146, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 762, .adv_w = 144, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 773, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 784, .adv_w = 87, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 789, .adv_w = 132, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 796, .adv_w = 84, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 803, .adv_w = 141, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 810, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 818, .adv_w = 192, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 832, .adv_w = 127, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 841, .adv_w = 121, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 852, .adv_w = 127, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 860, .adv_w = 87, .box_w = 5, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 870, .adv_w = 62, .box_w = 1, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 872, .adv_w = 87, .box_w = 5, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 882, .adv_w = 174, .box_w = 9, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 886, .adv_w = 63, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 887, .adv_w = 62, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 889, .adv_w = 140, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 901, .adv_w = 149, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 913, .adv_w = 183, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 925, .adv_w = 134, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 939, .adv_w = 61, .box_w = 1, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 941, .adv_w = 157, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 957, .adv_w = 107, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 958, .adv_w = 201, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 975, .adv_w = 114, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 979, .adv_w = 120, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 984, .adv_w = 142, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 987, .adv_w = 71, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 988, .adv_w = 201, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1005, .adv_w = 117, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 1006, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 1008, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1017, .adv_w = 94, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1021, .adv_w = 94, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1025, .adv_w = 80, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 1027, .adv_w = 145, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1036, .adv_w = 125, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1045, .adv_w = 67, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1046, .adv_w = 63, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1047, .adv_w = 94, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1050, .adv_w = 116, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1054, .adv_w = 120, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1059, .adv_w = 188, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1075, .adv_w = 199, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1091, .adv_w = 199, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1109, .adv_w = 121, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1118, .adv_w = 167, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1137, .adv_w = 167, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1156, .adv_w = 167, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1175, .adv_w = 167, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1194, .adv_w = 167, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1212, .adv_w = 167, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1230, .adv_w = 239, .box_w = 15, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1253, .adv_w = 167, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1270, .adv_w = 146, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1284, .adv_w = 146, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1298, .adv_w = 146, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1312, .adv_w = 146, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1325, .adv_w = 70, .box_w = 3, .box_h = 15, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1331, .adv_w = 70, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1337, .adv_w = 70, .box_w = 5, .box_h = 15, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1347, .adv_w = 70, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1356, .adv_w = 172, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1370, .adv_w = 183, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1385, .adv_w = 176, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1403, .adv_w = 176, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1421, .adv_w = 176, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1439, .adv_w = 176, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1456, .adv_w = 176, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1472, .adv_w = 137, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1479, .adv_w = 176, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1494, .adv_w = 166, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1509, .adv_w = 166, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1524, .adv_w = 166, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1539, .adv_w = 166, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1553, .adv_w = 154, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1570, .adv_w = 151, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1581, .adv_w = 152, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1593, .adv_w = 139, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1602, .adv_w = 139, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1611, .adv_w = 139, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1620, .adv_w = 139, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1629, .adv_w = 139, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1638, .adv_w = 139, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1649, .adv_w = 216, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1663, .adv_w = 134, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1674, .adv_w = 136, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1685, .adv_w = 136, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1696, .adv_w = 136, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1707, .adv_w = 136, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1718, .adv_w = 63, .box_w = 3, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1723, .adv_w = 63, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1728, .adv_w = 63, .box_w = 5, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1736, .adv_w = 63, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1744, .adv_w = 150, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1756, .adv_w = 141, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1765, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1776, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1787, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1798, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1809, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1820, .adv_w = 146, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1829, .adv_w = 145, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1839, .adv_w = 141, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1848, .adv_w = 141, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1857, .adv_w = 141, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1866, .adv_w = 141, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1875, .adv_w = 121, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1889, .adv_w = 148, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1903, .adv_w = 121, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 160, .range_length = 96, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 1, 0, 2, 0, 0, 0, 0,
    2, 3, 0, 0, 0, 4, 0, 4,
    5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 7, 8, 9, 10, 11,
    0, 12, 12, 13, 14, 15, 12, 12,
    9, 16, 17, 18, 0, 19, 13, 20,
    21, 22, 23, 24, 25, 0, 0, 0,
    0, 0, 26, 27, 28, 0, 29, 30,
    0, 31, 0, 0, 32, 0, 31, 31,
    33, 27, 0, 34, 0, 35, 0, 36,
    37, 38, 36, 39, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    6, 6, 6, 6, 6, 6, 0, 8,
    10, 10, 10, 10, 12, 12, 12, 12,
    9, 12, 9, 9, 9, 9, 9, 0,
    0, 13, 13, 13, 13, 23, 0, 0,
    26, 26, 26, 26, 26, 26, 0, 28,
    29, 29, 29, 29, 0, 0, 0, 0,
    0, 31, 33, 33, 33, 33, 33, 0,
    0, 0, 0, 0, 0, 36, 27, 36
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 1, 0, 2, 0, 0, 0, 3,
    2, 0, 4, 5, 0, 6, 7, 6,
    8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 10, 0, 11, 0, 0, 0,
    11, 0, 0, 12, 0, 0, 0, 0,
    11, 0, 11, 0, 13, 14, 15, 16,
    17, 18, 19, 20, 0, 0, 21, 0,
    0, 0, 22, 0, 23, 23, 23, 24,
    23, 0, 0, 0, 0, 0, 25, 25,
    26, 25, 23, 27, 28, 29, 30, 31,
    32, 33, 31, 34, 0, 0, 35, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 36, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 37, 0, 0, 0, 0,
    10, 10, 10, 10, 10, 10, 38, 11,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 11, 11, 11, 11, 11, 0,
    11, 15, 15, 15, 15, 19, 0, 0,
    22, 22, 22, 22, 22, 22, 39, 23,
    23, 23, 23, 23, 0, 0, 0, 0,
    0, 25, 26, 26, 26, 26, 26, 0,
    40, 30, 30, 30, 30, 31, 0, 31
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -13, 0, 0, 0, 0, 0, 0,
    0, -15, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -6, -7, 0,
    -2, -8, 0, -10, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 3,
    2, 0, 3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -21, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -28,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -15, 0, 0, 0, 0, 0, 0,
    -8, 0, -1, 0, 0, -16, -2, -11,
    -9, 0, -12, 0, 0, 0, 0, 0,
    0, -1, 0, 0, -2, -1, -6, -4,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, -3,
    0, 0, -7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -13, 0, 0,
    0, -3, 0, 0, 0, -3, 0, -3,
    0, -3, -5, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, -2, -2,
    0, -2, 0, 0, 0, -2, -3, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -29, 0, 0,
    0, -21, 0, -33, 0, 3, 0, 0,
    0, 0, 0, 0, 0, -4, -3, 0,
    0, -3, -3, 0, 0, -3, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 0, 0, 0, -4, 0, 0,
    0, 2, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -8, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    -3, -3, 0, 0, 0, -3, -5, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -42, 0, 0, 0, 0, 0, 0,
    0, 2, -8, 0, 0, -34, -7, -22,
    -18, 0, -30, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -5, -17, -11,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -40, 0, 0,
    0, -17, 0, -25, 0, 0, 0, 0,
    0, -4, 0, -3, 0, -1, -2, 0,
    0, -2, 0, 0, 2, 0, 2, 0,
    0, 0, 0, 0, 0, -12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, -3,
    -2, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -10, 0, -2,
    0, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, -27, -29, 0,
    0, -10, -3, -30, -2, 2, 0, 2,
    2, 0, 2, 0, 0, -14, -12, 0,
    -14, -12, -9, -14, 0, -12, -9, -7,
    -10, -7, 0, -41, -27, -22, -14, -12,
    0, 0, 0, 3, 0, -28, -5, 0,
    0, -9, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, -6, -5, 0,
    0, -6, -4, 0, 0, -3, -1, 0,
    0, 0, 2, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, -15, -7, 0,
    0, -5, 0, 0, 0, 2, 0, 0,
    0, 0, 0, 0, 2, -4, -4, 0,
    0, -4, -3, 0, 0, -2, 0, 0,
    0, 0, 2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, 0,
    0, 0, -3, 0, 0, 0, 0, 2,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -3, 0, 0, 0, -3, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 3, -6, -26, -6, 0,
    0, -12, -4, -12, -2, 2, -12, 2,
    2, 2, 2, 0, 2, -9, -8, -3,
    -5, -8, -5, -7, -3, -5, -2, 0,
    -3, -4, 2, -10, -6, -12, -8, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -3, 0, 0, 0, -2, -3, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    -2, -2, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 0, 0, 0, 0, 0,
    0, -13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -17, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    -3, -2, 0, 0, 0, 0, 0, 0,
    0, 2, 0, 0, 0, -15, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -5, -2, 2,
    0, -2, 0, 0, 6, 0, 2, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 0, 0, 0, -13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -2, 2,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -15, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 40,
    .right_class_cnt     = 40,
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
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 1,
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
const lv_font_t ui_font_displayRoboto16 = {
#else
lv_font_t ui_font_displayRoboto16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 20,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_DISPLAYROBOTO16*/

