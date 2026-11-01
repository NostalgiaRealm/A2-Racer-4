
/* ==== TMemoStrings.vmt_054 @ 00426e48 ==== 
 * signature: undefined __register TMemoStrings.vmt_054(int param_1, WPARAM param_2, undefined4 * param_3)
 * body: 00426e48-00426f32
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMemoStrings_vmt_054(int param_1,WPARAM param_2,undefined4 *param_3)

{
  HWND pHVar1;
  WPARAM WVar2;
  LRESULT LVar3;
  undefined *lParam;
  undefined4 *in_FS_OFFSET;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  undefined *local_c;
  undefined4 *local_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  local_c = (undefined *)0x0;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_3;
  if ((int)param_2 < 0) goto LAB_00426f1d;
  LVar6 = 0;
  UVar4 = 0xbb;
  WVar2 = param_2;
  pHVar1 = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  WVar2 = SendMessageA(pHVar1,UVar4,WVar2,LVar6);
  if ((int)WVar2 < 0) {
    LVar6 = 0;
    WVar2 = param_2 - 1;
    UVar4 = 0xbb;
    pHVar1 = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
    WVar2 = SendMessageA(pHVar1,UVar4,WVar2,LVar6);
    if ((int)WVar2 < 0) goto LAB_00426f1d;
    LVar6 = 0;
    UVar4 = 0xc1;
    WVar5 = WVar2;
    pHVar1 = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
    LVar3 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
    if (LVar3 == 0) goto LAB_00426f1d;
    WVar2 = WVar2 + LVar3;
    FUN_00403f28((int *)&local_c,(undefined4 *)FUN_00426f4c,local_8);
  }
  else {
    FUN_00403f28((int *)&local_c,local_8,(undefined4 *)FUN_00426f4c);
  }
  UVar4 = 0xb1;
  WVar5 = WVar2;
  pHVar1 = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  SendMessageA(pHVar1,UVar4,WVar2,WVar5);
  lParam = FUN_004040a0(local_c);
  WVar2 = 0;
  UVar4 = 0xc2;
  pHVar1 = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  SendMessageA(pHVar1,UVar4,WVar2,(LPARAM)lParam);
LAB_00426f1d:
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_00426f3a;
  pcStack_20 = (code *)0x426f32;
  FUN_00403c5c((int *)&local_c);
  return;
}


