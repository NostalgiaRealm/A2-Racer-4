
/* ==== FUN_004079a0 @ 004079a0 ==== 
 * signature: undefined __stdcall FUN_004079a0(void)
 * body: 004079a0-00407d1e
 */

void FUN_004079a0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  LPCSTR pCVar6;
  LPCSTR pCVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  int *local_16c;
  undefined4 *local_168;
  undefined1 local_164 [4];
  LPCSTR local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_154 [4];
  int local_150;
  undefined4 local_14c;
  undefined4 local_148;
  CHAR local_144 [8];
  undefined1 local_13c [4];
  LPCSTR local_138;
  byte local_12c [32];
  byte local_10c [256];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005695da;
  local_c = ExceptionList;
  iVar8 = 0;
  ExceptionList = &local_c;
  FUN_004028f0(local_13c,'\0');
  local_4 = 0;
  FUN_004028f0(local_164,'\0');
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004489a0(&DAT_006fa558,(byte *)s_COPS_INI_005906ac,(byte *)s_AI_Cop_Settings_0059069c);
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_AI_Cop_Settings_005906b8);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004c3b60(pcVar3);
  DAT_005caf6c = FUN_004c3cd0(s_Cop_Tactics_005906d0,s_COUNT_005906c8);
  if (0 < DAT_005caf6c) {
    local_16c = &DAT_005c9b14;
    do {
      FUN_005587a3(local_144,&DAT_005906dc);
      FUN_004c3d10(s_Cop_Tactics_005906e0,local_144,(LPSTR)local_10c,0xff);
      iVar2 = FUN_004c3d60(local_10c,(uint *)0x0);
      iVar10 = 0;
      piVar11 = local_16c;
      if (0 < iVar2) {
        do {
          FUN_004c3f10(iVar10,(char *)local_12c,0x1f);
          uVar4 = FUN_004074c0(local_12c);
          piVar11[-1] = uVar4;
          FUN_004c3ec0(iVar10 + 1);
          lVar12 = __ftol();
          *piVar11 = (int)lVar12;
          piVar11 = piVar11 + 2;
          iVar10 = iVar10 + 2;
        } while (iVar10 < iVar2);
      }
      iVar8 = iVar8 + 1;
      local_16c = local_16c + 0x28;
    } while (iVar8 < DAT_005caf6c);
  }
  puVar5 = FUN_0049df90(local_154,PTR_s_Track__d_Tactics_0058fd5c);
  local_4._0_1_ = 2;
  FUN_004093c0(local_13c,puVar5,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004028f0(local_154,'\x01');
  pCVar6 = local_138;
  if (local_138 == (LPCSTR)0x0) {
    pCVar6 = "";
  }
  FUN_004c3d10(pCVar6,PTR_s_Default_0058fd58,(LPSTR)local_10c,0xff);
  iVar2 = FUN_004c3d60(local_10c,(uint *)0x0);
  iVar8 = 0;
  DAT_005caf70 = iVar2;
  if (0 < iVar2) {
    puVar9 = &DAT_005cadd0;
    do {
      uVar4 = FUN_004c3ec0(iVar8);
      *puVar9 = uVar4;
      iVar8 = iVar8 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar8 < iVar2);
  }
  iVar2 = 0;
  if (0 < DAT_0058fd68) {
    local_16c = &DAT_005caf44;
    local_168 = &DAT_005c9980;
    do {
      puVar5 = FUN_0049df90(local_154,PTR_s_Cop_d_0058fd60);
      iVar8 = 0;
      local_4._0_1_ = 3;
      FUN_004093c0(local_164,puVar5,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (local_150 != 0) {
        cVar1 = *(char *)(local_150 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((char *)(local_150 + -1));
        }
        else {
          *(char *)(local_150 + -1) = cVar1 + -1;
        }
      }
      local_150 = 0;
      local_14c = 0;
      local_148 = 0;
      pCVar6 = local_160;
      if (local_160 == (LPCSTR)0x0) {
        pCVar6 = "";
      }
      pCVar7 = local_138;
      if (local_138 == (LPCSTR)0x0) {
        pCVar7 = "";
      }
      FUN_004c3d10(pCVar7,pCVar6,(LPSTR)local_10c,0xff);
      iVar10 = FUN_004c3d60(local_10c,(uint *)0x0);
      *local_16c = iVar10;
      puVar9 = local_168;
      if (0 < iVar10) {
        do {
          uVar4 = FUN_004c3ec0(iVar8);
          *puVar9 = uVar4;
          iVar8 = iVar8 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar8 < iVar10);
      }
      iVar2 = iVar2 + 1;
      local_16c = local_16c + 1;
      local_168 = local_168 + 10;
    } while (iVar2 < DAT_0058fd68);
  }
  if (local_160 != (LPCSTR)0x0) {
    cVar1 = local_160[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_160 + -1);
    }
    else {
      local_160[-1] = cVar1 + -1;
    }
  }
  local_160 = (LPCSTR)0x0;
  local_15c = 0;
  local_158 = 0;
  if (local_138 != (LPCSTR)0x0) {
    cVar1 = local_138[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_138[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_138 + -1);
  }
  ExceptionList = local_c;
  return;
}


