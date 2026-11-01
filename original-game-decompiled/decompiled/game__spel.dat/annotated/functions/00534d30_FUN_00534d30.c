
/* ==== FUN_00534d30 @ 00534d30 ==== 
 * signature: uint __cdecl FUN_00534d30(uint param_1, int * param_2, int * param_3)
 * body: 00534d30-005350a5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_00534d30(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  code *pcVar9;
  int *local_8;
  uint local_4;
  
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_find_newvertex__find_new_vert_005c5a9c);
    if (param_2 != (int *)0x0) {
      iVar1 = param_2[1];
      piVar7 = param_2 + 2;
      while (iVar1 != 0) {
        FUN_00558953(DAT_0074c5ec,&DAT_005bc6f0);
        iVar1 = *piVar7;
        piVar7 = piVar7 + 1;
      }
    }
    if (param_3 != (int *)0x0) {
      iVar1 = param_3[1];
      piVar7 = param_3 + 2;
      while (iVar1 != 0) {
        FUN_00558953(DAT_0074c5ec,&DAT_005c5a94);
        iVar1 = *piVar7;
        piVar7 = piVar7 + 1;
      }
    }
    FUN_00558953(DAT_0074c5ec,&DAT_005ae60c);
  }
  if (param_2 != (int *)0x0) {
    piVar7 = param_2 + 1;
    iVar1 = param_2[1];
    while (iVar1 != 0) {
      piVar7 = piVar7 + 1;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      iVar1 = *piVar7;
    }
  }
  if (param_3 != (int *)0x0) {
    piVar7 = param_3 + 1;
    piVar6 = (int *)param_3[1];
    while (piVar6 != (int *)0x0) {
      piVar7 = piVar7 + 1;
      iVar1 = *piVar6;
      if (iVar1 != 0) {
        piVar6 = (int *)(iVar1 + 4);
        iVar1 = *(int *)(iVar1 + 4);
        while (iVar1 != 0) {
          piVar6 = piVar6 + 1;
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          iVar1 = *piVar6;
        }
      }
      piVar6 = (int *)*piVar7;
    }
  }
  if (param_2 != (int *)0x0) {
    iVar1 = param_2[1];
    piVar7 = param_2 + 1;
    while (iVar1 != 0) {
      piVar6 = piVar7 + 1;
      if (*(int *)(iVar1 + 0x10) == 0) {
        FUN_00514330(param_2,(int)(piVar7 + 1) + (-8 - (int)param_2) >> 2);
        piVar6 = piVar7;
      }
      piVar7 = piVar6;
      iVar1 = *piVar6;
    }
  }
  iVar1 = FUN_00514af0(param_3);
  DAT_0074c6d4 = DAT_0074c6d4 + iVar1;
  iVar1 = FUN_00514af0(param_2);
  if (iVar1 == 0) {
    if (3 < DAT_0074be68) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_find_newvertex__vertices_not_i_005c5a60);
    }
    return 0;
  }
  pcVar9 = FUN_005350b0;
  uVar8 = 4;
  puVar5 = (uint *)(param_2 + 1);
  puVar2 = (undefined4 *)FUN_00514af0(param_2);
  FUN_00558d5b((int *)puVar5,puVar2,uVar8,pcVar9);
  if (DAT_0074bf80 != 0) {
    iVar1 = FUN_00514af0(param_2);
    DAT_0074ca88 = DAT_0074ca88 + 1;
    DAT_0074caa8 = DAT_0074caa8 + iVar1;
    if (DAT_0074ca98 < iVar1) {
      DAT_0074ca98 = iVar1;
    }
  }
  iVar1 = FUN_00514af0(param_3);
  uVar8 = FUN_00519e00(iVar1);
  if (param_3 != (int *)0x0) {
    piVar7 = (int *)param_3[1];
    piVar6 = param_3 + 2;
    while (piVar7 != (int *)0x0) {
      FUN_00535be0(DAT_0074c6e8,uVar8,piVar7,param_1);
      piVar7 = (int *)*piVar6;
      piVar6 = piVar6 + 1;
    }
  }
  uVar4 = 0;
  if (param_2 != (int *)0x0) {
    uVar4 = *puVar5;
    while (uVar4 != 0) {
      puVar5 = puVar5 + 1;
      local_8 = FUN_00539410(uVar4);
      piVar7 = (int *)0x0;
      if (local_8 != (int *)0x0) {
        piVar6 = local_8 + 1;
        piVar7 = (int *)local_8[1];
        while (piVar7 != (int *)0x0) {
          piVar6 = piVar6 + 1;
          piVar3 = FUN_00535c30(DAT_0074c6e8,uVar8,piVar7,uVar4,param_1,&local_4);
          if (piVar3 != (int *)0x0) {
            _DAT_0074ca18 = _DAT_0074ca18 + 1;
            break;
          }
          piVar7 = (int *)*piVar6;
        }
      }
      FUN_00514ba0((int *)&local_8);
      if (piVar7 == (int *)0x0) {
        if (uVar4 != 0) {
          if (1 < DAT_0074be68) {
            FUN_00514af0(param_3);
            FUN_00514af0(param_2);
            FUN_00558953(DAT_0074c5ec,(byte *)s_qh_find_newvertex__found_v_d_for_005c59c0);
          }
          goto LAB_0053503d;
        }
        break;
      }
      uVar4 = *puVar5;
    }
  }
  DAT_0074ca28 = DAT_0074ca28 + 1;
  if (DAT_0074be68 != 0) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_find_newvertex__no_vertex_for_005c5a0c);
  }
LAB_0053503d:
  FUN_005145f0(&DAT_0074c6e8);
  return uVar4;
}


