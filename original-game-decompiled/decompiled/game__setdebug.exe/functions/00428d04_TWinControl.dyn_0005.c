
/* ==== TWinControl.dyn_0005 @ 00428d04 ==== 
 * signature: undefined TWinControl.dyn_0005(void)
 * body: 00428d04-00428d34
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_0005(int *param_1,undefined4 param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_0042abbc((int)param_1);
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  FUN_004273ac(param_1);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


