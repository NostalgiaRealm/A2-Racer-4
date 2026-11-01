
/* ==== TForm.set_Menu @ 004476b0 ==== 
 * signature: undefined __register TForm.set_Menu(int * param_1, int * param_2)
 * body: 004476b0-00447863
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_Menu(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  HMENU pHVar4;
  HWND pHVar5;
  HMENU pHVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar9;
  byte *local_14;
  int local_10;
  undefined1 local_c;
  int local_8;
  
  uVar7 = 0;
  local_14 = (byte *)0x0;
  uVar9 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd4;
  if ((param_2 != (int *)0x0) &&
     (iVar2 = FUN_0044b180(DAT_004ac7d8), uVar7 = extraout_ECX, -1 < iVar2 + -1)) {
    iVar8 = 0;
    local_8 = iVar2;
    do {
      iVar2 = FUN_0044b16c(DAT_004ac7d8,iVar8);
      uVar7 = extraout_ECX_00;
      if ((param_2 == *(int **)(iVar2 + 0x230)) &&
         (piVar3 = (int *)FUN_0044b16c(DAT_004ac7d8,iVar8), uVar7 = extraout_ECX_01,
         param_1 != piVar3)) {
        local_10 = param_2[2];
        local_c = 0xb;
        piVar3 = &local_10;
        uVar9 = 0;
        FUN_00405808((undefined4 *)PTR_PTR_004ab6f0,(int *)&local_14);
        uVar7 = FUN_0040b614((int)&DAT_0040ea0c,'\x01',local_14,uVar9,piVar3);
        FUN_004036f4(uVar7);
        uVar7 = extraout_ECX_02;
      }
      iVar8 = iVar8 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  if ((int *)param_1[0x8c] != (int *)0x0) {
    FUN_00440964((int *)param_1[0x8c],0);
    uVar7 = extraout_ECX_03;
  }
  param_1[0x8c] = (int)param_2;
  if ((param_2 == (int *)0x0) ||
     ((FUN_0041564c((int)param_2,(int)param_1,uVar7), (*(byte *)(param_1 + 8) & 0x10) == 0 &&
      (*(char *)((int)param_1 + 0x211) == '\x03')))) {
    bVar1 = FUN_00434cdc((int)param_1);
    if (bVar1) {
      pHVar4 = (HMENU)0x0;
      pHVar5 = (HWND)FUN_004349e0(param_1);
      SetMenu(pHVar5,pHVar4);
    }
  }
  else if (((*(char *)(param_1[0x8c] + 0x4c) == '\0') && (*(char *)((int)param_1 + 0x217) != '\x01')
           ) || ((*(byte *)(param_1 + 8) & 0x10) != 0)) {
    bVar1 = FUN_00434cdc((int)param_1);
    if (bVar1) {
      pHVar4 = (HMENU)(**(code **)(*(int *)param_1[0x8c] + 0x34))();
      pHVar5 = (HWND)FUN_004349e0(param_1);
      pHVar6 = GetMenu(pHVar5);
      if (pHVar4 != pHVar6) {
        pHVar4 = (HMENU)(**(code **)(*(int *)param_1[0x8c] + 0x34))();
        pHVar5 = (HWND)FUN_004349e0(param_1);
        SetMenu(pHVar5,pHVar4);
      }
      iVar2 = FUN_004349e0(param_1);
      FUN_00440964(param_2,iVar2);
    }
  }
  else if ((*(char *)((int)param_1 + 0x217) != '\x01') &&
          (bVar1 = FUN_00434cdc((int)param_1), bVar1)) {
    pHVar4 = (HMENU)0x0;
    pHVar5 = (HWND)FUN_004349e0(param_1);
    SetMenu(pHVar5,pHVar4);
  }
  if (*(char *)((int)param_1 + 0x216) != '\0') {
    FUN_00448718((int)param_1,'\x01');
  }
  FUN_004475e8(param_1);
  *in_FS_OFFSET = uVar9;
  FUN_00403c5c((int *)&local_14);
  return;
}


