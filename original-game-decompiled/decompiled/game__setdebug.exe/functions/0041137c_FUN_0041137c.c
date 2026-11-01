
/* ==== FUN_0041137c @ 0041137c ==== 
 * signature: undefined __register FUN_0041137c(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0041137c-004113b3
 */

void FUN_0041137c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_0040f080(*(int *)(param_4 + -4),param_1);
  if (iVar1 < 0) {
    iVar1 = FUN_0040f080(*(int *)(param_4 + -8),param_1);
    if (-1 < iVar1) {
      FUN_0040eec8(*(int **)(param_4 + -4),param_1);
    }
  }
  return;
}


