
/* ==== FUN_00565e5a @ 00565e5a ==== 
 * signature: byte __cdecl FUN_00565e5a(uint param_1)
 * body: 00565e5a-00565e7f
 */

byte __cdecl FUN_00565e5a(uint param_1)

{
  if (DAT_007501a0 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 0x40;
}


