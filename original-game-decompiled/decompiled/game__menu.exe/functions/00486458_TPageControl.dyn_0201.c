
/* ==== TPageControl.dyn_0201 @ 00486458 ==== 
 * signature: undefined __register TPageControl.dyn_0201(int * param_1, int param_2)
 * body: 00486458-00486498
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TPageControl_dyn_0201(int *param_1,int param_2)

{
  int *piVar1;
  int aiStack_10 [2];
  
  TControl_dyn_0201(param_1,param_2);
  FUN_004070e8(*(undefined4 *)(param_2 + 8),aiStack_10);
  piVar1 = (int *)FUN_004863c8(param_1,aiStack_10);
  if ((piVar1 != (int *)0x0) && (*(char *)((int)param_1 + 0x20d) == '\0')) {
    FUN_0042edc0(piVar1,'\0',-1);
  }
  return;
}


