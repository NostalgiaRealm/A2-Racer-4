
/* ==== FUN_004136b0 @ 004136b0 ==== 
 * signature: undefined __register FUN_004136b0(int param_1)
 * body: 004136b0-004136ea
 */

void FUN_004136b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x30) + 8);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        piVar1 = (int *)FUN_004102b0(*(undefined4 **)(param_1 + 0x30),iVar3);
        FUN_00402f9c(piVar1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00402f9c(*(int **)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}


