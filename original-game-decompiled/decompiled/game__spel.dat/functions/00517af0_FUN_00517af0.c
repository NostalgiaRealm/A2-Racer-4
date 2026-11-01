
/* ==== FUN_00517af0 @ 00517af0 ==== 
 * signature: undefined __cdecl FUN_00517af0(int * param_1)
 * body: 00517af0-00517f2b
 */

void __cdecl FUN_00517af0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  int *piVar6;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  bVar1 = false;
  iVar5 = 0;
  bVar4 = false;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_14 = 0;
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_checkpolygon__check_all_facet_005bb9c0);
  }
  piVar6 = param_1;
  if ((param_1 != DAT_0074c600) || (DAT_0074bec8 != 0)) {
    bVar1 = true;
  }
  for (; (piVar6 != (int *)0x0 && (piVar6[0xc] != 0)); piVar6 = (int *)piVar6[0xc]) {
    if (piVar6 == DAT_0074c610) {
      bVar4 = true;
    }
    if ((piVar6[0x14] & 0x400U) == 0) {
      if (!bVar1) {
        if (piVar6 == DAT_0074c608) {
          bVar1 = true;
        }
        else {
          iVar3 = FUN_00514af0((int *)piVar6[0x10]);
          if ((iVar3 != 0) && ((DAT_0074c4e0 == 0 || (DAT_0074be2c == 0)))) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkpo_005bb96c);
            FUN_0051e8e0(5,piVar6);
          }
        }
      }
      local_10 = local_10 + 1;
      FUN_00517170(piVar6,0,&local_14,unaff_EDI,unaff_ESI);
    }
  }
  if ((DAT_0074c610 == (int *)0x0) || (bVar4)) {
LAB_00517c35:
    piVar6 = DAT_0074c628;
    if (param_1 != DAT_0074c600) goto LAB_00517c44;
  }
  else {
    if (param_1 == DAT_0074c600) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkpo_005bb918);
      FUN_0051a4b0();
      FUN_0051e8e0(5,DAT_0074c610);
      goto LAB_00517c35;
    }
LAB_00517c44:
    piVar6 = (int *)((param_1 != DAT_0074c60c) - 1 & DAT_0074c630);
  }
  for (; (piVar2 = param_1, iVar3 = DAT_0074c03c, piVar6 != (int *)0x0 && (*piVar6 != 0));
      piVar6 = (int *)*piVar6) {
    piVar6[4] = 0;
    piVar6[5] = piVar6[5] & 0xfeffffff;
  }
  for (; (DAT_0074c03c = iVar3, piVar2 != (int *)0x0 && (piVar2[0xc] != 0));
      piVar2 = (int *)piVar2[0xc]) {
    if ((piVar2[0x14] & 0x400U) == 0) {
      if ((piVar2[0x14] & 0x1000U) == 0) {
        iVar3 = FUN_00514af0((int *)piVar2[0xe]);
      }
      local_c = local_c + iVar3;
      iVar3 = piVar2[0xd];
      if (iVar3 != 0) {
        piVar6 = (int *)(iVar3 + 4);
        iVar3 = *(int *)(iVar3 + 4);
        while (iVar3 != 0) {
          piVar6 = piVar6 + 1;
          *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
          if ((*(uint *)(iVar3 + 0x14) & 0x1000000) == 0) {
            *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) | 0x1000000;
            iVar5 = iVar5 + 1;
            iVar3 = FUN_005164c0(*(uint *)(iVar3 + 8));
            if (iVar3 == -1) {
              FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkpo_005bb8c0);
              local_14 = 1;
            }
          }
          iVar3 = *piVar6;
        }
      }
    }
    iVar3 = DAT_0074c03c;
  }
  DAT_0074c6d4 = DAT_0074c6d4 + local_10;
  if (param_1 == DAT_0074c600) {
    if (local_10 != DAT_0074c634 - DAT_0074c614) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkpo_005bb858);
      local_14 = 1;
    }
    DAT_0074c6d4 = DAT_0074c6d4 + 1;
    piVar6 = DAT_0074c628;
    if (DAT_0074c460 != 0) {
      for (; (piVar6 != (int *)0x0 && (*piVar6 != 0)); piVar6 = (int *)*piVar6) {
        FUN_00514160((int *)piVar6[3]);
        if ((piVar6[5] & 0x8000000U) == 0) {
          iVar3 = FUN_00514af0((int *)piVar6[3]);
          local_8 = local_8 + iVar3;
        }
      }
      for (; (param_1 != (int *)0x0 && (param_1[0xc] != 0)); param_1 = (int *)param_1[0xc]) {
        iVar3 = FUN_00514af0((int *)param_1[0xd]);
        local_4 = local_4 + iVar3;
      }
      if (local_8 != local_4) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkpo_005bb7dc);
        local_14 = 1;
      }
    }
    iVar3 = FUN_00514af0(DAT_0074c6f0);
    if (iVar5 != DAT_0074c638 - iVar3) {
      FUN_00514af0(DAT_0074c6f0);
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkpo_005bb774);
      local_14 = 1;
    }
    iVar3 = local_10;
    if (DAT_0074c03c == 2) {
      if (iVar5 == local_10) goto LAB_00517f0e;
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkpo_005bb730);
      local_14 = 1;
    }
    if ((DAT_0074c03c == 3) && ((iVar5 - local_c / 2) + iVar3 != 2)) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_checkpo_005bb6dc);
      local_14 = 1;
      goto LAB_00517f16;
    }
  }
LAB_00517f0e:
  if (local_14 == 0) {
    return;
  }
LAB_00517f16:
  FUN_0051e8e0(5,(int *)0x0);
  return;
}


