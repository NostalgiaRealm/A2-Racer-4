
/* ==== TComboBoxStrings.vmt_054 @ 004275c0 ==== 
 * signature: undefined TComboBoxStrings.vmt_054(void)
 * body: 004275c0-00427632
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TComboBoxStrings_vmt_054(int param_1,WPARAM param_2,undefined *param_3)

{
  undefined *lParam;
  HWND hWnd;
  LRESULT LVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  undefined4 *puStack_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  lParam = FUN_004040a0(param_3);
  Msg = 0x14a;
  hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,param_2,(LPARAM)lParam);
  if (LVar1 < 0) {
    FUN_00405808((undefined4 *)PTR_PTR_004ab6f4,(int *)&puStack_8);
    piVar2 = FUN_0040b5d8((int *)&DAT_0040e9b0,'\x01',puStack_8);
    FUN_004036f4(piVar2);
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0042763a;
  pcStack_1c = (code *)0x427632;
  FUN_00403c5c((int *)&puStack_8);
  return;
}


