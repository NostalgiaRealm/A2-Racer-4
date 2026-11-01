
/* ==== FUN_00525f40 @ 00525f40 ==== 
 * signature: undefined __cdecl FUN_00525f40(int param_1, int param_2, int param_3)
 * body: 00525f40-0052632c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00525f40(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  double *pdVar3;
  int *piVar4;
  int iVar5;
  double *pdVar6;
  int *local_3c;
  int *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  undefined8 local_10;
  
  local_20 = -1;
  iStack_1c = -0x100001;
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_partitionall__partition_all_p_005c100c);
  }
  local_3c = (int *)FUN_00514b50(param_3);
  DAT_0074c63c = 0;
  piVar4 = local_3c;
  for (iVar2 = param_3; iVar2 != 0; iVar2 = iVar2 + -1) {
    piVar4 = piVar4 + 1;
    *piVar4 = param_2;
    param_2 = param_2 + DAT_0074c03c * 8;
  }
  FUN_00514d30(local_3c,param_3);
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 4);
    piVar4 = (int *)(param_1 + 8);
    while (iVar2 != 0) {
      iVar2 = FUN_005164c0(*(uint *)(iVar2 + 8));
      if (-1 < iVar2) {
        local_3c[iVar2 + 1] = 0;
      }
      iVar2 = *piVar4;
      piVar4 = piVar4 + 1;
    }
  }
  iVar2 = FUN_005164c0(DAT_0074be54);
  if (((-1 < iVar2) && (DAT_0074bfe4 + -1 != iVar2)) && (-1 - DAT_0074bfe8 != iVar2)) {
    local_3c[iVar2 + 1] = 0;
  }
  if (((DAT_0074be60 != 0) && (DAT_0074bec8 != 0)) &&
     ((DAT_0074be98 == 0 && (iVar2 = FUN_005164c0(DAT_0074be60), -1 < iVar2)))) {
    local_3c[iVar2 + 1] = 0;
  }
  if (DAT_0074be20 == 0) {
    if (DAT_0074be98 == 0) {
      local_10 = (double)CONCAT44(DAT_0074be14,DAT_0074be10);
    }
    else {
      local_10 = (double)CONCAT44(DAT_0074be14,DAT_0074be10) * 4.0;
      if (local_10 < _DAT_0074c678 + _DAT_0074c678) {
        local_10 = _DAT_0074c678 + _DAT_0074c678;
      }
    }
    DAT_0074cd60 = (DAT_0074c044 - DAT_0074c03c) + -1;
    local_38 = DAT_0074c600;
    iVar2 = DAT_0074c634;
    if (DAT_0074c600 != (int *)0x0) {
      do {
        piVar4 = local_38;
        if (local_38[0xc] == 0) break;
        piVar1 = local_38 + 0x10;
        local_24 = iVar2 + -1;
        iVar2 = FUN_005147d0(param_3 / iVar2 + 100);
        *piVar1 = iVar2;
        pdVar6 = (double *)0x0;
        local_34 = 0;
        if (local_3c == (int *)0x0) {
LAB_00526246:
          FUN_005145f0(piVar1);
        }
        else {
          pdVar3 = (double *)local_3c[1];
          iVar2 = FUN_00514af0(local_3c);
          piVar4 = local_38;
          if (iVar2 < 1) goto LAB_00526246;
          local_2c = 4;
          local_30 = 4;
          local_28 = iVar2;
          do {
            if (pdVar3 != (double *)0x0) {
              DAT_0074cc50 = DAT_0074cc50 + 1;
              FUN_005273a0(pdVar3,(int)local_38,(double *)&local_18);
              if (local_10 <= (double)CONCAT44(iStack_14,local_18)) {
                DAT_0074c63c = DAT_0074c63c + 1;
                if (pdVar6 == (double *)0x0) {
                  local_20 = local_18;
                  iStack_1c = iStack_14;
                  pdVar6 = pdVar3;
                }
                else if ((double)CONCAT44(iStack_14,local_18) <=
                         (double)CONCAT44(iStack_1c,local_20)) {
                  FUN_00514020(piVar1,(int)pdVar3);
                }
                else {
                  FUN_00514020(piVar1,(int)pdVar6);
                  local_20 = local_18;
                  iStack_1c = iStack_14;
                  pdVar6 = pdVar3;
                }
              }
              else {
                *(double **)(local_30 + (int)local_3c) = pdVar3;
                local_34 = local_34 + 1;
                local_30 = local_30 + 4;
              }
            }
            local_2c = local_2c + 4;
            pdVar3 = *(double **)(local_2c + (int)local_3c);
            local_28 = local_28 + -1;
          } while (local_28 != 0);
          piVar4 = local_38;
          if (pdVar6 == (double *)0x0) goto LAB_00526246;
          FUN_00514020(piVar1,(int)pdVar6);
          *local_38 = local_20;
          local_38[1] = iStack_1c;
          piVar4 = local_38;
        }
        FUN_00514d30(local_3c,local_34);
        local_38 = (int *)piVar4[0xc];
        param_3 = local_34;
        iVar2 = local_24;
      } while (local_38 != (int *)0x0);
      if (DAT_0074be20 != 0) goto LAB_00526292;
    }
    if (((DAT_0074be98 == 0) && (DAT_0074be70 == 0)) && (DAT_0074be74 == 0)) goto LAB_005262e4;
  }
LAB_00526292:
  DAT_0074c694 = 1;
  if (local_3c != (int *)0x0) {
    pdVar6 = (double *)local_3c[1];
    iVar2 = FUN_00514af0(local_3c);
    if (0 < iVar2) {
      iVar5 = 4;
      do {
        if (pdVar6 != (double *)0x0) {
          FUN_00526560(pdVar6,DAT_0074c600);
        }
        iVar5 = iVar5 + 4;
        iVar2 = iVar2 + -1;
        pdVar6 = *(double **)(iVar5 + (int)local_3c);
      } while (iVar2 != 0);
    }
  }
  DAT_0074c694 = 0;
LAB_005262e4:
  DAT_0074cc50 = DAT_0074cc50 + DAT_0074cc48;
  DAT_0074cc48 = 0;
  FUN_00514ba0((int *)&local_3c);
  if (3 < DAT_0074be68) {
    FUN_0051ecb0(DAT_0074c600,0,1);
  }
  return;
}


