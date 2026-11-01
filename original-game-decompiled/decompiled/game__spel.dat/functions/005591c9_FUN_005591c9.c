
/* ==== FUN_005591c9 @ 005591c9 ==== 
 * signature: undefined4 __cdecl FUN_005591c9(HANDLE param_1)
 * body: 005591c9-005591e7
 */

undefined4 __cdecl FUN_005591c9(HANDLE param_1)

{
  BOOL BVar1;
  
  BVar1 = FindClose(param_1);
  if (BVar1 == 0) {
    DAT_0074dc60 = 0x16;
    return 0xffffffff;
  }
  return 0;
}


