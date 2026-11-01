
/* ==== TWinControl.dyn_ffb9 @ 0042a86c ==== 
 * signature: undefined4 __register TWinControl.dyn_ffb9(int param_1)
 * body: 0042a86c-0042a88c
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


