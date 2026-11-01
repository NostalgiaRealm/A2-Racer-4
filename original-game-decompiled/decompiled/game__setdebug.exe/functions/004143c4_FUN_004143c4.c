
/* ==== FUN_004143c4 @ 004143c4 ==== 
 * signature: undefined __register FUN_004143c4(int param_1, int param_2)
 * body: 004143c4-00414401
 */

void FUN_004143c4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 8);
  if (-1 < iVar3 + -1) {
    iVar2 = 0;
    do {
      iVar1 = FUN_0040f024(*(undefined4 **)(param_1 + 0x40),iVar2);
      if (param_2 == iVar1) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        FUN_0040ef14(*(int **)(param_1 + 0x40),iVar2);
        return;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


