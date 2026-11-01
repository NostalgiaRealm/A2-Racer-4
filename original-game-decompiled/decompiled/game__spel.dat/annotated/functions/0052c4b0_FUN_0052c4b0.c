
/* ==== FUN_0052c4b0 @ 0052c4b0 ==== 
 * signature: undefined4 __cdecl FUN_0052c4b0(int param_1, double * param_2, undefined4 * param_3, double * param_4, double * param_5, double * param_6)
 * body: 0052c4b0-0052c743
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_0052c4b0(int param_1,double *param_2,undefined4 *param_3,double *param_4,double *param_5,
            double *param_6)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  float10 fVar5;
  int local_28;
  int local_24;
  double local_20;
  double local_18;
  double local_10;
  
  local_20 = *param_5;
  if (param_1 != 0) {
    pdVar2 = param_4;
    iVar4 = param_1;
    do {
      pdVar3 = (double *)(((int)param_6 - (int)param_4) + (int)pdVar2);
      dVar1 = *pdVar2;
      pdVar2 = pdVar2 + 1;
      iVar4 = iVar4 + -1;
      local_20 = *pdVar3 * dVar1 + local_20;
    } while (iVar4 != 0);
  }
  if (0.0 < local_20) {
LAB_0052c635:
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__feasible_poin_005c2c90);
    for (iVar4 = param_1; iVar4 != 0; iVar4 = iVar4 + -1) {
      local_10 = *param_6;
      param_6 = param_6 + 1;
      FUN_00558953(DAT_0074c5ec,(byte *)s__6_16g_005c1958);
    }
    FUN_00558953(DAT_0074c5ec,(byte *)s_halfspace__005c2c7c);
    for (; param_1 != 0; param_1 = param_1 + -1) {
      local_10 = *param_4;
      param_4 = param_4 + 1;
      FUN_00558953(DAT_0074c5ec,(byte *)s__6_16g_005c1958);
    }
    FUN_00558953(DAT_0074c5ec,(byte *)s_at_offset__005c2c68);
    FUN_00558953(DAT_0074c5ec,(byte *)s__6_16g_005c1958);
    FUN_00558953(DAT_0074c5ec,(byte *)s_and_distance__005c2c58);
    FUN_00558953(DAT_0074c5ec,(byte *)s__6_16g_005c1958);
    FUN_00558953(DAT_0074c5ec,&DAT_005ae60c);
    return 0;
  }
  pdVar2 = param_2;
  if (-_DAT_0074c4c0 <= local_20) {
    if (param_1 != 0) {
      local_18 = -local_20;
      local_28 = param_1;
      do {
        local_28 = local_28 + -1;
        local_10 = *(double *)(((int)param_4 - (int)param_2) + (int)pdVar2);
        fVar5 = FUN_0052a0c0(local_10,local_18,(double)CONCAT44(DAT_0074c4bc,DAT_0074c4b8),&local_24
                            );
        *pdVar2 = (double)fVar5;
        pdVar2 = pdVar2 + 1;
        if (local_24 != 0) goto LAB_0052c635;
      } while (local_28 != 0);
    }
  }
  else if (param_1 != 0) {
    iVar4 = param_1;
    pdVar3 = param_2;
    do {
      iVar4 = iVar4 + -1;
      *pdVar3 = -(*(double *)(((int)param_4 - (int)param_2) + (int)pdVar3) / local_20);
      pdVar2 = pdVar3 + 1;
      pdVar3 = pdVar3 + 1;
    } while (iVar4 != 0);
  }
  *param_3 = pdVar2;
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_sethalfspace__halfspace_at_of_005c2cec);
    for (; param_1 != 0; param_1 = param_1 + -1) {
      local_20 = *param_2;
      param_2 = param_2 + 1;
      FUN_00558953(DAT_0074c5ec,(byte *)s__6_2g_005c2ce4);
    }
    FUN_00558953(DAT_0074c5ec,&DAT_005ae60c);
  }
  return 1;
}


