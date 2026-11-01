
/* ==== FUN_0044cf90 @ 0044cf90 ==== 
 * signature: undefined __stdcall FUN_0044cf90(void)
 * body: 0044cf90-0044d483;0044d487-0044d541;0044d547-0044da2e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044d484-0044d486 0044d542-0044d546
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044cf90(void)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 *puVar12;
  float10 fVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  float *pfVar16;
  undefined1 local_d0 [4];
  char *local_cc;
  uint uStack_c8;
  undefined1 local_c0 [4];
  char *local_bc;
  float local_b0;
  undefined1 auStack_ac [4];
  char *pcStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined1 auStack_9c [4];
  undefined4 *puStack_98;
  uint uStack_94;
  undefined4 local_8c [16];
  float local_4c [16];
  void *pvStack_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a5a4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_006fb950 == 0) goto LAB_0044d55a;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_c0,'\0');
  uVar7 = 0xffffffff;
  pcVar10 = s_keyboard0_005a1ab0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  uVar2 = FUN_00402a00(local_c0,uVar7,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar10 = s_keyboard0_005a1ab0;
    pcVar11 = local_bc;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_004029e0(local_c0,uVar7);
  }
  local_4 = 0;
  FUN_004028f0(local_d0,'\0');
  uVar7 = 0xffffffff;
  pcVar10 = s_CM_KEYB_COMMA_005a1abc;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  uVar2 = FUN_00402a00(local_d0,uVar7,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar10 = s_CM_KEYB_COMMA_005a1abc;
    pcVar11 = local_cc;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_004029e0(local_d0,uVar7);
  }
  puVar15 = local_c0;
  pfVar16 = (float *)0x0;
  puVar14 = local_d0;
  local_4._0_1_ = 1;
  pvVar3 = (void *)FUN_004ea0c0();
  fVar13 = (float10)FUN_004eb4d0(pvVar3,(int)puVar14,(int)puVar15,pfVar16);
  local_b0 = (float)fVar13;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(local_d0,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_c0,'\x01');
  if (local_b0 == 0.0) {
    FUN_004028f0(local_d0,'\0');
    uVar7 = 0xffffffff;
    pcVar10 = s_keyboard0_005a1acc;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    uVar2 = FUN_00402a00(local_d0,uVar7,'\x01');
    if ((char)uVar2 != '\0') {
      pcVar10 = s_keyboard0_005a1acc;
      pcVar11 = local_cc;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_004029e0(local_d0,uVar7);
    }
    local_4 = 2;
    FUN_004028f0(local_c0,'\0');
    uVar7 = 0xffffffff;
    pcVar10 = s_CM_KEYB_PERIOD_005a1ad8;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    uVar2 = FUN_00402a00(local_c0,uVar7,'\x01');
    if ((char)uVar2 != '\0') {
      pcVar10 = s_CM_KEYB_PERIOD_005a1ad8;
      pcVar11 = local_bc;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_004029e0(local_c0,uVar7);
    }
    puVar15 = local_d0;
    pfVar16 = (float *)0x0;
    puVar14 = local_c0;
    local_4._0_1_ = 3;
    pvVar3 = (void *)FUN_004ea0c0();
    fVar13 = (float10)FUN_004eb4d0(pvVar3,(int)puVar14,(int)puVar15,pfVar16);
    local_b0 = (float)fVar13;
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004028f0(local_c0,'\x01');
    local_4 = 0xffffffff;
    FUN_004028f0(local_d0,'\x01');
    if ((local_b0 != 0.0) && (_DAT_005afa48 = _DAT_005afa48 - 0.01, _DAT_005afa48 < -1.0)) {
      _DAT_005afa48 = -1.0;
    }
  }
  else {
    _DAT_005afa48 = _DAT_005afa48 + 0.01;
    if (10.0 < _DAT_005afa48) {
      _DAT_005afa48 = 10.0;
    }
  }
  FUN_004028f0(local_d0,'\0');
  uVar7 = 0xffffffff;
  pcVar10 = s_keyboard0_005a1ae8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  uVar2 = FUN_00402a00(local_d0,uVar7,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar10 = s_keyboard0_005a1ae8;
    pcVar11 = local_cc;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_004029e0(local_d0,uVar7);
  }
  local_4 = 4;
  FUN_004028f0(local_c0,'\0');
  uVar7 = 0xffffffff;
  pcVar10 = (char *)&DAT_005a1af4;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  uVar2 = FUN_00402a00(local_c0,uVar7,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar10 = (char *)&DAT_005a1af4;
    pcVar11 = local_bc;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_004029e0(local_c0,uVar7);
  }
  puVar15 = local_d0;
  puVar14 = local_c0;
  local_4._0_1_ = 5;
  pvVar3 = (void *)FUN_004ea0c0();
  iVar4 = FUN_004eb7a0(pvVar3,(int)puVar14,(float)puVar15);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004028f0(local_c0,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_d0,'\x01');
  if ((char)iVar4 != '\0') {
    iVar9 = DAT_006fb984 + 1;
    iVar4 = DAT_006fb984 + -0x12;
    if (iVar9 < 0x13) {
      piVar5 = &DAT_005ceab8 + iVar9 * 0xa5;
      do {
        if (((piVar5[-0x34] != -1) && (*piVar5 != 1)) &&
           (((int)piVar5 < 0x5ceab8 || ((0x5cf79c < (int)piVar5 || (iVar9 < DAT_005d2ab0))))))
        break;
        piVar5 = piVar5 + 0xa5;
        iVar9 = iVar9 + 1;
      } while ((int)piVar5 < 0x5d1bb4);
      iVar4 = iVar9 + -0x13;
    }
    if (iVar9 == 0x13 || SBORROW4(iVar9,0x13) != iVar4 < 0) {
      iVar4 = DAT_006fba58;
      DAT_006fb984 = iVar9;
      if (iVar9 != 0x13) goto LAB_0044d3af;
    }
    else {
      DAT_006fb984 = 0;
LAB_0044d3af:
      iVar4 = (&DAT_005ce9e8)[DAT_006fb984 * 0xa5];
    }
    FUN_00438f00(iVar4);
  }
  iVar4 = FUN_004c5e40(0x6b);
  if (iVar4 != 0) {
    _DAT_006fb974 = _DAT_006fb974 * 1.1;
    if (_DAT_006fb974 <= 0.0) {
      _DAT_006fb974 = 0.01;
    }
    puVar6 = (undefined4 *)
             FUN_004b39d0(local_4c,0.5 / _DAT_006fb974,12500.0,_DAT_006fb974 * 3.1415927);
    puVar12 = local_8c;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar12 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    }
    puVar6 = local_8c;
    puVar12 = &DAT_0073b3f4;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar12 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    }
    iVar4 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,3,&DAT_0073b3f4);
    if (iVar4 != 0) {
      FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
    }
  }
  iVar4 = FUN_004c5e40(0x6d);
  if (iVar4 != 0) {
    _DAT_006fb974 = _DAT_006fb974 * 0.9090909;
    if (_DAT_006fb974 <= 0.0) {
      _DAT_006fb974 = -0.01;
    }
    puVar6 = (undefined4 *)
             FUN_004b39d0(local_4c,0.5 / _DAT_006fb974,12500.0,_DAT_006fb974 * 3.1415927);
    puVar12 = local_8c;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar12 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    }
    puVar6 = local_8c;
    puVar12 = &DAT_0073b3f4;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar12 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    }
    iVar4 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,3,&DAT_0073b3f4);
    if (iVar4 != 0) {
      FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
    }
  }
LAB_0044d55a:
  iVar4 = FUN_004c5e40(0x11);
  if ((((iVar4 != 0) && (iVar4 = FUN_004c5e40(0x20), iVar4 != 0)) &&
      (iVar4 = FUN_004c5e40(0x54), iVar4 != 0)) && ((&DAT_006fa58c)[DAT_006fb898 * 0x25] == 0)) {
    DAT_0059becc = 0x2c;
    FUN_00448570(0xb,100000);
  }
  iVar4 = FUN_004c5e40(0x11);
  if (((iVar4 != 0) && (iVar4 = FUN_004c5e40(0x20), iVar4 != 0)) &&
     (iVar4 = FUN_004c5e40(0x49), iVar4 != 0)) {
    DAT_0059becc = 0x2e;
    DAT_006fb96c = 1;
  }
  FUN_004028f0(local_d0,'\0');
  uVar7 = 0xffffffff;
  pcVar10 = s_keyboard0_005a1b00;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  uVar2 = FUN_00402a00(local_d0,uVar7,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar10 = s_keyboard0_005a1b00;
    pcVar11 = local_cc;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_004029e0(local_d0,uVar7);
  }
  local_4 = 6;
  FUN_004028f0(local_c0,'\0');
  uVar7 = 0xffffffff;
  pcVar10 = s_CM_KEYB_RETURN_005a1b0c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  uVar2 = FUN_00402a00(local_c0,uVar7,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar10 = s_CM_KEYB_RETURN_005a1b0c;
    pcVar11 = local_bc;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_004029e0(local_c0,uVar7);
  }
  puVar15 = local_d0;
  puVar14 = local_c0;
  local_4._0_1_ = 7;
  pvVar3 = (void *)FUN_004ea0c0();
  iVar4 = FUN_004eb7a0(pvVar3,(int)puVar14,(float)puVar15);
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_004028f0(local_c0,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_d0,'\x01');
  if (((char)iVar4 != '\0') &&
     (uVar7 = FUN_0040e5a0(DAT_006fba58,DAT_006fba7c,'\x01'), (char)uVar7 != '\0')) {
    DAT_0059becc = 0x42;
  }
  FUN_004028f0(local_d0,'\0');
  uVar7 = 0xffffffff;
  pcVar10 = s_keyboard0_005a1b1c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  uVar2 = FUN_00402a00(local_d0,uVar7,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar10 = s_keyboard0_005a1b1c;
    pcVar11 = local_cc;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    local_cc[uVar7] = '\0';
    uStack_c8 = uVar7;
  }
  local_4 = 8;
  FUN_004028f0(local_c0,'\0');
  uVar7 = 0xffffffff;
  pcVar10 = (char *)&DAT_005a1b28;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  uVar2 = FUN_00402a00(local_c0,uVar7,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar10 = (char *)&DAT_005a1b28;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)local_bc = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      local_bc = local_bc + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *local_bc = *pcVar10;
      pcVar10 = pcVar10 + 1;
      local_bc = local_bc + 1;
    }
    FUN_004029e0(local_c0,uVar7);
  }
  puVar15 = local_d0;
  puVar14 = local_c0;
  local_4._0_1_ = 9;
  pvVar3 = (void *)FUN_004ea0c0();
  iVar4 = FUN_004eb7a0(pvVar3,(int)puVar14,(float)puVar15);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004028f0(local_c0,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_d0,'\x01');
  if ((char)iVar4 != '\0') {
    if (DAT_00712784 == 0) {
      DAT_00712784 = 1;
    }
    else if (DAT_00712784 == 1) {
      DAT_00712784 = -(uint)(DAT_006fb950 != 0) & 2;
    }
    else if (DAT_00712784 == 2) {
      DAT_00712784 = 0;
    }
  }
  FUN_004028f0(auStack_ac,'\0');
  uVar7 = 0xffffffff;
  pcVar10 = s_Keyboard0_005a1b34;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  uVar2 = FUN_00402a00(auStack_ac,uVar7,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar10 = s_Keyboard0_005a1b34;
    pcVar11 = pcStack_a8;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    pcStack_a8[uVar7] = '\0';
    uStack_a4 = uVar7;
  }
  local_4 = 10;
  FUN_004028f0(auStack_9c,'\0');
  uVar7 = 0xffffffff;
  pcVar10 = (char *)&DAT_005a1b40;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  uVar2 = FUN_00402a00(auStack_9c,uVar7,'\x01');
  if ((char)uVar2 != '\0') {
    puVar6 = &DAT_005a1b40;
    puVar12 = puStack_98;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar12 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar12 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    *(undefined1 *)((int)puStack_98 + uVar7) = 0;
    uStack_94 = uVar7;
  }
  puVar15 = auStack_ac;
  puVar14 = auStack_9c;
  local_4._0_1_ = 0xb;
  pvVar3 = (void *)FUN_004ea0c0();
  iVar4 = FUN_004eb7a0(pvVar3,(int)puVar14,(float)puVar15);
  local_4 = CONCAT31(local_4._1_3_,10);
  FUN_004028f0(auStack_9c,'\x01');
  local_4 = 0xffffffff;
  if (pcStack_a8 != (char *)0x0) {
    cVar1 = pcStack_a8[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(pcStack_a8 + -1);
    }
    else {
      pcStack_a8[-1] = cVar1 + -1;
    }
  }
  pcStack_a8 = (char *)0x0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  if (((char)iVar4 != '\0') && (DAT_006fb924 = DAT_006fb924 + 1, 1 < DAT_006fb924)) {
    DAT_006fb924 = 0;
  }
  if (DAT_006fb950 != 0) {
    FUN_00409d20();
  }
  iVar4 = FUN_004c5e40(0x1b);
  if (((iVar4 != 0) && (DAT_006fb8a0 != 6)) && (DAT_006fb8a0 != 3)) {
    _DAT_0071277c = 3;
    DAT_006fb8d8 = 2;
  }
  iVar4 = FUN_004c5e40(0x50);
  if (((iVar4 != 0) && (DAT_006fb8a0 != 6)) && (DAT_006fb8a0 != 3)) {
    _DAT_0071277c = 2;
    DAT_006fb8d8 = 1;
  }
  ExceptionList = pvStack_c;
  return;
}


