
/* ==== FUN_00422679 @ 00422679 ==== 
 * signature: undefined4 __cdecl FUN_00422679(int param_1)
 * body: 00422679-004226c4
 */

undefined4 __cdecl FUN_00422679(int param_1)

{
  if ((param_1 < 8) && (-1 < param_1)) {
    (&DAT_005d3328)[param_1 * 6] = 0xffffffff;
    (&DAT_005d3330)[param_1 * 6] = 0xffffffff;
    (&DAT_005d3338)[param_1 * 6] = 0;
    (&DAT_005d332c)[param_1 * 6] = 0xffffffff;
    *(undefined4 *)(&DAT_005d3334 + param_1 * 0x18) = 0xffffffff;
    (&DAT_005d333c)[param_1 * 6] = 0;
    return 1;
  }
  return 0;
}


