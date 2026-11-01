
/* ==== FUN_00537280 @ 00537280 ==== 
 * signature: undefined __cdecl FUN_00537280(int * param_1, int * param_2, double * param_3, double * param_4, int * param_5)
 * body: 00537280-00537780
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00537280(int *param_1,int *param_2,double *param_3,double *param_4,int *param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_18;
  int local_14;
  
  DAT_0074cd50 = DAT_0074cd50 + 1;
  if (((DAT_0074bfc0 != 0) && (DAT_0074c6b0 != 0)) && (DAT_0074c734 + DAT_0074bfc0 < DAT_0074cd50))
  {
    FUN_00539270();
  }
  if (DAT_0074bfc4 <= DAT_0074c658) {
    if ((param_3 == (double *)0x0) || ((-*param_3 <= _DAT_0074c000 && (*param_4 <= _DAT_0074c000))))
    {
      if ((param_1 == DAT_0074c61c) || (param_2 == DAT_0074c61c)) {
        DAT_0074be68 = 4;
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergefacet____________trace_m_005c6784);
      }
    }
    else {
      DAT_0074be68 = DAT_0074bff0;
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergefacet____________trace_w_005c67d0);
    }
  }
  if (1 < DAT_0074be68) {
    local_18 = 0;
    local_14 = -0x40000000;
    if (param_3 != (double *)0x0) {
      local_18 = *(int *)param_4;
      local_14 = *(int *)((int)param_4 + 4);
    }
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergefacet____d_merge_f_d_int_005c673c);
  }
  if (((param_1 == param_2) || ((param_1[0x14] & 0x400U) != 0)) || ((param_2[0x14] & 0x400U) != 0))
  {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_mergefa_005c66d8);
    FUN_005258d0(5,param_1,param_2);
  }
  if (DAT_0074c634 - DAT_0074c614 <= DAT_0074c03c + 1) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_precision_error__Only__d_f_005c65cc);
    if ((4 < DAT_0074c03c) && (DAT_0074be90 == 0)) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_Option__Qx__may_avoid_this_probl_005c65a4);
    }
    FUN_0051e8e0(1,(int *)0x0);
  }
  if (DAT_0074c460 == 0) {
    FUN_0051a750();
  }
  FUN_00535cf0((int)param_1);
  FUN_00535cf0((int)param_2);
  if (3 < DAT_0074be68) {
    FUN_0051eb30(s_MERGING_005c659c,(uint)param_1,(uint)param_2,(int *)0x0,0);
  }
  if (param_3 != (double *)0x0) {
    if ((double)CONCAT44(DAT_0074c67c,DAT_0074c678) < *param_4) {
      DAT_0074c678 = *(undefined4 *)param_4;
      DAT_0074c67c = *(undefined4 *)((int)param_4 + 4);
    }
    if ((double)CONCAT44(DAT_0074c684,DAT_0074c680) < *param_4) {
      DAT_0074c680 = *(undefined4 *)param_4;
      DAT_0074c684 = *(undefined4 *)((int)param_4 + 4);
    }
    if (*(double *)(param_2 + 2) < *param_4) {
      param_2[2] = *(int *)param_4;
      param_2[3] = *(int *)((int)param_4 + 4);
    }
    if (*param_3 < (double)CONCAT44(DAT_0074c68c,DAT_0074c688)) {
      DAT_0074c688 = *(undefined4 *)param_3;
      DAT_0074c68c = *(undefined4 *)((int)param_3 + 4);
    }
    if (((param_2[0x14] & 0x8000000U) == 0) &&
       ((_DAT_0074c500 < *param_4 || (*param_3 < -_DAT_0074c500)))) {
      param_2[0x14] = param_2[0x14] | 0x8000000;
      DAT_0074cdd0 = DAT_0074cdd0 + 1;
    }
  }
  uVar3 = param_2[0x14];
  uVar2 = (param_1[0x14] & 0x1ffU) + 1 + (uVar3 & 0x1ff);
  if (uVar2 < 0x1ff) {
    param_2[0x14] = (uVar3 ^ uVar2) & 0x1ff ^ uVar3;
  }
  else {
    param_2[0x14] = uVar3 | 0x1ff;
  }
  param_2[0x14] = param_2[0x14] & 0xffefffffU | 0x10000000;
  FUN_00539320((int)param_1,(int)param_2);
  if ((DAT_0074c03c < 3) || (iVar6 = FUN_00514af0((int *)param_1[0xd]), iVar6 != DAT_0074c03c)) {
    piVar1 = param_2 + 0xd;
    DAT_0074c6d4 = DAT_0074c6d4 + 1;
    iVar6 = *piVar1;
    if (iVar6 != 0) {
      iVar4 = *(int *)(iVar6 + 4);
      piVar5 = (int *)(iVar6 + 8);
      while (iVar4 != 0) {
        *(int *)(iVar4 + 0x10) = DAT_0074c6d4;
        iVar4 = *piVar5;
        piVar5 = piVar5 + 1;
      }
    }
    if (DAT_0074c03c == 2) {
      FUN_00537790((int)param_1,(int)param_2);
    }
    else {
      FUN_005378e0((int)param_1,(int)param_2);
      FUN_005380a0((int *)param_1[0xd],piVar1);
    }
    FUN_005379f0((int)param_1,(int)param_2);
    FUN_00537fa0((int)param_1,(int)param_2);
    if ((param_2[0x14] & 0x200U) == 0) {
      FUN_00538350(*piVar1);
    }
  }
  else {
    FUN_00537ac0((int)param_1,(int)param_2,param_5);
  }
  if (param_5 == (int *)0x0) {
    FUN_00534b60((int)param_2,(int)param_1);
  }
  if (((param_2[0x14] & 0x800000U) == 0) && ((param_2[0x14] & 0x200U) != 0)) {
    if ((param_1[0x14] & 0x200U) == 0) {
      _DAT_0074cb10 = _DAT_0074cb10 + 1;
    }
    else {
      _DAT_0074cb38 = _DAT_0074cb38 + 1;
    }
  }
  else {
    _DAT_0074cb30 = _DAT_0074cb30 + 1;
  }
  FUN_005395a0((int)param_1,param_2);
  FUN_00516530((int)param_2);
  FUN_00514e50((int)param_2);
  param_2[0x14] = param_2[0x14] & 0xfbffffffU | 0x200;
  FUN_00539120(param_1,param_2);
  if (local_18 != 0) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergefacet__end_of_wide_traci_005c6578);
    DAT_0074be68 = local_14;
  }
  return;
}


