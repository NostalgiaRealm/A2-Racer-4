
/* ==== FUN_00413a10 @ 00413a10 ==== 
 * signature: undefined __stdcall FUN_00413a10(void)
 * body: 00413a10-00413bbf;00413bc3-00413c4b;00413c4f-00413ce9
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00413bc0-00413bc2 00413c4c-00413c4e
 */

void FUN_00413a10(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  LPCSTR pCVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  int *piVar12;
  int local_158;
  undefined1 local_154 [4];
  LPCSTR local_150;
  CHAR local_144 [8];
  char local_13c [32];
  undefined1 local_11c [16];
  byte local_10c [256];
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569ac6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_154,'\0');
  local_4 = 0;
  FUN_004489a0(&DAT_006fa558,(byte *)s_TRAFFIC_INI_00592bf0,(byte *)s_AI_Traffic_Settings_00592bdc);
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_AI_Traffic_Settings_00592bfc);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004c3b60(pcVar3);
  puVar4 = FUN_0049df90(local_11c,PTR_s_Traffic_Track__d_00592934);
  local_4._0_1_ = 1;
  FUN_004093c0(local_154,puVar4,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(local_11c,'\x01');
  pCVar5 = local_150;
  if (local_150 == (LPCSTR)0x0) {
    pCVar5 = "";
  }
  DAT_005d2aac = FUN_004c3cd0(pCVar5,s_RANDOM_00592c10);
  pCVar5 = local_150;
  if (local_150 == (LPCSTR)0x0) {
    pCVar5 = "";
  }
  DAT_005d2aa8 = FUN_004c3cd0(pCVar5,s_COUNT_00592c18);
  pCVar5 = local_150;
  if (local_150 == (LPCSTR)0x0) {
    pCVar5 = "";
  }
  DAT_005962b4 = FUN_004c3cd0(pCVar5,s_MAX_TRAFFIC_RIGHT_00592c20);
  pCVar5 = local_150;
  if (local_150 == (LPCSTR)0x0) {
    pCVar5 = "";
  }
  DAT_005962b8 = FUN_004c3cd0(pCVar5,s_MAX_TRAFFIC_LEFT_00592c34);
  local_158 = 0;
  if (0 < DAT_005d2aa8) {
    piVar8 = &DAT_005d2698;
    do {
      FUN_005587a3(local_144,&DAT_00592c48);
      pCVar5 = local_150;
      if (local_150 == (LPCSTR)0x0) {
        pCVar5 = "";
      }
      FUN_004c3d10(pCVar5,local_144,(LPSTR)local_10c,0xff);
      iVar2 = FUN_004c3d60(local_10c,(uint *)0x0);
      if (iVar2 < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s___s___d_Not_enough_parameters_us_00592c70);
      }
      iVar9 = 0;
      *piVar8 = 1;
      if (0 < iVar2 + -2) {
        do {
          FUN_004c3f10(iVar9,local_13c,0x1f);
          uVar6 = FUN_004138e0(local_13c);
          iVar9 = iVar9 + 1;
          *piVar8 = *piVar8 + uVar6;
        } while (iVar9 < iVar2 + -2);
      }
      FUN_004c3f10(iVar9,local_13c,0x1f);
      uVar6 = 0xffffffff;
      pcVar3 = local_13c;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (0x1f < ~uVar6 - 1) {
LAB_00413c28:
        iVar2 = -1;
        pcVar3 = local_13c;
        goto code_r0x00413c31;
      }
      iVar2 = -1;
      pcVar3 = local_13c;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (iVar2 == -2) goto LAB_00413c28;
      uVar6 = 0xffffffff;
      pcVar3 = local_13c;
      do {
        pcVar11 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar11;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      piVar10 = (int *)(pcVar11 + -uVar6);
      piVar12 = piVar8;
      for (uVar7 = uVar6 >> 2; piVar12 = piVar12 + 1, uVar7 != 0; uVar7 = uVar7 - 1) {
        *piVar12 = *piVar10;
        piVar10 = piVar10 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)piVar12 = (char)*piVar10;
        piVar10 = (int *)((int)piVar10 + 1);
        piVar12 = (int *)((int)piVar12 + 1);
      }
      cVar1 = FUN_004c3ec0(iVar9 + 1);
      iVar2 = DAT_005d2aa8;
      *(char *)(piVar8 + 9) = cVar1;
      local_158 = local_158 + 1;
      piVar8 = piVar8 + 10;
    } while (local_158 < iVar2);
  }
  if (local_150 != (LPCSTR)0x0) {
    cVar1 = local_150[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_150[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_150 + -1);
  }
  ExceptionList = local_c;
  return;
  while( true ) {
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    if (cVar1 == '\0') break;
code_r0x00413c31:
    if (iVar2 == 0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s___d__Incorrect_length_or_argu_00592cd0);
}


