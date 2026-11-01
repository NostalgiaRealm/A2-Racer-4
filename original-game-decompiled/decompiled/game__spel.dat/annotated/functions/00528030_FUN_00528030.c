
/* ==== FUN_00528030 @ 00528030 ==== 
 * signature: undefined __cdecl FUN_00528030(int * param_1, int param_2, int param_3, uint * param_4, undefined4 * param_5)
 * body: 00528030-005282a7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00528030(int *param_1,int param_2,int param_3,uint *param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *local_28;
  int local_20;
  int local_18;
  undefined8 local_10;
  
  local_10 = 0.0;
  *param_5 = 0;
  if (0 < param_2) {
    local_28 = param_1;
    iVar10 = 0;
    local_20 = param_3;
    do {
      local_20 = local_20 + -1;
      iVar2 = iVar10 * 8;
      local_10 = *(double *)(*local_28 + iVar2);
      if (*(double *)(*local_28 + iVar2) < 0.0) {
        local_10 = -local_10;
      }
      iVar1 = iVar10 + 1;
      iVar6 = iVar1;
      iVar8 = iVar10;
      piVar9 = local_28;
      if (iVar1 < param_2) {
        do {
          piVar9 = piVar9 + 1;
          dVar3 = *(double *)(iVar2 + *piVar9);
          if (*(double *)(iVar2 + *piVar9) < 0.0) {
            dVar3 = -dVar3;
          }
          if (local_10 < dVar3) {
            iVar8 = iVar6;
            local_10 = dVar3;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_2);
        if (iVar8 != iVar10) {
          iVar10 = param_1[iVar8];
          param_1[iVar8] = *local_28;
          *local_28 = iVar10;
          *param_4 = *param_4 ^ 1;
        }
      }
      if ((*(double *)(iVar2 + DAT_0074c4e4) < local_10) || (*param_5 = 1, local_10 != 0.0)) {
        iVar10 = *local_28;
        dVar3 = *(double *)(iVar10 + iVar2);
        if (iVar1 < param_2) {
          local_18 = param_2 - iVar1;
          piVar9 = local_28;
          do {
            piVar9 = piVar9 + 1;
            pdVar5 = (double *)(iVar2 + *piVar9);
            dVar4 = *pdVar5;
            pdVar7 = (double *)(iVar10 + iVar2);
            for (iVar6 = local_20; iVar6 != 0; iVar6 = iVar6 + -1) {
              pdVar7 = pdVar7 + 1;
              pdVar5 = pdVar5 + 1;
              *pdVar5 = *pdVar5 - (dVar4 / dVar3) * *pdVar7;
            }
            local_18 = local_18 + -1;
          } while (local_18 != 0);
        }
      }
      else {
        if (3 < DAT_0074be68) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qh_gausselim__0_pivot_at_column___005c1cd0);
          FUN_0052b7c0(DAT_0074c5ec,s_Matrix__005c1cc8,param_1,param_2,param_3);
        }
        DAT_0074ca50 = DAT_0074ca50 + 1;
        FUN_00526a20();
      }
      local_28 = local_28 + 1;
      iVar10 = iVar1;
    } while (iVar1 < param_2);
  }
  if (local_10 < (double)CONCAT44(_DAT_0074cb6c,_DAT_0074cb68)) {
    _DAT_0074cb68 = (undefined4)local_10;
    _DAT_0074cb6c = local_10._4_4_;
  }
  if (4 < DAT_0074be68) {
    FUN_0052b7c0(DAT_0074c5ec,s_qh_gausselem__result_005c1c8c,param_1,param_2,param_3);
  }
  return;
}


