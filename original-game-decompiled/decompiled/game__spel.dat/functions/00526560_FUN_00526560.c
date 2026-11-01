
/* ==== FUN_00526560 @ 00526560 ==== 
 * signature: undefined __cdecl FUN_00526560(double * param_1, int * param_2)
 * body: 00526560-00526811
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00526560(double *param_1,int *param_2)

{
  double *pdVar1;
  double dVar2;
  double *pdVar3;
  int iVar4;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (DAT_0074c694 == 0) {
    pdVar3 = (double *)
             FUN_00527570(param_1,param_2,DAT_0074be20,1,0,(double *)&local_10,&local_18,&local_14);
  }
  else {
    pdVar3 = (double *)FUN_00527cb0(param_1,(int)param_2,(double *)&local_10,&local_18,&local_14);
  }
  DAT_0074cc48 = DAT_0074cc48 + local_14;
  DAT_0074cd60 = DAT_0074cd60 + 1;
  if (DAT_0074c4e0 != 0) {
    if (((DAT_0074be40 != 0) && (local_18 == 0)) &&
       (-_DAT_0074be88 <= (double)CONCAT44(uStack_c,local_10))) {
      FUN_00526a20();
    }
    dVar2 = _DAT_0074be88;
    if (DAT_0074c038 != 0) {
      dVar2 = _DAT_0074c4e8;
    }
    if (-dVar2 <= (double)CONCAT44(uStack_c,local_10)) {
      local_18 = 1;
      goto LAB_00526655;
    }
  }
  if (local_18 == 0) {
    if ((double)CONCAT44(uStack_c,local_10) < -_DAT_0074be88) {
      if ((DAT_0074c038 != 0) && (-_DAT_0074c4e8 < (double)CONCAT44(uStack_c,local_10))) {
        DAT_0074cc58 = DAT_0074cc58 + 1;
        FUN_00526330(param_1,(int *)pdVar3,&local_10);
        return;
      }
      DAT_0074cc40 = DAT_0074cc40 + 1;
      if (3 < DAT_0074be68) {
        FUN_005164c0((uint)param_1);
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_partitionpoint__point_p_d_is_i_005c10f8);
      }
      if (DAT_0074be74 == 0) {
        return;
      }
    }
    else {
      DAT_0074c8d0 = DAT_0074c8d0 + 1;
      if (DAT_0074be40 != 0) {
        FUN_00526a20();
      }
      if ((DAT_0074be70 + DAT_0074c038 == 0) &&
         ((double)CONCAT44(uStack_c,local_10) <= _DAT_0074c678)) {
        return;
      }
    }
    FUN_00526330(param_1,(int *)pdVar3,&local_10);
    return;
  }
LAB_00526655:
  pdVar1 = pdVar3 + 8;
  if ((*(int **)(pdVar3 + 8) == (int *)0x0) ||
     (iVar4 = FUN_005147a0(*(int **)(pdVar3 + 8)), iVar4 == 0)) {
    FUN_00514020((int *)pdVar1,(int)param_1);
    if (((ulonglong)pdVar3[10] & 0x200) == 0) {
      FUN_00516530((int)pdVar3);
      FUN_00514e50((int)pdVar3);
    }
    *(undefined4 *)pdVar3 = local_10;
    *(undefined4 *)((int)pdVar3 + 4) = uStack_c;
  }
  else if ((double)CONCAT44(uStack_c,local_10) <= *pdVar3) {
    FUN_00514110((int *)pdVar1,(int)param_1);
  }
  else {
    FUN_00514020((int *)pdVar1,(int)param_1);
    *(undefined4 *)pdVar3 = local_10;
    *(undefined4 *)((int)pdVar3 + 4) = uStack_c;
  }
  DAT_0074c63c = DAT_0074c63c + 1;
  if (DAT_0074be68 < 4) {
    return;
  }
  FUN_005164c0((uint)param_1);
  FUN_00558953(DAT_0074c5ec,(byte *)s_qh_partitionpoint__point_p_d_is_o_005c1160);
  return;
}


