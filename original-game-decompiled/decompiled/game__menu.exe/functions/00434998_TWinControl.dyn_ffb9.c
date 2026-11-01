
/* ==== TWinControl.dyn_ffb9 @ 00434998 ==== 
 * signature: undefined4 __register TWinControl.dyn_ffb9(int param_1)
 * body: 00434998-004349b8
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

undefined4 TWinControl_dyn_ffb9(int param_1)

{
  HWND pHVar1;
  
  if (*(int *)(param_1 + 0x14c) != 0) {
    pHVar1 = GetFocus();
    if (pHVar1 == *(HWND *)(param_1 + 0x14c)) {
      return CONCAT31((int3)((uint)pHVar1 >> 8),1);
    }
  }
  return 0;
}


