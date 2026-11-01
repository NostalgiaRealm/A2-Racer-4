
/* ==== load_etappe_info @ 0044acb0 ==== 
 * signature: undefined __stdcall load_etappe_info(void)
 * body: 0044acb0-0044ad15;0044ad19-0044ad30
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(load_etappe_info) %s(%d) : Invalid etappe %d']
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044ad16-0044ad18
 */

/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(load_etappe_info) %s(%d) : Invalid etappe %d'] */

void load_etappe_info(void)

{
  int iVar1;
  char *pcVar2;
  
  FUN_004c3fa0((byte *)s_set_game_etappe_005a08a0);
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_005a08b4);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  set_ini_filename(pcVar2);
  DAT_006fb898 = read_ini_value_setting(s_ETAPPE_005a08cc,s_ETAPPE_005a08c4);
  if ((-1 < DAT_006fb898) && (DAT_006fb898 <= DAT_006fa588)) {
    DAT_006fb8e8 = read_ini_value_setting(s_ETAPPE_005a0934,s_DIRECTION_005a0928);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__load_etappe_info___s__d____Inva_005a08f8);
}


