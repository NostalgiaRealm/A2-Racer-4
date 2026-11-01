
/* ==== FUN_00430bc0 @ 00430bc0 ==== 
 * signature: undefined __register FUN_00430bc0(int param_1, int param_2)
 * body: 00430bc0-00430c01
 */

void FUN_00430bc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x40) != 0) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 8), -1 < iVar3 + -1)) {
    iVar2 = 0;
    do {
      iVar1 = FUN_0040f024(*(undefined4 **)(param_1 + 0x40),iVar2);
      if (param_2 == iVar1) {
        *(undefined4 *)(param_2 + 4) = 0;
        FUN_0040ef14(*(int **)(param_1 + 0x40),iVar2);
        return;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


