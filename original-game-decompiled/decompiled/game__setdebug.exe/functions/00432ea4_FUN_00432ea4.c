
/* ==== FUN_00432ea4 @ 00432ea4 ==== 
 * signature: undefined __register FUN_00432ea4(int * param_1, int param_2)
 * body: 00432ea4-00432ec7
 */

void FUN_00432ea4(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[0x17];
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x60) = 0;
    }
    param_1[0x17] = param_2;
    if (param_2 != 0) {
      *(int **)(param_2 + 0x60) = param_1;
    }
    FUN_00432f04(param_1);
  }
  return;
}


