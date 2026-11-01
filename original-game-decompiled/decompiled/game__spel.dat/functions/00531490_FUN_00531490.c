
/* ==== FUN_00531490 @ 00531490 ==== 
 * signature: undefined __cdecl FUN_00531490(int * param_1, int param_2)
 * body: 00531490-00531a49
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00531490(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  uint *puVar7;
  char *pcVar8;
  double local_8;
  
  uVar3 = DAT_0074bf98;
  if (param_2 == 2) {
    FUN_00558953(param_1,(byte *)s_MERGEridge_005c3cf0);
    return;
  }
  if (param_2 == 1) {
    FUN_00558953(param_1,(byte *)s_DUPLICATEridge_005c3cdc);
    return;
  }
  if (param_2 == 0) {
    FUN_00558953(param_1,(byte *)s_NULLfacet_005c3cd0);
    return;
  }
  DAT_0074bf98 = 0;
  DAT_0074c738 = uVar3;
  FUN_00558953(param_1,(byte *)s___f_d_005c3cc8);
  FUN_00558953(param_1,(byte *)s___flags__005c3cb8);
  if ((*(uint *)(param_2 + 0x50) & 0x800) == 0) {
    pcVar8 = s_bottom_005c3ca8;
  }
  else {
    pcVar8 = &DAT_005c3cb0;
  }
  FUN_00558953(param_1,(byte *)pcVar8);
  if ((*(uint *)(param_2 + 0x50) & 0x1000) != 0) {
    FUN_00558953(param_1,(byte *)s_simplicial_005c3c9c);
  }
  if ((*(uint *)(param_2 + 0x50) & 0x10000) != 0) {
    FUN_00558953(param_1,(byte *)s_upperDelaunay_005c3c8c);
  }
  if ((*(uint *)(param_2 + 0x50) & 0x400) != 0) {
    FUN_00558953(param_1,(byte *)s_visible_005c3c80);
  }
  if ((*(uint *)(param_2 + 0x50) & 0x200) != 0) {
    FUN_00558953(param_1,&DAT_005c3c78);
  }
  if ((*(uint *)(param_2 + 0x50) & 0x4000000) != 0) {
    FUN_00558953(param_1,(byte *)s_tested_005c3c70);
  }
  if ((*(uint *)(param_2 + 0x50) & 0x40000) == 0) {
    FUN_00558953(param_1,(byte *)s_notG_005c3c68);
  }
  if ((*(uint *)(param_2 + 0x50) & 0x2000) != 0) {
    FUN_00558953(param_1,(byte *)s_seen_005c3c60);
  }
  if ((*(uint *)(param_2 + 0x50) & 0x800000) != 0) {
    FUN_00558953(param_1,(byte *)s_coplanar_005c3c54);
  }
  if ((*(uint *)(param_2 + 0x50) & 0x1000000) != 0) {
    FUN_00558953(param_1,(byte *)s_mergehorizon_005c3c44);
  }
  if ((*(uint *)(param_2 + 0x50) & 0x8000000) != 0) {
    FUN_00558953(param_1,(byte *)s_keepcentrum_005c3c34);
  }
  if ((*(uint *)(param_2 + 0x50) & 0x100000) != 0) {
    FUN_00558953(param_1,(byte *)s_dupridge_005c3c28);
  }
  if (((*(uint *)(param_2 + 0x50) & 0x200000) != 0) && ((*(uint *)(param_2 + 0x50) & 0x400000) == 0)
     ) {
    FUN_00558953(param_1,(byte *)s_mergeridge1_005c3c18);
  }
  if ((*(uint *)(param_2 + 0x50) & 0x400000) != 0) {
    FUN_00558953(param_1,(byte *)s_mergeridge2_005c3c08);
  }
  if ((*(uint *)(param_2 + 0x50) & 0x10000000) != 0) {
    FUN_00558953(param_1,(byte *)s_newmerge_005c3bfc);
  }
  if ((*(uint *)(param_2 + 0x50) & 0x8000) != 0) {
    FUN_00558953(param_1,(byte *)s_flipped_005c3bf0);
  }
  if ((*(uint *)(param_2 + 0x50) & 0x20000) != 0) {
    FUN_00558953(param_1,(byte *)s_notfurthest_005c3be0);
  }
  if ((*(uint *)(param_2 + 0x50) & 0x20000000) != 0) {
    FUN_00558953(param_1,(byte *)s_degenerate_005c3bd4);
  }
  if ((*(uint *)(param_2 + 0x50) & 0x40000000) != 0) {
    FUN_00558953(param_1,(byte *)s_redundant_005c3bc8);
  }
  FUN_00558953(param_1,&DAT_005ae60c);
  uVar4 = *(uint *)(param_2 + 0x50);
  if ((uVar4 & 0x80000) != 0) {
    FUN_00558953(param_1,(byte *)s___area___2_2g_005c3bb4);
    goto LAB_00531761;
  }
  if (((DAT_0074c690 == 0) || ((uVar4 & 0x400) == 0)) || (*(int *)(param_2 + 0x20) == 0)) {
    iVar5 = *(int *)(param_2 + 0x20);
    if ((uVar4 & 0x200) == 0) {
      if (iVar5 == 0) goto LAB_00531761;
      pcVar8 = s___was_horizon_to_f_d_005c3b54;
    }
    else {
      if ((iVar5 == 0) || (iVar5 == param_2)) goto LAB_00531761;
      pcVar8 = s___shares_same_visible_horizon_as_005c3b70;
    }
  }
  else {
    pcVar8 = s___replacement__f_d_005c3b9c;
  }
  FUN_00558953(param_1,(byte *)pcVar8);
LAB_00531761:
  if ((*(uint *)(param_2 + 0x50) & 0x1ff) != 0) {
    FUN_00558953(param_1,(byte *)s___merges___d_005c3b40);
  }
  FUN_00532a30(param_1,s___normal__005c3b30,DAT_0074c03c,*(int *)(param_2 + 0x18),-1);
  FUN_00558953(param_1,(byte *)s___offset___10_7g_005c3b18);
  if ((DAT_0074c65c == 1) || (*(int *)(param_2 + 0x28) != 0)) {
    FUN_0052f6e0(param_1,5,(byte *)s___center__005c3b08,param_2);
  }
  if (_DAT_0074c490 < *(double *)(param_2 + 8)) {
    FUN_00558953(param_1,(byte *)s___maxoutside___10_7g_005c3aec);
  }
  piVar1 = *(int **)(param_2 + 0x40);
  if ((piVar1 != (int *)0x0) && (piVar1[1] != 0)) {
    uVar4 = FUN_005147a0(piVar1);
    iVar5 = FUN_00514af0(*(int **)(param_2 + 0x40));
    if (iVar5 < 6) {
      FUN_005164c0(uVar4);
      FUN_00558953(param_1,(byte *)s___outside_set__furthest_p_d___005c3ac8);
      iVar5 = *(int *)(param_2 + 0x40);
      if (iVar5 != 0) {
        puVar7 = (uint *)(iVar5 + 4);
        uVar4 = *(uint *)(iVar5 + 4);
        while (uVar4 != 0) {
          puVar7 = puVar7 + 1;
          FUN_00532a00(param_1,s__005c3ac0,uVar4);
          uVar4 = *puVar7;
        }
      }
    }
    else {
      iVar5 = FUN_00514af0(*(int **)(param_2 + 0x40));
      if (iVar5 < 0x15) {
        FUN_0052b850(param_1,0x5c3aac,*(int *)(param_2 + 0x40));
      }
      else {
        FUN_00514af0(*(int **)(param_2 + 0x40));
        FUN_00558953(param_1,(byte *)s___outside_set___d_points__005c3a8c);
        FUN_00532a00(param_1,s_Furthest_005c3a80,uVar4);
      }
    }
    FUN_00558953(param_1,(byte *)s___furthest_distance___2_2g_005c3a60);
  }
  piVar1 = *(int **)(param_2 + 0x44);
  if ((piVar1 != (int *)0x0) && (piVar1[1] != 0)) {
    pdVar6 = (double *)FUN_005147a0(piVar1);
    iVar5 = FUN_00514af0(*(int **)(param_2 + 0x44));
    if (iVar5 < 6) {
      FUN_005164c0((uint)pdVar6);
      FUN_00558953(param_1,(byte *)s___coplanar_set__furthest_p_d___005c3a3c);
      iVar5 = *(int *)(param_2 + 0x44);
      if (iVar5 != 0) {
        puVar7 = (uint *)(iVar5 + 4);
        uVar4 = *(uint *)(iVar5 + 4);
        while (uVar4 != 0) {
          puVar7 = puVar7 + 1;
          FUN_00532a00(param_1,s__005c3ac0,uVar4);
          uVar4 = *puVar7;
        }
      }
    }
    else {
      iVar5 = FUN_00514af0(*(int **)(param_2 + 0x44));
      if (iVar5 < 0x15) {
        FUN_0052b850(param_1,0x5c3a28,*(int *)(param_2 + 0x44));
      }
      else {
        FUN_00514af0(*(int **)(param_2 + 0x44));
        FUN_00558953(param_1,(byte *)s___coplanar_set___d_points__005c3a08);
        FUN_00532a00(param_1,s_Furthest_005c3a80,(uint)pdVar6);
      }
    }
    DAT_0074c968 = DAT_0074c968 + 1;
    FUN_005273a0(pdVar6,param_2,&local_8);
    FUN_00558953(param_1,(byte *)s_furthest_distance___2_2g_005c39e8);
  }
  FUN_005333d0(param_1,s___vertices__005c39d8,*(int *)(param_2 + 0x34));
  FUN_00558953(param_1,(byte *)s___neighboring_facets__005c39bc);
  iVar5 = *(int *)(param_2 + 0x3c);
  if (iVar5 != 0) {
    iVar2 = *(int *)(iVar5 + 4);
    piVar1 = (int *)(iVar5 + 8);
    while (iVar2 != 0) {
      if (iVar2 == 2) {
        FUN_00558953(param_1,(byte *)s_MERGE_005c39b4);
      }
      else if (iVar2 == 1) {
        FUN_00558953(param_1,&DAT_005c39ac);
      }
      else {
        FUN_00558953(param_1,&DAT_005c39a4);
      }
      iVar2 = *piVar1;
      piVar1 = piVar1 + 1;
    }
  }
  FUN_00558953(param_1,&DAT_005ae60c);
  DAT_0074bf98 = DAT_0074c738;
  return;
}


