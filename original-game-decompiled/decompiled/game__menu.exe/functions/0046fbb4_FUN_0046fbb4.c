
/* ==== FUN_0046fbb4 @ 0046fbb4 ==== 
 * signature: undefined __register FUN_0046fbb4(int param_1)
 * body: 0046fbb4-0046fbf2
 */

void FUN_0046fbb4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x1f0);
  if (*(int *)(iVar1 + 0x4c) != 0) {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x4c) + 8);
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        piVar2 = (int *)FUN_004102b0(*(undefined4 **)(iVar1 + 0x4c),iVar4);
        FUN_00402f9c(piVar2);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00402f9c(*(int **)(iVar1 + 0x4c));
    *(undefined4 *)(iVar1 + 0x4c) = 0;
  }
  return;
}


