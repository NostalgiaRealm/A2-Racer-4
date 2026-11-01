
/* ==== TPageControl.dyn_0203 @ 0048649c ==== 
 * signature: undefined TPageControl.dyn_0203(void)
 * body: 0048649c-004864d4
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TPageControl_dyn_0203(int *param_1,int param_2)

{
  int *piVar1;
  int aiStack_10 [2];
  
  TControl_dyn_0203(param_1,param_2);
  FUN_004070e8(*(undefined4 *)(param_2 + 8),aiStack_10);
  piVar1 = (int *)FUN_004863c8(param_1,aiStack_10);
  if (piVar1 != (int *)0x0) {
    FUN_0042f2b8(piVar1,(int *)0x0,0,0);
  }
  return;
}


