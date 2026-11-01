
/* ==== FUN_00538c80 @ 00538c80 ==== 
 * signature: undefined4 __cdecl FUN_00538c80(int param_1, int param_2)
 * body: 00538c80-00538fa4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00538c80(int param_1,int param_2)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  float10 fVar5;
  double local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_18 = 0xffffffff;
  uStack_14 = 0xffefffff;
  local_20 = -1.79769313486232e+308;
  bVar3 = false;
  bVar2 = false;
  if ((DAT_0074bfdc != 0) && (DAT_0074c6b0 == 0)) {
    return 0;
  }
  if (((DAT_0074be90 == 0) || (DAT_0074c6b0 != 0)) && (_DAT_0074c488 < 8.988465674311579e+307)) {
    fVar5 = FUN_005282b0(*(double **)(param_1 + 0x18),*(double **)(param_2 + 0x18));
    local_20 = (double)fVar5;
    DAT_0074c808 = DAT_0074c808 + 1;
    if ((float10)_DAT_0074c488 < fVar5) {
      DAT_0074c8b0 = DAT_0074c8b0 + 1;
      FUN_005344e0(param_1,param_2,2,(undefined4 *)&local_20);
      if (DAT_0074be68 < 2) {
        return 1;
      }
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_test_appendmerge__coplanar_an_005c6ef8);
      return 1;
    }
    bVar2 = true;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar4 = FUN_00528400(param_1);
    *(undefined4 *)(param_1 + 0x28) = uVar4;
  }
  DAT_0074c858 = DAT_0074c858 + 1;
  FUN_005273a0(*(double **)(param_1 + 0x28),param_2,(double *)&local_10);
  if ((double)CONCAT44(uStack_c,local_10) <= _DAT_0074c480) {
    dVar1 = -_DAT_0074c480;
    if (*(int *)(param_2 + 0x28) == 0) {
      uVar4 = FUN_00528400(param_2);
      *(undefined4 *)(param_2 + 0x28) = uVar4;
    }
    DAT_0074c858 = DAT_0074c858 + 1;
    FUN_005273a0(*(double **)(param_2 + 0x28),param_1,(double *)&local_18);
    if ((double)CONCAT44(uStack_14,local_18) <= _DAT_0074c480) {
      if ((((double)CONCAT44(uStack_c,local_10) <= dVar1) &&
          ((double)CONCAT44(uStack_14,local_18) <= -_DAT_0074c480)) ||
         ((DAT_0074be90 != 0 && (DAT_0074c6b0 == 0)))) {
        return 0;
      }
      goto LAB_00538e6e;
    }
  }
  bVar3 = true;
LAB_00538e6e:
  if ((!bVar2) && (DAT_0074be04 != 0)) {
    fVar5 = FUN_005282b0(*(double **)(param_1 + 0x18),*(double **)(param_2 + 0x18));
    local_20 = (double)fVar5;
    DAT_0074c808 = DAT_0074c808 + 1;
  }
  if (bVar3) {
    DAT_0074c890 = DAT_0074c890 + 1;
    if (DAT_0074be04 != 0) {
      local_20 = local_20 + 2.0;
    }
    FUN_005344e0(param_1,param_2,3,(undefined4 *)&local_20);
    if (DAT_0074be68 != 0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_test_appendmerge__concave_f_d_005c6e94);
      return 1;
    }
  }
  else {
    DAT_0074c8b8 = DAT_0074c8b8 + 1;
    FUN_005344e0(param_1,param_2,1,(undefined4 *)&local_20);
    if (1 < DAT_0074be68) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_test_appendmerge__coplanar_f__005c6e3c);
    }
  }
  return 1;
}


