
/* ==== FUN_0041b2cc @ 0041b2cc ==== 
 * signature: undefined __register FUN_0041b2cc(int param_1, int param_2)
 * body: 0041b2cc-0041b311
 */

void FUN_0041b2cc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 8) + -1;
  if (-1 < iVar3) {
    do {
      iVar1 = FUN_004102b0(*(undefined4 **)(param_1 + 4),iVar3);
      uVar2 = thunk_FUN_004031ac(iVar1,param_2);
      if ((char)uVar2 != '\0') {
        FUN_00410150(*(int **)(param_1 + 4),iVar3);
        FUN_00410150(*(int **)(param_1 + 8),iVar3);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return;
}


