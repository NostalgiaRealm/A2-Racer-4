
/* ==== FUN_00429710 @ 00429710 ==== 
 * signature: undefined __cdecl FUN_00429710(int param_1, int param_2, undefined4 param_3, undefined4 param_4, float param_5, float param_6, float param_7, float param_8, undefined4 param_9, undefined4 param_10, char param_11, char param_12, char param_13, undefined4 param_14, undefined4 param_15)
 * body: 00429710-00429eda;00429ee0-0042a243;0042a247-0042a3ce
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00429edb-00429edf 0042a244-0042a246
 */

void __cdecl
FUN_00429710(int param_1,int param_2,undefined4 param_3,undefined4 param_4,float param_5,
            float param_6,float param_7,float param_8,undefined4 param_9,undefined4 param_10,
            char param_11,char param_12,char param_13,undefined4 param_14,undefined4 param_15)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  char *pcVar14;
  undefined4 uStack_3c4;
  undefined1 uStack_3c1;
  float local_3c0;
  char *local_3bc;
  float local_3b8;
  undefined4 uStack_3b4;
  uint local_3b0;
  int local_3ac;
  int local_3a8;
  int local_3a4;
  int local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  float local_38c;
  float local_388;
  undefined4 local_384;
  undefined4 uStack_380;
  float local_374;
  undefined4 local_370;
  int local_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_358;
  float fStack_354;
  undefined4 uStack_350;
  undefined4 local_34c [3];
  undefined4 local_340;
  undefined4 *local_338;
  double local_334;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  int iStack_2e0;
  undefined4 local_2dc;
  char *local_2d8;
  undefined1 *puStack_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  float local_2b0;
  char *local_2ac;
  float local_2a8;
  undefined1 local_2a4;
  undefined4 local_2a0;
  int local_29c [2];
  undefined1 auStack_294 [108];
  int iStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_20c;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  int aiStack_1e4 [2];
  undefined1 auStack_1dc [108];
  int iStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  float local_124;
  float local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  undefined4 local_110;
  float local_10c;
  undefined4 local_108;
  int local_104;
  float local_100;
  undefined4 local_fc;
  int local_f8;
  char local_f4;
  undefined4 local_e4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44 [6];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a1ea;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004a22a0(local_34c);
  local_4 = 0;
  if (param_12 == '\0') {
    local_3a4 = DAT_006fbb40;
    local_3ac = DAT_006fbb50;
    local_3a8 = DAT_006fbb4c;
    local_3a0 = DAT_006fbb44;
  }
  else {
    local_3a4 = 0;
    local_3ac = 0;
    local_3a8 = 0;
    local_3a0 = 0;
  }
  local_3b0 = local_3a0;
  FUN_0049df90((undefined1 *)&local_368,(byte *)s_Veh_d_005968d4);
  DAT_006c2f3c = DAT_006c2f3c + 1;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004093c0(&local_2dc,&local_368,0,0xffffffff);
  if (local_2d8 == (char *)0x0) {
    local_2d8 = "";
  }
  FUN_004f5480(local_34c,local_2d8);
  iVar9 = param_2 * 0xf0;
  FUN_004a7bd0(iVar9 + DAT_00715e50);
  FUN_004a7be0((void *)(iVar9 + DAT_00715e50),&local_368);
  local_3c0 = (float)CONCAT31(local_3c0._1_3_,uStack_3c1);
  *(undefined4 *)(iVar9 + 0x18 + DAT_00715e50) = 1;
  FUN_004028f0(&local_3c0,'\0');
  uVar6 = 0xffffffff;
  pcVar11 = s_ObjectMaterial_005968dc;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar2 = FUN_00402a00(&local_3c0,uVar6,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar11 = s_ObjectMaterial_005968dc;
    pcVar14 = local_3bc;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar14 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar14 = pcVar14 + 1;
    }
    FUN_004029e0(&local_3c0,uVar6);
  }
  local_4._0_1_ = 2;
  puVar3 = (undefined4 *)FUN_004a4430(&DAT_00715f58,(int)&local_3c0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004028f0(&local_3c0,'\x01');
  if (puVar3 == (undefined4 *)0x0) {
    local_3c0 = (float)CONCAT31(local_3c0._1_3_,uStack_3c1);
    FUN_004028f0(&local_3c0,'\0');
    uVar6 = 0xffffffff;
    pcVar11 = s_ObjectMaterial_005968ec;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    uVar2 = FUN_00402a00(&local_3c0,uVar6,'\x01');
    if ((char)uVar2 != '\0') {
      pcVar11 = s_ObjectMaterial_005968ec;
      pcVar14 = local_3bc;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar14 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar14 = pcVar14 + 1;
      }
      FUN_004029e0(&local_3c0,uVar6);
    }
    local_4._0_1_ = 3;
    puVar3 = FUN_004a4510(&DAT_00715f58,&local_3c0,0.6,0.1);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004028f0(&local_3c0,'\x01');
  }
  iVar8 = *(int *)(param_1 + 0x4c);
  iVar10 = iVar8 * 0x268;
  local_334 = (double)(float)(&DAT_006b2bc0)[iVar8 * 0x9a];
  if (param_11 == '\0') {
    local_2b0 = (float)(&DAT_006b2bc4)[iVar8 * 0x9a];
    local_2ac = *(char **)(&DAT_006b2bc8 + iVar10);
    local_2a8 = *(float *)(&DAT_006b2bcc + iVar10);
  }
  else {
    local_3b8 = *(float *)(&DAT_006b2bcc + iVar10) * 0.4;
    local_3bc = (char *)(*(float *)(&DAT_006b2bc8 + iVar10) * 0.4);
    local_3c0 = (float)(&DAT_006b2bc4)[iVar8 * 0x9a] * 0.4;
    local_2b0 = local_3c0;
    local_2ac = local_3bc;
    local_2a8 = local_3b8;
  }
  local_74 = *(undefined4 *)(&DAT_006b2bd0 + iVar10);
  local_70 = *(undefined4 *)(&DAT_006b2bd4 + iVar10);
  local_e4 = *(undefined4 *)(&DAT_006b2bd8 + iVar10);
  iVar8 = iVar8 * 0x9a;
  iVar4 = (local_3a8 + iVar8) * 4;
  local_5c = *(undefined4 *)(&DAT_006b2bdc + iVar4);
  local_58 = *(undefined4 *)(&DAT_006b2bf0 + iVar4);
  local_54 = *(undefined4 *)(&DAT_006b2c04 + iVar10);
  iVar4 = (iVar8 + local_3a4) * 4;
  local_50 = *(float *)(&DAT_006b2c58 + iVar4);
  if (param_12 == '\x01') {
    local_50 = local_50 * *(float *)(&DAT_005d1b74 + DAT_006fb958 * 4) * 0.01;
  }
  local_6c = *(undefined4 *)(&DAT_006b2c1c + iVar4);
  local_68 = *(float *)(&DAT_006b2c30 + iVar4);
  if (param_12 == '\x01') {
    local_68 = local_68 * *(float *)(&DAT_005d1b80 + DAT_006fb958 * 4) * 0.01;
  }
  local_64 = *(undefined4 *)(&DAT_006b2c44 + iVar4);
  local_60 = *(undefined4 *)(&DAT_006b2c6c + iVar4);
  local_4c = *(undefined4 *)(&DAT_006b2c80 + iVar4);
  local_8c = 0x479c4000;
  local_88 = 0x479c4000;
  local_48 = *(undefined4 *)(&DAT_006b2c08 + (iVar8 + local_3ac) * 4);
  local_84 = 0x479c4000;
  local_80 = 0x479c4000;
  puVar12 = (undefined4 *)(&DAT_006b2c94 + local_3ac * 0x18 + iVar10);
  puVar13 = local_44;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  iVar4 = (iVar8 + local_3a0) * 4;
  local_bc = *(undefined4 *)(&DAT_006b2dac + iVar4);
  local_9c = *(float *)(&DAT_006b2dc0 + iVar4) * 0.2;
  local_ac = *(undefined4 *)(&DAT_006b2dc0 + iVar4);
  local_b4 = *(undefined4 *)(&DAT_006b2de8 + iVar4);
  local_a4 = *(undefined4 *)(&DAT_006b2dfc + iVar4);
  local_7c = *(undefined4 *)(&DAT_006b2dd4 + iVar4);
  local_78 = *(undefined4 *)(&DAT_006b2e10 + iVar4);
  iVar8 = (iVar8 + local_3b0) * 4;
  local_94 = *(float *)(&DAT_006b2dfc + iVar4) * 0.2;
  local_2c = *(undefined4 *)(&DAT_006b2d0c + iVar8);
  local_28 = *(undefined4 *)(&DAT_006b2d20 + iVar8);
  local_24 = *(undefined4 *)(&DAT_006b2d34 + iVar8);
  local_20 = *(undefined4 *)(&DAT_006b2d48 + iVar8);
  local_1c = *(undefined4 *)(&DAT_006b2d5c + iVar8);
  local_18 = *(undefined4 *)(&DAT_006b2d70 + iVar8);
  local_14 = *(void **)(&DAT_006b2d84 + iVar8);
  local_10 = *(undefined4 *)(&DAT_006b2d98 + iVar8);
  local_338 = puVar3;
  local_b8 = local_bc;
  local_b0 = local_b4;
  local_a8 = local_ac;
  local_a0 = local_a4;
  local_98 = local_9c;
  local_90 = local_94;
  FUN_004354e0();
  local_124 = -local_38c;
  local_120 = local_388;
  local_3c0 = -local_374;
  local_114 = local_388;
  local_3bc = (char *)local_370;
  local_11c = local_384;
  local_108 = local_370;
  local_118 = local_38c;
  local_110 = local_384;
  local_3b8 = (float)local_36c;
  local_fc = local_370;
  local_104 = local_36c;
  local_29c[0] = param_2;
  local_100 = local_374;
  local_f8 = local_36c;
  local_f4 = param_11;
  local_32c = 1;
  local_314 = 0xa0000000;
  local_310 = 0x3fa99999;
  local_328 = 0x3f800000;
  local_324 = 0x3fd9999a;
  local_320 = 0x3fe66666;
  local_30c = 0x33333333;
  local_308 = 0x3fe33333;
  local_304 = 0x33333333;
  local_300 = 0x3fe33333;
  local_2fc = 0x33333333;
  local_2f8 = 0x3fe33333;
  local_340 = 0;
  local_2a4 = 1;
  local_2a0 = param_14;
  local_10c = local_3c0;
  if (param_13 == '\x01') {
    FUN_004a02a0(local_34c,DAT_00715b0c);
    local_3b0 = DAT_00715b0c;
  }
  else {
    local_3b0 = FUN_004a3460();
    FUN_004a02a0(local_34c,local_3b0);
  }
  local_2bc = 0;
  iVar4 = *(int *)(DAT_00715e50 + iVar9 + 0x24);
  iVar8 = DAT_0073b0d0 + iVar4 + 0x74 + iVar4 * 0xa8;
  local_3c0 = *(float *)(DAT_0073b0d0 + iVar4 + 0x74 + iVar4 * 0xa8);
  local_3bc = *(char **)(iVar8 + 4);
  local_3b8 = *(float *)(iVar8 + 8);
  local_2b4 = 0;
  local_2b8 = local_3bc;
  iVar8 = FUN_004a8c50(DAT_00715e50 + iVar9);
  iVar8 = iVar8 * 0xac;
  if (*(int *)(iVar8 + 0x9c + DAT_0073b5c8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____string_is_not_initialis_005969b0);
  }
  pcVar11 = *(char **)(iVar8 + 0x98 + DAT_0073b5c8);
  local_39c = CONCAT31(local_39c._1_3_,uStack_3c1);
  local_398 = 0;
  local_394 = 0;
  local_390 = 0;
  uVar6 = 0xffffffff;
  pcVar14 = pcVar11;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_39c,(undefined4 *)pcVar11,~uVar6 - 1);
  local_4 = CONCAT31(local_4._1_3_,4);
  puStack_2c0 = (undefined1 *)FUN_004a41f0(&DAT_00715f58,(int)&local_39c);
  if (puStack_2c0 == (undefined1 *)0x0) {
    puStack_2c0 = FUN_004a4330(&DAT_00715f58,(undefined1 *)&local_39c,
                               *(int *)(iVar8 + 0x84 + DAT_0073b5c8),
                               *(int *)(iVar8 + 0x80 + DAT_0073b5c8));
  }
  uVar6 = local_3b0;
  iVar4 = *(int *)(iVar9 + 0x24 + DAT_00715e50);
  iVar8 = DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8;
  uStack_358 = *(undefined4 *)(DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8);
  uStack_350 = *(undefined4 *)(iVar8 + 8);
  fStack_354 = *(float *)(iVar8 + 4) + 20.0;
  FUN_004294f0(auStack_294,&local_368,0,local_3b0,param_15);
  uStack_20c = *(undefined4 *)(&DAT_006b2e24 + iVar10);
  FUN_004294f0(auStack_1dc,&local_368,2,uVar6,param_15);
  uStack_154 = *(undefined4 *)(&DAT_006b2e24 + iVar10);
  uStack_148 = local_2b8;
  uStack_200 = local_2b8;
  uStack_14c = local_2bc;
  uStack_204 = local_2bc;
  local_3c0 = (float)CONCAT31(local_3c0._1_3_,uStack_3c1);
  uVar6 = 0xffffffff;
  pcVar11 = s_VehicleObject_005968fc;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  local_3bc = (char *)0x0;
  uStack_144 = local_2b4;
  uStack_1fc = local_2b4;
  local_3b8 = 0.0;
  uStack_3b4 = 0;
  FUN_00402940(&local_3c0,(undefined4 *)s_VehicleObject_005968fc,~uVar6 - 1);
  local_4._0_1_ = 5;
  piVar5 = (int *)FUN_004a43d0(&DAT_00715f58,(int)&local_3c0);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (local_3bc != (char *)0x0) {
    cVar1 = *(char *)((int)local_3bc + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)((int)local_3bc + -1));
    }
    else {
      *(char *)((int)local_3bc + -1) = cVar1 + -1;
    }
  }
  local_3bc = (char *)0x0;
  local_3b8 = 0.0;
  uStack_3b4 = 0;
  (**(code **)(*piVar5 + 0x14))(local_34c,&uStack_358);
  *(int **)(iVar9 + 0x10 + DAT_00715e50) = piVar5;
  iVar8 = FUN_004a8c50(DAT_00715e50 + iVar9);
  local_3c0 = *(float *)(DAT_0073b5c8 + 0x24 + iVar8 * 0xac) +
              *(float *)(DAT_0073b5c8 + 0x18 + iVar8 * 0xac);
  local_388 = 0.0;
  local_384 = 0xbf800000;
  uStack_380 = 0x3f800000;
  FUN_004a1f30(*(void **)(iVar9 + 0x10 + DAT_00715e50),&local_388);
  if (0.1 <= param_5) {
    *(float *)(iVar9 + 0xb0 + DAT_00715e50) = 1.0 / param_5;
    *(float *)(iVar9 + 0xb4 + DAT_00715e50) =
         1.0 / (param_5 * 0.083333336 * (param_8 * param_8 + param_7 * param_7));
  }
  else {
    *(undefined4 *)(iVar9 + 0xb0 + DAT_00715e50) = 0;
    *(undefined4 *)(iVar9 + 0xb4 + DAT_00715e50) = 0;
  }
  if ((0.0 <= param_6) && (param_6 <= 1.0)) {
    *(float *)(iVar9 + 0xb8 + DAT_00715e50) = param_6;
    if (local_3a0 != 0) {
      cVar1 = *(char *)(local_3a0 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_3a0 + -1));
      }
      else {
        *(char *)(local_3a0 + -1) = cVar1 + -1;
      }
    }
    local_3a0 = 0;
    local_39c = 0;
    local_398 = 0;
    if (local_36c != 0) {
      cVar1 = *(char *)(local_36c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_36c + -1));
      }
      else {
        *(char *)(local_36c + -1) = cVar1 + -1;
      }
    }
    local_36c = 0;
    local_368 = 0;
    uStack_364 = 0;
    pvStack_c = (void *)0x7;
    if (iStack_170 != 0) {
      cVar1 = *(char *)(iStack_170 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iStack_170 + -1));
      }
      else {
        *(char *)(iStack_170 + -1) = cVar1 + -1;
      }
    }
    iStack_170 = 0;
    uStack_16c = 0;
    uStack_168 = 0;
    FUN_004f5510(aiStack_1e4);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,6);
    if (iStack_228 != 0) {
      cVar1 = *(char *)(iStack_228 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iStack_228 + -1));
      }
      else {
        *(char *)(iStack_228 + -1) = cVar1 + -1;
      }
    }
    iStack_228 = 0;
    uStack_224 = 0;
    uStack_220 = 0;
    FUN_004f5510(local_29c);
    pvStack_c = (void *)0xffffffff;
    if (iStack_2e0 != 0) {
      cVar1 = *(char *)(iStack_2e0 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iStack_2e0 + -1));
      }
      else {
        *(char *)(iStack_2e0 + -1) = cVar1 + -1;
      }
    }
    iStack_2e0 = 0;
    local_2dc = 0;
    local_2d8 = (char *)0x0;
    FUN_004f5510((int *)&fStack_354);
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____Invalid_coef__of_restit_00596930);
}


