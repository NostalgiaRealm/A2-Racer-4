
/* ==== FUN_004226c5 @ 004226c5 ==== 
 * signature: undefined4 __cdecl FUN_004226c5(int param_1)
 * body: 004226c5-004226eb
 */

undefined4 __cdecl FUN_004226c5(int param_1)

{
  if ((7 < param_1) && (param_1 < 0)) {
    return 0xffffffff;
  }
  return (&DAT_005d3330)[param_1 * 6];
}


