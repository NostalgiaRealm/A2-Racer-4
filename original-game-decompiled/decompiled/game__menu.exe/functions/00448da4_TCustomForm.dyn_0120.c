
/* ==== TCustomForm.dyn_0120 @ 00448da4 ==== 
 * signature: undefined TCustomForm.dyn_0120(void)
 * body: 00448da4-00448dd8
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_0120(int *param_1,int param_2)

{
  if (param_1[0x8c] == 0) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  else {
    FUN_00440bd8(param_1[0x8c],param_2);
    if (*(int *)(param_2 + 0xc) == 0) {
      (**(code **)(*param_1 + -0x10))(param_1,param_2);
      return;
    }
  }
  return;
}


