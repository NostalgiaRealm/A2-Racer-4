
/* ==== FUN_005378e0 @ 005378e0 ==== 
 * signature: undefined __cdecl FUN_005378e0(int param_1, int param_2)
 * body: 005378e0-005379e8
 */

void __cdecl FUN_005378e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergeneighbors__merge_neighbo_005c686c);
  }
  DAT_0074c6d0 = DAT_0074c6d0 + 1;
  iVar1 = *(int *)(param_2 + 0x3c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    piVar3 = (int *)(iVar1 + 8);
    while (iVar2 != 0) {
      *(int *)(iVar2 + 0x48) = DAT_0074c6d0;
      iVar2 = *piVar3;
      piVar3 = piVar3 + 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + 4);
    iVar1 = *(int *)(iVar1 + 4);
    while (iVar1 != 0) {
      piVar3 = piVar3 + 1;
      if (*(int *)(iVar1 + 0x48) == DAT_0074c6d0) {
        if ((*(uint *)(iVar1 + 0x50) & 0x1000) != 0) {
          FUN_00535cf0(iVar1);
        }
        piVar4 = *(int **)(iVar1 + 0x3c);
        if (piVar4[1] == param_1) {
          FUN_00514280(piVar4,param_2);
          piVar4 = *(int **)(iVar1 + 0x3c);
LAB_005379b8:
          FUN_00514a80(piVar4,param_1,param_2);
        }
        else {
          FUN_00514280(piVar4,param_1);
        }
      }
      else if (iVar1 != param_2) {
        FUN_00514020((int *)(param_2 + 0x3c),iVar1);
        piVar4 = *(int **)(iVar1 + 0x3c);
        goto LAB_005379b8;
      }
      iVar1 = *piVar3;
    }
  }
  FUN_00514280(*(int **)(param_1 + 0x3c),param_2);
  FUN_00514280(*(int **)(param_2 + 0x3c),param_1);
  return;
}


