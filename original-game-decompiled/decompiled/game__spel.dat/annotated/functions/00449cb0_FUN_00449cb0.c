
/* ==== FUN_00449cb0 @ 00449cb0 ==== 
 * signature: undefined __stdcall FUN_00449cb0(void)
 * body: 00449cb0-00449cfc;00449d00-00449da7;00449dab-00449dde;00449de2-00449e1e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00449cfd-00449cff 00449da8-00449daa 00449ddf-00449de1
 */

void FUN_00449cb0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  CHAR local_10c [12];
  CHAR aCStack_100 [256];
  
  iVar3 = FUN_00448c90(&DAT_006fa558,(byte *)s_System_Settings_0059fb40);
  pcVar4 = *(char **)(iVar3 + 4);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  set_ini_filename(pcVar4);
  if ((DAT_006fb890 < 0) || (5 < DAT_006fb890)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Unknown_resolution__Reso_0059fb74);
  }
  iVar3 = 0;
  if (0 < DAT_006fa588) {
    pcVar4 = (char *)&DAT_006cbefc;
    do {
      FUN_005587a3(local_10c,&DAT_0059fba4);
      if ((DAT_006fb894 == 0) || (DAT_006fb890 == 1)) {
        pcVar9 = s_wait_hi_0059fb38;
      }
      else {
        pcVar9 = s_wait_lo_0059fb30;
      }
      read_ini_string_setting(pcVar9,local_10c,aCStack_100,199);
      iVar2 = DAT_006fa588;
      iVar5 = -1;
      pcVar9 = aCStack_100;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if (iVar5 == -2) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s___d__No_fname_found_for_PCX__E_0059fbcc);
      }
      uVar6 = 0xffffffff;
      pcVar9 = aCStack_100;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if (0xc < (int)(~uVar6 - 1)) {
        iVar3 = -1;
        pcVar4 = aCStack_100;
        goto code_r0x00449dc5;
      }
      uVar6 = 0xffffffff;
      pcVar9 = aCStack_100;
      do {
        pcVar8 = pcVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar8 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar8;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar9 = pcVar8 + -uVar6;
      pcVar8 = pcVar4;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar8 = pcVar8 + 4;
      }
      iVar3 = iVar3 + 1;
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar8 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
      }
      pcVar4 = pcVar4 + 0xd;
    } while (iVar3 < iVar2);
  }
  return;
  while( true ) {
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    if (cVar1 == '\0') break;
code_r0x00449dc5:
    if (iVar3 == 0) break;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s___d__Filename_too_long_in_ini_0059fc2c);
}


