
/* ==== TWinControl.dyn_007b @ 0042b8a0 ==== 
 * signature: undefined TWinControl.dyn_007b(void)
 * body: 0042b8a0-0042b90a
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_007b(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int aiStack_1c [2];
  int aiStack_14 [2];
  
  if (*(int *)(param_2 + 0xc) == 0) {
    cVar3 = '\0';
    FUN_004069d4(*(undefined4 *)(param_2 + 8),aiStack_14);
    FUN_00424398(param_1,aiStack_14,aiStack_1c);
    iVar1 = FUN_00428124((int)param_1,aiStack_1c,0,cVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_00425780(iVar1,0x7b,0,*(undefined4 *)(param_2 + 8));
      *(undefined4 *)(param_2 + 0xc) = uVar2;
    }
    if (*(int *)(param_2 + 0xc) == 0) {
      TControl_dyn_007b(param_1,param_2);
    }
  }
  return;
}


