
/* ==== FUN_005285e0 @ 005285e0 ==== 
 * signature: undefined __cdecl FUN_005285e0(double * param_1, int param_2, int param_3, double * param_4, undefined4 * param_5)
 * body: 005285e0-005288e3
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_005285e0(double *param_1,int param_2,int param_3,double *param_4,undefined4 *param_5)

{
  double dVar1;
  double *pdVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  int local_1c;
  int local_18;
  int local_14;
  double local_10;
  
  local_10 = 0.0;
  if (param_2 == 2) {
    local_10 = SQRT(*param_1 * *param_1 + param_1[1] * param_1[1]);
  }
  else if (param_2 == 3) {
    local_10 = SQRT(*param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2]);
  }
  else if (param_2 == 4) {
    local_10 = SQRT(*param_1 * *param_1 +
                    param_1[1] * param_1[1] + param_1[2] * param_1[2] + param_1[3] * param_1[3]);
  }
  else if (4 < param_2) {
    pdVar2 = param_1 + 4;
    local_10 = *param_1 * *param_1 +
               param_1[1] * param_1[1] + param_1[2] * param_1[2] + param_1[3] * param_1[3];
    for (iVar3 = param_2 + -4; iVar3 != 0; iVar3 = iVar3 + -1) {
      dVar1 = *pdVar2;
      pdVar2 = pdVar2 + 1;
      local_10 = dVar1 * dVar1 + local_10;
    }
    local_10 = SQRT(local_10);
  }
  if (param_4 != (double *)0x0) {
    if (*param_4 <= local_10) {
      *param_5 = 0;
    }
    else {
      *param_5 = 1;
    }
  }
  if (local_10 < _DAT_0074cb68) {
    _DAT_0074cb68 = local_10;
  }
  if (local_10 <= _DAT_0074c4c0) {
    if (local_10 == 0.0) {
      if (param_2 != 0) {
        *param_1 = SQRT(1.0 / (double)param_2);
        pdVar2 = param_1 + 1;
        for (uVar4 = param_2 * 8 - 5U >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pdVar2 = *(undefined4 *)param_1;
          param_1 = (double *)((int)param_1 + 4);
          pdVar2 = (double *)((int)pdVar2 + 4);
        }
        return;
      }
    }
    else {
      if (param_3 == 0) {
        local_10 = -local_10;
      }
      local_14 = param_2 + -1;
      pdVar2 = param_1;
      local_1c = local_14;
      if (param_2 != 0) {
        while (fVar6 = FUN_0052a0c0(*pdVar2,local_10,(double)CONCAT44(DAT_0074c4bc,DAT_0074c4b8),
                                    &local_18), local_18 == 0) {
          *pdVar2 = (double)fVar6;
          pdVar2 = pdVar2 + 1;
          bVar5 = local_1c == 0;
          local_1c = local_1c + -1;
          if (bVar5) {
            return;
          }
        }
        pdVar2 = FUN_0052aee0(param_1,param_2);
        if (local_10 * *pdVar2 < 0.0) {
          dVar1 = -1.0;
        }
        else {
          dVar1 = 1.0;
        }
        if (param_2 != 0) {
          for (uVar4 = local_14 * 2 + 2U & 0x3ffffffe; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)param_1 = 0;
            param_1 = (double *)((int)param_1 + 4);
          }
        }
        *pdVar2 = dVar1;
        DAT_0074cb88 = DAT_0074cb88 + 1;
        if (DAT_0074be68 != 0) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qh_normalize__norm__2_2g_too_sma_005c1d90);
          return;
        }
      }
    }
  }
  else {
    if (param_3 == 0) {
      local_10 = -local_10;
    }
    *param_1 = *param_1 / local_10;
    param_1[1] = param_1[1] / local_10;
    if (param_2 != 2) {
      if (param_2 == 3) {
        param_1[2] = param_1[2] / local_10;
      }
      else {
        if (param_2 == 4) {
          param_1[2] = param_1[2] / local_10;
          param_1[3] = param_1[3] / local_10;
          return;
        }
        if (4 < param_2) {
          iVar3 = param_2 + -4;
          pdVar2 = param_1 + 4;
          param_1[2] = param_1[2] / local_10;
          param_1[3] = param_1[3] / local_10;
          if (iVar3 != 0) {
            do {
              iVar3 = iVar3 + -1;
              *pdVar2 = *pdVar2 / local_10;
              pdVar2 = pdVar2 + 1;
            } while (iVar3 != 0);
            return;
          }
        }
      }
    }
  }
  return;
}


