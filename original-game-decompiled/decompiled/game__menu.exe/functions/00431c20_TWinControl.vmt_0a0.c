
/* ==== TWinControl.vmt_0a0 @ 00431c20 ==== 
 * signature: undefined __register TWinControl.vmt_0a0(int * param_1)
 * body: 00431c20-00431c73
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_0a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0042e6a8((int)param_1);
  if (iVar1 < 1) {
    iVar1 = FUN_00408d40((char *)FUN_00431c74);
    param_1[0x15] = iVar1;
  }
  else {
    piVar2 = FUN_00408d20(iVar1 + 1);
    param_1[0x15] = (int)piVar2;
    iVar1 = FUN_00408d34((int)piVar2);
    FUN_0042e6b8((int)param_1,piVar2,iVar1);
  }
  FUN_0042d314();
  (**(code **)(*param_1 + 0x9c))();
  return;
}


