
/* ==== FUN_00458bc0 @ 00458bc0 ==== 
 * signature: undefined __stdcall FUN_00458bc0(void)
 * body: 00458bc0-00458c34;00458c3a-00458ca7;00458cab-00458d11;00458d15-00458d67
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00458c35-00458c39 00458ca8-00458caa 00458d12-00458d14
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00458bc0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  CHAR aCStack_154 [20];
  char local_140 [64];
  CHAR aCStack_100 [256];
  
  FUN_004489a0(&DAT_006fa558,(byte *)s_LANGUAGE_INI_005a4ec4,(byte *)s_Language_Settings_005a4eb0);
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_Language_Settings_005a4ed4);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  set_ini_filename(pcVar3);
  _DAT_006fd144 = read_ini_value_setting(s_SETTINGS_005a4ef4,s_language_005a4ee8);
  if (_DAT_006fd144 == 0) {
    pcVar3 = s_NEDERLANDS_005a4f00;
  }
  else if (_DAT_006fd144 == 1) {
    pcVar3 = s_ENGELS_005a4f0c;
  }
  else {
    if (_DAT_006fd144 != 2) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s___d__Illegal_language_set_in_l_005a4f40);
    }
    pcVar3 = s_DUITS_005a4f14;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar8 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar3 = pcVar8 + -uVar4;
  pcVar8 = local_140;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar8 = pcVar8 + 1;
  }
  iVar2 = read_ini_value_setting(s_SETTINGS_005a4f8c,s_text_count_005a4f80);
  if ((iVar2 < 0) || (200 < iVar2)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Illegal_value_for_nr__of_005a4fbc);
  }
  iVar7 = 0;
  DAT_006fd148 = iVar2;
  if (0 < iVar2) {
    do {
      wsprintfA(aCStack_154,&DAT_005a4ff4,iVar7);
      read_ini_string_setting(local_140,aCStack_154,aCStack_100,0xff);
      iVar6 = -1;
      pcVar3 = aCStack_100;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (iVar6 == -2) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s___d__Couldn_t_find_text_for_i_005a501c);
      }
      iVar6 = FUN_00458b90(iVar7);
      uVar4 = 0xffffffff;
      pcVar3 = aCStack_100;
      do {
        pcVar8 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar3 = pcVar8 + -uVar4;
      pcVar8 = &DAT_006fd14c + iVar6 * 0x100;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      iVar7 = iVar7 + 1;
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
    } while (iVar7 < iVar2);
  }
  _DAT_006fd140 = 1;
  return;
}


