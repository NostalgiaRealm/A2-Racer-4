
/* ==== FUN_00527cb0 @ 00527cb0 ==== 
 * signature: int __cdecl FUN_00527cb0(double * param_1, int param_2, double * param_3, undefined4 * param_4, int * param_5)
 * body: 00527cb0-00528027
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_00527cb0(double *param_1,int param_2,double *param_3,undefined4 *param_4,int *param_5)

{
  double dVar1;
  int iVar2;
  int *piVar3;
  undefined4 unaff_EBP;
  int iStack_28;
  int local_24;
  int local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 local_10;
  undefined4 uStack_8;
  
  local_24 = DAT_0074be68;
  if (param_2 == 0) {
    if (DAT_0074be98 == 0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_findbes_005c1bcc);
    }
    else {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_precision_error__qh_findbe_005c1c10);
    }
    FUN_0051e8e0(5,(int *)0x0);
  }
  if ((DAT_0074be20 == 0) && (param_4 != (undefined4 *)0x0)) {
    if (DAT_0074be98 == 0) {
      local_10 = (double)CONCAT44(DAT_0074be14,DAT_0074be10);
    }
    else {
      local_10 = (double)CONCAT44(DAT_0074be14,DAT_0074be10) * 4.0;
      if (local_10 < _DAT_0074c678 + _DAT_0074c678) {
        local_10 = _DAT_0074c678 + _DAT_0074c678;
      }
    }
  }
  else {
    local_10 = 1.79769313486232e+308;
  }
  if (((DAT_0074bff0 != 0) && (-1 < DAT_0074bff8)) &&
     (iVar2 = FUN_005164c0((uint)param_1), DAT_0074bff8 == iVar2)) {
    DAT_0074be68 = DAT_0074bff0;
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_findbestnew__point_p_d_facet_f_005c1b90);
    FUN_00558953(DAT_0074c5ec,(byte *)s_Last_point_added_to_hull_was_p_d_005c1a9c);
    FUN_00558953(DAT_0074c5ec,(byte *)s_Last_merge_was___d__005c1a84);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 1;
  }
  local_20 = 0;
  *param_5 = 0;
  iVar2 = param_2;
  do {
    while (((iVar2 == 0 || (*(int *)(iVar2 + 0x30) == 0)) || ((iVar2 == param_2 && (local_20 != 0)))
           )) {
      local_20 = local_20 + 1;
      iVar2 = DAT_0074c60c;
      if (1 < local_20) {
        iVar2 = iStack_28;
        if (iStack_28 == 0) {
          iVar2 = local_24;
        }
        iVar2 = *(int *)(iVar2 + 0x3c);
        if (iVar2 != 0) {
          piVar3 = (int *)(iVar2 + 4);
          iVar2 = *(int *)(iVar2 + 4);
          while (iVar2 != 0) {
            piVar3 = piVar3 + 1;
            if ((*(uint *)(iVar2 + 0x50) & 0x200) == 0) {
              FUN_005273a0(param_1,iVar2,param_3);
              *param_5 = *param_5 + 1;
              if ((*(uint *)(iVar2 + 0x50) & 0x10000) == 0) {
                if ((double)CONCAT44(unaff_EBP,uStack_8) < *param_3) {
                  uStack_8 = *(undefined4 *)param_3;
                  unaff_EBP = *(undefined4 *)((int)param_3 + 4);
                  iStack_28 = iVar2;
                }
              }
              else if ((double)CONCAT44(uStack_14,local_18) < *param_3) {
                local_18 = *(undefined4 *)param_3;
                uStack_14 = *(undefined4 *)((int)param_3 + 4);
                local_24 = iVar2;
              }
            }
            iVar2 = *piVar3;
          }
        }
        if ((iStack_28 == 0) ||
           (((param_4 != (undefined4 *)0x0 &&
             ((double)CONCAT44(DAT_0074be14,DAT_0074be10) <= (double)CONCAT44(uStack_14,local_18)))
            && ((double)CONCAT44(unaff_EBP,uStack_8) < (double)CONCAT44(uStack_14,local_18))))) {
          *(undefined4 *)param_3 = local_18;
          *(undefined4 *)((int)param_3 + 4) = uStack_14;
          iStack_28 = local_24;
        }
        else {
          *(undefined4 *)param_3 = uStack_8;
          *(undefined4 *)((int)param_3 + 4) = unaff_EBP;
        }
        if ((param_4 != (undefined4 *)0x0) &&
           (*param_3 < (double)CONCAT44(DAT_0074be14,DAT_0074be10))) {
          *param_4 = 0;
        }
        DAT_0074be68 = 0xffefffff;
        return iStack_28;
      }
    }
    FUN_005273a0(param_1,iVar2,param_3);
    *param_5 = *param_5 + 1;
    if ((*(uint *)(iVar2 + 0x50) & 0x10000) == 0) {
      if ((double)CONCAT44(unaff_EBP,uStack_8) < *param_3) {
        dVar1 = *param_3;
        unaff_EBP = *(undefined4 *)((int)param_3 + 4);
        uStack_8 = *(undefined4 *)param_3;
        iStack_28 = iVar2;
        goto joined_r0x00527ee4;
      }
    }
    else if ((double)CONCAT44(uStack_14,local_18) < *param_3) {
      dVar1 = *param_3;
      local_18 = *(undefined4 *)param_3;
      uStack_14 = *(undefined4 *)((int)param_3 + 4);
      local_24 = iVar2;
joined_r0x00527ee4:
      if (local_10 <= dVar1) {
        DAT_0074be68 = 0xffefffff;
        return iVar2;
      }
    }
    iVar2 = *(int *)(iVar2 + 0x30);
  } while( true );
}


