
/* ==== FUN_0047d740 @ 0047d740 ==== 
 * signature: undefined __thiscall FUN_0047d740(void * this, void * param_1)
 * body: 0047d740-0047dddc
 */

void __thiscall FUN_0047d740(void *this,void *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  void *pvVar6;
  undefined4 uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  void *pvVar11;
  char *pcVar12;
  char *pcVar13;
  byte bVar14;
  undefined1 local_12d;
  int local_12c;
  uint local_128;
  uint local_124;
  void *local_120;
  undefined1 local_11c [4];
  char *local_118;
  undefined1 local_10c [4];
  char *local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc [16];
  void *local_ec;
  undefined1 local_e8 [4];
  char *local_e4;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined **local_a8 [3];
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056bd8c;
  local_c = ExceptionList;
  local_ec = (void *)((int)this + 0x9c);
  ExceptionList = &local_c;
  uVar2 = FUN_0047e340(local_ec,(int)param_1);
  if (uVar2 != 0) {
    uVar2 = *(uint *)((int)param_1 + 8);
    if (*(uint *)((int)this + 0x98) < uVar2) {
      uVar2 = *(uint *)((int)this + 0x98);
    }
    iVar10 = 0;
    local_124 = uVar2;
    iVar3 = FUN_004871d0((int)this);
    if (iVar3 == 0) {
      local_12c = 0;
    }
    else {
      if (iVar3 == 1) {
        local_12c = (int)(*(int *)((int)this + 0x98) - uVar2) / 2;
      }
      else {
        if (iVar3 != 2) {
          local_c8[0] = local_12d;
          FUN_004028f0(local_c8,'\0');
          uVar2 = 0xffffffff;
          pcVar12 = &DAT_005a9d60;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_c8,(undefined4 *)&DAT_005a9d60,~uVar2 - 1);
          local_4 = 0;
          puVar4 = FUN_004873b0(local_2c);
          local_4._0_1_ = 1;
          local_d8[0] = local_12d;
          FUN_004028f0(local_d8,'\0');
          uVar2 = 0xffffffff;
          pcVar12 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9d68;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_d8,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9d68,~uVar2 - 1
                      );
          local_4._0_1_ = 2;
          local_b8[0] = local_12d;
          FUN_004028f0(local_b8,'\0');
          uVar2 = 0xffffffff;
          pcVar12 = s_HeadUp_Display_exception_in__005a9d94;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_b8,(undefined4 *)s_HeadUp_Display_exception_in__005a9d94,~uVar2 - 1);
          local_4._0_1_ = 3;
          puVar5 = FUN_0047c9a0(local_1c,local_b8,(int)local_d8);
          local_4._0_1_ = 4;
          puVar5 = FUN_004796b0(local_6c,puVar5,&DAT_005a9d64);
          local_4._0_1_ = 5;
          puVar4 = FUN_0047c9a0(local_8c,puVar5,(int)puVar4);
          local_4._0_1_ = 6;
          puVar4 = FUN_0047c9a0(local_4c,puVar4,(int)local_c8);
          local_4._0_1_ = 7;
          puVar4 = FUN_004796b0(local_7c,puVar4,s_Unknown_alignment_in_string_005a9d40);
          local_4._0_1_ = 8;
          iVar3 = FUN_0047bc10((int)this);
          puVar4 = FUN_0047c9a0(local_5c,puVar4,iVar3);
          local_4._0_1_ = 9;
          puVar4 = FUN_004796b0(local_3c,puVar4,&DAT_005a9d3c);
          local_4._0_1_ = 10;
          FUN_00558826(local_a8);
          local_4._0_1_ = 0xb;
          FUN_00424980(local_9c,&local_12d);
          local_4._0_1_ = 0xc;
          local_a8[0] = &PTR_FUN_00576b14;
          FUN_004093c0(local_9c,puVar4,0,0xffffffff);
          local_4 = CONCAT31(local_4._1_3_,10);
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(local_a8,&DAT_0057f730);
        }
        local_12c = *(int *)((int)this + 0x98) - uVar2;
      }
      if (0 < local_12c) {
        do {
          iVar3 = FUN_00487200((int)this);
          local_fc[0] = local_12d;
          pvVar11 = *(void **)(*(int *)(*(int *)(iVar3 + 4) + 4) + iVar10 * 4);
          FUN_004028f0(local_fc,'\0');
          uVar2 = 0xffffffff;
          pcVar12 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9db4;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_fc,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9db4,~uVar2 - 1
                      );
          local_4 = 0xd;
          local_11c[0] = local_12d;
          FUN_004028f0(local_11c,'\0');
          uVar2 = 0xffffffff;
          pcVar12 = s_Null_character_in_string_005a9de0;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_11c,(undefined4 *)s_Null_character_in_string_005a9de0,~uVar2 - 1);
          local_4._0_1_ = 0xe;
          FUN_00487bc0((int)pvVar11,local_11c,(int)local_fc);
          local_4 = CONCAT31(local_4._1_3_,0xd);
          FUN_004028f0(local_11c,'\x01');
          local_4 = 0xffffffff;
          FUN_004028f0(local_fc,'\x01');
          bVar14 = 0x20;
          pvVar6 = (void *)FUN_004871c0((int)this);
          iVar3 = FUN_0047e4e0(pvVar6,bVar14);
          FUN_0047ce40(pvVar11,iVar3);
          iVar10 = iVar10 + 1;
          uVar2 = local_124;
        } while (iVar10 < local_12c);
      }
    }
    local_128 = local_12c + uVar2;
    if (iVar10 < (int)local_128) {
      do {
        iVar3 = FUN_00487200((int)this);
        pvVar11 = *(void **)(*(int *)(*(int *)(iVar3 + 4) + 4) + iVar10 * 4);
        local_11c[0] = local_12d;
        local_120 = pvVar11;
        FUN_004028f0(local_11c,'\0');
        uVar2 = 0xffffffff;
        pcVar12 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9dfc;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        uVar2 = ~uVar2 - 1;
        local_124 = uVar2;
        uVar7 = FUN_00402a00(local_11c,uVar2,'\x01');
        if ((char)uVar7 != '\0') {
          pcVar12 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9dfc;
          pcVar13 = local_118;
          for (uVar9 = uVar2 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar9 = uVar2 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar13 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar13 = pcVar13 + 1;
          }
          FUN_004029e0(local_11c,uVar2);
          pvVar11 = local_120;
        }
        local_fc[0] = local_12d;
        local_4 = 0xf;
        FUN_004028f0(local_fc,'\0');
        uVar2 = 0xffffffff;
        pcVar12 = s_Null_character_in_string_005a9e28;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(local_fc,(undefined4 *)s_Null_character_in_string_005a9e28,~uVar2 - 1);
        local_4._0_1_ = 0x10;
        FUN_00487bc0((int)pvVar11,local_fc,(int)local_11c);
        local_4 = CONCAT31(local_4._1_3_,0xf);
        FUN_004028f0(local_fc,'\x01');
        local_4 = 0xffffffff;
        FUN_004028f0(local_11c,'\x01');
        if (*(int *)((int)param_1 + 4) == 0) {
          pbVar8 = &DAT_0057629c;
        }
        else {
          pbVar8 = (byte *)((*(int *)((int)param_1 + 4) - local_12c) + iVar10);
        }
        bVar14 = *pbVar8;
        pvVar6 = (void *)FUN_004871c0((int)this);
        iVar3 = FUN_0047e4e0(pvVar6,bVar14);
        FUN_0047ce40(pvVar11,iVar3);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)local_128);
    }
    if (iVar10 < *(int *)((int)this + 0x98)) {
      do {
        iVar3 = FUN_00487200((int)this);
        local_10c[0] = local_12d;
        local_120 = *(void **)(*(int *)(*(int *)(iVar3 + 4) + 4) + iVar10 * 4);
        FUN_004028f0(local_10c,'\0');
        uVar2 = 0xffffffff;
        pcVar12 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9e44;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        uVar2 = ~uVar2 - 1;
        local_128 = uVar2;
        uVar7 = FUN_00402a00(local_10c,uVar2,'\x01');
        if ((char)uVar7 != '\0') {
          pcVar12 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9e44;
          pcVar13 = local_108;
          for (uVar9 = uVar2 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar9 = uVar2 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar13 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar13 = pcVar13 + 1;
          }
          FUN_004029e0(local_10c,uVar2);
        }
        local_4 = 0x11;
        local_e8[0] = local_12d;
        FUN_004028f0(local_e8,'\0');
        uVar2 = 0xffffffff;
        pcVar12 = s_Null_character_in_string_005a9e70;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        uVar2 = ~uVar2 - 1;
        local_128 = uVar2;
        uVar7 = FUN_00402a00(local_e8,uVar2,'\x01');
        if ((char)uVar7 != '\0') {
          pcVar12 = s_Null_character_in_string_005a9e70;
          pcVar13 = local_e4;
          for (uVar9 = uVar2 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar9 = uVar2 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar13 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar13 = pcVar13 + 1;
          }
          FUN_004029e0(local_e8,uVar2);
        }
        pvVar11 = local_120;
        local_4._0_1_ = 0x12;
        FUN_00487bc0((int)local_120,local_e8,(int)local_10c);
        local_4 = CONCAT31(local_4._1_3_,0x11);
        FUN_004028f0(local_e8,'\x01');
        local_4 = 0xffffffff;
        if (local_108 != (char *)0x0) {
          cVar1 = local_108[-1];
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339(local_108 + -1);
          }
          else {
            local_108[-1] = cVar1 + -1;
          }
        }
        bVar14 = 0x20;
        local_108 = (char *)0x0;
        local_104 = 0;
        local_100 = 0;
        pvVar6 = (void *)FUN_004871c0((int)this);
        iVar3 = FUN_0047e4e0(pvVar6,bVar14);
        FUN_0047ce40(pvVar11,iVar3);
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)((int)this + 0x98));
    }
    FUN_004093c0(local_ec,param_1,0,0xffffffff);
  }
  ExceptionList = local_c;
  return;
}


