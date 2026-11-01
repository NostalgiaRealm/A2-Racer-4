
/* ==== TWinControl.vmt_080 @ 004348b4 ==== 
 * signature: undefined TWinControl.vmt_080(void)
 * body: 004348b4-004348cf
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_080(int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_00434cdc(param_1);
  if (bVar1) {
    UpdateWindow(*(HWND *)(param_1 + 0x14c));
  }
  return;
}


