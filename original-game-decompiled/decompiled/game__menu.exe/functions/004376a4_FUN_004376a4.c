
/* ==== FUN_004376a4 @ 004376a4 ==== 
 * signature: undefined __register FUN_004376a4(int param_1, int param_2, int param_3, int param_4, int param_5)
 * body: 004376a4-0043772a
 */

void FUN_004376a4(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  TPen_set_Color(*(int **)(*(int *)(param_5 + -4) + 0x10),0x80000014);
  FUN_00419154(*(int **)(param_5 + -4),param_3,param_2);
  FUN_004190f4(*(int **)(param_5 + -4),param_1,param_2);
  FUN_004190f4(*(int **)(param_5 + -4),param_1,param_4);
  TPen_set_Color(*(int **)(*(int *)(param_5 + -4) + 0x10),0x80000010);
  FUN_004190f4(*(int **)(param_5 + -4),param_3,param_4);
  FUN_004190f4(*(int **)(param_5 + -4),param_3,param_2 + -1);
  return;
}


