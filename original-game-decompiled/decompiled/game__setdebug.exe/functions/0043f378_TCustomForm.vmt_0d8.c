
/* ==== TCustomForm.vmt_0d8 @ 0043f378 ==== 
 * signature: undefined __register TCustomForm.vmt_0d8(int * param_1)
 * body: 0043f378-0043f546
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_0d8(int *param_1)

{
  char cVar1;
  int *piVar2;
  HWND pHVar3;
  HWND pHVar4;
  undefined4 extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint uVar5;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_50;
  code *pcStack_4c;
  undefined1 *puVar7;
  UINT UVar8;
  WPARAM WVar9;
  LPARAM LVar10;
  undefined4 uStack_38;
  code *pcStack_34;
  undefined1 *puStack_30;
  undefined4 *local_24;
  HWND local_20;
  undefined4 local_1c;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_30 = &stack0xfffffffc;
  puVar7 = &stack0xfffffffc;
  local_24 = (undefined4 *)0x0;
  pcStack_34 = thunk_FUN_00403434;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_8 = param_1;
  FUN_0042320c();
  if (*(char *)((int)local_8 + 0x47) == '\0') {
    cVar1 = (**(code **)(*local_8 + 0x4c))();
    if (((cVar1 != '\0') && ((*(byte *)(local_8 + 0xb3) & 8) == 0)) &&
       (*(char *)((int)local_8 + 0x217) != '\x01')) goto LAB_0043f3ee;
  }
  FUN_00405298((undefined4 *)PTR_PTR_00446bfc,(int *)&local_24);
  piVar2 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',local_24);
  FUN_0040346c(piVar2);
LAB_0043f3ee:
  pHVar3 = GetCapture();
  if (pHVar3 != (HWND)0x0) {
    LVar10 = 0;
    WVar9 = 0;
    UVar8 = 0x1f;
    pHVar3 = GetCapture();
    pcStack_4c = (code *)0x43f408;
    SendMessageA(pHVar3,UVar8,WVar9,LVar10);
  }
  ReleaseCapture();
  *(byte *)(local_8 + 0xb3) = *(byte *)(local_8 + 0xb3) | 8;
  local_20 = GetActiveWindow();
  local_14 = DAT_00446864;
  FUN_0040f0a0(*(int **)(DAT_004477c8 + 0x70),0,*(int *)(DAT_004477c8 + 0x6c));
  *(int **)(DAT_004477c8 + 0x6c) = local_8;
  local_16 = *(undefined2 *)(DAT_004477c8 + 0x38);
  FUN_00440638(DAT_004477c8,0);
  local_1c = *(undefined4 *)(DAT_004477c8 + 0x3c);
  local_10 = FUN_0043992c(0);
  *in_FS_OFFSET = &stack0xffffffbc;
  FUN_0043f2c8(local_8,0,extraout_ECX);
  pcStack_4c = thunk_FUN_00403434;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  LVar10 = 0;
  WVar9 = 0;
  UVar8 = 0xb000;
  pHVar3 = (HWND)FUN_0042a8b4(local_8);
  SendMessageA(pHVar3,UVar8,WVar9,LVar10);
  uVar6 = 0;
  local_8[0x8d] = 0;
  uVar5 = extraout_ECX_00;
  do {
    FUN_00442168(DAT_004477c4,uVar6,uVar5);
    uVar5 = extraout_ECX_01;
    uVar6 = extraout_EDX;
    if (*(char *)(DAT_004477c4 + 0x8c) == '\0') {
      if (local_8[0x8d] != 0) {
        FUN_0043f218(local_8);
        uVar5 = extraout_ECX_02;
        uVar6 = extraout_EDX_00;
      }
    }
    else {
      local_8[0x8d] = 2;
    }
    local_c = local_8[0x8d];
  } while (local_c == 0);
  LVar10 = 0;
  WVar9 = 0;
  UVar8 = 0xb001;
  pHVar3 = (HWND)FUN_0042a8b4(local_8);
  SendMessageA(pHVar3,UVar8,WVar9,LVar10);
  pHVar3 = (HWND)FUN_0042a8b4(local_8);
  pHVar4 = GetActiveWindow();
  if (pHVar3 != pHVar4) {
    local_20 = (HWND)0x0;
  }
  *in_FS_OFFSET = uStack_50;
  pcStack_4c = (code *)0x43f546;
  FUN_0043f2c0(local_8,uStack_50,puVar7);
  return;
}


