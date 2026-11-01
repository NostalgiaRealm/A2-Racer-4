
/* ==== FUN_0042f450 @ 0042f450 ==== 
 * signature: undefined __register FUN_0042f450(int param_1, int param_2)
 * body: 0042f450-0042f496
 */

void FUN_0042f450(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_0042f3e0(param_1);
  if (-1 < iVar3) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x4c) + 0x24);
    iVar2 = piVar1[2];
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (iVar2 <= param_2) {
      param_2 = iVar2 + -1;
    }
    if (iVar3 != param_2) {
      FUN_0040ef14(piVar1,iVar3);
      FUN_0040f0a0(*(int **)(*(int *)(param_1 + 0x4c) + 0x24),param_2,param_1);
    }
  }
  return;
}


