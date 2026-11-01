
/* ==== TWinControl.dyn_b00f @ 00433fe4 ==== 
 * signature: undefined TWinControl.dyn_b00f(void)
 * body: 00433fe4-00434020
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_b00f(int *param_1)

{
  HWND pHVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  tagPOINT tStack_c;
  
  pHVar1 = GetCapture();
  if (pHVar1 == (HWND)0x0) {
    GetCursorPos(&tStack_c);
    piVar2 = FUN_0042d198(&tStack_c,0);
    if (param_1 == piVar2) {
      uVar4 = 1;
      iVar3 = FUN_004349e0(param_1);
      FUN_0042f720((int)param_1,0x20,iVar3,uVar4);
    }
  }
  return;
}


