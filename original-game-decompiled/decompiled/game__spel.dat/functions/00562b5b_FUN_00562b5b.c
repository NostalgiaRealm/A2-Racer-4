
/* ==== FUN_00562b5b @ 00562b5b ==== 
 * signature: undefined4 __cdecl FUN_00562b5b(undefined4 param_1)
 * body: 00562b5b-00562b75
 */

undefined4 __cdecl FUN_00562b5b(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0074de7c != (code *)0x0) {
    iVar1 = (*DAT_0074de7c)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


