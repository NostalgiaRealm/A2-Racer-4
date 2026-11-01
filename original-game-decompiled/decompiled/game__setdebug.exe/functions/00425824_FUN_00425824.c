
/* ==== FUN_00425824 @ 00425824 ==== 
 * signature: undefined __register FUN_00425824(int param_1, int * param_2)
 * body: 00425824-00425845
 */

void FUN_00425824(int param_1,int *param_2)

{
  *(int *)(param_1 + 0x30) = *param_2;
  *(int *)(param_1 + 0x34) = param_2[1];
  *(int *)(param_1 + 0x38) = param_2[2] - *param_2;
  *(int *)(param_1 + 0x3c) = param_2[3] - param_2[1];
  FUN_00423f38(param_1);
  return;
}


