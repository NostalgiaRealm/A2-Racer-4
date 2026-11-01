
/* ==== FUN_00527570 @ 00527570 ==== 
 * signature: int * __cdecl FUN_00527570(double * param_1, int * param_2, int param_3, int param_4, int param_5, double * param_6, undefined4 * param_7, int * param_8)
 * body: 00527570-00527ca7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl
FUN_00527570(double *param_1,int *param_2,int param_3,int param_4,int param_5,double *param_6,
            undefined4 *param_7,int *param_8)

{
  double dVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  int *local_40;
  int local_3c;
  int *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  double local_18;
  double local_10;
  double dVar7;
  
  local_2c = DAT_0074be68;
  local_28 = -1;
  uStack_24 = 0xffdfffff;
  local_38 = (int *)0x0;
  if (((param_3 == 0) || (param_4 != 0)) || (param_7 != (undefined4 *)0x0)) {
    bVar3 = false;
    if ((param_4 != 0) && (param_7 != (undefined4 *)0x0)) {
      local_3c = 1;
      goto LAB_005275be;
    }
  }
  else {
    bVar3 = true;
  }
  local_3c = 0;
LAB_005275be:
  if ((param_4 == 0) && (param_7 != (undefined4 *)0x0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((local_3c == 0) || (((param_3 == 0 && (DAT_0074be08 == 0)) && (DAT_0074be98 == 0)))) {
    local_30 = 0;
  }
  else {
    local_30 = 1;
  }
  if (((!bVar3) && (local_3c == 0)) && (!bVar6)) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_findbes_005c1b48);
    FUN_0051e8e0(5,param_2);
  }
  if (((DAT_0074bff0 != 0) && (-1 < DAT_0074bff8)) &&
     (iVar4 = FUN_005164c0((uint)param_1), DAT_0074bff8 == iVar4)) {
    DAT_0074be68 = DAT_0074bff0;
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_findbest__point_p_d_starting_a_005c1b00);
    FUN_00558953(DAT_0074c5ec,(byte *)s_ischeckmax__d_ispartition__d_isf_005c1ac0);
    FUN_00558953(DAT_0074c5ec,(byte *)s_Last_point_added_to_hull_was_p_d_005c1a9c);
    FUN_00558953(DAT_0074c5ec,(byte *)s_Last_merge_was___d__005c1a84);
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 1;
  }
  if ((param_2[0x14] & 0x8000U) == 0) {
    *param_8 = 1;
    FUN_005273a0(param_1,(int)param_2,param_6);
    if (((param_2[0x14] & 0x10000U) == 0) || ((param_5 == 0 && (_DAT_0074be10 <= *param_6)))) {
      uStack_1c = *(undefined4 *)((int)param_6 + 4);
      local_20 = *(undefined4 *)param_6;
      local_40 = param_2;
      if ((param_3 == 0) && (_DAT_0074be10 <= *param_6)) {
        DAT_0074be68 = uStack_24;
        return param_2;
      }
    }
    if ((local_3c != 0) &&
       (((DAT_0074bec8 == 0 || ((param_2[0x14] & 0x40000U) != 0)) &&
        (*(double *)(param_2 + 2) < *param_6)))) {
      param_2[2] = *(int *)param_6;
      param_2[3] = *(int *)((int)param_6 + 4);
    }
  }
  if (local_34 == 0) {
    dVar7 = _DAT_0074beb8;
    if (_DAT_0074beb8 < _DAT_0074be88) {
      dVar7 = _DAT_0074be88;
    }
    dVar7 = _DAT_0074c490 + _DAT_0074c490 + dVar7 + _DAT_0074c678;
  }
  else {
    dVar7 = _DAT_0074c490 + _DAT_0074c490;
  }
  local_18 = (double)CONCAT44(uStack_1c,local_20) - dVar7;
  local_10 = 0.0;
  if (local_3c != 0) {
    dVar1 = _DAT_0074beb8;
    if (_DAT_0074beb8 < _DAT_0074be88) {
      dVar1 = _DAT_0074be88;
    }
    local_10 = -(_DAT_0074c490 - dVar1);
    if (local_10 < local_18) {
      local_18 = local_10;
    }
  }
  local_38 = param_2;
  DAT_0074c6d0 = DAT_0074c6d0 + 1;
  param_2[0x12] = DAT_0074c6d0;
LAB_00527865:
  do {
    local_2c = 0;
    if (3 < DAT_0074be68) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_findbest__neighbors_of_f_d__b_005c1a34);
    }
    if (local_38[0xf] != 0) {
      piVar5 = (int *)(local_38[0xf] + 4);
LAB_005278c3:
      do {
        piVar2 = (int *)*piVar5;
        piVar5 = piVar5 + 1;
        if (piVar2 == (int *)0x0) break;
        if ((local_34 == 0) || ((piVar2[0x14] & 0x200U) != 0)) {
          if ((piVar2[0x14] & 0x8000U) == 0) {
            if (piVar2[0x12] == DAT_0074c6d0) goto LAB_005278c3;
            piVar2[0x12] = DAT_0074c6d0;
            *param_8 = *param_8 + 1;
            FUN_005273a0(param_1,(int)piVar2,param_6);
            if (((param_3 == 0) && (_DAT_0074be10 <= *param_6)) &&
               ((param_5 == 0 || ((local_38[0x14] & 0x10000U) == 0)))) {
              DAT_0074be68 = uStack_24;
              return piVar2;
            }
            if (local_3c == 0) {
              if (local_40 != (int *)0x0) {
                dVar1 = *param_6;
joined_r0x005279a4:
                if (dVar1 < local_18) goto LAB_005278c3;
              }
            }
            else if (((DAT_0074bec8 != 0) && ((piVar2[0x14] & 0x40000U) == 0)) ||
                    (*param_6 <= *(double *)(piVar2 + 2))) {
              if (local_40 != (int *)0x0) {
                dVar1 = *param_6;
                goto joined_r0x005279a4;
              }
            }
            else {
              piVar2[2] = *(int *)param_6;
              piVar2[3] = *(int *)((int)param_6 + 4);
            }
            if (((double)CONCAT44(uStack_1c,local_20) < *param_6) &&
               (((piVar2[0x14] & 0x10000U) == 0 ||
                (((param_3 != 0 && (param_5 == 0)) && (_DAT_0074be10 <= *param_6)))))) {
              local_40 = piVar2;
              if (local_3c == 0) {
                if (dVar7 + (double)CONCAT44(uStack_1c,local_20) < *param_6) {
                  local_20 = *(undefined4 *)param_6;
                  uStack_1c = *(undefined4 *)((int)param_6 + 4);
                  local_18 = *param_6 - dVar7;
                  local_30 = 0;
                  local_38 = piVar2;
                  if (local_2c != 0) {
                    DAT_0074c6d0 = DAT_0074c6d0 + 1;
                    piVar2[0x12] = DAT_0074c6d0;
                  }
                  goto LAB_00527865;
                }
                local_20 = *(undefined4 *)param_6;
                uStack_1c = *(undefined4 *)((int)param_6 + 4);
                local_18 = *param_6 - dVar7;
              }
              else {
                local_20 = *(undefined4 *)param_6;
                uStack_1c = *(undefined4 *)((int)param_6 + 4);
                local_18 = *param_6 - dVar7;
                if (local_10 < local_18) {
                  local_18 = local_10;
                }
              }
              local_2c = 1;
            }
          }
          if (local_30 == 0) {
            DAT_0074c748[1] = (int)piVar2;
            local_30 = local_30 + 1;
            FUN_00514d30(DAT_0074c748,1);
          }
          else {
            local_30 = local_30 + 1;
            FUN_00514020((int *)&DAT_0074c748,(int)piVar2);
          }
        }
      } while( true );
    }
    if ((local_30 == 0) || (local_38 = (int *)FUN_005142e0(DAT_0074c748), local_38 == (int *)0x0)) {
      if (local_3c == 0) {
        if (local_40 == (int *)0x0) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qh_findbest__point_p_d_starting_a_005c1b00);
          FUN_00558953(DAT_0074c5ec,(byte *)s_qh_findbest__all_neighbors_of_fa_005c1990);
          DAT_0074be4c = 1;
          FUN_0051e8e0(5,param_2);
        }
        if (((local_34 != 0) && (DAT_0074c698 == 0)) &&
           ((double)CONCAT44(uStack_1c,local_20) < -_DAT_0074c490)) {
          iVar4 = FUN_0052a570(param_1,(int *)&local_40,(double *)&local_20,param_8);
          if (iVar4 == 0) {
            DAT_0074c698 = 1;
          }
          else {
            DAT_0074c694 = 1;
          }
        }
        if (local_28 != 0) {
          piVar5 = *(int **)(local_40[0xf] + 4);
          if (3 < DAT_0074be68) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qh_findbest__horizon_facet_f_d_005c1970);
          }
          *param_8 = *param_8 + 1;
          FUN_005273a0(param_1,(int)piVar5,param_6);
          if (((double)CONCAT44(uStack_1c,local_20) < *param_6) &&
             (((piVar5[0x14] & 0x10000U) == 0 || ((param_5 == 0 && (_DAT_0074be10 <= *param_6))))))
          {
            local_20 = *(undefined4 *)param_6;
            uStack_1c = *(undefined4 *)((int)param_6 + 4);
            local_40 = piVar5;
          }
        }
      }
      *(undefined4 *)param_6 = local_20;
      *(undefined4 *)((int)param_6 + 4) = uStack_1c;
      if ((param_7 != (undefined4 *)0x0) && ((double)CONCAT44(uStack_1c,local_20) < _DAT_0074be10))
      {
        *param_7 = 0;
      }
      DAT_0074be68 = uStack_24;
      return local_40;
    }
  } while( true );
}


