
/* ==== FUN_005168b0 @ 005168b0 ==== 
 * signature: undefined __stdcall FUN_005168b0(void)
 * body: 005168b0-00516cb5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005168b0(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  double *pdVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  undefined4 uStack_24;
  int local_1c;
  undefined8 local_18;
  int local_10;
  undefined4 uStack_c;
  
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_check_maxout__check_and_updat_005bac5c);
  }
  local_28 = 0;
  uStack_24 = 0;
  local_10 = 0;
  uStack_c = 0;
  if ((DAT_0074c460 != 0) &&
     (((((DAT_0074bf84 != 0 || (DAT_0074be74 != 0)) || (DAT_0074be70 != 0)) ||
       ((DAT_0074bff0 != 0 || (DAT_0074bf80 != 0)))) ||
      ((DAT_0074bf08 == 0x17 || (DAT_0074bf08 == 0)))))) {
    if (0 < DAT_0074be68) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_check_maxout__determine_actua_005bac20);
    }
    local_30 = FUN_0051a220();
    iVar6 = DAT_0074c688;
    uVar3 = DAT_0074c68c;
    DAT_0074c688 = local_28;
    DAT_0074c68c = uStack_24;
    for (piVar5 = DAT_0074c628;
        (local_28 = DAT_0074c688, uStack_24 = DAT_0074c68c, piVar5 != (int *)0x0 && (*piVar5 != 0));
        piVar5 = (int *)*piVar5) {
      iVar7 = piVar5[3];
      if (iVar7 != 0) {
        piVar1 = *(int **)(iVar7 + 4);
        piVar2 = (int *)(iVar7 + 8);
        while (DAT_0074c68c = uVar3, DAT_0074c688 = iVar6, iVar6 = DAT_0074c688,
              uVar3 = DAT_0074c68c, piVar1 != (int *)0x0) {
          DAT_0074c980 = DAT_0074c980 + 1;
          FUN_005273a0((double *)piVar5[2],(int)piVar1,(double *)&local_18);
          if ((double)CONCAT44(local_18._4_4_,(int)local_18) < (double)CONCAT44(uStack_24,local_28))
          {
            local_28 = (int)local_18;
            uStack_24 = local_18._4_4_;
          }
          if ((((_DAT_0074c000 < -(double)CONCAT44(local_18._4_4_,(int)local_18)) ||
               (_DAT_0074c000 < (double)CONCAT44(local_18._4_4_,(int)local_18))) ||
              (piVar1 == DAT_0074c61c)) || (piVar5 == DAT_0074c624)) {
            FUN_005164c0(piVar5[2]);
            FUN_00558953(DAT_0074c5ec,(byte *)s_qh_check_maxout__p_d__v_d__is____005babf0);
          }
          piVar1 = (int *)*piVar2;
          piVar2 = piVar2 + 1;
          iVar6 = DAT_0074c688;
          uVar3 = DAT_0074c68c;
        }
      }
      DAT_0074c68c = uVar3;
      DAT_0074c688 = iVar6;
      iVar6 = DAT_0074c688;
      uVar3 = DAT_0074c68c;
      DAT_0074c688 = local_28;
      DAT_0074c68c = uStack_24;
    }
    if ((DAT_0074be98 != 0) &&
       ((double)CONCAT44(uVar3,iVar6) < (double)CONCAT44(_DAT_0074cb74,_DAT_0074cb70))) {
      _DAT_0074cb70 = iVar6;
      _DAT_0074cb74 = uVar3;
    }
    FUN_00514ba0((int *)&local_30);
  }
  local_34 = FUN_0051a120();
  if (local_34 != (int *)0x0) {
    piVar5 = (int *)local_34[1];
    iVar6 = 0;
    local_28 = FUN_00514af0(local_34);
    if (0 < local_28) {
      iVar7 = 4;
      do {
        if ((piVar5 != (int *)0x0) &&
           (pdVar4 = (double *)FUN_0051a050(iVar6), pdVar4 != DAT_0074be54)) {
          DAT_0074cd40 = DAT_0074cd40 + 1;
          piVar5 = FUN_00527570(pdVar4,piVar5,1,0,0,(double *)&local_18,(undefined4 *)0x0,&local_2c)
          ;
          DAT_0074c860 = DAT_0074c860 + local_2c;
          if (((piVar5 != (int *)0x0) &&
              ((double)CONCAT44(uStack_c,local_10) < (double)CONCAT44(local_18._4_4_,(int)local_18))
              ) && (((DAT_0074bec8 == 0 || ((piVar5[0x14] & 0x40000U) != 0)) ||
                    ((piVar5 = (int *)FUN_0052a6f0(pdVar4,(int)piVar5,&local_18,&local_1c),
                     piVar5 != (int *)0x0 &&
                     ((double)CONCAT44(uStack_c,local_10) <
                      (double)CONCAT44(local_18._4_4_,(int)local_18))))))) {
            local_10 = (int)local_18;
            uStack_c = local_18._4_4_;
          }
          if ((_DAT_0074c000 < (double)CONCAT44(local_18._4_4_,(int)local_18)) ||
             ((piVar5 != (int *)0x0 && (piVar5 == DAT_0074c61c)))) {
            FUN_005164c0((uint)pdVar4);
            FUN_00558953(DAT_0074c5ec,(byte *)s_qh_check_maxout__p_d_is___2g_abo_005babc8);
          }
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 4;
        piVar5 = *(int **)((int)local_34 + iVar7);
      } while (iVar6 < local_28);
    }
  }
  FUN_00514ba0((int *)&local_34);
  _DAT_0074cab8 = (double)CONCAT44(uStack_c,local_10) - (double)CONCAT44(DAT_0074c67c,DAT_0074c678);
  if ((double)CONCAT44(_DAT_0074cac4,_DAT_0074cac0) < (double)CONCAT44(DAT_0074c67c,DAT_0074c678)) {
    _DAT_0074cac0 = DAT_0074c678;
    _DAT_0074cac4 = DAT_0074c67c;
  }
  DAT_0074c678 = local_10;
  DAT_0074c67c = uStack_c;
  FUN_00519c40();
  DAT_0074c670 = 1;
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_check_maxout__maxoutside__2_2_005bab78);
  }
  return;
}


