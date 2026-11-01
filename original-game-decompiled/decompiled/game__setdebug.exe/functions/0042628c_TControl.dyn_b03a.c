
/* ==== TControl.dyn_b03a @ 0042628c ==== 
 * signature: undefined TControl.dyn_b03a(void)
 * body: 0042628c-004262eb
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_b03a(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x50))();
  if ((cVar1 == '\0') || (param_1[9] == 0)) {
    piVar2 = FUN_00426178(param_1,(undefined4 *)(*(int *)(param_2 + 8) + 0x44));
    if (piVar2 != (int *)0x0) {
      *(int **)(*(int *)(param_2 + 8) + 4) = piVar2;
      iVar3 = FUN_0042a8b4(piVar2);
      *(int *)(*(int *)(param_2 + 8) + 8) = iVar3;
    }
  }
  else {
    FUN_00426200();
  }
  return;
}


