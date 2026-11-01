
/* ==== FUN_00537ac0 @ 00537ac0 ==== 
 * signature: undefined __cdecl FUN_00537ac0(int param_1, int param_2, int * param_3)
 * body: 00537ac0-00537f1c
 */

void __cdecl FUN_00537ac0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_8;
  
  bVar3 = false;
  if (param_3 == (int *)0x0) {
    DAT_0074cb58 = DAT_0074cb58 + 1;
    iVar7 = *(int *)(param_1 + 0x34);
    if (iVar7 != 0) {
      iVar8 = *(int *)(iVar7 + 4);
      piVar9 = (int *)(iVar7 + 8);
      while (iVar8 != 0) {
        *(uint *)(iVar8 + 0x14) = *(uint *)(iVar8 + 0x14) & 0xfeffffff;
        iVar8 = *piVar9;
        piVar9 = piVar9 + 1;
      }
    }
    iVar7 = *(int *)(param_1 + 0x38);
    if (iVar7 != 0) {
      puVar5 = (undefined4 *)(iVar7 + 4);
      piVar9 = *(int **)(iVar7 + 4);
      while (piVar9 != (int *)0x0) {
        puVar5 = puVar5 + 1;
        iVar7 = piVar9[1];
        if (iVar7 == param_1) {
          iVar7 = piVar9[2];
        }
        if (iVar7 == param_2) {
          iVar7 = *piVar9;
          if (iVar7 != 0) {
            iVar8 = *(int *)(iVar7 + 4);
            piVar9 = (int *)(iVar7 + 8);
            while (iVar8 != 0) {
              *(uint *)(iVar8 + 0x14) = *(uint *)(iVar8 + 0x14) | 0x5000000;
              iVar8 = *piVar9;
              piVar9 = piVar9 + 1;
            }
          }
          break;
        }
        piVar9 = (int *)*puVar5;
      }
    }
    iVar7 = *(int *)(param_1 + 0x34);
    param_3 = (int *)0x0;
    if (iVar7 != 0) {
      param_3 = *(int **)(iVar7 + 4);
      piVar9 = (int *)(iVar7 + 8);
      while ((param_3 != (int *)0x0 && ((param_3[5] & 0x1000000U) != 0))) {
        param_3 = (int *)*piVar9;
        piVar9 = piVar9 + 1;
      }
    }
    if (3 < DAT_0074be68) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergesimplex__merge_apex_v_d_o_005c6984);
    }
    piVar1 = *(int **)(param_2 + 0x34);
    piVar9 = (int *)(param_2 + 0x34);
    iVar7 = -1;
    if (piVar1 != (int *)0x0) {
      iVar8 = piVar1[1];
      local_8 = 0;
      iVar4 = FUN_00514af0(piVar1);
      iVar7 = 0;
      if (0 < iVar4) {
        iVar6 = 4;
        do {
          iVar7 = local_8;
          if ((*(uint *)(iVar8 + 0x14) & 0xffffff) < (param_3[5] & 0xffffffU)) break;
          if (((param_3[5] ^ *(uint *)(iVar8 + 0x14)) & 0xffffff) == 0) {
            bVar3 = true;
            goto LAB_00537cb4;
          }
          iVar7 = local_8 + 1;
          iVar6 = iVar6 + 4;
          iVar8 = *(int *)(iVar6 + *piVar9);
          local_8 = iVar7;
        } while (iVar7 < iVar4);
      }
    }
    FUN_00513f70(piVar9,iVar7,param_3);
LAB_00537cb4:
    if ((*(uint *)(param_2 + 0x50) & 0x200) == 0) {
      FUN_00538350(*piVar9);
    }
    else if ((param_3[5] & 0x10000000U) == 0) {
      FUN_005165b0(param_3);
      FUN_00514ed0(param_3);
    }
  }
  else {
    if ((*(uint *)(param_2 + 0x50) & 0x200) == 0) {
      FUN_00538350(*(int *)(param_2 + 0x34));
    }
    param_3 = *(int **)(*(int *)(param_1 + 0x34) + 4);
    if (*(int **)(*(int *)(param_2 + 0x34) + 4) == param_3) {
      bVar3 = true;
    }
    else {
      FUN_00513f70((int *)(param_2 + 0x34),0,param_3);
    }
  }
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergesimplex__update_vertex_n_005c6950);
  }
  iVar7 = *(int *)(param_1 + 0x34);
  if (iVar7 != 0) {
    piVar9 = (int *)(iVar7 + 4);
    piVar1 = *(int **)(iVar7 + 4);
    while (piVar1 != (int *)0x0) {
      piVar9 = piVar9 + 1;
      if ((piVar1 != param_3) || (bVar3)) {
        FUN_00514280((int *)piVar1[3],param_1);
        if (*(int *)(piVar1[3] + 8) == 0) {
          FUN_00537f20((int)piVar1,param_1,param_2);
        }
      }
      else {
        FUN_00514a80((int *)piVar1[3],param_1,param_2);
      }
      piVar1 = (int *)*piVar9;
    }
  }
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergesimplex__merge_ridges_an_005c6910);
  }
  DAT_0074c6d0 = DAT_0074c6d0 + 1;
  iVar7 = *(int *)(param_2 + 0x3c);
  if (iVar7 != 0) {
    iVar8 = *(int *)(iVar7 + 4);
    piVar9 = (int *)(iVar7 + 8);
    while (iVar8 != 0) {
      *(int *)(iVar8 + 0x48) = DAT_0074c6d0;
      iVar8 = *piVar9;
      piVar9 = piVar9 + 1;
    }
  }
  iVar7 = *(int *)(param_1 + 0x38);
  if (iVar7 != 0) {
    puVar5 = (undefined4 *)(iVar7 + 4);
    puVar2 = *(undefined4 **)(iVar7 + 4);
    while (puVar2 != (undefined4 *)0x0) {
      puVar5 = puVar5 + 1;
      iVar7 = puVar2[1];
      if (iVar7 == param_1) {
        iVar7 = puVar2[2];
      }
      if (iVar7 == param_2) {
        FUN_00514280(*(int **)(param_2 + 0x38),(int)puVar2);
        FUN_005145f0(puVar2);
        FUN_0051e2b0(puVar2,0x10);
        FUN_00514280(*(int **)(param_2 + 0x3c),param_1);
      }
      else {
        FUN_00514020((int *)(param_2 + 0x38),(int)puVar2);
        if (*(int *)(iVar7 + 0x48) == DAT_0074c6d0) {
          if ((*(uint *)(iVar7 + 0x50) & 0x1000) != 0) {
            FUN_00535cf0(iVar7);
          }
          piVar9 = *(int **)(iVar7 + 0x3c);
          if (piVar9[1] == param_1) {
            FUN_00514280(piVar9,param_2);
            FUN_00514a80(*(int **)(iVar7 + 0x3c),param_1,param_2);
          }
          else {
            FUN_00514280(piVar9,param_1);
          }
        }
        else {
          FUN_00514020((int *)(param_2 + 0x3c),iVar7);
          FUN_00514a80(*(int **)(iVar7 + 0x3c),param_1,param_2);
          *(int *)(iVar7 + 0x48) = DAT_0074c6d0;
        }
        if (puVar2[1] == param_1) {
          puVar2[1] = param_2;
        }
        else {
          puVar2[2] = param_2;
        }
      }
      puVar2 = (undefined4 *)*puVar5;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0x38) + 4) = 0;
  if (2 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergesimplex__merged_simplex_f_005c68d0);
  }
  return;
}


