
/* ==== TMemoStrings.vmt_02c @ 00427058 ==== 
 * signature: undefined __register TMemoStrings.vmt_02c(int param_1, byte * param_2)
 * body: 00427058-0042711e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMemoStrings_vmt_02c(int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  HWND hWnd;
  LRESULT LVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  UINT Msg;
  WPARAM wParam;
  uint *lParam;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  undefined4 *local_10;
  uint *local_c;
  uint *local_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  local_8 = (uint *)0x0;
  local_c = (uint *)0x0;
  local_10 = (undefined4 *)0x0;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_0040847c(param_2,(int *)&local_8);
  iVar1 = FUN_00403edc((int)local_8);
  iVar2 = FUN_0042e6a8(*(int *)(param_1 + 0xc));
  uVar5 = iVar1 == iVar2;
  if ((bool)uVar5) {
    TGroupBox_get_Caption(*(int *)(param_1 + 0xc),(int *)&local_c);
    FUN_00403fec(local_8,local_c);
    if ((bool)uVar5) goto LAB_004270f9;
  }
  wParam = 0;
  Msg = 0xc;
  lParam = local_8;
  hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  LVar3 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (LVar3 == 0) {
    FUN_00405808((undefined4 *)PTR_PTR_004ab914,(int *)&local_10);
    piVar4 = FUN_0040b5d8((int *)&DAT_0040ea0c,'\x01',local_10);
    FUN_004036f4(piVar4);
  }
  FUN_0042f720(*(int *)(param_1 + 0xc),0xb012,0,0);
LAB_004270f9:
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_00427126;
  pcStack_20 = (code *)0x42710e;
  FUN_00403c5c((int *)&local_10);
  pcStack_20 = (code *)0x427116;
  FUN_00403c5c((int *)&local_c);
  pcStack_20 = (code *)0x42711e;
  FUN_00403c5c((int *)&local_8);
  return;
}


