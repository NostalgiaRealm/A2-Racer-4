
/* ==== TWinControl.dyn_fffa @ 0042ae4c ==== 
 * signature: undefined __register TWinControl.dyn_fffa(undefined4 param_1, int * param_2, int param_3)
 * body: 0042ae4c-0042ae8b
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_fffa(undefined4 param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TWinControl_vmt_000_00420fa8);
  if ((char)uVar1 != '\0') {
    FUN_0042a59c((int)param_2,param_3);
    return;
  }
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TControl_vmt_000_00420b14);
  if ((char)uVar1 != '\0') {
    FUN_00424a38(param_2,param_3);
  }
  return;
}


