
/* ==== FUN_00442534 @ 00442534 ==== 
 * signature: undefined FUN_00442534(void)
 * body: 00442534-00442661
 */

uint FUN_00442534(char *param_1,ushort param_2,ULONG_PTR param_3)

{
  int *piVar1;
  bool bVar2;
  HWND pHVar3;
  LPCSTR pCVar4;
  BOOL BVar5;
  int unaff_EBX;
  uint uVar6;
  char acStack_8 [4];
  
  *param_1 = *param_1 + (char)param_1;
  *(char *)(unaff_EBX + 0x56) = *(char *)(unaff_EBX + 0x56) + (char)param_2;
  uVar6 = 0;
  acStack_8[0] = '\x01';
  piVar1 = *(int **)(DAT_004477c8 + 0x5c);
  if ((piVar1 == (int *)0x0) || (*(short *)((int)piVar1 + 0x292) == 0)) {
    if (*(short *)(param_1 + 0xca) != 0) {
      uVar6 = (**(code **)(param_1 + 200))
                        (*(undefined4 *)(param_1 + 0xcc),param_2,param_3,acStack_8);
    }
  }
  else {
    uVar6 = (*(code *)piVar1[0xa4])(piVar1[0xa5],param_2,param_3,acStack_8);
  }
  if (acStack_8[0] != '\0') {
    if (((piVar1 != (int *)0x0) && (bVar2 = FUN_0042abb0((int)piVar1), bVar2)) &&
       (piVar1[0x89] != 0)) {
      pHVar3 = (HWND)FUN_0042a8b4(piVar1);
      uVar6 = (uint)param_2;
      pCVar4 = FUN_00403dfc((undefined *)piVar1[0x89]);
      BVar5 = WinHelpA(pHVar3,pCVar4,uVar6,param_3);
      return (uint)(BVar5 != 0);
    }
    if (*(int *)(param_1 + 0x40) == 0) {
      if (param_1[0x94] == '\0') {
        PostMessageA(*(HWND *)(param_1 + 0x24),0xb01f,(uint)param_2,param_3);
      }
    }
    else {
      pHVar3 = *(HWND *)(param_1 + 0x24);
      if (*(int **)(param_1 + 0x38) != (int *)0x0) {
        pHVar3 = (HWND)FUN_0042a8b4(*(int **)(param_1 + 0x38));
      }
      uVar6 = (uint)param_2;
      pCVar4 = FUN_00403dfc(*(undefined **)(param_1 + 0x40));
      BVar5 = WinHelpA(pHVar3,pCVar4,uVar6,param_3);
      uVar6 = (uint)(BVar5 != 0);
    }
  }
  return uVar6;
}


