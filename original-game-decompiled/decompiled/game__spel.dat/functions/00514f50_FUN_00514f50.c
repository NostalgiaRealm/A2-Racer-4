
/* ==== FUN_00514f50 @ 00514f50 ==== 
 * signature: undefined __stdcall FUN_00514f50(void)
 * body: 00514f50-005151c9
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00514f50(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  undefined3 extraout_var;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int local_4;
  
  DAT_0074c690 = 1;
  if (2 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_attachnewfacets__delete_inter_005ba3b0);
  }
  DAT_0074c6d0 = DAT_0074c6d0 + 1;
  for (iVar2 = DAT_0074c610; (iVar2 != 0 && ((*(uint *)(iVar2 + 0x50) & 0x400) != 0));
      iVar2 = *(int *)(iVar2 + 0x30)) {
    iVar7 = *(int *)(iVar2 + 0x38);
    *(int *)(iVar2 + 0x48) = DAT_0074c6d0;
    if (iVar7 != 0) {
      if (iVar7 != 0) {
        puVar10 = (undefined4 *)(iVar7 + 4);
        puVar1 = *(undefined4 **)(iVar7 + 4);
        while (puVar1 != (undefined4 *)0x0) {
          puVar10 = puVar10 + 1;
          iVar7 = puVar1[1];
          if (iVar7 == iVar2) {
            iVar7 = puVar1[2];
          }
          if ((*(int *)(iVar7 + 0x48) == DAT_0074c6d0) ||
             (((*(uint *)(iVar7 + 0x50) & 0x400) == 0 && ((*(uint *)(iVar7 + 0x50) & 0x1000) != 0)))
             ) {
            if ((*(uint *)(iVar7 + 0x50) & 0x400) == 0) {
              FUN_00514280(*(int **)(iVar7 + 0x38),(int)puVar1);
            }
            FUN_005145f0(puVar1);
            FUN_0051e2b0(puVar1,0x10);
          }
          puVar1 = (undefined4 *)*puVar10;
        }
      }
      *(undefined4 *)(*(int *)(iVar2 + 0x38) + 4) = 0;
    }
    *(undefined4 *)(*(int *)(iVar2 + 0x3c) + 4) = 0;
  }
  iVar2 = DAT_0074c60c;
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_attachnewfacets__attach_horiz_005ba374);
    iVar2 = DAT_0074c60c;
  }
  do {
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x30) == 0)) {
      iVar2 = DAT_0074c610;
      if (DAT_0074bf80 != 0) {
        for (; (iVar2 != 0 && ((*(uint *)(iVar2 + 0x50) & 0x400) != 0));
            iVar2 = *(int *)(iVar2 + 0x30)) {
          if (*(int *)(iVar2 + 0x20) == 0) {
            _DAT_0074ca80 = _DAT_0074ca80 + 1;
          }
        }
      }
      return;
    }
    iVar7 = *(int *)(*(int *)(iVar2 + 0x3c) + 4);
    if ((*(uint *)(iVar7 + 0x50) & 0x1000) == 0) {
      iVar3 = *(int *)(iVar7 + 0x3c);
      if (iVar3 != 0) {
        iVar8 = *(int *)(iVar3 + 4);
        piVar9 = (int *)(iVar3 + 8);
        while (iVar8 != 0) {
          if ((*(uint *)(iVar8 + 0x50) & 0x400) != 0) {
            *(int *)(iVar8 + 0x20) = iVar2;
            piVar4 = *(int **)(iVar7 + 0x3c);
            FUN_00514330(piVar4,(int)piVar9 + (-8 - (int)piVar4) >> 2);
            piVar9 = piVar9 + -1;
          }
          iVar8 = *piVar9;
          piVar9 = piVar9 + 1;
        }
      }
      FUN_00514020((int *)(iVar7 + 0x3c),iVar2);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x38) + 4);
      if (*(int *)(iVar3 + 4) == iVar7) {
        *(int *)(iVar3 + 8) = iVar2;
      }
      else {
        *(int *)(iVar3 + 4) = iVar2;
      }
    }
    else {
      iVar3 = *(int *)(iVar7 + 0x3c);
      local_4 = 0;
      if (iVar3 != 0) {
        iVar8 = *(int *)(iVar3 + 4);
        piVar9 = (int *)(iVar3 + 8);
        if (iVar8 != 0) {
          do {
            iVar3 = local_4;
            if ((((*(uint *)(iVar8 + 0x50) & 0x400) != 0) && (iVar3 = iVar8, local_4 != 0)) &&
               (bVar6 = FUN_00514590(*(int **)(iVar2 + 0x34),0,*(int **)(iVar7 + 0x34),
                                     (int)piVar9 + (-8 - *(int *)(iVar7 + 0x3c)) >> 2),
               iVar5 = iVar8, iVar3 = local_4, CONCAT31(extraout_var,bVar6) != 0)) break;
            local_4 = iVar3;
            iVar8 = *piVar9;
            piVar9 = piVar9 + 1;
            iVar5 = local_4;
          } while (iVar8 != 0);
          local_4 = iVar5;
          if (local_4 != 0) {
            *(int *)(local_4 + 0x20) = iVar2;
            FUN_00514a80(*(int **)(iVar7 + 0x3c),local_4,iVar2);
            goto LAB_00515189;
          }
        }
      }
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_attachn_005ba30c);
      FUN_005258d0(5,iVar7,iVar2);
    }
LAB_00515189:
    iVar2 = *(int *)(iVar2 + 0x30);
  } while( true );
}


