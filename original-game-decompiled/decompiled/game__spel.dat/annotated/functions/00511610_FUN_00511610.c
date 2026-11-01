
/* ==== FUN_00511610 @ 00511610 ==== 
 * signature: int __cdecl FUN_00511610(int param_1)
 * body: 00511610-00511a99
 */

int __cdecl FUN_00511610(int param_1)

{
  byte *pbVar1;
  double **ppdVar2;
  int *piVar3;
  undefined4 uVar4;
  double *pdVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  double *pdVar11;
  uint uVar12;
  char *pcVar13;
  undefined4 *puVar14;
  char *pcVar15;
  int local_158;
  ushort local_154;
  ushort local_152;
  undefined2 uStack_150;
  undefined2 uStack_14e;
  double *local_14c;
  uint local_148;
  int *local_144;
  char *local_140;
  int local_13c;
  double local_138 [2];
  int local_124;
  int local_120;
  int local_11c;
  char *local_118;
  int local_114;
  char local_110 [252];
  void *local_14;
  code *pcStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  pcStack_10 = FUN_00573e16;
  local_14 = ExceptionList;
  local_154 = *(ushort *)(param_1 + 2);
  local_152 = 0;
  if (local_154 == 0) {
    uStack_150 = 0;
    uStack_14e = 0;
    ExceptionList = &local_14;
  }
  else {
    ExceptionList = &local_14;
    uVar4 = FUN_004f5a90((uint)local_154 << 2);
    uStack_150 = (undefined2)uVar4;
    uStack_14e = (undefined2)((uint)uVar4 >> 0x10);
  }
  local_c = 0;
  pdVar5 = (double *)FUN_0055ab88((uint)*(ushort *)(param_1 + 2) << 2,8);
  local_14c = pdVar5;
  FUN_005010f0(local_138,0x400);
  local_138[0] = (double)CONCAT44(local_138[0]._4_4_,&PTR_FUN_00578b10);
  local_c._0_1_ = 1;
  local_158 = 0;
  if (*(short *)(param_1 + 2) != 0) {
    pdVar5 = pdVar5 + 2;
    do {
      pbVar1 = *(byte **)(*(int *)(param_1 + 4) + local_158 * 4);
      uVar6 = FUN_0051e0a0(pbVar1);
      uVar6 = FUN_005013d0(local_138,pbVar1,uVar6);
      if (uVar6 == 0) {
        uVar6 = FUN_0051e0a0(pbVar1);
        FUN_00501220(local_138,(uint)pbVar1,uVar6);
        if (local_154 <= local_152) {
          FUN_004f6060(&local_154);
        }
        *(byte **)(CONCAT22(uStack_14e,uStack_150) + (uint)local_152 * 4) = pbVar1;
        local_152 = local_152 + 1;
        *(int *)(pdVar5 + -2) = *(int *)pbVar1;
        *(int *)((int)pdVar5 + -0xc) = *(int *)(pbVar1 + 4);
        *(int *)(pdVar5 + -1) = *(int *)(pbVar1 + 8);
        *(int *)((int)pdVar5 + -4) = *(int *)(pbVar1 + 0xc);
        *(int *)pdVar5 = *(int *)(pbVar1 + 0x10);
        *(int *)((int)pdVar5 + 4) = *(int *)(pbVar1 + 0x14);
        pdVar5 = pdVar5 + 3;
      }
      local_158 = local_158 + 1;
    } while (local_158 < (int)(uint)*(ushort *)(param_1 + 2));
  }
  local_c = (uint)local_c._1_3_ << 8;
  FUN_0051e100((undefined4 *)local_138);
  uVar6 = (uint)local_152;
  pcVar7 = (char *)FUN_004f5aa0(uVar6,1);
  local_118 = pcVar7;
  puVar8 = FUN_004f5aa0(uVar6,1);
  local_144 = (int *)0x0;
  local_124 = 1;
  local_138[0] = 9.999999960041972e-13;
  iVar9 = 0;
  do {
    FUN_005587a3(local_110,(byte *)s_qhull_Qs_Pp_C_0_W1e_14_E1_0e_18_005b9e54);
    pcVar13 = pcVar7;
    if (local_124 == 0) {
LAB_005117ff:
      iVar10 = FUN_005689a0(&DAT_0074e050,1);
      if (iVar10 != 0) {
        FUN_005689d0();
      }
      FUN_005587a3(local_110,(byte *)s_qhull_Qs_QJ_G_C_0_Pp_W1e_14_E1_0_005b9df4);
      if (iVar9 != 0) {
        FUN_0051ad10(0);
      }
      local_13c = 1;
      iVar9 = FUN_0051e7a0((double *)0x3,uVar6,local_14c,0,local_110,0,(int *)0x0);
      if (iVar9 == 0) goto LAB_00511895;
      local_124 = 0;
      local_138[0] = (local_138[0] + 9.999999960041972e-13) * 1.2000000476837158;
    }
    else {
      if (iVar9 != 0) {
        FUN_0051ad10(0);
      }
      iVar9 = FUN_0051e7a0((double *)0x3,uVar6,local_14c,0,local_110,0,(int *)0x0);
      local_13c = 1;
      if (iVar9 != 0) {
        iVar9 = 1;
        goto LAB_005117ff;
      }
LAB_00511895:
      puVar14 = puVar8;
      for (uVar12 = uVar6 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      local_114 = 0;
      for (uVar12 = uVar6 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar14 = 0;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      pcVar15 = pcVar7;
      for (uVar12 = uVar6 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        pcVar15[0] = '\0';
        pcVar15[1] = '\0';
        pcVar15[2] = '\0';
        pcVar15[3] = '\0';
        pcVar15 = pcVar15 + 4;
      }
      for (uVar12 = uVar6 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar15 = '\0';
        pcVar15 = pcVar15 + 1;
      }
      local_144 = (int *)FUN_005111f0((int)&local_154,&local_114,(int)pcVar7,(int)puVar8);
      if (local_144 != (int *)0x0) goto LAB_005119d9;
      local_148 = 0;
      local_11c = 0;
      if (0 < (int)uVar6) {
        pdVar11 = local_14c + 2;
        local_120 = (int)puVar8 - (int)pcVar7;
        pdVar5 = pdVar11;
        do {
          if ((pcVar7[local_120] != '\0') && (*pcVar7 == '\0')) {
            *(int *)(pdVar11 + -2) = *(int *)(pdVar5 + -2);
            *(int *)((int)pdVar11 + -0xc) = *(int *)((int)pdVar5 + -0xc);
            *(int *)(pdVar11 + -1) = *(int *)(pdVar5 + -1);
            *(int *)((int)pdVar11 + -4) = *(int *)((int)pdVar5 + -4);
            *(int *)pdVar11 = *(int *)pdVar5;
            *(int *)((int)pdVar11 + 4) = *(int *)((int)pdVar5 + 4);
            *(undefined4 *)(CONCAT22(uStack_14e,uStack_150) + local_148 * 4) =
                 *(undefined4 *)(CONCAT22(uStack_14e,uStack_150) + local_11c * 4);
            local_148 = local_148 + 1;
            pdVar11 = pdVar11 + 3;
          }
          local_11c = local_11c + 1;
          pcVar7 = pcVar7 + 1;
          pdVar5 = pdVar5 + 3;
          pcVar13 = local_118;
          local_140 = pcVar7;
        } while (local_11c < (int)uVar6);
      }
      local_152 = (ushort)local_148;
      if (uVar6 == local_148) {
        local_124 = 0;
        local_138[0] = (local_138[0] + 9.999999960041972e-13) * 1.2000000476837158;
      }
      if (local_148 == 3) {
        local_144 = FUN_00511cc0((int)&local_154);
        goto LAB_005119d9;
      }
      uVar6 = local_148;
      if ((int)local_148 < 4) goto LAB_005119d9;
    }
    pcVar7 = pcVar13;
    iVar9 = local_13c;
    if (0.019999999552965164 <= local_138[0]) {
LAB_005119d9:
      FUN_0051ad10(0);
      FUN_0051e340(&local_120,&local_118);
      FUN_0054b339(local_14c);
      if (pcVar13 != (char *)0x0) {
        FUN_00559d4e(pcVar13);
      }
      if (puVar8 != (undefined4 *)0x0) {
        FUN_00559d4e(puVar8);
      }
      piVar3 = local_144;
      if ((local_144 == (int *)0x0) && (iVar9 = FUN_005689a0(&DAT_0074e050,1), iVar9 != 0)) {
        FUN_005689d0();
      }
      iVar9 = FUN_005689a0(&DAT_0074e050,1);
      if (iVar9 != 0) {
        FUN_005689d0();
      }
      ppdVar2 = (double **)CONCAT22(uStack_14e,uStack_150);
      if ((ppdVar2 != &local_14c) && (ppdVar2 != (double **)0x0)) {
        FUN_00559d4e(ppdVar2);
      }
      ExceptionList = local_14;
      return (int)piVar3;
    }
  } while( true );
}


