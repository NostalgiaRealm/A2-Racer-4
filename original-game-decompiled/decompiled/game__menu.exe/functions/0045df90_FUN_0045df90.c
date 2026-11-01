
/* ==== FUN_0045df90 @ 0045df90 ==== 
 * signature: undefined __register FUN_0045df90(int param_1, int param_2)
 * body: 0045df90-0045dfd3
 */

void FUN_0045df90(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0041030c(*(int *)(param_1 + 0x4c),param_2);
  if (iVar1 == -1) {
    FUN_00410104(*(int **)(param_1 + 0x4c),param_2);
    FUN_0042f720(param_2,0x4400,0,0);
    FUN_0042f720(param_2,0x4401,0,0);
  }
  return;
}


