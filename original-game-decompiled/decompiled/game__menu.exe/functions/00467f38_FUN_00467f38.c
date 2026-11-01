
/* ==== FUN_00467f38 @ 00467f38 ==== 
 * signature: undefined __register FUN_00467f38(int param_1, int param_2)
 * body: 00467f38-00467f6d
 */

void FUN_00467f38(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0041030c(*(int *)(param_1 + 0x48),param_2);
  if (iVar1 != -1) {
    FUN_00410150(*(int **)(param_1 + 0x48),iVar1);
    FUN_0042f720(param_2,0x5404,0,0);
  }
  return;
}


