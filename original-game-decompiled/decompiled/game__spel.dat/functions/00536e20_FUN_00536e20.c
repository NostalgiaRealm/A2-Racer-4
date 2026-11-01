
/* ==== FUN_00536e20 @ 00536e20 ==== 
 * signature: undefined __cdecl FUN_00536e20(int param_1, int param_2)
 * body: 00536e20-005370f9
 */

void __cdecl FUN_00536e20(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  iVar9 = 0;
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergecycle_ridges__delete_sha_005c6470);
  }
  iVar3 = *(int *)(param_2 + 0x38);
  iVar1 = DAT_0074c6d0 + -1;
  if (iVar3 != 0) {
    iVar6 = *(int *)(iVar3 + 4);
    piVar4 = (int *)(iVar3 + 4);
    while (iVar6 != 0) {
      iVar9 = *(int *)(iVar6 + 4);
      if (iVar9 == param_2) {
        iVar9 = *(int *)(iVar6 + 8);
      }
      if (*(int *)(iVar9 + 0x48) == iVar1) {
        *piVar4 = 0;
      }
      iVar6 = piVar4[1];
      piVar4 = piVar4 + 1;
    }
  }
  FUN_005141f0(*(int **)(param_2 + 0x38));
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergecycle_ridges__add_ridges_005c6440);
  }
  for (iVar3 = *(int *)(param_1 + 0x20); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x20)) {
    iVar6 = *(int *)(iVar3 + 0x38);
    if (iVar6 != 0) {
      puVar7 = *(undefined4 **)(iVar6 + 4);
      puVar5 = (undefined4 *)(iVar6 + 8);
      while (puVar7 != (undefined4 *)0x0) {
        iVar6 = puVar7[1];
        if (iVar6 == iVar3) {
          puVar7[1] = param_2;
          iVar9 = puVar7[2];
LAB_00536f43:
          if (iVar9 == param_2) {
            FUN_005145f0(puVar7);
          }
          else {
            if (*(int *)(iVar9 + 0x48) != iVar1) goto LAB_00536f9a;
            FUN_00514280(*(int **)(iVar9 + 0x38),(int)puVar7);
            FUN_005145f0(puVar7);
          }
          if (puVar7 != (undefined4 *)0x0) {
            DAT_0074c79c = DAT_0074c79c + 1;
            puVar2 = (undefined4 *)(DAT_0074c768 + *(int *)(DAT_0074c770 + 0x40) * 4);
            *puVar7 = *(undefined4 *)(DAT_0074c768 + *(int *)(DAT_0074c770 + 0x40) * 4);
            *puVar2 = puVar7;
          }
        }
        else {
          if (puVar7[2] == iVar3) {
            puVar7[2] = param_2;
            iVar9 = iVar6;
            goto LAB_00536f43;
          }
          if ((iVar6 != param_2) && (puVar7[2] != param_2)) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_mergecy_005c6404);
            FUN_0051e8e0(5,(int *)0x0);
            goto LAB_00536f43;
          }
LAB_00536f9a:
          FUN_00514020((int *)(param_2 + 0x38),(int)puVar7);
        }
        puVar7 = (undefined4 *)*puVar5;
        puVar5 = puVar5 + 1;
      }
    }
    if (*(int **)(iVar3 + 0x38) != (int *)0x0) {
      FUN_00514d30(*(int **)(iVar3 + 0x38),0);
    }
    if ((*(uint *)(iVar3 + 0x50) & 0x1000) != 0) {
      piVar4 = *(int **)(iVar3 + 0x3c);
      iVar9 = 0;
      if (piVar4 != (int *)0x0) {
        iVar9 = piVar4[1];
        uVar11 = 0;
        iVar6 = FUN_00514af0(piVar4);
        if (0 < iVar6) {
          iVar10 = 4;
          do {
            if ((*(int *)(iVar9 + 0x48) != iVar1) && ((*(uint *)(iVar9 + 0x50) & 0x1000) != 0)) {
              puVar7 = FUN_005163f0();
              uVar8 = FUN_00514880(*(int **)(iVar3 + 0x34),DAT_0074c03c,uVar11,0);
              *puVar7 = uVar8;
              if ((*(uint *)(iVar3 + 0x50) >> 0xb & 1) == (uVar11 & 1)) {
                puVar7[1] = iVar9;
                puVar7[2] = param_2;
              }
              else {
                puVar7[2] = iVar9;
                puVar7[1] = param_2;
              }
              FUN_00514020((int *)(param_2 + 0x38),(int)puVar7);
              FUN_00514020((int *)(iVar9 + 0x38),(int)puVar7);
            }
            uVar11 = uVar11 + 1;
            iVar10 = iVar10 + 4;
            iVar9 = *(int *)(*(int *)(iVar3 + 0x3c) + iVar10);
          } while ((int)uVar11 < iVar6);
        }
      }
    }
    if (iVar3 == param_1) break;
  }
  if (1 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergecycle_ridges__found__d_o_005c63c8);
  }
  return;
}


