
/* ==== FUN_00516cc0 @ 00516cc0 ==== 
 * signature: undefined __cdecl FUN_00516cc0(int param_1, int param_2)
 * body: 00516cc0-0051716b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00516cc0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  int local_28;
  int *local_24;
  int local_20;
  double *local_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_28 = 0;
  local_20 = 0;
  bVar5 = false;
  bVar4 = false;
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_checkconvex__check_all_ridges_005baf24);
  }
  if (DAT_0074bfc4 == 0) {
    DAT_0074c888 = 0;
    DAT_0074c8d8 = 0;
  }
  if (param_1 != 0) {
    do {
      if (*(int *)(param_1 + 0x30) == 0) break;
      if ((*(uint *)(param_1 + 0x50) & 0x8000) == 0) {
        if ((DAT_0074be98 == 0) ||
           ((DAT_0074c464 != 0 && ((*(uint *)(param_1 + 0x50) & 0x1000) != 0)))) {
          iVar6 = *(int *)(param_1 + 0x3c);
          bVar3 = true;
          if (iVar6 != 0) {
            iVar8 = *(int *)(iVar6 + 4);
            local_24 = (int *)(iVar6 + 8);
            if (iVar8 != 0) {
              iVar6 = 4;
              do {
                iVar6 = iVar6 + 4;
                iVar1 = *(int *)(*(int *)(param_1 + 0x34) + -4 + iVar6);
                if ((*(uint *)(iVar8 + 0x50) & 0x1000) == 0) {
                  bVar3 = false;
                }
                else {
                  FUN_005273a0(*(double **)(iVar1 + 8),iVar8,(double *)&local_10);
                  if (-_DAT_0074c490 < (double)CONCAT44(uStack_c,local_10)) {
                    if (param_2 == 1) {
                      FUN_00526a20();
                      if (DAT_0074c5ec != (int *)0x0) {
                        FUN_00558953(DAT_0074c5ec,
                                     (byte *)s_qhull_precision_error__initial_s_005bae7c);
                      }
                      FUN_0051e8e0(2,(int *)0x0);
                    }
                    if ((double)CONCAT44(uStack_c,local_10) <= _DAT_0074c490) {
                      if (DAT_0074c464 == 0) {
                        DAT_0074c8d8 = DAT_0074c8d8 + 1;
                        FUN_00526a20();
                        if (DAT_0074be68 != 0) {
                          FUN_005164c0(*(uint *)(iVar1 + 8));
                          FUN_00558953(DAT_0074c5ec,
                                       (byte *)s_qhull_precision_error__f_d_may_b_005bad50);
                        }
                      }
                      else if (0.0 < (double)CONCAT44(uStack_c,local_10)) {
                        DAT_0074c8d8 = DAT_0074c8d8 + 1;
                        FUN_00526a20();
                        if (DAT_0074c5ec != (int *)0x0) {
                          FUN_005164c0(*(uint *)(iVar1 + 8));
                          pcVar9 = s_qhull_precision_error__f_d_is_cl_005badb0;
                          goto LAB_00516e9e;
                        }
                        goto LAB_00516ea6;
                      }
                    }
                    else {
                      DAT_0074c888 = DAT_0074c888 + 1;
                      FUN_00526a20();
                      if (DAT_0074c5ec != (int *)0x0) {
                        FUN_005164c0(*(uint *)(iVar1 + 8));
                        pcVar9 = s_qhull_precision_error__f_d_is_co_005bae1c;
LAB_00516e9e:
                        FUN_00558953(DAT_0074c5ec,(byte *)pcVar9);
                      }
LAB_00516ea6:
                      bVar5 = true;
                      local_28 = param_1;
                      local_20 = iVar8;
                    }
                  }
                }
                iVar8 = *local_24;
                local_24 = local_24 + 1;
              } while (iVar8 != 0);
              if (!bVar3) goto LAB_00516fbd;
            }
          }
        }
        else {
LAB_00516fbd:
          if (DAT_0074c65c == 2) {
            if (*(int *)(param_1 + 0x28) == 0) {
              uVar7 = FUN_00528400(param_1);
              *(undefined4 *)(param_1 + 0x28) = uVar7;
            }
            local_1c = *(double **)(param_1 + 0x28);
          }
          else {
            local_1c = (double *)FUN_00528400(param_1);
            bVar4 = true;
          }
          iVar6 = *(int *)(param_1 + 0x3c);
          if (iVar6 != 0) {
            iVar8 = *(int *)(iVar6 + 4);
            piVar2 = (int *)(iVar6 + 8);
            while (iVar8 != 0) {
              if (((DAT_0074c464 == 0) || ((*(uint *)(param_1 + 0x50) & 0x1000) == 0)) ||
                 ((*(uint *)(iVar8 + 0x50) & 0x1000) == 0)) {
                DAT_0074c958 = DAT_0074c958 + 1;
                FUN_005273a0(local_1c,iVar8,(double *)&local_10);
                if ((double)CONCAT44(uStack_c,local_10) <= _DAT_0074c490) {
                  if ((double)CONCAT44(uStack_c,local_10) < 0.0) goto LAB_00517105;
                  DAT_0074c8d8 = DAT_0074c8d8 + 1;
                  FUN_00526a20();
                  if (DAT_0074c5ec != (int *)0x0) {
                    pcVar9 = s_qhull_precision_error__f_d_is_co_005bac9c;
                    goto LAB_005170eb;
                  }
                }
                else {
                  DAT_0074c888 = DAT_0074c888 + 1;
                  FUN_00526a20();
                  if (DAT_0074c5ec != (int *)0x0) {
                    pcVar9 = s_qhull_precision_error__f_d_is_co_005bacfc;
LAB_005170eb:
                    FUN_00558953(DAT_0074c5ec,(byte *)pcVar9);
                  }
                }
                bVar5 = true;
                local_28 = param_1;
                local_20 = iVar8;
              }
LAB_00517105:
              iVar8 = *piVar2;
              piVar2 = piVar2 + 1;
            }
          }
          if (bVar4) {
            FUN_0051e2b0((undefined4 *)local_1c,DAT_0074c5f4);
          }
        }
      }
      else {
        FUN_00526a20();
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_precision_error__f_d_is_fl_005baee0);
        bVar5 = true;
        local_28 = param_1;
      }
      param_1 = *(int *)(param_1 + 0x30);
    } while (param_1 != 0);
    if ((bVar5) && (DAT_0074be4c == 0)) {
      FUN_005258d0(3,local_28,local_20);
    }
  }
  return;
}


