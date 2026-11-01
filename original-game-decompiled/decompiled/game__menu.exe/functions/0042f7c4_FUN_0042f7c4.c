
/* ==== FUN_0042f7c4 @ 0042f7c4 ==== 
 * signature: undefined __register FUN_0042f7c4(int param_1, int * param_2)
 * body: 0042f7c4-0042f7e5
 */

void FUN_0042f7c4(int param_1,int *param_2)

{
  *(int *)(param_1 + 0x30) = *param_2;
  *(int *)(param_1 + 0x34) = param_2[1];
  *(int *)(param_1 + 0x38) = param_2[2] - *param_2;
  *(int *)(param_1 + 0x3c) = param_2[3] - param_2[1];
  FUN_0042de78(param_1);
  return;
}


