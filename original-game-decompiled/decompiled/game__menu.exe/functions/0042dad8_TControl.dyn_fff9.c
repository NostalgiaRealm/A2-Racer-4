
/* ==== TControl.dyn_fff9 @ 0042dad8 ==== 
 * signature: undefined TControl.dyn_fff9(void)
 * body: 0042dad8-0042daff
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_fff9(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (int *)param_1[9]) {
    uVar1 = FUN_00403114(param_2,(int)&PTR_TWinControl_vmt_000_0042ac0c);
    if ((char)uVar1 != '\0') {
      (**(code **)(*param_1 + 0x60))(param_1,param_2);
    }
  }
  return;
}


