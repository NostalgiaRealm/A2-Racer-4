
/* ==== TCustomForm.dyn_0081 @ 00448c34 ==== 
 * signature: undefined TCustomForm.dyn_0081(void)
 * body: 00448c34-00448c66
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_0081(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  TForm_set_Menu(param_1,(int *)param_1[0x8c]);
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    FUN_00448b38();
  }
  return;
}


