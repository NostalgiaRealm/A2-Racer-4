
/* ==== TWinControl.vmt_0a0 @ 00427c80 ==== 
 * signature: undefined TWinControl.vmt_0a0(void)
 * body: 00427c80-00427cd3
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_0a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00424758((int)param_1);
  if (iVar1 < 1) {
    iVar1 = FUN_00408228("");
    param_1[0x15] = iVar1;
  }
  else {
    piVar2 = FUN_00408208(iVar1 + 1);
    param_1[0x15] = (int)piVar2;
    iVar1 = FUN_0040821c((int)piVar2);
    FUN_00424768((int)param_1,piVar2,iVar1);
  }
  FUN_004233d4();
  (**(code **)(*param_1 + 0x9c))();
  return;
}


