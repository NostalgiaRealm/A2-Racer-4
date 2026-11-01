
/* ==== TWinControl.dyn_fffa @ 00434fbc ==== 
 * signature: undefined __register TWinControl.dyn_fffa(undefined4 param_1, int * param_2, int param_3)
 * body: 00434fbc-00434ffb
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_fffa(undefined4 param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00403114(param_2,(int)&PTR_TWinControl_vmt_000_0042ac0c);
  if ((char)uVar1 != '\0') {
    FUN_00434690((int)param_2,param_3);
    return;
  }
  uVar1 = FUN_00403114(param_2,(int)&PTR_TControl_vmt_000_0042a694);
  if ((char)uVar1 != '\0') {
    FUN_0042e998(param_2,param_3);
  }
  return;
}


