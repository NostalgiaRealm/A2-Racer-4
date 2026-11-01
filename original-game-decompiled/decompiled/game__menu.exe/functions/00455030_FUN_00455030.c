
/* ==== FUN_00455030 @ 00455030 ==== 
 * signature: undefined __register FUN_00455030(int param_1, int * param_2)
 * body: 00455030-0045507e
 */

void FUN_00455030(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((*param_2 != 0) && (iVar1 = FUN_00410f08(*(int *)(param_1 + 4)), -1 < iVar1 + -1)) {
    iVar3 = 0;
    do {
      piVar2 = (int *)FUN_00410f10(*(int *)(param_1 + 4),iVar3);
      if (*param_2 == piVar2[4]) {
        *param_2 = 0;
        FUN_00454e6c(piVar2);
        return;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


