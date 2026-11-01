
/* ==== FUN_0040b380 @ 0040b380 ==== 
 * signature: undefined __stdcall FUN_0040b380(void)
 * body: 0040b380-0040c045
 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b380(void)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined **ppuVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  undefined8 uVar16;
  int local_48;
  undefined1 local_44 [4];
  undefined4 *local_40;
  uint local_3c;
  undefined1 local_34 [4];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14;
  code *pcStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  pcStack_10 = FUN_0056971e;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004028f0(local_44,'\0');
  local_c = 0;
  FUN_004028f0(local_34,'\0');
  local_c._0_1_ = 1;
  FUN_004028f0(local_24,'\0');
  local_c = CONCAT31(local_c._1_3_,2);
  local_48 = 0x28;
  switch(DAT_005cd9cc) {
  case 1:
    uVar16 = 0x590e0000000000;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,(int)uVar16,(byte *)((ulonglong)uVar16 >> 0x20));
    piVar9 = &DAT_005ceab8;
    do {
      if (piVar9[-0x34] != -1) {
        ppuVar4 = FUN_0040dcf0(*piVar9);
        uVar7 = 0xffffffff;
        ppuVar10 = ppuVar4;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *(char *)ppuVar10;
          ppuVar10 = (undefined **)((int)ppuVar10 + 1);
        } while (cVar1 != '\0');
        uVar7 = ~uVar7 - 1;
        uVar5 = FUN_00402a00(local_44,uVar7,'\x01');
        if ((char)uVar5 != '\0') {
          puVar11 = local_40;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar11 = *ppuVar4;
            ppuVar4 = ppuVar4 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)ppuVar4;
            ppuVar4 = (undefined **)((int)ppuVar4 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          *(undefined1 *)((int)local_40 + uVar7) = 0;
          local_3c = uVar7;
        }
        pvVar6 = (void *)FUN_0040dbb0(piVar9[-0x33]);
        FUN_004093c0(local_34,pvVar6,0,0xffffffff);
        pcVar15 = s___d___s____s_00590e1c;
        iVar14 = 0;
        iVar3 = local_48;
        iVar13 = FUN_00447820();
        FUN_004c5930(iVar13,iVar14,iVar3,(byte *)pcVar15);
        local_48 = local_48 + 0x10;
      }
      piVar9 = piVar9 + 0xa5;
    } while ((int)piVar9 < 0x5d1bb4);
    break;
  case 2:
    uVar16 = 0x590e2c00000000;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,(int)uVar16,(byte *)((ulonglong)uVar16 >> 0x20));
    iVar3 = DAT_005d1924;
    if (DAT_005d3310 < 1) break;
    puVar2 = FUN_0040ebe0();
    if ((iVar3 < 0) || (iVar13 = (*(code *)**(undefined4 **)(puVar2 + 0x24))(), iVar13 <= iVar3)) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
    }
    FUN_004a6980(iVar3,(byte *)s__s__d____Invalid_object_index____0058fd14);
    pcVar15 = s_Aggression____f_00590e44;
    iVar14 = 0x28;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    pcVar15 = s_Acceleration____f_00590e54;
    iVar14 = 0x38;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    pcVar15 = s_Risk____f_00590e68;
    iVar14 = 0x48;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    pcVar15 = s_FrontVisibilityRange____d_00590e74;
    iVar14 = 0x58;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    pcVar15 = s_RearVisibilityRange____d_00590e90;
    iVar14 = 0x68;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    pcVar15 = s_MaxCornerSpeed___f_00590eac;
    iVar14 = 0x78;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    pcVar15 = s_PatrolSpeed___f_00590ec0;
    iVar14 = 0x88;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    pcVar15 = s_MegaphoneFrequency___d_00590ed0;
    iVar14 = 0x98;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    pcVar15 = s_OvertakeBashFrequency___d_00590ee8;
    iVar14 = 0xa8;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    pcVar15 = s_StayInLaneDistance___d_00590f04;
    iVar14 = 0xb8;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    pcVar15 = s_HandBrakeSlowDownBias____f_00590f1c;
    iVar14 = 200;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    pcVar15 = s_Cheat____d_00590f38;
    iVar14 = 0xd8;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    pcVar15 = s_CheatThresholdDistance____d_00590f44;
    iVar14 = 0xe8;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    pcVar15 = s_CheatReplaceDistance____d_00590f60;
    iVar3 = 0xf8;
    goto LAB_0040bc94;
  case 3:
    uVar16 = 0x590f7c00000000;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,(int)uVar16,(byte *)((ulonglong)uVar16 >> 0x20));
    if (0 < DAT_005d3310) {
      ppuVar4 = FUN_0040dcf0(DAT_005d1920);
      uVar7 = 0xffffffff;
      ppuVar10 = ppuVar4;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *(char *)ppuVar10;
        ppuVar10 = (undefined **)((int)ppuVar10 + 1);
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      uVar5 = FUN_00402a00(local_44,uVar7,'\x01');
      if ((char)uVar5 != '\0') {
        puVar11 = local_40;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *ppuVar4;
          ppuVar4 = ppuVar4 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)ppuVar4;
          ppuVar4 = (undefined **)((int)ppuVar4 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        *(undefined1 *)((int)local_40 + uVar7) = 0;
        local_3c = uVar7;
      }
      pvVar6 = (void *)FUN_0040dbb0(DAT_005d1854);
      FUN_004093c0(local_34,pvVar6,0,0xffffffff);
      pcVar15 = s___d___s____s_00590f94;
      iVar14 = 0x28;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      pcVar15 = s_chunk____d_00590fa4;
      iVar14 = 0x48;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      pcVar15 = s_waypoint____d_00590fb0;
      iVar14 = 0x58;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      pcVar15 = s_side____d_00590fc0;
      iVar14 = 0x68;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      pcVar15 = s_current_lane____d_00590fcc;
      iVar14 = 0x78;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      pcVar15 = s_preferred_lane____d_00590fe0;
      iVar14 = 0x88;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      pcVar15 = s_num_lanes____d_00590ff4;
      iVar14 = 0x98;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    }
    break;
  case 4:
    uVar16 = 0x59100400000000;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,(int)uVar16,(byte *)((ulonglong)uVar16 >> 0x20));
    if (DAT_005d3310 < 1) break;
    ppuVar4 = FUN_0040dcf0(DAT_005d1920);
    uVar7 = 0xffffffff;
    ppuVar10 = ppuVar4;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *(char *)ppuVar10;
      ppuVar10 = (undefined **)((int)ppuVar10 + 1);
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    uVar5 = FUN_00402a00(local_44,uVar7,'\x01');
    if ((char)uVar5 != '\0') {
      puVar11 = local_40;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *ppuVar4;
        ppuVar4 = ppuVar4 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)ppuVar4;
        ppuVar4 = (undefined **)((int)ppuVar4 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      *(undefined1 *)((int)local_40 + uVar7) = 0;
      local_3c = uVar7;
    }
    pvVar6 = (void *)FUN_0040dbb0(DAT_005d1854);
    FUN_004093c0(local_34,pvVar6,0,0xffffffff);
    pcVar15 = s_State____s_00591028;
    iVar14 = 0x28;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    FUN_00402760(DAT_005d1aa4);
    pcVar15 = s_Stage____s_00591034;
    iVar14 = 0x38;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    pcVar15 = s_Damage____d_00591040;
    iVar14 = 0x58;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    pcVar15 = s_Current_speed____f_0059104c;
    iVar14 = 0x68;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    __ftol();
    pcVar15 = s_Current_speed__km_h____d_00591060;
    iVar14 = 0x78;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    pcVar15 = s_Curve_speed____f_0059107c;
    iVar14 = 0x88;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    pcVar15 = s_Speed_limit____f_00591090;
    iVar14 = 0x98;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    iVar3 = 0xb8;
    if (DAT_005d1a4c != -1) {
      FUN_00402730(&DAT_005d1948 + DAT_005d1a4c * 4);
      pcVar15 = s_position_w_r_t__target____s_005910a4;
      iVar14 = 0xb8;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      pcVar15 = s_target_chunk_distance____d_005910c0;
      iVar14 = 200;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      pcVar15 = s_target_distance____f_005910dc;
      iVar14 = 0xd8;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      pcVar15 = s_target_z_distance____f_005910f4;
      iVar14 = 0xe8;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      pcVar15 = s_attack_distance____f_0059110c;
      iVar14 = 0xf8;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      pcVar15 = s_target_speed____f_00591124;
      iVar14 = 0x108;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      __ftol();
      pcVar15 = s_TargetInactiveTimer____d_00591138;
      iVar14 = 0x118;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      iVar3 = 0x138;
    }
    pcVar15 = s_Steer____f_00591154;
    iVar12 = 0;
    iVar13 = iVar3;
    iVar14 = FUN_00447820();
    FUN_004c5930(iVar14,iVar12,iVar13,(byte *)pcVar15);
    iVar14 = iVar3 + 0x10;
    __ftol();
    pcVar15 = s_Gas____d_00591160;
    iVar12 = 0;
    iVar13 = FUN_00447820();
    FUN_004c5930(iVar13,iVar12,iVar14,(byte *)pcVar15);
    iVar14 = iVar3 + 0x20;
    __ftol();
    pcVar15 = s_Brake____d_0059116c;
    iVar12 = 0;
    iVar13 = FUN_00447820();
    FUN_004c5930(iVar13,iVar12,iVar14,(byte *)pcVar15);
    iVar14 = iVar3 + 0x30;
    pcVar15 = s_Handbrake____s_00591188;
    iVar12 = 0;
    iVar13 = FUN_00447820();
    FUN_004c5930(iVar13,iVar12,iVar14,(byte *)pcVar15);
    iVar3 = iVar3 + 0x40;
    pcVar15 = s_Turbo____s_005911a8;
LAB_0040bc94:
    iVar14 = 0;
    iVar13 = FUN_00447820();
    FUN_004c5930(iVar13,iVar14,iVar3,(byte *)pcVar15);
    break;
  case 5:
    uVar16 = 0x5911b400000000;
    iVar13 = 0;
    iVar3 = FUN_00447820();
    FUN_004c5930(iVar3,iVar13,(int)uVar16,(byte *)((ulonglong)uVar16 >> 0x20));
    if (0 < DAT_005d3310) {
      ppuVar4 = FUN_0040dcf0(DAT_005d1920);
      uVar7 = 0xffffffff;
      ppuVar10 = ppuVar4;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *(char *)ppuVar10;
        ppuVar10 = (undefined **)((int)ppuVar10 + 1);
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      uVar5 = FUN_00402a00(local_44,uVar7,'\x01');
      if ((char)uVar5 != '\0') {
        puVar11 = local_40;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *ppuVar4;
          ppuVar4 = ppuVar4 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)ppuVar4;
          ppuVar4 = (undefined **)((int)ppuVar4 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        *(undefined1 *)((int)local_40 + uVar7) = 0;
        local_3c = uVar7;
      }
      pvVar6 = (void *)FUN_0040dbb0(DAT_005d1854);
      FUN_004093c0(local_34,pvVar6,0,0xffffffff);
      pcVar15 = s_State____s_005911cc;
      iVar14 = 0x28;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      switch(DAT_005d1854) {
      case 0x21:
      case 0x22:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
        FUN_00402760(DAT_005d1aa4);
        pcVar15 = s_Stage____s_005911d8;
        iVar14 = 0x38;
        iVar13 = 0;
        iVar3 = FUN_00447820();
        FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
        break;
      default:
        pcVar15 = s_Stage_____005911e4;
        iVar14 = 0x38;
        iVar13 = 0;
        iVar3 = FUN_00447820();
        FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      }
      pcVar15 = s_Steer____f_005911f0;
      iVar14 = 0x58;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      pcVar15 = s_Gas____f_005911fc;
      iVar14 = 0x68;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      pcVar15 = s_Brake____f_00591208;
      iVar14 = 0x78;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      pcVar15 = s_Handbrake____s_00591224;
      iVar14 = 0x88;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      pcVar15 = s_Turbo____s_00591244;
      iVar14 = 0x98;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      pcVar15 = s_Current_speed____f_00591250;
      iVar14 = 0xb8;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      __ftol();
      pcVar15 = s_Current_speed__km_h____d_00591264;
      iVar14 = 200;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      pcVar15 = s_Target_speed____f_00591280;
      iVar14 = 0xe8;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      __ftol();
      pcVar15 = s_Target_speed__km_h____d_00591294;
      iVar14 = 0xf8;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
      pcVar15 = s_Curve_angle____f_005912ac;
      iVar14 = 0x118;
      iVar13 = 0;
      iVar3 = FUN_00447820();
      FUN_004c5930(iVar3,iVar13,iVar14,(byte *)pcVar15);
    }
  }
  if (local_20 != 0) {
    cVar1 = *(char *)(local_20 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(local_20 + -1));
    }
    else {
      *(char *)(local_20 + -1) = cVar1 + -1;
    }
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (local_30 != 0) {
    cVar1 = *(char *)(local_30 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(local_30 + -1));
    }
    else {
      *(char *)(local_30 + -1) = cVar1 + -1;
    }
  }
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  if (local_40 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_40 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)((int)local_40 + -1) = cVar1 + -1;
      ExceptionList = local_14;
      return;
    }
    FUN_0054b339((undefined1 *)((int)local_40 + -1));
  }
  ExceptionList = local_14;
  return;
}


