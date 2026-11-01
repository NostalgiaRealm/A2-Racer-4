
/* ==== FUN_0052cf20 @ 0052cf20 ==== 
 * signature: double * __cdecl FUN_0052cf20(int param_1, int param_2, int param_3, double * param_4)
 * body: 0052cf20-0052d56b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * __cdecl FUN_0052cf20(int param_1,int param_2,int param_3,double *param_4)

{
  int iVar1;
  int *piVar2;
  double *pdVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  float10 fVar9;
  double *local_3c;
  double *local_38;
  double *local_34;
  double *local_30;
  int local_2c;
  double *local_28;
  int local_24;
  double *local_20;
  double *pdStack_1c;
  undefined8 local_18;
  double local_10;
  
  local_3c = (double *)0x0;
  local_38 = (double *)FUN_00514b50(DAT_0074c5fc);
  iVar1 = DAT_0074c03c + -1;
  iVar6 = 0;
  local_2c = 0;
  pdVar5 = DAT_0074c6f4 + DAT_0074c03c * DAT_0074c03c;
  local_34 = (double *)0x0;
  local_10 = 0.0;
  iVar7 = 0;
  if (0 < iVar1) {
    do {
      iVar4 = iVar7 + 1;
      pdVar5[iVar7] =
           (*(double *)(*(int *)(param_1 + 8) + -8 + iVar4 * 8) +
           *(double *)(*(int *)(param_2 + 8) + -8 + iVar4 * 8)) * 0.5;
      iVar7 = iVar4;
    } while (iVar4 < iVar1);
  }
  local_30 = pdVar5;
  if (param_3 != 0) {
    iVar7 = *(int *)(param_3 + 4);
    piVar2 = (int *)(param_3 + 8);
    while (iVar7 != 0) {
      local_24 = iVar6 + 1;
      if (*(int *)(iVar7 + 0x48) == 0) {
        local_34 = (double *)0x1;
      }
      else {
        if (*(int *)(iVar7 + 0x28) == 0) {
          pdVar5 = FUN_0052a500(*(int **)(iVar7 + 0x34));
          *(double **)(iVar7 + 0x28) = pdVar5;
        }
        FUN_00514020((int *)&local_38,*(int *)(iVar7 + 0x28));
        pdVar5 = local_30;
      }
      iVar7 = *piVar2;
      iVar6 = local_24;
      piVar2 = piVar2 + 1;
    }
  }
  if (iVar1 < iVar6) {
    local_3c = (double *)FUN_00514b50(DAT_0074c5fc);
    FUN_00514020((int *)&local_3c,*(int *)(param_1 + 8));
    if (local_34 != (double *)0x0) {
      FUN_00514020((int *)&local_3c,(int)local_30);
    }
    FUN_0052b1f0(iVar1,(int *)local_38,(double *)0x0,0,(int *)&local_3c);
    FUN_00514330((int *)local_3c,0);
  }
  else if (iVar6 == iVar1) {
    if (local_34 != (double *)0x0) {
      FUN_00514020((int *)&local_38,(int)pdVar5);
    }
    local_3c = local_38;
  }
  else {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_detvnorm__too_few_points___d__005c3030);
    FUN_0051e8e0(5,(int *)0x0);
  }
  iVar6 = 0;
  pdVar5 = *(double **)((int)local_34 + 4);
  local_38 = (double *)0x0;
  pdVar8 = DAT_0074c6f4;
  pdStack_1c = pdVar5;
  if (local_34 != (double *)0x0) {
    local_38 = *(double **)((int)local_34 + 4);
    local_20 = local_34 + 1;
    while (local_38 != (double *)0x0) {
      if (3 < DAT_0074be68) {
        FUN_0052b7c0(DAT_0074c5ec,s_qh_detvnorm__Voronoi_vertex_or_m_005c3008,&local_38,1,iVar1);
        pdVar5 = pdStack_1c;
      }
      iVar7 = iVar6;
      if (local_38 != pdVar5) {
        iVar7 = iVar6 + 1;
        DAT_0074c6f8[iVar6] = (int)pdVar8;
        pdVar3 = pdVar5;
        for (iVar6 = iVar1; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pdVar8 = *local_38 - *pdVar3;
          local_38 = local_38 + 1;
          pdVar3 = pdVar3 + 1;
          pdVar5 = pdStack_1c;
          pdVar8 = pdVar8 + 1;
        }
      }
      local_38 = *(double **)local_20;
      iVar6 = iVar7;
      local_20 = (double *)((int)local_20 + 4);
    }
  }
  DAT_0074c6f8[iVar6] = (int)pdVar8;
  FUN_005293b0(iVar1,DAT_0074c6f8,pdVar5,1,pdVar8,&local_10,&local_24);
  iVar6 = *(int *)(param_2 + 8);
  if (DAT_0074be60 != iVar6) {
    iVar6 = *(int *)(param_1 + 8);
  }
  DAT_0074c968 = DAT_0074c968 + 1;
  fVar9 = FUN_00529ff0(iVar1,iVar6,pdVar8,&local_10);
  if ((float10)0.0 < fVar9) {
    local_10 = -local_10;
    pdVar5 = pdVar8;
    for (iVar6 = iVar1; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pdVar5 = -*pdVar5;
      pdVar5 = pdVar5 + 1;
    }
  }
  if ((DAT_0074c010 != 0) || (DAT_0074bf80 != 0)) {
    pdStack_1c = (double *)FUN_005164c0(*(uint *)(param_1 + 8));
    local_20 = (double *)FUN_005164c0(*(uint *)(param_2 + 8));
    pdVar5 = local_28;
    if (local_2c == 0) {
      DAT_0074c978 = DAT_0074c978 + 1;
      fVar9 = FUN_00529ff0(iVar1,(int)local_28,pdVar8,&local_10);
      local_18 = (double)fVar9;
      if (fVar9 < (float10)0.0) {
        local_18 = -local_18;
      }
      DAT_0074ccf8 = DAT_0074ccf8 + 1;
      if ((double)CONCAT44(_DAT_0074cd0c,_DAT_0074cd08) < local_18) {
        _DAT_0074cd08 = (undefined4)local_18;
        _DAT_0074cd0c = local_18._4_4_;
      }
      _DAT_0074cd00 = _DAT_0074cd00 + local_18;
      if (3 < DAT_0074be68) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_detvnorm__points__d__d_midpoi_005c2fd8);
      }
      iVar6 = 0;
      if (0 < iVar1) {
        do {
          iVar7 = iVar6 + 1;
          pdVar5[iVar6] =
               *(double *)(*(int *)(param_2 + 8) + -8 + iVar7 * 8) -
               *(double *)(*(int *)(param_1 + 8) + -8 + iVar7 * 8);
          iVar6 = iVar7;
        } while (iVar7 < iVar1);
      }
      FUN_005285c0(pdVar5,iVar1,0);
      fVar9 = FUN_00529ff0(iVar1,(int)pdVar5,pdVar8,(double *)&stack0xfffffff8);
      if ((float10)0.0 <= fVar9) {
        fVar9 = fVar9 - (float10)1.0;
      }
      else {
        fVar9 = fVar9 + (float10)1.0;
      }
      local_18 = (double)fVar9;
      if (local_18 < 0.0) {
        local_18 = 0.0;
      }
      if (3 < DAT_0074be68) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_detvnorm__points__d__d_angle___005c2fa4);
      }
      if (local_24 == 0) {
        DAT_0074cd10 = DAT_0074cd10 + 1;
        if ((double)CONCAT44(_DAT_0074cd24,_DAT_0074cd20) < local_18) {
          _DAT_0074cd20 = (undefined4)local_18;
          _DAT_0074cd24 = local_18._4_4_;
        }
        _DAT_0074cd18 = _DAT_0074cd18 + local_18;
      }
      else {
        DAT_0074cce0 = DAT_0074cce0 + 1;
        if ((double)CONCAT44(_DAT_0074ccf4,_DAT_0074ccf0) < local_18) {
          _DAT_0074ccf0 = (undefined4)local_18;
          _DAT_0074ccf4 = local_18._4_4_;
        }
        _DAT_0074cce8 = _DAT_0074cce8 + local_18;
      }
    }
    if ((local_34 != local_30) && (local_38 = (double *)0x0, local_30 != (double *)0x0)) {
      local_38 = *(double **)((int)local_30 + 4);
      iVar6 = FUN_00514af0((int *)local_30);
      if (0 < iVar6) {
        iVar7 = 4;
        local_28 = (double *)iVar6;
        do {
          iVar6 = FUN_00514680((int)local_34,(int)local_38);
          if (iVar6 == 0) {
            DAT_0074c978 = DAT_0074c978 + 1;
            local_2c = *(int *)(iVar7 + param_3);
            fVar9 = FUN_00529ff0(iVar1,(int)local_38,pdVar8,&local_10);
            local_18 = (double)fVar9;
            if (fVar9 < (float10)0.0) {
              local_18 = -local_18;
            }
            DAT_0074ccc8 = DAT_0074ccc8 + 1;
            if ((double)CONCAT44(_DAT_0074ccdc,_DAT_0074ccd8) < local_18) {
              _DAT_0074ccd8 = (undefined4)local_18;
              _DAT_0074ccdc = local_18._4_4_;
            }
            _DAT_0074ccd0 = _DAT_0074ccd0 + local_18;
            if (3 < DAT_0074be68) {
              FUN_00558953(DAT_0074c5ec,(byte *)s_qh_detvnorm__points__d__d_Vorono_005c2f6c);
            }
          }
          iVar7 = iVar7 + 4;
          local_28 = (double *)((int)local_28 + -1);
          local_38 = *(double **)(iVar7 + (int)local_30);
        } while (local_28 != (double *)0x0);
        local_28 = (double *)0x0;
      }
    }
  }
  *param_4 = local_10;
  if (local_34 != local_30) {
    FUN_00514ba0((int *)&local_34);
  }
  FUN_00514ba0((int *)&local_30);
  return pdVar8;
}


