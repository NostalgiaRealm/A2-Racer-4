
/* ==== FUN_0052cd70 @ 0052cd70 ==== 
 * signature: undefined __cdecl FUN_0052cd70(int param_1, int param_2, int param_3, int * param_4, int * param_5, int * param_6, int * param_7, int * param_8)
 * body: 0052cd70-0052cf12
 */

void __cdecl
FUN_0052cd70(int param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6,int *param_7
            ,int *param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_c;
  int local_8;
  int local_4;
  
  iVar4 = 0;
  iVar5 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  for (; (param_1 != 0 && (*(int *)(param_1 + 0x30) != 0)); param_1 = *(int *)(param_1 + 0x30)) {
    if ((((*(uint *)(param_1 + 0x50) & 0x400) == 0) || (DAT_0074c690 == 0)) &&
       ((param_3 != 0 || (uVar1 = FUN_00533dd0(param_1), uVar1 == 0)))) {
      iVar4 = iVar4 + 1;
      *(int *)(param_1 + 0x48) = iVar4;
      iVar3 = FUN_00514af0(*(int **)(param_1 + 0x3c));
      iVar5 = iVar5 + iVar3;
      if ((*(uint *)(param_1 + 0x50) & 0x1000) == 0) {
        iVar3 = FUN_00514af0(*(int **)(param_1 + 0x38));
        local_8 = local_8 + iVar3;
      }
      else {
        local_c = local_c + 1;
      }
      if (*(int **)(param_1 + 0x44) != (int *)0x0) {
        iVar3 = FUN_00514af0(*(int **)(param_1 + 0x44));
        local_4 = local_4 + iVar3;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  if (param_2 != 0) {
    piVar6 = (int *)(param_2 + 4);
    iVar3 = *(int *)(param_2 + 4);
    while (iVar3 != 0) {
      piVar6 = piVar6 + 1;
      if ((((*(uint *)(iVar3 + 0x50) & 0x400) == 0) || (DAT_0074c690 == 0)) &&
         ((param_3 != 0 || (uVar1 = FUN_00533dd0(iVar3), uVar1 == 0)))) {
        iVar4 = iVar4 + 1;
        *(int *)(iVar3 + 0x48) = iVar4;
        iVar2 = FUN_00514af0(*(int **)(iVar3 + 0x3c));
        iVar5 = iVar5 + iVar2;
        if ((*(uint *)(iVar3 + 0x50) & 0x1000) == 0) {
          iVar2 = FUN_00514af0(*(int **)(iVar3 + 0x38));
          local_8 = local_8 + iVar2;
        }
        else {
          local_c = local_c + 1;
        }
        if (*(int **)(iVar3 + 0x44) != (int *)0x0) {
          iVar3 = FUN_00514af0(*(int **)(iVar3 + 0x44));
          local_4 = local_4 + iVar3;
        }
      }
      else {
        *(undefined4 *)(iVar3 + 0x48) = 0;
      }
      iVar3 = *piVar6;
    }
  }
  DAT_0074c6d0 = DAT_0074c6d0 + 1 + iVar4;
  *param_4 = iVar4;
  *param_5 = local_c;
  *param_6 = iVar5;
  *param_7 = local_8;
  *param_8 = local_4;
  return;
}


