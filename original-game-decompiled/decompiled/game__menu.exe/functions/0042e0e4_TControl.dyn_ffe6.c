
/* ==== TControl.dyn_ffe6 @ 0042e0e4 ==== 
 * signature: undefined __register TControl.dyn_ffe6(int * param_1, int param_2, int * param_3)
 * body: 0042e0e4-0042e138
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_ffe6(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00403114(param_1,(int)&PTR_TWinControl_vmt_000_0042ac0c);
  if ((char)uVar1 == '\0') {
    FUN_0042eb70((int)param_1,*(char *)((int)param_1 + 0x47),'\0');
  }
  if (param_2 == param_1[9]) {
    FUN_0042e15c(param_1,param_3);
  }
  else {
    FUN_0042f7c4((int)param_1,param_3);
  }
  if ((param_2 == 0) || (param_2 == -1)) {
    (**(code **)(*param_1 + 0x60))(param_1,0);
  }
  return;
}


