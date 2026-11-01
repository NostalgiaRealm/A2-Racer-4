
/* ==== FUN_0055a27d @ 0055a27d ==== 
 * signature: undefined4 __cdecl FUN_0055a27d(uint param_1)
 * body: 0055a27d-0055a2b9
 */

undefined4 __cdecl FUN_0055a27d(uint param_1)

{
  if ((param_1 < DAT_007501a0) &&
     ((*(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    return *(undefined4 *)((&DAT_007500a0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 8);
  }
  DAT_0074dc64 = 0;
  DAT_0074dc60 = 9;
  return 0xffffffff;
}


