
/* ==== TComboBoxStrings.vmt_034 @ 0042753c ==== 
 * signature: undefined TComboBoxStrings.vmt_034(void)
 * body: 0042753c-004275ae
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TComboBoxStrings_vmt_034(int param_1,undefined *param_2)

{
  undefined *lParam;
  HWND hWnd;
  LRESULT LVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  undefined4 *puStack_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  lParam = FUN_004040a0(param_2);
  wParam = 0;
  Msg = 0x143;
  hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  LVar1 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (LVar1 < 0) {
    FUN_00405808((undefined4 *)PTR_PTR_004ab6f4,(int *)&puStack_8);
    piVar2 = FUN_0040b5d8((int *)&DAT_0040e9b0,'\x01',puStack_8);
    FUN_004036f4(piVar2);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_004275b6;
  pcStack_18 = (code *)0x4275ae;
  FUN_00403c5c((int *)&puStack_8);
  return;
}


