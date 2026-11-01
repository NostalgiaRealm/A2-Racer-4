
/* ==== FUN_004014e4 @ 004014e4 ==== 
 * signature: undefined __register FUN_004014e4(int * param_1)
 * body: 004014e4-004014fb
 */

void FUN_004014e4(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[1];
  iVar2 = *param_1;
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  *param_1 = (int)DAT_004ac454;
  DAT_004ac454 = param_1;
  return;
}


