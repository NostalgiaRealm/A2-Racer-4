
/* ==== FUN_0052c0d0 @ 0052c0d0 ==== 
 * signature: undefined __cdecl FUN_0052c0d0(double * param_1, int param_2, int param_3, int param_4, int param_5)
 * body: 0052c0d0-0052c3f0
 */

void __cdecl FUN_0052c0d0(double *param_1,int param_2,int param_3,int param_4,int param_5)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  int local_4c;
  double local_48;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  double dStack_18;
  double dStack_10;
  
  iVar5 = 0;
  local_4c = 0;
  if (0 < param_3) {
    local_3c = param_5 - param_4;
    local_40 = param_4 - (int)param_1;
    do {
      pdVar4 = (double *)(local_40 + (int)param_1);
      local_38 = *(double *)((int)pdVar4 + local_3c);
      if ((local_38 <= 8.988465674311579e+307) || (-8.988465674311579e+307 <= *pdVar4)) {
        local_20 = 0xffffffff;
        uStack_1c = 0x7fefffff;
        local_28 = 0xffffffff;
        uStack_24 = 0xffefffff;
        pdVar3 = param_1;
        for (iVar6 = param_2; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (*pdVar3 < (double)CONCAT44(uStack_1c,local_20)) {
            local_20 = *(undefined4 *)pdVar3;
            uStack_1c = *(undefined4 *)((int)pdVar3 + 4);
          }
          if ((double)CONCAT44(uStack_24,local_28) < *pdVar3) {
            local_28 = *(undefined4 *)pdVar3;
            uStack_24 = *(undefined4 *)((int)pdVar3 + 4);
          }
          pdVar3 = pdVar3 + param_3;
        }
        if (8.988465674311579e+307 < local_38) {
          local_38 = (double)CONCAT44(uStack_24,local_28);
        }
        local_30 = *(undefined4 *)pdVar4;
        uStack_2c = *(undefined4 *)((int)pdVar4 + 4);
        if (*pdVar4 < -8.988465674311579e+307) {
          local_30 = local_20;
          uStack_2c = uStack_1c;
        }
        if (((DAT_0074be40 != 0) && (iVar5 == param_3 + -1)) &&
           (local_38 < (double)CONCAT44(uStack_2c,local_30))) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error___Qb_d__or__QB_005c2bac);
          FUN_0051e8e0(1,(int *)0x0);
        }
        local_48 = (double)CONCAT44(uStack_24,local_28) - (double)CONCAT44(uStack_1c,local_20);
        fVar7 = FUN_0052a0c0(local_38 - (double)CONCAT44(uStack_2c,local_30),local_48,
                             (double)CONCAT44(DAT_0074c4bc,DAT_0074c4b8),&local_4c);
        dStack_10 = (double)fVar7;
        if (local_4c != 0) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error___d_th_dimensi_005c2b40);
          FUN_0051e8e0(1,(int *)0x0);
        }
        dStack_18 = ((double)CONCAT44(uStack_24,local_28) * (double)CONCAT44(uStack_2c,local_30) -
                    (double)CONCAT44(uStack_1c,local_20) * local_38) / local_48;
        pdVar4 = param_1;
        for (iVar6 = param_2; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pdVar4 = dStack_10 * *pdVar4 + dStack_18;
          pdVar4 = pdVar4 + param_3;
        }
        if (local_38 <= (double)CONCAT44(uStack_2c,local_30)) {
          dVar2 = (double)CONCAT44(uStack_2c,local_30);
          dVar1 = local_38;
        }
        else {
          dVar1 = (double)CONCAT44(uStack_2c,local_30);
          dVar2 = local_38;
        }
        if (param_2 != 0) {
          local_38 = (double)CONCAT44(local_38._4_4_,param_3 * 8);
          local_48 = (double)CONCAT44(local_48._4_4_,param_2);
          pdVar4 = param_1;
          do {
            if (dVar2 < *pdVar4) {
              *pdVar4 = dVar2;
            }
            if (*pdVar4 < dVar1) {
              *pdVar4 = dVar1;
            }
            pdVar4 = pdVar4 + param_3;
            iVar6 = local_48._0_4_ + -1;
            local_48 = (double)CONCAT44(local_48._4_4_,iVar6);
          } while (iVar6 != 0);
        }
        if (DAT_0074be68 != 0) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qh_scalepoints__scaled__d_th_coo_005c2acc);
        }
      }
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 1;
    } while (iVar5 < param_3);
  }
  return;
}


