
/* ==== TWinControl.dyn_b034 @ 0042a738 ==== 
 * signature: undefined TWinControl.dyn_b034(void)
 * body: 0042a738-0042a785
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_b034(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = FUN_0042abb0(param_1);
  if (bVar1) {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_00425780(*(int *)(param_1 + 0x24),0xb034,1,0);
    }
    if (*(int *)(param_2 + 4) == 0) {
      InvalidateRect(*(HWND *)(param_1 + 0x14c),(RECT *)0x0,
                     -(uint)((*(byte *)(param_1 + 0x40) & 0x40) == 0));
    }
  }
  return;
}


