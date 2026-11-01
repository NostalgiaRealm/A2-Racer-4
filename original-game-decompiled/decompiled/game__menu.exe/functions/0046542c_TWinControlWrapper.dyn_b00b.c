
/* ==== TWinControlWrapper.dyn_b00b @ 0046542c ==== 
 * signature: undefined TWinControlWrapper.dyn_b00b(void)
 * body: 0046542c-00465462
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControlWrapper_dyn_b00b(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  iVar1 = FUN_004656b4((int)param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004656b4((int)param_1);
    TGroupBox_set_Visible
              (piVar2,CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)((int)param_1 + 0x47))
               ,extraout_ECX);
  }
  TControl_dyn_b00b(param_1,param_2);
  (**(code **)(*param_1 + 0x74))();
  return;
}


