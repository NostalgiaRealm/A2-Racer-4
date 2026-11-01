
/* ==== TCustomForm.dyn_0120 @ 0043e3f4 ==== 
 * signature: undefined TCustomForm.dyn_0120(void)
 * body: 0043e3f4-0043e428
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_0120(int *param_1,int param_2)

{
  if (param_1[0x8c] == 0) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  else {
    FUN_004364f8(param_1[0x8c],param_2);
    if (*(int *)(param_2 + 0xc) == 0) {
      (**(code **)(*param_1 + -0x10))(param_1,param_2);
      return;
    }
  }
  return;
}


