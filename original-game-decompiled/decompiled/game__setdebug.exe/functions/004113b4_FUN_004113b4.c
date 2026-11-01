
/* ==== FUN_004113b4 @ 004113b4 ==== 
 * signature: undefined __register FUN_004113b4(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 004113b4-004113f8
 */

void FUN_004113b4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_0040f080(*(int *)(param_4 + -4),param_1);
  if (iVar1 != -1) {
    FUN_0040ef14(*(int **)(param_4 + -4),iVar1);
  }
  iVar1 = FUN_0040f080(*(int *)(param_4 + -8),param_1);
  if (iVar1 < 0) {
    FUN_0040eec8(*(int **)(param_4 + -8),param_1);
  }
  return;
}


