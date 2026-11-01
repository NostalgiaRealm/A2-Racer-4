
/* ==== FUN_0040e2f0 @ 0040e2f0 ==== 
 * signature: undefined4 __cdecl FUN_0040e2f0(int param_1, int param_2)
 * body: 0040e2f0-0040e33a
 */

undefined4 __cdecl FUN_0040e2f0(int param_1,int param_2)

{
  if ((param_2 < param_1) && (param_1 - param_2 < DAT_00715258 / 2)) {
    return 1;
  }
  if ((param_1 < param_2) && (DAT_00715258 / 2 < param_2 - param_1)) {
    return 1;
  }
  return 0;
}


