
/* ==== FUN_00404124 @ 00404124 ==== 
 * signature: undefined __register FUN_00404124(int * param_1, int param_2, int param_3)
 * body: 00404124-0040416b
 */

void FUN_00404124(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_004040ac(param_1);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar3 = param_2 + -1;
    if (((0 < param_2) && (iVar3 < *(int *)(iVar1 + -4))) && (0 < param_3)) {
      iVar2 = *(int *)(iVar1 + -4) - iVar3;
      if (iVar2 < param_3) {
        param_3 = iVar2;
      }
      FUN_004028d8((undefined4 *)(iVar1 + iVar3 + param_3),(undefined4 *)(iVar1 + iVar3),
                   iVar2 - param_3);
      FUN_00404210(param_1,*(int *)(*param_1 + -4) - param_3);
    }
  }
  return;
}


