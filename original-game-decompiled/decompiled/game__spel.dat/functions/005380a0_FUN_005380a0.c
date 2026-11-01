
/* ==== FUN_005380a0 @ 005380a0 ==== 
 * signature: undefined __cdecl FUN_005380a0(int * param_1, int * param_2)
 * body: 005380a0-005381f6
 */

void __cdecl FUN_005380a0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *local_4;
  
  iVar1 = FUN_00514af0((int *)*param_2);
  iVar2 = FUN_00514af0(param_1);
  iVar1 = iVar1 + iVar2 + (1 - DAT_0074c03c);
  piVar5 = (int *)(*param_2 + 4);
  local_4 = (int *)FUN_00514b50(iVar1);
  if (param_1 != (int *)0x0) {
    piVar4 = param_1 + 1;
    iVar2 = param_1[1];
    while (iVar2 != 0) {
      piVar4 = piVar4 + 1;
      iVar3 = *piVar5;
      if ((iVar3 != 0) &&
         ((*(uint *)(iVar2 + 0x14) & 0xffffff) <= (*(uint *)(iVar3 + 0x14) & 0xffffff))) {
        do {
          if ((*(uint *)(iVar3 + 0x14) & 0xffffff) <= (*(uint *)(iVar2 + 0x14) & 0xffffff)) break;
          piVar5 = piVar5 + 1;
          FUN_00514020((int *)&local_4,iVar3);
          iVar3 = *piVar5;
        } while (iVar3 != 0);
        iVar3 = *piVar5;
        if ((iVar3 != 0) &&
           ((*(uint *)(iVar2 + 0x14) & 0xffffff) <= (*(uint *)(iVar3 + 0x14) & 0xffffff))) {
          piVar5 = piVar5 + 1;
          iVar2 = iVar3;
        }
      }
      FUN_00514020((int *)&local_4,iVar2);
      iVar2 = *piVar4;
    }
  }
  iVar2 = *piVar5;
  while (iVar2 != 0) {
    piVar5 = piVar5 + 1;
    FUN_00514020((int *)&local_4,iVar2);
    iVar2 = *piVar5;
  }
  iVar2 = FUN_00514af0(local_4);
  if (iVar1 < iVar2) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_mergeve_005c6a88);
    FUN_0051e8e0(5,(int *)0x0);
  }
  FUN_005145f0(param_2);
  *param_2 = (int)param_1;
  FUN_00514c70();
  return;
}


