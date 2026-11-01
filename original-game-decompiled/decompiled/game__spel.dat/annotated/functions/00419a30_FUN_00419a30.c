
/* ==== FUN_00419a30 @ 00419a30 ==== 
 * signature: undefined __stdcall FUN_00419a30(void)
 * body: 00419a30-00419d03;00419d07-00419df4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00419d04-00419d06
 */

void FUN_00419a30(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  LPCSTR pCVar5;
  LPCSTR pCVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *puVar11;
  bool bVar12;
  int local_188;
  undefined1 local_184 [4];
  LPCSTR local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined1 local_174 [4];
  LPCSTR local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  int local_164;
  CHAR local_160 [4];
  undefined1 local_15c [4];
  int local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 local_14c [4];
  LPCSTR local_148;
  undefined1 local_13c [16];
  char local_12c [32];
  byte local_10c [256];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569bc2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_14c,'\0');
  local_4 = 0;
  FUN_004028f0(local_184,'\0');
  local_4._0_1_ = 1;
  FUN_004028f0(local_174,'\0');
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004489a0(&DAT_006fa558,(byte *)s_OPPONENT_INI_00593d00,(byte *)s_AI_Racer_Settings_00593cec);
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_AI_Racer_Settings_00593d10);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  set_ini_filename(pcVar3);
  local_188 = 0;
  if (0 < DAT_005d2ab0) {
    do {
      iVar2 = 0;
      FUN_005587a3(local_160,&DAT_00593d24);
      puVar4 = FUN_0049df90(local_15c,PTR_s_Racer__d_Level__d_005937c4);
      local_4._0_1_ = 3;
      FUN_004093c0(local_14c,puVar4,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004028f0(local_15c,'\x01');
      pCVar5 = local_148;
      if (local_148 == (LPCSTR)0x0) {
        pCVar5 = "";
      }
      read_ini_string_setting(pCVar5,local_160,(LPSTR)local_10c,0xff);
      local_164 = get_ini_arguments_online(local_10c,(uint *)0x0);
      if (0 < local_164) {
        iVar8 = 1;
        do {
          FUN_004c3f10(iVar2,local_12c,0x1f);
          iVar7 = 10;
          bVar12 = true;
          pcVar3 = local_12c;
          pcVar10 = s_TARGETPOS_00593d28;
          do {
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            bVar12 = *pcVar3 == *pcVar10;
            pcVar3 = pcVar3 + 1;
            pcVar10 = pcVar10 + 1;
          } while (bVar12);
          if (bVar12) {
            FUN_004199f0(local_188,iVar8);
            iVar2 = iVar2 + 10;
            iVar8 = iVar8 + 10;
          }
          else {
            FUN_004198b0(local_188,local_12c);
          }
          iVar2 = iVar2 + 1;
          iVar8 = iVar8 + 1;
        } while (iVar2 < local_164);
      }
      local_188 = local_188 + 1;
    } while (local_188 < DAT_005d2ab0);
  }
  iVar2 = 0;
  if (0 < DAT_005d2ab0) {
    piVar9 = &DAT_005d2bb0;
    do {
      puVar4 = FUN_0049df90(local_13c,PTR_s_Level__d_005937c8);
      local_4._0_1_ = 4;
      FUN_004093c0(local_184,puVar4,0,0xffffffff);
      local_4._0_1_ = 2;
      FUN_004028f0(local_13c,'\x01');
      iVar2 = iVar2 + 1;
      puVar4 = FUN_0049df90(local_15c,PTR_s_Distance_d_d_005937cc);
      local_4._0_1_ = 5;
      FUN_004093c0(local_174,puVar4,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,2);
      if (local_158 != 0) {
        cVar1 = *(char *)(local_158 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(local_158 + -1));
        }
        else {
          *(char *)(local_158 + -1) = cVar1 + -1;
        }
      }
      local_158 = 0;
      local_154 = 0;
      local_150 = 0;
      pCVar5 = local_170;
      if (local_170 == (LPCSTR)0x0) {
        pCVar5 = "";
      }
      pCVar6 = local_180;
      if (local_180 == (LPCSTR)0x0) {
        pCVar6 = "";
      }
      iVar8 = read_ini_value_setting(pCVar6,pCVar5);
      *piVar9 = iVar8;
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s___s___d_Could_not_find_maximum_d_00593da4);
      }
      piVar9 = piVar9 + 1;
    } while (iVar2 < DAT_005d2ab0);
  }
  puVar11 = &DAT_005d2cb0;
  for (iVar2 = 0x8c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar11 = 0xffffffff;
    puVar11 = puVar11 + 1;
  }
  puVar11 = &DAT_005d2ee0;
  for (iVar2 = 0x8c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar11 = 0xffffffff;
    puVar11 = puVar11 + 1;
  }
  FUN_004c3fa0((byte *)s_Ready_loading_track_specific_AI_s_00593de0);
  if (local_170 != (LPCSTR)0x0) {
    cVar1 = local_170[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_170 + -1);
    }
    else {
      local_170[-1] = cVar1 + -1;
    }
  }
  local_170 = (LPCSTR)0x0;
  uStack_16c = 0;
  uStack_168 = 0;
  if (local_180 != (LPCSTR)0x0) {
    cVar1 = local_180[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_180 + -1);
    }
    else {
      local_180[-1] = cVar1 + -1;
    }
  }
  local_180 = (LPCSTR)0x0;
  uStack_17c = 0;
  uStack_178 = 0;
  if (local_148 != (LPCSTR)0x0) {
    cVar1 = local_148[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_148[-1] = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339(local_148 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}


