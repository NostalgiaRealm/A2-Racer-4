
/* ==== FUN_0052a2b0 @ 0052a2b0 ==== 
 * signature: float10 __cdecl FUN_0052a2b0(int param_1, double * param_2, int param_3, int param_4, int param_5, undefined4 * param_6, double * param_7)
 * body: 0052a2b0-0052a4f3
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl
FUN_0052a2b0(int param_1,double *param_2,int param_3,int param_4,int param_5,undefined4 *param_6,
            double *param_7)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  double *pdVar9;
  double *pdVar10;
  float10 fVar11;
  float10 fVar12;
  int local_20;
  int *local_1c;
  int *local_18;
  
  local_20 = 0;
  iVar7 = 0;
  pdVar10 = DAT_0074c6f4;
  if (param_3 != 0) {
    iVar3 = *(int *)(param_3 + 4);
    local_18 = (int *)(param_3 + 8);
    if (iVar3 != 0) {
      local_1c = DAT_0074c6f8;
      do {
        if (iVar3 != param_4) {
          local_20 = local_20 + 1;
          *local_1c = (int)pdVar10;
          pdVar5 = *(double **)(iVar3 + 8);
          local_1c = local_1c + 1;
          iVar7 = param_1;
          pdVar4 = param_2;
          if (param_4 == 0) {
            dVar1 = *param_7;
            if (param_1 != 0) {
              pdVar4 = pdVar5;
              do {
                pdVar9 = (double *)(((int)param_6 - (int)pdVar5) + (int)pdVar4);
                dVar2 = *pdVar4;
                pdVar4 = pdVar4 + 1;
                iVar7 = iVar7 + -1;
                dVar1 = *pdVar9 * dVar2 + dVar1;
              } while (iVar7 != 0);
            }
            if (dVar1 < -_DAT_0074c500) {
              DAT_0074cbd0 = DAT_0074cbd0 + 1;
              return (float10)0.0;
            }
            if (param_1 != 0) {
              pdVar4 = param_2;
              iVar7 = param_1;
              pdVar9 = pdVar10;
              do {
                pdVar10 = pdVar9 + 1;
                dVar2 = *pdVar5;
                pdVar5 = pdVar5 + 1;
                iVar7 = iVar7 + -1;
                *pdVar9 = (dVar2 - dVar1 * *(double *)(((int)param_6 - (int)param_2) + (int)pdVar4))
                          - *pdVar4;
                pdVar4 = pdVar4 + 1;
                pdVar9 = pdVar10;
              } while (iVar7 != 0);
            }
          }
          else {
            for (; iVar7 != 0; iVar7 = iVar7 + -1) {
              dVar1 = *pdVar5;
              pdVar5 = pdVar5 + 1;
              *pdVar10 = dVar1 - *pdVar4;
              pdVar4 = pdVar4 + 1;
              pdVar10 = pdVar10 + 1;
            }
          }
        }
        iVar3 = *local_18;
        local_18 = local_18 + 1;
        iVar7 = local_20;
      } while (iVar3 != 0);
    }
  }
  if (iVar7 != param_1 + -1) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_facetar_005c2378);
    FUN_0051e8e0(5,(int *)0x0);
  }
  local_1c[iVar7] = (int)pdVar10;
  iVar7 = param_1;
  if (DAT_0074be40 == 0) {
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pdVar10 = *param_6;
      *(undefined4 *)((int)pdVar10 + 4) = param_6[1];
      pdVar10 = pdVar10 + 1;
      param_6 = param_6 + 2;
    }
  }
  else {
    iVar7 = param_1 + -1;
    piVar6 = local_1c;
    if (0 < iVar7) {
      do {
        iVar3 = *piVar6;
        iVar7 = iVar7 + -1;
        *(undefined4 *)(iVar3 + -8 + param_1 * 8) = 0;
        *(undefined4 *)(iVar3 + -4 + param_1 * 8) = 0;
        piVar6 = piVar6 + 1;
      } while (iVar7 != 0);
    }
    if (param_1 != 0) {
      for (uVar8 = param_1 * 2 & 0x3ffffffe; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pdVar10 = 0;
        pdVar10 = (double *)((int)pdVar10 + 4);
      }
    }
    iVar7 = local_1c[param_1 + -1];
    *(undefined4 *)(iVar7 + -8 + param_1 * 8) = 0;
    *(undefined4 *)(iVar7 + -4 + param_1 * 8) = 0xbff00000;
  }
  DAT_0074c948 = DAT_0074c948 + 1;
  fVar11 = FUN_005295d0(local_1c,param_1,(undefined4 *)&stack0xfffffffc);
  if (param_5 != 0) {
    fVar11 = -fVar11;
  }
  fVar12 = (float10)_DAT_0074c020;
  if (3 < DAT_0074be68) {
    FUN_005164c0((uint)param_2);
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_facetarea_simplex__area__2_2g_005c232c);
  }
  return (float10)(double)(fVar12 * fVar11);
}


