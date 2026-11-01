
/* ==== FUN_0043709c @ 0043709c ==== 
 * signature: undefined __register FUN_0043709c(int param_1, int param_2)
 * body: 0043709c-004370d6
 */

void FUN_0043709c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < iVar4 + -1) {
    iVar3 = 0;
    do {
      piVar1 = (int *)FUN_0040f024(*(undefined4 **)(param_1 + 4),iVar3);
      if (param_2 == *piVar1) {
        puVar2 = (undefined4 *)FUN_0040f024(*(undefined4 **)(param_1 + 4),iVar3);
        *puVar2 = 0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


