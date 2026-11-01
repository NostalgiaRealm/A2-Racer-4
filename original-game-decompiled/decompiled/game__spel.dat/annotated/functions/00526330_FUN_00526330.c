
/* ==== FUN_00526330 @ 00526330 ==== 
 * signature: undefined __cdecl FUN_00526330(double * param_1, int * param_2, undefined4 * param_3)
 * body: 00526330-0052655b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00526330(double *param_1,int *param_2,undefined4 *param_3)

{
  double dVar1;
  double *pdVar2;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  double local_10;
  
  local_20 = 0;
  DAT_0074c6dc = 1;
  if (param_3 == (undefined4 *)0x0) {
    if (DAT_0074c694 == 0) {
      param_2 = FUN_00527570(param_1,param_2,1,0,0,(double *)&local_18,&local_1c,&local_20);
    }
    else {
      param_2 = (int *)FUN_00527cb0(param_1,(int)param_2,(double *)&local_18,(undefined4 *)0x0,
                                    &local_20);
    }
    DAT_0074cd58 = DAT_0074cd58 + 1;
    DAT_0074cc38 = DAT_0074cc38 + local_20;
    if (DAT_0074be74 == 0) {
      dVar1 = _DAT_0074be88;
      if (DAT_0074c038 != 0) {
        dVar1 = _DAT_0074c4e8;
      }
      if ((double)CONCAT44(uStack_14,local_18) < -dVar1) {
        _DAT_0074c8c8 = _DAT_0074c8c8 + 1;
        return;
      }
    }
  }
  else {
    local_18 = *param_3;
    uStack_14 = param_3[1];
  }
  if (DAT_0074be70 + DAT_0074c038 + DAT_0074be74 == 0) {
    if (((double)CONCAT44(uStack_14,local_18) <= _DAT_0074c678) ||
       (_DAT_0074c678 = (double)CONCAT44(uStack_14,local_18),
       (double)CONCAT44(uStack_14,local_18) <= _DAT_0074c000)) goto LAB_00526521;
  }
  else {
    pdVar2 = (double *)FUN_005147a0((int *)param_2[0x11]);
    if (pdVar2 != (double *)0x0) {
      DAT_0074c868 = DAT_0074c868 + 1;
      FUN_005273a0(pdVar2,(int)param_2,&local_10);
      if ((double)CONCAT44(uStack_14,local_18) <= local_10) {
        FUN_00514110(param_2 + 0x11,(int)param_1);
        goto LAB_00526521;
      }
    }
    FUN_00514020(param_2 + 0x11,(int)param_1);
    dVar1 = (double)CONCAT44(uStack_14,local_18);
    if ((dVar1 <= _DAT_0074c678) || (_DAT_0074c678 = dVar1, dVar1 <= _DAT_0074c000))
    goto LAB_00526521;
  }
  FUN_005164c0((uint)param_1);
  FUN_00558953(DAT_0074c5ec,(byte *)s_qh_partitioncoplanar_________p_d_005c10a4);
  FUN_0051eb30(s_DISTANT_005c109c,(uint)param_2,0,(int *)0x0,0);
LAB_00526521:
  if (3 < DAT_0074be68) {
    FUN_005164c0((uint)param_1);
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_partitioncoplanar__point_p_d_i_005c1048);
  }
  return;
}


