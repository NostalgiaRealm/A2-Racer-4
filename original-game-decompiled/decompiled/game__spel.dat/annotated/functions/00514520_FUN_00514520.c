
/* ==== FUN_00514520 @ 00514520 ==== 
 * signature: undefined4 __cdecl FUN_00514520(int * param_1, int param_2, int * param_3, int param_4)
 * body: 00514520-0051458e
 */

undefined4 __cdecl FUN_00514520(int *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    piVar2 = param_3 + 1;
    piVar3 = param_1 + 1;
    if (*piVar3 == param_2) {
      iVar4 = iVar4 + 1;
      piVar3 = param_1 + 2;
    }
    iVar1 = *piVar2;
    if (param_4 == 0) {
      if (*piVar3 != iVar1) {
        iVar4 = iVar4 + 1;
        piVar2 = param_3 + 2;
        param_4 = iVar1;
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
    else if (iVar1 == param_4) {
      iVar4 = iVar4 + 1;
      piVar2 = param_3 + 2;
    }
    if (*piVar3 == 0) break;
    param_1 = piVar3;
    param_3 = piVar2;
    if (*piVar3 != *piVar2) {
      return 0;
    }
  }
  if (iVar4 != 2) {
    return 0;
  }
  if (*piVar2 != 0) {
    return 0;
  }
  return 1;
}


