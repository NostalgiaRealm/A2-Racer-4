
/* ==== TCustomForm.dyn_0028 @ 004490e4 ==== 
 * signature: undefined TCustomForm.dyn_0028(void)
 * body: 004490e4-0044910c
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_0028(int param_1,int param_2)

{
  if (*(short *)(param_2 + 8) != 0) {
    SetFocus(*(HWND *)(param_2 + 4));
    return;
  }
  FUN_00434f04(param_1,*(undefined4 *)(param_1 + 0x208),*(int *)(param_2 + 4) == 0,1);
  return;
}


