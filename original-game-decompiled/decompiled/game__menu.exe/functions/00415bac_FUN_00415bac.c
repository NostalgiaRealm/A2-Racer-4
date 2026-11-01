
/* ==== FUN_00415bac @ 00415bac ==== 
 * signature: undefined __register FUN_00415bac(int param_1, int param_2)
 * body: 00415bac-00415bfc
 */

void FUN_00415bac(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar3 = FUN_0041030c(*(int *)(*(int *)(param_1 + 4) + 0x10),param_1);
    if (-1 < iVar3) {
      piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x10);
      iVar2 = piVar1[2];
      if (param_2 < 0) {
        param_2 = 0;
      }
      if (iVar2 <= param_2) {
        param_2 = iVar2 + -1;
      }
      if (iVar3 != param_2) {
        FUN_00410150(piVar1,iVar3);
        FUN_0041032c(*(int **)(*(int *)(param_1 + 4) + 0x10),param_2,param_1);
      }
    }
  }
  return;
}


