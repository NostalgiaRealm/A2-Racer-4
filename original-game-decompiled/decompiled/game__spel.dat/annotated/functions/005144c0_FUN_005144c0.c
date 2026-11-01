
/* ==== FUN_005144c0 @ 005144c0 ==== 
 * signature: undefined1 __cdecl FUN_005144c0(int * param_1, int * param_2)
 * body: 005144c0-00514515
 */

undefined1 __cdecl FUN_005144c0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar2 = *param_1;
  if (param_1[iVar2 + 1] != 0) {
    iVar2 = param_1[iVar2 + 1] + -1;
  }
  iVar3 = *param_2;
  if (param_2[iVar3 + 1] != 0) {
    iVar3 = param_2[iVar3 + 1] + -1;
  }
  if (iVar2 == iVar3) {
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = iVar2 * 4;
    piVar4 = param_1 + 1;
    piVar5 = param_2 + 1;
    do {
      if (iVar2 == 0) {
        return 1;
      }
      iVar2 = iVar2 + -1;
      iVar3 = *piVar5;
      iVar1 = *piVar4;
      piVar4 = (int *)((int)piVar4 + 1);
      piVar5 = (int *)((int)piVar5 + 1);
    } while ((char)iVar1 == (char)iVar3);
    return 0;
  }
  return 0;
}


