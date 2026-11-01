
/* ==== FUN_0044dbd8 @ 0044dbd8 ==== 
 * signature: undefined __register FUN_0044dbd8(int param_1)
 * body: 0044dbd8-0044dc5c
 */

void FUN_0044dbd8(int param_1)

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
    iVar2 = FUN_0044b180(DAT_004ac7d8);
    uVar5 = extraout_ECX;
    uVar6 = extraout_EDX;
    if (-1 < iVar2 + -1) {
      iVar7 = 0;
      do {
        piVar3 = (int *)FUN_0044b16c(DAT_004ac7d8,iVar7);
        uVar5 = extraout_ECX_00;
        uVar6 = extraout_EDX_00;
        if (*(char *)((int)piVar3 + 0x47) != '\0') {
          if ((piVar3[0x59] == 0) ||
             (bVar1 = FUN_00434cdc((int)piVar3), uVar5 = extraout_ECX_01, uVar6 = extraout_EDX_01,
             bVar1)) {
LAB_0044dc3f:
            FUN_0044db7c(1,uVar6,uVar5,(int)&stack0xfffffffc);
            return;
          }
          hWnd = (HWND)piVar3[0x59];
          hWndParent = (HWND)FUN_004349e0(piVar3);
          BVar4 = IsChild(hWndParent,hWnd);
          uVar5 = extraout_ECX_02;
          uVar6 = extraout_EDX_02;
          if (BVar4 == 0) goto LAB_0044dc3f;
        }
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_0044db7c(0,uVar6,uVar5,(int)&stack0xfffffffc);
  }
  return;
}


