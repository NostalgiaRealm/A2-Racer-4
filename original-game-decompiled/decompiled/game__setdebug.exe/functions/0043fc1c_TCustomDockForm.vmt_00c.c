
/* ==== TCustomDockForm.vmt_00c @ 0043fc1c ==== 
 * signature: undefined TCustomDockForm.vmt_00c(void)
 * body: 0043fc1c-0043fc67
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomDockForm_vmt_00c(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_20 [16];
  
  iVar1 = FUN_0042781c((int)param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      (**(code **)(*param_1 + 0x40))(param_1,auStack_20);
      piVar2 = (int *)FUN_004277e0((int)param_1,iVar3);
      FUN_00402ef0(piVar2,param_1,auStack_20);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  TCustomForm_vmt_00c(param_1);
  return;
}


