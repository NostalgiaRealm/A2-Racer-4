
/* ==== TWinControl.dyn_b03c @ 00429cd8 ==== 
 * signature: undefined __register TWinControl.dyn_b03c(int * param_1, int param_2)
 * body: 00429cd8-00429d0c
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_b03c(int *param_1,int param_2)

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar1;
  
  TControl_dyn_b03c(param_1,param_2);
  uVar1 = extraout_var;
  if ((PTR_DAT_00446da0[9] != '\0') && (*(int *)(param_2 + 4) == 0)) {
    FUN_00427e64((int)param_1);
    uVar1 = extraout_var_00;
  }
  FUN_0042787c((int)param_1,CONCAT22(uVar1,0xb03d));
  return;
}


