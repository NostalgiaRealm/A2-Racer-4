
/* ==== TWinControl.dyn_b02f @ 0042a000 ==== 
 * signature: undefined TWinControl.dyn_b02f(void)
 * body: 0042a000-0042a05b
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_b02f(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int aiStack_18 [2];
  
  piVar1 = *(int **)(param_2 + 8);
  if (*(byte *)(param_2 + 4) < 4) {
    if (piVar1[3] != 0) {
      FUN_00425228(piVar1[3],param_2);
    }
  }
  else if (*(byte *)(param_2 + 4) == 5) {
    cVar3 = '\0';
    FUN_00424398(param_1,piVar1,aiStack_18);
    iVar2 = FUN_00428124((int)param_1,aiStack_18,0,cVar3);
    *(int *)(param_2 + 0xc) = iVar2;
    if (iVar2 == 0) {
      *(int **)(param_2 + 0xc) = param_1;
    }
  }
  return;
}


