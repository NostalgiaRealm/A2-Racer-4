
/* ==== FUN_00439640 @ 00439640 ==== 
 * signature: undefined __register FUN_00439640(int param_1, int param_2)
 * body: 00439640-00439686
 */

void FUN_00439640(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_004395d0(param_1);
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
      FUN_00410150(piVar1,iVar3);
      FUN_0041032c(*(int **)(*(int *)(param_1 + 0x4c) + 0x24),param_2,param_1);
    }
  }
  return;
}


