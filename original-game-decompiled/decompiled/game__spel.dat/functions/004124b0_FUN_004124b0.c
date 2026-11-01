
/* ==== FUN_004124b0 @ 004124b0 ==== 
 * signature: undefined __cdecl FUN_004124b0(int param_1)
 * body: 004124b0-0041256f
 */

void __cdecl FUN_004124b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_006fb8a0 == 3) || (DAT_006fb8a0 == 6)) {
    FUN_00423990((&DAT_005ce9e8)[param_1 * 0xa5],0);
  }
  iVar1 = 2;
  iVar2 = *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50) * 0x994 + 0xfc;
  do {
    FUN_004123d0(param_1,*(int *)(iVar2 + DAT_00715f00));
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_004123d0(param_1,*(int *)(*(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x3c +
                                        DAT_00715e50) * 0x50 + 4 + DAT_00715eb8));
  return;
}


