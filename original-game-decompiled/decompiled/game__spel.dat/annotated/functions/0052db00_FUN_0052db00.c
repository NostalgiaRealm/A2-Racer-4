
/* ==== FUN_0052db00 @ 0052db00 ==== 
 * signature: int __cdecl FUN_0052db00(int param_1, int param_2, int param_3)
 * body: 0052db00-0052dc61
 */

int __cdecl FUN_0052db00(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  iVar5 = param_3;
  iVar3 = param_2;
  iVar2 = param_1;
  DAT_0074c6d4 = DAT_0074c6d4 + 1;
  if (((param_1 == DAT_0074c600) && (param_3 != 0)) && (param_2 == 0)) {
    param_1 = FUN_00514b50(DAT_0074c638);
    piVar7 = DAT_0074c628;
    if (DAT_0074c628 != (int *)0x0) {
      while (*piVar7 != 0) {
        piVar7[4] = DAT_0074c6d4;
        FUN_00514020(&param_1,(int)piVar7);
        piVar7 = (int *)*piVar7;
        if (piVar7 == (int *)0x0) {
          return param_1;
        }
      }
    }
  }
  else {
    param_1 = FUN_00514b50(DAT_0074c5fc);
    for (; (iVar2 != 0 && (*(int *)(iVar2 + 0x30) != 0)); iVar2 = *(int *)(iVar2 + 0x30)) {
      if (((iVar5 != 0) || (uVar6 = FUN_00533dd0(iVar2), uVar6 == 0)) &&
         (iVar1 = *(int *)(iVar2 + 0x34), iVar1 != 0)) {
        piVar7 = (int *)(iVar1 + 4);
        iVar1 = *(int *)(iVar1 + 4);
        while (iVar1 != 0) {
          piVar7 = piVar7 + 1;
          if (*(int *)(iVar1 + 0x10) != DAT_0074c6d4) {
            *(int *)(iVar1 + 0x10) = DAT_0074c6d4;
            FUN_00514020(&param_1,iVar1);
          }
          iVar1 = *piVar7;
        }
      }
    }
    if (iVar3 != 0) {
      piVar7 = (int *)(iVar3 + 4);
      iVar2 = *(int *)(iVar3 + 4);
      while (iVar2 != 0) {
        piVar7 = piVar7 + 1;
        if (((iVar5 != 0) || (uVar6 = FUN_00533dd0(iVar2), uVar6 == 0)) &&
           (iVar2 = *(int *)(iVar2 + 0x34), iVar2 != 0)) {
          iVar3 = *(int *)(iVar2 + 4);
          piVar4 = (int *)(iVar2 + 8);
          while (iVar3 != 0) {
            if (*(int *)(iVar3 + 0x10) != DAT_0074c6d4) {
              *(int *)(iVar3 + 0x10) = DAT_0074c6d4;
              FUN_00514020(&param_1,iVar3);
            }
            iVar3 = *piVar4;
            piVar4 = piVar4 + 1;
          }
        }
        iVar2 = *piVar7;
      }
    }
  }
  return param_1;
}


