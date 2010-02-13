/******************************************************************************/
// Bullfrog Engine Emulation Library - for use to remake classic games like
// Syndicate Wars, Magic Carpet or Dungeon Keeper.
/******************************************************************************/
/** @file bflib_render.h
 *     Header file for bflib_render.c.
 * @par Purpose:
 *     Rendering the 3D view functions.
 * @par Comment:
 *     Just a header file - #defines, typedefs, function prototypes etc.
 * @author   Tomasz Lis
 * @date     20 Mar 2009 - 30 Mar 2009
 * @par  Copying and copyrights:
 *     This program is free software; you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation; either version 2 of the License, or
 *     (at your option) any later version.
 */
/******************************************************************************/
#ifndef BFLIB_REND_H
#define BFLIB_REND_H

#include "bflib_basics.h"
#include "globals.h"
#include "bflib_video.h"

#ifdef __cplusplus
extern "C" {
#endif
/******************************************************************************/
#ifdef __cplusplus
#pragma pack(1)
#endif

#define POLY_SCANS_COUNT 576

struct PolyPoint { // sizeof = 20
  long field_0;
  long field_4;
  long field_8;
  long field_C;
  long field_10;
};
#ifdef __cplusplus
#pragma pack()
#endif

/******************************************************************************/
DLLIMPORT unsigned char _DK_vec_mode;
//#define vec_mode _DK_vec_mode
DLLIMPORT unsigned char _DK_vec_colour;
//#define vec_colour _DK_vec_colour
/******************************************************************************/
extern TbPixel vec_colour;
extern unsigned char vec_mode;
extern unsigned char *render_fade_tables;
extern unsigned char *render_ghost;
/******************************************************************************/
void draw_gpoly(struct PolyPoint *point_a, struct PolyPoint *point_b, struct PolyPoint *point_c);
void trig(struct PolyPoint *point_a, struct PolyPoint *point_b, struct PolyPoint *point_c);
/******************************************************************************/
#ifdef __cplusplus
}
#endif
#endif
