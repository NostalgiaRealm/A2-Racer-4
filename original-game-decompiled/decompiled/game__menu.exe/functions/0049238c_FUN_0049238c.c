
/* ==== FUN_0049238c @ 0049238c ==== 
 * signature: undefined __register FUN_0049238c(int param_1, int * param_2, undefined4 param_3, int param_4)
 * body: 0049238c-00492402
 */

void FUN_0049238c(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_00403c5c(param_2);
  uVar1 = *(uint *)(*(int *)(param_4 + -4) + 0x330);
  iVar4 = *(int *)(uVar1 + 8);
  if (SBORROW4(iVar4,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    do {
      piVar2 = (int *)FUN_0041ff40(*(undefined4 **)(*(int *)(param_4 + -4) + 0x330),iVar5);
      iVar3 = FUN_0040312c(piVar2,(int)FUN_0049198c);
      if (*(int *)(iVar3 + 4) == param_1) {
        FUN_00403cb0(param_2,*(undefined4 **)(iVar3 + 8));
        return;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


