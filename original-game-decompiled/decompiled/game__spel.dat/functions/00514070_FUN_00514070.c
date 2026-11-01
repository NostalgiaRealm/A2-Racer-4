
/* ==== FUN_00514070 @ 00514070 ==== 
 * signature: undefined __cdecl FUN_00514070(int * param_1, int * param_2)
 * body: 00514070-0051410e
 */

void __cdecl FUN_00514070(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = param_1;
  if (param_2 != (int *)0x0) {
    iVar5 = *param_2;
    if (param_2[iVar5 + 1] != 0) {
      iVar5 = param_2[iVar5 + 1] + -1;
    }
    if (*param_1 == 0) {
      iVar1 = FUN_005147d0(iVar5);
      *piVar6 = iVar1;
    }
    param_1 = (int *)*piVar6;
    iVar1 = *param_1;
    piVar2 = param_1 + iVar1 + 1;
    iVar4 = iVar1;
    if (param_1[iVar1 + 1] != 0) {
      iVar4 = param_1[iVar1 + 1] + -1;
    }
    if (iVar1 < iVar4 + iVar5) {
      iVar1 = FUN_00514240(param_1,iVar5);
      *piVar6 = iVar1;
      FUN_005145f0(&param_1);
      piVar2 = (int *)*piVar6 + *(int *)*piVar6 + 1;
    }
    *piVar2 = iVar4 + iVar5 + 1;
    if (0 < iVar5) {
      piVar6 = (int *)(*piVar6 + 4 + iVar4 * 4);
      for (uVar3 = iVar5 * 4 + 4U >> 2; param_2 = param_2 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
        *piVar6 = *param_2;
        piVar6 = piVar6 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(char *)piVar6 = (char)*param_2;
        param_2 = (int *)((int)param_2 + 1);
        piVar6 = (int *)((int)piVar6 + 1);
      }
    }
  }
  return;
}


