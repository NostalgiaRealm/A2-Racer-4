
/* ==== TCustomForm.dyn_0028 @ 0043e734 ==== 
 * signature: undefined TCustomForm.dyn_0028(void)
 * body: 0043e734-0043e75c
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_0028(int param_1,int param_2)

{
  if (*(short *)(param_2 + 8) != 0) {
    SetFocus(*(HWND *)(param_2 + 4));
    return;
  }
  FUN_0042add8(param_1,*(undefined4 *)(param_1 + 0x208),*(int *)(param_2 + 4) == 0,1);
  return;
}


