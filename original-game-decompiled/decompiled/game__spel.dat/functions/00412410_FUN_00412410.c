
/* ==== FUN_00412410 @ 00412410 ==== 
 * signature: undefined __cdecl FUN_00412410(int param_1)
 * body: 00412410-004124a5
 */

void __cdecl FUN_00412410(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 2;
  iVar2 = *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50) * 0x994 + 0xfc;
  do {
    FUN_00412270(param_1,*(undefined4 *)(iVar2 + DAT_00715f00));
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00412270(param_1,*(undefined4 *)
                        (*(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x3c + DAT_00715e50) *
                         0x50 + 4 + DAT_00715eb8));
  return;
}


