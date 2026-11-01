
/* ==== FUN_0045e860 @ 0045e860 ==== 
 * signature: undefined __register FUN_0045e860(int param_1)
 * body: 0045e860-0045e89d
 */

void FUN_0045e860(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(uint *)(param_1 + 0xc) + 8);
  if (SBORROW4(iVar2,1)) {
    thunk_FUN_00402808(*(uint *)(param_1 + 0xc));
  }
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      piVar1 = (int *)FUN_0045e640(param_1,iVar3);
      FUN_00402f9c(piVar1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 8))();
  return;
}


