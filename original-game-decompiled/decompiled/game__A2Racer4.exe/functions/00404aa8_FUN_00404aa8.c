
/* ==== FUN_00404aa8 @ 00404aa8 ==== 
 * signature: undefined4 __cdecl FUN_00404aa8(undefined4 param_1)
 * body: 00404aa8-00404ac2
 */

undefined4 __cdecl FUN_00404aa8(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_004080ec != (code *)0x0) {
    iVar1 = (*DAT_004080ec)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


