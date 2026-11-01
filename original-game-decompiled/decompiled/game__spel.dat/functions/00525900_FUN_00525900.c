
/* ==== FUN_00525900 @ 00525900 ==== 
 * signature: undefined __cdecl FUN_00525900(double * param_1, uint param_2, int * param_3, int * param_4)
 * body: 00525900-00525cd9
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00525900(double *param_1,uint param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  char *pcVar4;
  int local_1c;
  uint local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_1c = 0;
  if (0 < DAT_0074be68) {
    FUN_005164c0((uint)param_1);
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_findhorizon__find_horizon_for_005c0f64);
  }
  *param_4 = 0;
  *param_3 = 0;
  DAT_0074cd78 = DAT_0074cd78 + 1;
  FUN_00516530(param_2);
  FUN_00514e50(param_2);
  DAT_0074c614 = 1;
  if ((*(uint *)(param_2 + 0x50) & 0x40000) != 0) {
    *param_3 = *param_3 + 1;
  }
  DAT_0074c610 = param_2;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) | 0x400;
  if (3 < DAT_0074be68) {
    FUN_0051eb30(s_visible_005c0f5c,param_2,0,(int *)0x0,0);
  }
  DAT_0074c6d0 = DAT_0074c6d0 + 1;
  local_18 = DAT_0074c610;
  if (DAT_0074c610 != 0) {
    do {
      if ((*(uint *)(local_18 + 0x50) & 0x400) == 0) break;
      *(int *)(local_18 + 0x48) = DAT_0074c6d0;
      iVar1 = *(int *)(local_18 + 0x3c);
      if (iVar1 != 0) {
        uVar2 = *(uint *)(iVar1 + 4);
        puVar3 = (uint *)(iVar1 + 8);
        while (uVar2 != 0) {
          if (*(int *)(uVar2 + 0x48) != DAT_0074c6d0) {
            *(int *)(uVar2 + 0x48) = DAT_0074c6d0;
            DAT_0074cc20 = DAT_0074cc20 + 1;
            FUN_005273a0(param_1,uVar2,(double *)&local_10);
            if ((double)CONCAT44(uStack_c,local_10) <= (double)CONCAT44(DAT_0074bebc,DAT_0074beb8))
            {
              if ((double)CONCAT44(uStack_c,local_10) <= -_DAT_0074be88) {
                *(uint *)(uVar2 + 0x50) = *(uint *)(uVar2 + 0x50) & 0xff7fffff;
              }
              else {
                *(uint *)(uVar2 + 0x50) = *(uint *)(uVar2 + 0x50) | 0x800000;
                DAT_0074c8c0 = DAT_0074c8c0 + 1;
                FUN_00526a20();
                if (DAT_0074be98 != 0) {
                  if ((double)CONCAT44(uStack_c,local_10) <= 0.0) {
                    if ((double)CONCAT44(uStack_c,local_10) <
                        (double)CONCAT44(DAT_0074c68c,DAT_0074c688)) {
                      DAT_0074c688 = local_10;
                      DAT_0074c68c = uStack_c;
                    }
                  }
                  else {
                    if ((double)CONCAT44(DAT_0074c67c,DAT_0074c678) <
                        (double)CONCAT44(uStack_c,local_10)) {
                      DAT_0074c678 = local_10;
                      DAT_0074c67c = uStack_c;
                    }
                    if ((double)CONCAT44(DAT_0074c684,DAT_0074c680) <
                        (double)CONCAT44(uStack_c,local_10)) {
                      DAT_0074c680 = local_10;
                      DAT_0074c684 = uStack_c;
                    }
                    if (*(double *)(uVar2 + 8) < (double)CONCAT44(uStack_c,local_10)) {
                      *(undefined4 *)(uVar2 + 8) = local_10;
                      *(undefined4 *)(uVar2 + 0xc) = uStack_c;
                    }
                  }
                }
                if (1 < DAT_0074be68) {
                  FUN_005164c0((uint)param_1);
                  FUN_00558953(DAT_0074c5ec,(byte *)s_qh_findhorizon__point_p_d_is_cop_005c0eec);
                }
              }
              DAT_0074cd48 = DAT_0074cd48 + 1;
              local_1c = local_1c + 1;
              if ((*(uint *)(uVar2 + 0x50) & 0x40000) != 0) {
                *param_4 = *param_4 + 1;
              }
              if (3 < DAT_0074be68) {
                pcVar4 = s_horizon_005c0ee4;
                goto LAB_00525c14;
              }
            }
            else {
              DAT_0074cd78 = DAT_0074cd78 + 1;
              FUN_00516530(uVar2);
              FUN_00514e50(uVar2);
              *(undefined4 *)(uVar2 + 0x20) = 0;
              *(uint *)(uVar2 + 0x50) = *(uint *)(uVar2 + 0x50) | 0x400;
              DAT_0074c614 = DAT_0074c614 + 1;
              if ((*(uint *)(uVar2 + 0x50) & 0x40000) != 0) {
                *param_3 = *param_3 + 1;
              }
              if (3 < DAT_0074be68) {
                pcVar4 = s_visible_005c0f5c;
LAB_00525c14:
                FUN_0051eb30(pcVar4,uVar2,0,(int *)0x0,0);
              }
            }
          }
          uVar2 = *puVar3;
          puVar3 = puVar3 + 1;
        }
      }
      local_18 = *(uint *)(local_18 + 0x30);
    } while (local_18 != 0);
    if (local_1c != 0) goto LAB_00525c86;
  }
  FUN_00526a20();
  FUN_005164c0((uint)param_1);
  FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_precision_error__qh_findho_005c0e7c);
  FUN_0051ecb0(DAT_0074c600,0,1);
  FUN_0051e8e0(3,(int *)0x0);
LAB_00525c86:
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_findhorizon___d_horizon_facet_005c0e2c);
  }
  if ((3 < DAT_0074be68) && (DAT_0074c634 < 0x32)) {
    FUN_0051a4b0();
  }
  return;
}


