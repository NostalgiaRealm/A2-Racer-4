
/* ==== FUN_00520570 @ 00520570 ==== 
 * signature: char * __fastcall FUN_00520570(int * param_1)
 * body: 00520570-00520843
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __fastcall FUN_00520570(int *param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  int *piVar5;
  double dVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *pvVar9;
  double *pdVar10;
  double *pdVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int local_30;
  int local_2c;
  uint local_24;
  int local_20;
  
  pdVar4 = (double *)param_1[1];
  if (pdVar4 == (double *)0x0) {
    return s_calc_line_representation__no_ori_005bea9c;
  }
  dVar2 = ABS(*pdVar4);
  dVar6 = ABS(pdVar4[1]);
  piVar5 = (int *)*param_1;
  dVar3 = dVar2;
  if (dVar2 < dVar6) {
    dVar3 = dVar6;
  }
  uVar13 = (uint)(dVar2 < dVar6);
  if (dVar3 < ABS(pdVar4[2])) {
    uVar13 = 2;
  }
  if (uVar13 == 0) {
    local_2c = 1;
  }
  else {
    if (uVar13 != 1) {
      if (uVar13 == 2) {
        local_2c = 0;
        local_30 = 1;
      }
      else {
        local_30 = 0;
        local_2c = 0;
        _DAT_00000000 = 0;
      }
      goto LAB_00520616;
    }
    local_2c = 0;
  }
  local_30 = 2;
LAB_00520616:
  local_24 = (uint)(pdVar4[uVar13] < 0.0);
  if (uVar13 == 1) {
    local_24 = 1 - local_24;
  }
  puVar7 = FUN_004f5aa0(piVar5[0xf],4);
  if ((LPVOID)param_1[6] != (LPVOID)0x0) {
    FUN_00559d4e((LPVOID)param_1[6]);
    param_1[6] = 0;
  }
  puVar8 = FUN_004f5aa0(*(int *)((int)pdVar4 + 0x24),4);
  param_1[6] = (int)puVar8;
  if ((LPVOID)param_1[7] != (LPVOID)0x0) {
    FUN_00559d4e((LPVOID)param_1[7]);
    param_1[7] = 0;
  }
  puVar8 = FUN_004f5aa0(*(int *)((int)pdVar4 + 0x24),4);
  param_1[7] = (int)puVar8;
  iVar14 = *(int *)((int)pdVar4 + 0x24) + -1;
  if (-1 < iVar14) {
    local_20 = 0;
    do {
      iVar1 = *(int *)(*piVar5 + 0xc) + (uint)*(ushort *)(*(int *)(pdVar4 + 5) + iVar14 * 2) * 4;
      iVar15 = (int)*(char *)(*(int *)((int)pdVar4 + 0x2c) + iVar14);
      if (local_24 != 0) {
        iVar15 = 1 - iVar15;
      }
      uVar16 = (uint)*(ushort *)(iVar15 * 2 + iVar1);
      pdVar10 = (double *)puVar7[uVar16];
      uVar13 = (uint)*(ushort *)(iVar1 + iVar15 * -2 + 2);
      if (pdVar10 == (double *)0x0) {
        pvVar9 = operator_new(0x30);
        if (pvVar9 == (void *)0x0) {
          pdVar10 = (double *)0x0;
        }
        else {
          pdVar10 = (double *)FUN_0051fee0(pvVar9,uVar16);
        }
        puVar7[uVar16] = pdVar10;
        *(double **)(local_20 + param_1[7]) = pdVar10;
        local_20 = local_20 + 4;
      }
      dVar2 = *(double *)(piVar5[0xe] + (local_30 + uVar16 * 5) * 8);
      dVar3 = *(double *)(piVar5[0xe] + (uVar16 * 5 + local_2c) * 8);
      *(undefined4 *)(pdVar10 + 2) = 0;
      *pdVar10 = dVar3;
      *(undefined4 *)((int)pdVar10 + 0x14) = 0;
      pdVar10[1] = dVar2;
      pdVar11 = (double *)puVar7[uVar13];
      if (pdVar11 == (double *)0x0) {
        pvVar9 = operator_new(0x30);
        if (pvVar9 == (void *)0x0) {
          pdVar11 = (double *)0x0;
        }
        else {
          pdVar11 = (double *)FUN_0051fee0(pvVar9,uVar13);
        }
        puVar7[uVar13] = pdVar11;
        *(double **)(local_20 + param_1[7]) = pdVar11;
        local_20 = local_20 + 4;
      }
      dVar2 = *(double *)(piVar5[0xe] + (local_30 + uVar13 * 5) * 8);
      *pdVar11 = *(double *)(piVar5[0xe] + (uVar13 * 5 + local_2c) * 8);
      *(undefined4 *)(pdVar11 + 2) = 0;
      *(undefined4 *)((int)pdVar11 + 0x14) = 0;
      pdVar11[1] = dVar2;
      pvVar9 = operator_new(0x20);
      if (pvVar9 == (void *)0x0) {
        piVar12 = (int *)0x0;
      }
      else {
        piVar12 = FUN_0051ff00(pvVar9,pdVar10,pdVar11);
      }
      *(int **)(pdVar10 + 5) = piVar12;
      *piVar12 = param_1[2];
      if (param_1[2] != 0) {
        *(int **)(param_1[2] + 4) = piVar12;
      }
      piVar12[1] = 0;
      param_1[2] = (int)piVar12;
      param_1[3] = param_1[3] + 1;
      *(int **)(param_1[6] + iVar14 * 4) = piVar12;
      iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
  }
  if (puVar7 != (undefined4 *)0x0) {
    FUN_00559d4e(puVar7);
  }
  return (char *)0x0;
}


