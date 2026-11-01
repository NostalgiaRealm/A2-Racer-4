
/* ==== TWinControl.dyn_0005 @ 00432df8 ==== 
 * signature: undefined __register TWinControl.dyn_0005(int * param_1, undefined4 param_2)
 * body: 00432df8-00432e28
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_0005(int *param_1,undefined4 param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_00434ce8((int)param_1);
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  FUN_0043134c(param_1);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


