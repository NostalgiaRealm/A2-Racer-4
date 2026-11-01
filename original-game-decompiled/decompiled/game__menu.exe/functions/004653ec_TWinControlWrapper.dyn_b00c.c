
/* ==== TWinControlWrapper.dyn_b00c @ 004653ec ==== 
 * signature: undefined TWinControlWrapper.dyn_b00c(void)
 * body: 004653ec-00465428
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControlWrapper_dyn_b00c(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = FUN_004656b4((int)param_1);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x4c))();
    piVar3 = (int *)FUN_004656b4((int)param_1);
    (**(code **)(*piVar3 + 0x5c))(piVar3,uVar2);
  }
  TControl_dyn_b00c(param_1,param_2);
  (**(code **)(*param_1 + 0x74))();
  return;
}


