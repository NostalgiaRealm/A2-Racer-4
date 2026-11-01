
/* ==== FUN_0042f780 @ 0042f780 ==== 
 * signature: undefined __register FUN_0042f780(int param_1, int param_2)
 * body: 0042f780-0042f79e
 */

void FUN_0042f780(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  FUN_0040eec8(*(int **)(param_1 + 0x24),param_2);
  *(int *)(param_2 + 0x4c) = param_1;
  FUN_00413a98(param_2,param_1,extraout_ECX);
  return;
}


