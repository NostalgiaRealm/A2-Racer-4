
/* ==== FUN_00467f04 @ 00467f04 ==== 
 * signature: undefined __register FUN_00467f04(int param_1, int param_2)
 * body: 00467f04-00467f37
 */

void FUN_00467f04(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0041030c(*(int *)(param_1 + 0x48),param_2);
  if (iVar1 == -1) {
    FUN_00410104(*(int **)(param_1 + 0x48),param_2);
    FUN_0042f720(param_2,0x5401,0,0);
  }
  return;
}


