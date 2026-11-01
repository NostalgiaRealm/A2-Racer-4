
/* ==== TWinControl.dyn_b00e @ 00433fa8 ==== 
 * signature: undefined __register TWinControl.dyn_b00e(int * param_1)
 * body: 00433fa8-00433fe1
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_b00e(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar3;
  undefined4 uVar4;
  
  TControl_dyn_b00e(param_1);
  bVar1 = FUN_00434cdc((int)param_1);
  uVar3 = extraout_var;
  if (bVar1) {
    uVar4 = 0;
    uVar2 = FUN_00418228(param_1[0x16]);
    FUN_0042f720((int)param_1,0x30,uVar2,uVar4);
    uVar3 = extraout_var_00;
  }
  FUN_0043181c((int)param_1,CONCAT22(uVar3,0xb008));
  return;
}


