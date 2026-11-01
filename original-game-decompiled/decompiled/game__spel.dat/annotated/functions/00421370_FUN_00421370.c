
/* ==== FUN_00421370 @ 00421370 ==== 
 * signature: undefined4 __cdecl FUN_00421370(int param_1)
 * body: 00421370-004213bc
 */

int __cdecl FUN_00421370(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x294;
  if ((*(float *)(&DAT_005ce9f4 + param_1 * 0x294) <= 5.0) ||
     (param_1 = 1, *(float *)(&DAT_005cea54 + iVar1) <= 5.0)) {
    param_1 = 0;
  }
  return param_1;
}


