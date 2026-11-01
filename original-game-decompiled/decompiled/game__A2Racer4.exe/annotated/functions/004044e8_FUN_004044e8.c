
/* ==== FUN_004044e8 @ 004044e8 ==== 
 * signature: undefined4 __cdecl FUN_004044e8(uint param_1)
 * body: 004044e8-00404524
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004044e8(uint param_1)

{
  if ((param_1 < DAT_00409460) &&
     ((*(byte *)((&DAT_00409360)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    return *(undefined4 *)((&DAT_00409360)[(int)param_1 >> 5] + (param_1 & 0x1f) * 8);
  }
  _DAT_00407f48 = 0;
  DAT_00407f44 = 9;
  return 0xffffffff;
}


