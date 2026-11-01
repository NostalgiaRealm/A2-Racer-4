
/* ==== FUN_0052a6f0 @ 0052a6f0 ==== 
 * signature: int __cdecl FUN_0052a6f0(double * param_1, int param_2, undefined8 * param_3, int * param_4)
 * body: 0052a6f0-0052a8e2
 */

int __cdecl FUN_0052a6f0(double *param_1,int param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_18 = 0xffffffff;
  uStack_14 = 0xffefffff;
  bVar4 = (*(uint *)(param_2 + 0x50) & 0x40000) != 0;
  local_1c = 0;
  if (bVar4) {
    DAT_0074c860 = DAT_0074c860 + 1;
    FUN_005273a0(param_1,param_2,(double *)&local_18);
    local_1c = param_2;
  }
  FUN_00516530(param_2);
  FUN_00514e50(param_2);
  *param_4 = param_2;
  DAT_0074c6d0 = DAT_0074c6d0 + 1;
  *(int *)(param_2 + 0x48) = DAT_0074c6d0;
  for (iVar1 = *param_4; (iVar1 != 0 && (*(int *)(iVar1 + 0x30) != 0));
      iVar1 = *(int *)(iVar1 + 0x30)) {
    iVar2 = *(int *)(iVar1 + 0x3c);
    if (iVar2 != 0) {
      piVar3 = (int *)(iVar2 + 4);
      iVar2 = *(int *)(iVar2 + 4);
      while (iVar2 != 0) {
        piVar3 = piVar3 + 1;
        if ((*(int *)(iVar2 + 0x48) != DAT_0074c6d0) &&
           ((*(int *)(iVar2 + 0x48) = DAT_0074c6d0, !bVar4 ||
            ((*(uint *)(iVar2 + 0x50) & 0x40000) != 0)))) {
          DAT_0074c860 = DAT_0074c860 + 1;
          FUN_005273a0(param_1,iVar2,(double *)&local_10);
          if (0.0 < (double)CONCAT44(uStack_c,local_10)) {
            FUN_00516530(iVar2);
            FUN_00514e50(iVar2);
            if (((*(uint *)(iVar2 + 0x50) & 0x40000) != 0) &&
               (bVar4 = true,
               (double)CONCAT44(uStack_14,local_18) < (double)CONCAT44(uStack_c,local_10))) {
              local_18 = local_10;
              uStack_14 = uStack_c;
              local_1c = iVar2;
            }
          }
        }
        iVar2 = *piVar3;
      }
    }
  }
  if (local_1c != 0) {
    *param_3 = CONCAT44(uStack_14,local_18);
    if (1 < DAT_0074be68) {
      FUN_005164c0((uint)param_1);
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_findgooddist__p_d_is__2_2g_ab_005c23f4);
    }
    return local_1c;
  }
  if (3 < DAT_0074be68) {
    FUN_005164c0((uint)param_1);
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_findgooddist__no_good_facet_f_005c23c0);
  }
  return 0;
}


