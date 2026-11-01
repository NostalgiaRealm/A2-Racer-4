
/* ==== FUN_0042f4c4 @ 0042f4c4 ==== 
 * signature: undefined __register FUN_0042f4c4(int param_1, int param_2)
 * body: 0042f4c4-0042f4eb
 */

void FUN_0042f4c4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      FUN_0042f7a0(iVar1,param_1);
    }
    if (param_2 != 0) {
      FUN_0042f780(param_2,param_1);
    }
  }
  return;
}


