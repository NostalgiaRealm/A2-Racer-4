
/* ==== FUN_00439970 @ 00439970 ==== 
 * signature: undefined __register FUN_00439970(int param_1, int param_2)
 * body: 00439970-0043998e
 */

void FUN_00439970(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  FUN_00410104(*(int **)(param_1 + 0x24),param_2);
  *(int *)(param_2 + 0x4c) = param_1;
  FUN_0041564c(param_2,param_1,extraout_ECX);
  return;
}


