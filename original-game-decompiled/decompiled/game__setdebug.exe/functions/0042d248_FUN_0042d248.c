
/* ==== FUN_0042d248 @ 0042d248 ==== 
 * signature: undefined __register FUN_0042d248(int * param_1, undefined4 param_2, uint param_3, int param_4)
 * body: 0042d248-0042d28e
 */

void FUN_0042d248(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint local_8;
  
  local_8 = param_3;
  FUN_004039b8(param_1);
  (**(code **)(**(int **)(param_4 + -4) + 4))(*(int **)(param_4 + -4),&local_8,4);
  if (0 < (int)local_8) {
    FUN_00403f6c(param_1,local_8);
    (**(code **)(**(int **)(param_4 + -4) + 4))(*(int **)(param_4 + -4),*param_1,local_8);
  }
  return;
}


