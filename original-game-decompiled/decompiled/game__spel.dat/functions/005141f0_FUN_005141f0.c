
/* ==== FUN_005141f0 @ 005141f0 ==== 
 * signature: undefined __cdecl FUN_005141f0(int * param_1)
 * body: 005141f0-0051423b
 */

void __cdecl FUN_005141f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1 != (int *)0x0) {
    iVar6 = *param_1;
    if (param_1[iVar6 + 1] != 0) {
      iVar6 = param_1[iVar6 + 1] + -1;
    }
    piVar1 = param_1 + 1;
    piVar3 = piVar1;
    piVar5 = piVar1;
    do {
      do {
        piVar4 = piVar3;
        iVar2 = *piVar5;
        piVar5 = piVar5 + 1;
        *piVar4 = iVar2;
        piVar3 = piVar4 + 1;
      } while (iVar2 != 0);
      piVar3 = piVar4;
    } while (piVar5 <= piVar1 + iVar6);
    FUN_00514d30(param_1,(int)piVar4 - (int)piVar1 >> 2);
  }
  return;
}


