
/* ==== TCustomComboBox.dyn_ffb9 @ 00428738 ==== 
 * signature: undefined TCustomComboBox.dyn_ffb9(void)
 * body: 00428738-00428768
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

undefined4 TCustomComboBox_dyn_ffb9(int param_1)

{
  bool bVar1;
  HWND pHVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = FUN_00434cdc(param_1);
  if (bVar1) {
    pHVar2 = GetFocus();
    if ((pHVar2 == *(HWND *)(param_1 + 0x208)) || (pHVar2 == *(HWND *)(param_1 + 0x20c))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


