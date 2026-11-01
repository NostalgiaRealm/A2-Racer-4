
/* ==== FUN_0045dfd4 @ 0045dfd4 ==== 
 * signature: undefined __register FUN_0045dfd4(int param_1, int param_2)
 * body: 0045dfd4-0045e009
 */

void FUN_0045dfd4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0041030c(*(int *)(param_1 + 0x4c),param_2);
  if (iVar1 != -1) {
    FUN_00410150(*(int **)(param_1 + 0x4c),iVar1);
    FUN_0042f720(param_2,0x4402,0,0);
  }
  return;
}


