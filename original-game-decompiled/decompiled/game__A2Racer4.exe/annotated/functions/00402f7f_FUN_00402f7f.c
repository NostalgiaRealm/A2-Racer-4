
/* ==== FUN_00402f7f @ 00402f7f ==== 
 * signature: byte __cdecl FUN_00402f7f(uint param_1)
 * body: 00402f7f-00402fa4
 */

byte __cdecl FUN_00402f7f(uint param_1)

{
  if (DAT_00409460 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_00409360)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 0x40;
}


