
/* ==== FUN_00491d98 @ 00491d98 ==== 
 * signature: undefined __register FUN_00491d98(int param_1, int param_2, int * param_3)
 * body: 00491d98-00491e0b
 */

void FUN_00491d98(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_00403c5c(param_3);
  iVar3 = *(int *)(*(uint *)(param_1 + 0x330) + 8);
  if (SBORROW4(iVar3,1)) {
    thunk_FUN_00402808(*(uint *)(param_1 + 0x330));
  }
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      piVar1 = (int *)FUN_0041ff40(*(undefined4 **)(param_1 + 0x330),iVar4);
      iVar2 = FUN_0040312c(piVar1,(int)FUN_0049198c);
      if (*(int *)(iVar2 + 4) == param_2) {
        FUN_00403cb0(param_3,*(undefined4 **)(iVar2 + 8));
        return;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


