
/* ==== TEdit.set_PasswordChar @ 004265c4 ==== 
 * signature: undefined TEdit.set_PasswordChar(void)
 * body: 004265c4-00426640
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TEdit_set_PasswordChar(int *param_1,char param_2)

{
  bool bVar1;
  uint wParam;
  HWND hWnd;
  undefined *puVar2;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  LPARAM lParam;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  undefined *puStack_8;
  
  puStack_10 = &stack0xfffffffc;
  puStack_8 = (undefined *)0x0;
  puStack_14 = &UNK_00426641;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (param_2 != *(char *)((int)param_1 + 0x1f5)) {
    *(char *)((int)param_1 + 0x1f5) = param_2;
    bVar1 = FUN_00434cdc((int)param_1);
    if (bVar1) {
      lParam = 0;
      wParam = (uint)*(byte *)((int)param_1 + 0x1f5);
      Msg = 0xcc;
      hWnd = (HWND)FUN_004349e0(param_1);
      SendMessageA(hWnd,Msg,wParam,lParam);
      TGroupBox_get_Caption((int)param_1,(int *)&puStack_8);
      puVar2 = FUN_004040a0(puStack_8);
      FUN_0042e710((int)param_1,puVar2);
    }
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_00426648;
  puStack_14 = (undefined *)0x426640;
  FUN_00403c5c((int *)&puStack_8);
  return;
}


