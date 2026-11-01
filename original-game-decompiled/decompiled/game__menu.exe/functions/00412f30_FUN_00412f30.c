
/* ==== FUN_00412f30 @ 00412f30 ==== 
 * signature: undefined __register FUN_00412f30(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 00412f30-00412f67
 */

void FUN_00412f30(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_0041030c(*(int *)(param_4 + -4),param_1);
  if (iVar1 < 0) {
    iVar1 = FUN_0041030c(*(int *)(param_4 + -8),param_1);
    if (-1 < iVar1) {
      FUN_00410104(*(int **)(param_4 + -4),param_1);
    }
  }
  return;
}


