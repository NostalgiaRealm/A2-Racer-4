
/* ==== TControl.dyn_ffe6 @ 004241a4 ==== 
 * signature: undefined __register TControl.dyn_ffe6(int * param_1, int param_2, int * param_3)
 * body: 004241a4-004241f8
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_ffe6(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00402e8c(param_1,(int)&PTR_TWinControl_vmt_000_00420fa8);
  if ((char)uVar1 == '\0') {
    FUN_00424c10((int)param_1,*(char *)((int)param_1 + 0x47),'\0');
  }
  if (param_2 == param_1[9]) {
    FUN_0042421c(param_1,param_3);
  }
  else {
    FUN_00425824((int)param_1,param_3);
  }
  if ((param_2 == 0) || (param_2 == -1)) {
    (**(code **)(*param_1 + 0x60))(param_1,0);
  }
  return;
}


