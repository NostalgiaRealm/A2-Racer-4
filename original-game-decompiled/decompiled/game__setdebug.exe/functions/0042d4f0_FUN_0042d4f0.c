
/* ==== FUN_0042d4f0 @ 0042d4f0 ==== 
 * signature: undefined __register FUN_0042d4f0(int param_1, int param_2, int param_3, int param_4, int param_5)
 * body: 0042d4f0-0042d576
 */

void FUN_0042d4f0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  TPen_set_Color(*(int **)(*(int *)(param_5 + -4) + 0x10),0x80000014);
  FUN_0041719c(*(int **)(param_5 + -4),param_3,param_2);
  FUN_0041713c(*(int **)(param_5 + -4),param_1,param_2);
  FUN_0041713c(*(int **)(param_5 + -4),param_1,param_4);
  TPen_set_Color(*(int **)(*(int *)(param_5 + -4) + 0x10),0x80000010);
  FUN_0041713c(*(int **)(param_5 + -4),param_3,param_4);
  FUN_0041713c(*(int **)(param_5 + -4),param_3,param_2 + -1);
  return;
}


