
/* ==== TWinControl.dyn_fffd @ 00434f74 ==== 
 * signature: undefined __register TWinControl.dyn_fffd(int param_1, int param_2, undefined4 param_3, undefined * param_4, undefined4 param_5)
 * body: 00434f74-00434fb9
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_fffd
               (int param_1,int param_2,undefined4 param_3,undefined *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_004317bc(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_00431780(param_1,iVar3);
      if (*(int *)(iVar2 + 4) == param_2) {
        (*(code *)param_4)(param_5,iVar2);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


