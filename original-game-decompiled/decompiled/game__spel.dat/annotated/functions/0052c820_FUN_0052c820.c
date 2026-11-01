
/* ==== FUN_0052c820 @ 0052c820 ==== 
 * signature: double * __cdecl FUN_0052c820(int param_1, int * param_2)
 * body: 0052c820-0052cb6f
 */

double * __cdecl FUN_0052c820(int param_1,int *param_2)

{
  double dVar1;
  int iVar2;
  double dVar3;
  int iVar4;
  int *piVar5;
  double *pdVar6;
  double *pdVar7;
  int iVar8;
  double *pdVar9;
  float10 fVar10;
  int *local_30;
  double *local_2c;
  int local_28;
  int local_24;
  double *local_20;
  undefined4 local_1c;
  double local_18;
  double local_10;
  
  local_2c = FUN_0051e110(DAT_0074c5f8);
  iVar4 = FUN_00514af0(param_2);
  iVar8 = param_1 + 1;
  if (iVar4 == iVar8) {
    local_30 = param_2;
  }
  else if (iVar4 < iVar8) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_voronoi_005c2e30);
    FUN_0051e8e0(5,(int *)0x0);
  }
  else {
    local_30 = (int *)FUN_00514b50(iVar8);
    FUN_0052b1f0(param_1,param_2,(double *)0x0,0,(int *)&local_30);
  }
  iVar8 = 0;
  local_28 = local_30[1];
  local_20 = DAT_0074c6f4;
  if (0 < param_1) {
    do {
      DAT_0074c6f8[iVar8] = (int)local_20;
      if (local_30 != (int *)0x0) {
        iVar4 = local_30[1];
        piVar5 = local_30 + 2;
        while (iVar4 != 0) {
          pdVar7 = local_20;
          if (iVar4 != local_28) {
            pdVar7 = local_20 + 1;
            *local_20 = *(double *)(iVar4 + iVar8 * 8) - *(double *)(local_28 + iVar8 * 8);
          }
          iVar4 = *piVar5;
          piVar5 = piVar5 + 1;
          local_20 = pdVar7;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_1);
  }
  iVar8 = 0;
  pdVar7 = local_20;
  if (0 < param_1) {
    do {
      dVar3 = 0.0;
      piVar5 = DAT_0074c6f8;
      iVar4 = param_1;
      do {
        iVar2 = *piVar5;
        piVar5 = piVar5 + 1;
        iVar4 = iVar4 + -1;
        dVar1 = *(double *)(iVar2 + iVar8 * 8);
        dVar3 = dVar1 * dVar1 + dVar3;
      } while (iVar4 != 0);
      *pdVar7 = dVar3;
      pdVar7 = pdVar7 + 1;
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_1);
  }
  fVar10 = FUN_005295d0(DAT_0074c6f8,param_1,&local_1c);
  local_18 = (double)fVar10;
  fVar10 = FUN_0052a0c0(0.5,local_18,(double)CONCAT44(DAT_0074c4c4,DAT_0074c4c0),&local_24);
  local_10 = (double)fVar10;
  if (local_24 == 0) {
    iVar8 = 0;
    if (0 < param_1) {
      do {
        iVar4 = 0;
        pdVar7 = DAT_0074c6f4;
        pdVar9 = local_20;
        do {
          DAT_0074c6f8[iVar4] = (int)pdVar7;
          iVar2 = param_1;
          if (iVar4 == iVar8) {
            for (; iVar2 != 0; iVar2 = iVar2 + -1) {
              *(undefined4 *)pdVar7 = *(undefined4 *)pdVar9;
              *(undefined4 *)((int)pdVar7 + 4) = *(undefined4 *)((int)pdVar9 + 4);
              pdVar7 = pdVar7 + 1;
              pdVar9 = pdVar9 + 1;
            }
          }
          else if (local_30 != (int *)0x0) {
            iVar2 = local_30[1];
            piVar5 = local_30 + 2;
            while (iVar2 != 0) {
              pdVar6 = pdVar7;
              if (iVar2 != local_28) {
                pdVar6 = pdVar7 + 1;
                *pdVar7 = *(double *)(iVar2 + iVar4 * 8) - *(double *)(local_28 + iVar4 * 8);
              }
              iVar2 = *piVar5;
              piVar5 = piVar5 + 1;
              pdVar7 = pdVar6;
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_1);
        fVar10 = FUN_005295d0(DAT_0074c6f8,param_1,&local_1c);
        iVar4 = iVar8 + 1;
        local_2c[iVar8] =
             (double)(fVar10 * (float10)local_10 + (float10)*(double *)(local_28 + iVar8 * 8));
        iVar8 = iVar4;
      } while (iVar4 < param_1);
    }
    if (2 < DAT_0074be68) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_voronoi_center__det__2_2g_fac_005c2de0);
      FUN_0052b7c0(DAT_0074c5ec,s_center__005c2dd8,&local_2c,1,param_1);
      if (4 < DAT_0074be68) {
        FUN_0052b850(DAT_0074c5ec,0x5bda00,(int)local_30);
        if (local_30 != (int *)0x0) {
          pdVar7 = (double *)local_30[1];
          piVar5 = local_30 + 2;
          while (pdVar7 != (double *)0x0) {
            FUN_0052b770(pdVar7,local_2c,param_1);
            FUN_005164c0((uint)pdVar7);
            FUN_00558953(DAT_0074c5ec,(byte *)s_p_d_dist___2g__005c2dc8);
            pdVar7 = (double *)*piVar5;
            piVar5 = piVar5 + 1;
          }
        }
        FUN_00558953(DAT_0074c5ec,&DAT_005ae60c);
      }
    }
  }
  else {
    while (param_1 != 0) {
      param_1 = param_1 + -1;
      *(undefined4 *)(local_2c + param_1) = 0x45a1cac1;
      *(undefined4 *)((int)local_2c + param_1 * 8 + 4) = 0xc02433b6;
    }
    if (DAT_0074be68 != 0) {
      FUN_0052b850(DAT_0074c5ec,0x5c2e0c,(int)local_30);
    }
  }
  if (local_30 != param_2) {
    FUN_00514ba0((int *)&local_30);
  }
  return local_2c;
}


