
/* ==== FUN_00442a4c @ 00442a4c ==== 
 * signature: undefined __register FUN_00442a4c(int param_1)
 * body: 00442a4c-00442ad0
 */

void FUN_00442a4c(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  HWND hWndParent;
  BOOL BVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar6;
  int iVar7;
  HWND hWnd;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar2 = FUN_004401f8(DAT_004477c8);
    uVar5 = extraout_ECX;
    uVar6 = extraout_EDX;
    if (-1 < iVar2 + -1) {
      iVar7 = 0;
      do {
        piVar3 = (int *)FUN_004401e4(DAT_004477c8,iVar7);
        uVar5 = extraout_ECX_00;
        uVar6 = extraout_EDX_00;
        if (*(char *)((int)piVar3 + 0x47) != '\0') {
          if ((piVar3[0x59] == 0) ||
             (bVar1 = FUN_0042abb0((int)piVar3), uVar5 = extraout_ECX_01, uVar6 = extraout_EDX_01,
             bVar1)) {
LAB_00442ab3:
            FUN_004429f0(1,uVar6,uVar5,(int)&stack0xfffffffc);
            return;
          }
          hWnd = (HWND)piVar3[0x59];
          hWndParent = (HWND)FUN_0042a8b4(piVar3);
          BVar4 = IsChild(hWndParent,hWnd);
          uVar5 = extraout_ECX_02;
          uVar6 = extraout_EDX_02;
          if (BVar4 == 0) goto LAB_00442ab3;
        }
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_004429f0(0,uVar6,uVar5,(int)&stack0xfffffffc);
  }
  return;
}


